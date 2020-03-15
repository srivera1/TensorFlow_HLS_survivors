// nn_model_linux_driver.c
// nn HW test user space driver
// sergio rivera 
// 2020/03/14 11:16:24 
//
//
// simple program to test the neural network HW from user space.
// It copies weights and biases to bram, executes the HW IP and
// get the results from the bram.
//

// $ rm nn_user_space_app ; gcc -Wall -o nn_user_space_app nn_model_linux_driver.c -lm; sudo ./nn_user_space_app
//
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <sys/time.h>
#include "nn_dataTypes.c"
#include "include/nn_parameters.h"
#include <string.h>
#include <stdio.h>

#define input_conf 0x018
#define input_bram 0  //  size: 8000
#define reshape_39_conf 0x020
#define reshape_39_bram 8000  //  size: 8000
#define conv1d_153_conf 0x028
#define conv1d_153_bram 16000  //  size: 11088
#define conv1d_153_weight_conf 0x090
#define conv1d_153_weight_bram 27088  //  size: 700
#define conv1d_153_bias_conf 0x098
#define conv1d_153_bias_bram 27788  //  size: 28
#define max_pooling1d_153_conf 0x030
#define max_pooling1d_153_bram 27816  //  size: 3696
#define conv1d_154_conf 0x038
#define conv1d_154_bram 31512  //  size: 3696
#define conv1d_154_weight_conf 0x0a0
#define conv1d_154_weight_bram 35208  //  size: 196
#define conv1d_154_bias_conf 0x0a8
#define conv1d_154_bias_bram 35404  //  size: 28
#define max_pooling1d_154_conf 0x040
#define max_pooling1d_154_bram 35432  //  size: 1848
#define conv1d_155_conf 0x048
#define conv1d_155_bram 37280  //  size: 1260
#define conv1d_155_weight_conf 0x0b0
#define conv1d_155_weight_bram 38540  //  size: 560
#define conv1d_155_bias_conf 0x0b8
#define conv1d_155_bias_bram 39100  //  size: 20
#define max_pooling1d_155_conf 0x050
#define max_pooling1d_155_bram 39120  //  size: 420
#define conv1d_156_conf 0x058
#define conv1d_156_bram 39540  //  size: 476
#define conv1d_156_weight_conf 0x0c0
#define conv1d_156_weight_bram 40016  //  size: 700
#define conv1d_156_bias_conf 0x0c8
#define conv1d_156_bias_bram 40716  //  size: 28
#define max_pooling1d_156_conf 0x060
#define max_pooling1d_156_bram 40744  //  size: 224
#define batch_normalization_77_conf 0x068
#define batch_normalization_77_bram 40968  //  size: 224
#define batch_normalization_77_weight_conf 0x0d0
#define batch_normalization_77_weight_bram 41192  //  size: 28
#define batch_normalization_77_bias_conf 0x0d8
#define batch_normalization_77_bias_bram 41220  //  size: 28
#define batch_normalization_77_gamma_conf 0x0e0
#define batch_normalization_77_gamma_bram 41248  //  size: 28
#define batch_normalization_77_beta_conf 0x0e8
#define batch_normalization_77_beta_bram 41276  //  size: 28
#define flatten_39_conf 0x070
#define flatten_39_bram 41304  //  size: 224
#define dense_77_conf 0x078
#define dense_77_bram 41528  //  size: 172
#define dense_77_weight_conf 0x0f0
#define dense_77_weight_bram 41700  //  size: 9632
#define dense_77_bias_conf 0x0f8
#define dense_77_bias_bram 51332  //  size: 172
#define batch_normalization_78_conf 0x080
#define batch_normalization_78_bram 51504  //  size: 172
#define batch_normalization_78_weight_conf 0x100
#define batch_normalization_78_weight_bram 51676  //  size: 172
#define batch_normalization_78_bias_conf 0x108
#define batch_normalization_78_bias_bram 51848  //  size: 172
#define batch_normalization_78_gamma_conf 0x110
#define batch_normalization_78_gamma_bram 52020  //  size: 172
#define batch_normalization_78_beta_conf 0x118
#define batch_normalization_78_beta_bram 52192  //  size: 172
#define dense_78_conf 0x088
#define dense_78_bram 52364  //  size: 92
#define dense_78_weight_conf 0x120
#define dense_78_weight_bram 52456  //  size: 3956
#define dense_78_bias_conf 0x128
#define dense_78_bias_bram 56412  //  size: 92


int main() {

	unsigned bram_from_PL  = 0x80000000;
	unsigned bram_from_PS  = bram_from_PL;
	unsigned nn_model_0    = 0x40000000;

	input Input;
	reshape_39 Reshape_39;
	conv1d_153 Conv1d_153;
	max_pooling1d_153 Max_pooling1d_153;
	conv1d_154 Conv1d_154;
	max_pooling1d_154 Max_pooling1d_154;
	conv1d_155 Conv1d_155;
	max_pooling1d_155 Max_pooling1d_155;
	conv1d_156 Conv1d_156;
	max_pooling1d_156 Max_pooling1d_156;
	batch_normalization_77 Batch_normalization_77;
	flatten_39 Flatten_39;
	dense_77 Dense_77;
	batch_normalization_78 Batch_normalization_78;
	dense_78 Dense_78;
	conv1d_153_weight Conv1d_153_weight;
	conv1d_153_bias Conv1d_153_bias;
	conv1d_154_weight Conv1d_154_weight;
	conv1d_154_bias Conv1d_154_bias;
	conv1d_155_weight Conv1d_155_weight;
	conv1d_155_bias Conv1d_155_bias;
	conv1d_156_weight Conv1d_156_weight;
	conv1d_156_bias Conv1d_156_bias;
	batch_normalization_77_weight Batch_normalization_77_weight;
	batch_normalization_77_bias Batch_normalization_77_bias;
	batch_normalization_77_gamma Batch_normalization_77_gamma;
	batch_normalization_77_beta Batch_normalization_77_beta;
	dense_77_weight Dense_77_weight;
	dense_77_bias Dense_77_bias;
	batch_normalization_78_weight Batch_normalization_78_weight;
	batch_normalization_78_bias Batch_normalization_78_bias;
	batch_normalization_78_gamma Batch_normalization_78_gamma;
	batch_normalization_78_beta Batch_normalization_78_beta;
	dense_78_weight Dense_78_weight;
	dense_78_bias Dense_78_bias;
	
	struct timeval tv1, tv2;
	struct timezone tz;
	int fd;
	unsigned page_addr, page_offset;
	void *ptr;
	unsigned page_size = sysconf(_SC_PAGESIZE);
	/* Open /dev/mem file */
	fd = open("/dev/mem", O_RDWR);
	if (fd < 1) {
		return -1;
	}

	gettimeofday(&tv1, &tz);
	page_size=1048576; // large enough
	page_addr = ((bram_from_PS) & (~(page_size - 1)));
	page_offset = (bram_from_PS) - page_addr;
	ptr = mmap(NULL, page_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, page_addr);

	memcpy((void *)((unsigned *) (ptr + page_offset + input_bram)), input_p, sizeof(input));
	memcpy((void *)((unsigned *) (ptr + page_offset + conv1d_153_weight_bram)), conv1d_153_weight_p, sizeof(conv1d_153_weight));
	memcpy((void *)((unsigned *) (ptr + page_offset + conv1d_153_bias_bram)), conv1d_153_bias_p, sizeof(conv1d_153_bias));
	memcpy((void *)((unsigned *) (ptr + page_offset + conv1d_154_weight_bram)), conv1d_154_weight_p, sizeof(conv1d_154_weight));
	memcpy((void *)((unsigned *) (ptr + page_offset + conv1d_154_bias_bram)), conv1d_154_bias_p, sizeof(conv1d_154_bias));
	memcpy((void *)((unsigned *) (ptr + page_offset + conv1d_155_weight_bram)), conv1d_155_weight_p, sizeof(conv1d_155_weight));
	memcpy((void *)((unsigned *) (ptr + page_offset + conv1d_155_bias_bram)), conv1d_155_bias_p, sizeof(conv1d_155_bias));
	memcpy((void *)((unsigned *) (ptr + page_offset + conv1d_156_weight_bram)), conv1d_156_weight_p, sizeof(conv1d_156_weight));
	memcpy((void *)((unsigned *) (ptr + page_offset + conv1d_156_bias_bram)), conv1d_156_bias_p, sizeof(conv1d_156_bias));
	memcpy((void *)((unsigned *) (ptr + page_offset + batch_normalization_77_weight_bram)), batch_normalization_77_weight_p, sizeof(batch_normalization_77_weight));
	memcpy((void *)((unsigned *) (ptr + page_offset + batch_normalization_77_bias_bram)), batch_normalization_77_bias_p, sizeof(batch_normalization_77_bias));
	memcpy((void *)((unsigned *) (ptr + page_offset + batch_normalization_77_gamma_bram)), batch_normalization_77_gamma_p, sizeof(batch_normalization_77_gamma));
	memcpy((void *)((unsigned *) (ptr + page_offset + batch_normalization_77_beta_bram)), batch_normalization_77_beta_p, sizeof(batch_normalization_77_beta));
	memcpy((void *)((unsigned *) (ptr + page_offset + dense_77_weight_bram)), dense_77_weight_p, sizeof(dense_77_weight));
	memcpy((void *)((unsigned *) (ptr + page_offset + dense_77_bias_bram)), dense_77_bias_p, sizeof(dense_77_bias));
	memcpy((void *)((unsigned *) (ptr + page_offset + batch_normalization_78_weight_bram)), batch_normalization_78_weight_p, sizeof(batch_normalization_78_weight));
	memcpy((void *)((unsigned *) (ptr + page_offset + batch_normalization_78_bias_bram)), batch_normalization_78_bias_p, sizeof(batch_normalization_78_bias));
	memcpy((void *)((unsigned *) (ptr + page_offset + batch_normalization_78_gamma_bram)), batch_normalization_78_gamma_p, sizeof(batch_normalization_78_gamma));
	memcpy((void *)((unsigned *) (ptr + page_offset + batch_normalization_78_beta_bram)), batch_normalization_78_beta_p, sizeof(batch_normalization_78_beta));
	memcpy((void *)((unsigned *) (ptr + page_offset + dense_78_weight_bram)), dense_78_weight_p, sizeof(dense_78_weight));
	memcpy((void *)((unsigned *) (ptr + page_offset + dense_78_bias_bram)), dense_78_bias_p, sizeof(dense_78_bias));

	page_addr = (nn_model_0 & (~(page_size - 1)));
	page_offset = nn_model_0 - page_addr;
	ptr = mmap(NULL, page_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, page_addr);

	*((unsigned *) (ptr + page_offset + input_conf)) = bram_from_PL + input_bram ;
	*((unsigned *) (ptr + page_offset + reshape_39_conf)) = bram_from_PL + reshape_39_bram ;
	*((unsigned *) (ptr + page_offset + conv1d_153_conf)) = bram_from_PL + conv1d_153_bram ;
	*((unsigned *) (ptr + page_offset + max_pooling1d_153_conf)) = bram_from_PL + max_pooling1d_153_bram ;
	*((unsigned *) (ptr + page_offset + conv1d_154_conf)) = bram_from_PL + conv1d_154_bram ;
	*((unsigned *) (ptr + page_offset + max_pooling1d_154_conf)) = bram_from_PL + max_pooling1d_154_bram ;
	*((unsigned *) (ptr + page_offset + conv1d_155_conf)) = bram_from_PL + conv1d_155_bram ;
	*((unsigned *) (ptr + page_offset + max_pooling1d_155_conf)) = bram_from_PL + max_pooling1d_155_bram ;
	*((unsigned *) (ptr + page_offset + conv1d_156_conf)) = bram_from_PL + conv1d_156_bram ;
	*((unsigned *) (ptr + page_offset + max_pooling1d_156_conf)) = bram_from_PL + max_pooling1d_156_bram ;
	*((unsigned *) (ptr + page_offset + batch_normalization_77_conf)) = bram_from_PL + batch_normalization_77_bram ;
	*((unsigned *) (ptr + page_offset + flatten_39_conf)) = bram_from_PL + flatten_39_bram ;
	*((unsigned *) (ptr + page_offset + dense_77_conf)) = bram_from_PL + dense_77_bram ;
	*((unsigned *) (ptr + page_offset + batch_normalization_78_conf)) = bram_from_PL + batch_normalization_78_bram ;
	*((unsigned *) (ptr + page_offset + dense_78_conf)) = bram_from_PL + dense_78_bram ;
	*((unsigned *) (ptr + page_offset + conv1d_153_weight_conf)) = bram_from_PL + conv1d_153_weight_bram ;
	*((unsigned *) (ptr + page_offset + conv1d_153_bias_conf)) = bram_from_PL + conv1d_153_bias_bram ;
	*((unsigned *) (ptr + page_offset + conv1d_154_weight_conf)) = bram_from_PL + conv1d_154_weight_bram ;
	*((unsigned *) (ptr + page_offset + conv1d_154_bias_conf)) = bram_from_PL + conv1d_154_bias_bram ;
	*((unsigned *) (ptr + page_offset + conv1d_155_weight_conf)) = bram_from_PL + conv1d_155_weight_bram ;
	*((unsigned *) (ptr + page_offset + conv1d_155_bias_conf)) = bram_from_PL + conv1d_155_bias_bram ;
	*((unsigned *) (ptr + page_offset + conv1d_156_weight_conf)) = bram_from_PL + conv1d_156_weight_bram ;
	*((unsigned *) (ptr + page_offset + conv1d_156_bias_conf)) = bram_from_PL + conv1d_156_bias_bram ;
	*((unsigned *) (ptr + page_offset + batch_normalization_77_weight_conf)) = bram_from_PL + batch_normalization_77_weight_bram ;
	*((unsigned *) (ptr + page_offset + batch_normalization_77_bias_conf)) = bram_from_PL + batch_normalization_77_bias_bram ;
	*((unsigned *) (ptr + page_offset + batch_normalization_77_gamma_conf)) = bram_from_PL + batch_normalization_77_gamma_bram ;
	*((unsigned *) (ptr + page_offset + batch_normalization_77_beta_conf)) = bram_from_PL + batch_normalization_77_beta_bram ;
	*((unsigned *) (ptr + page_offset + dense_77_weight_conf)) = bram_from_PL + dense_77_weight_bram ;
	*((unsigned *) (ptr + page_offset + dense_77_bias_conf)) = bram_from_PL + dense_77_bias_bram ;
	*((unsigned *) (ptr + page_offset + batch_normalization_78_weight_conf)) = bram_from_PL + batch_normalization_78_weight_bram ;
	*((unsigned *) (ptr + page_offset + batch_normalization_78_bias_conf)) = bram_from_PL + batch_normalization_78_bias_bram ;
	*((unsigned *) (ptr + page_offset + batch_normalization_78_gamma_conf)) = bram_from_PL + batch_normalization_78_gamma_bram ;
	*((unsigned *) (ptr + page_offset + batch_normalization_78_beta_conf)) = bram_from_PL + batch_normalization_78_beta_bram ;
	*((unsigned *) (ptr + page_offset + dense_78_weight_conf)) = bram_from_PL + dense_78_weight_bram ;
	*((unsigned *) (ptr + page_offset + dense_78_bias_conf)) = bram_from_PL + dense_78_bias_bram ;

	page_addr = (nn_model_0 & (~(page_size - 1)));
	page_offset = nn_model_0 - page_addr;
	ptr = mmap(NULL, page_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, page_addr);

	gettimeofday(&tv1, &tz);

	for(int i =0;i<1; i++) {		// ip execution
		page_addr = (nn_model_0 & (~(page_size - 1)));
		page_offset = nn_model_0 - page_addr;
		ptr = mmap(NULL, page_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, page_addr);
		*((unsigned *) (ptr + page_offset)) = 0x1;
		// (pooling)
		while (*((unsigned *) (ptr + page_offset)) != 0x4) {
			;
		}
	}

	gettimeofday(&tv2, &tz);
	printf("tv2.tv_sec-tv1.tv_sec: %ld, tv2.tv_usec-tv1.tv_usec: %ld \n", (tv2.tv_sec-tv1.tv_sec), (tv2.tv_usec-tv1.tv_usec));

	page_addr = ((bram_from_PS) & (~(page_size - 1)));
	page_offset = (bram_from_PS) - page_addr;
	ptr = mmap(NULL, page_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, page_addr);

	memcpy(Batch_normalization_78.batch_normalization_78, (void *)((unsigned *) (ptr + page_offset + batch_normalization_78_bram)), sizeof(batch_normalization_78));
	memcpy(Dense_78.dense_78, (void *)((unsigned *) (ptr + page_offset + dense_78_bram)), sizeof(dense_78));

// layer 14

  printf("batch_normalization_78 test: ");
  for(i0 = 0; i0<1 ; i0++) {
    for(i1 = 0; i1<43 ; i1++) {
      float tmp = Batch_normalization_78.batch_normalization_78[i0][i1]-batch_normalization_78_p[i0][i1];
      if((tmp)*(tmp)>0.00001) {
        printf("failed at: \n");
        printf("\n[%d][%d] calc: %f good: %f \n", i0, i1, Batch_normalization_78.batch_normalization_78[i0][i1], batch_normalization_78_p[i0][i1]);
        return -1;
      }
    }
  }
  printf("ok \n");

// layer 15

  printf("dense_78 test: ");
  for(i0 = 0; i0<1 ; i0++) {
    for(i1 = 0; i1<23 ; i1++) {
      float tmp = Dense_78.dense_78[i0][i1]-dense_78_p[i0][i1];
      if((tmp)*(tmp)>0.00001) {
        printf("failed at: \n");
        printf("\n[%d][%d] calc: %f good: %f \n", i0, i1, Dense_78.dense_78[i0][i1], dense_78_p[i0][i1]);
        return -1;
      }
    }
  }
  printf("ok \n");


}
