// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// control
// 0x000 : Control signals
//         bit 0  - ap_start (Read/Write/COH)
//         bit 1  - ap_done (Read/COR)
//         bit 2  - ap_idle (Read)
//         bit 3  - ap_ready (Read)
//         bit 7  - auto_restart (Read/Write)
//         others - reserved
// 0x004 : Global Interrupt Enable Register
//         bit 0  - Global Interrupt Enable (Read/Write)
//         others - reserved
// 0x008 : IP Interrupt Enable Register (Read/Write)
//         bit 0  - Channel 0 (ap_done)
//         bit 1  - Channel 1 (ap_ready)
//         others - reserved
// 0x00c : IP Interrupt Status Register (Read/TOW)
//         bit 0  - Channel 0 (ap_done)
//         bit 1  - Channel 1 (ap_ready)
//         others - reserved
// 0x010 : Data signal of ap_return
//         bit 31~0 - ap_return[31:0] (Read)
// 0x018 : Data signal of Input1_input1
//         bit 31~0 - Input1_input1[31:0] (Read/Write)
// 0x01c : reserved
// 0x020 : Data signal of Input2_input2
//         bit 31~0 - Input2_input2[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Conv2d_2959_conv2d_2959
//         bit 31~0 - Conv2d_2959_conv2d_2959[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2962_conv2d_2962
//         bit 31~0 - Conv2d_2962_conv2d_2962[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2496_max_pooling2d_2496
//         bit 31~0 - Max_pooling2d_2496_max_pooling2d_2496[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2498_max_pooling2d_2498
//         bit 31~0 - Max_pooling2d_2498_max_pooling2d_2498[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2389_dense_2389
//         bit 31~0 - Dense_2389_dense_2389[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2391_dense_2391
//         bit 31~0 - Dense_2391_dense_2391[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_2960_conv2d_2960
//         bit 31~0 - Conv2d_2960_conv2d_2960[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_2963_conv2d_2963
//         bit 31~0 - Conv2d_2963_conv2d_2963[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_2497_max_pooling2d_2497
//         bit 31~0 - Max_pooling2d_2497_max_pooling2d_2497[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_2499_max_pooling2d_2499
//         bit 31~0 - Max_pooling2d_2499_max_pooling2d_2499[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_2390_dense_2390
//         bit 31~0 - Dense_2390_dense_2390[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_2392_dense_2392
//         bit 31~0 - Dense_2392_dense_2392[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_2961_conv2d_2961
//         bit 31~0 - Conv2d_2961_conv2d_2961[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_2964_conv2d_2964
//         bit 31~0 - Conv2d_2964_conv2d_2964[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Concatenate_524_concatenate_524
//         bit 31~0 - Concatenate_524_concatenate_524[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_2965_conv2d_2965
//         bit 31~0 - Conv2d_2965_conv2d_2965[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_2500_max_pooling2d_2500
//         bit 31~0 - Max_pooling2d_2500_max_pooling2d_2500[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_2393_dense_2393
//         bit 31~0 - Dense_2393_dense_2393[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_2394_dense_2394
//         bit 31~0 - Dense_2394_dense_2394[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_2395_dense_2395
//         bit 31~0 - Dense_2395_dense_2395[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_2396_dense_2396
//         bit 31~0 - Dense_2396_dense_2396[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Flatten_265_flatten_265
//         bit 31~0 - Flatten_265_flatten_265[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_2397_dense_2397
//         bit 31~0 - Dense_2397_dense_2397[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_2398_dense_2398
//         bit 31~0 - Dense_2398_dense_2398[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_2959_weight_conv2d_2959_weight
//         bit 31~0 - Conv2d_2959_weight_conv2d_2959_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_2959_bias_conv2d_2959_bias
//         bit 31~0 - Conv2d_2959_bias_conv2d_2959_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_2962_weight_conv2d_2962_weight
//         bit 31~0 - Conv2d_2962_weight_conv2d_2962_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_2962_bias_conv2d_2962_bias
//         bit 31~0 - Conv2d_2962_bias_conv2d_2962_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_2389_weight_dense_2389_weight
//         bit 31~0 - Dense_2389_weight_dense_2389_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_2389_bias_dense_2389_bias
//         bit 31~0 - Dense_2389_bias_dense_2389_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_2391_weight_dense_2391_weight
//         bit 31~0 - Dense_2391_weight_dense_2391_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_2391_bias_dense_2391_bias
//         bit 31~0 - Dense_2391_bias_dense_2391_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_2960_weight_conv2d_2960_weight
//         bit 31~0 - Conv2d_2960_weight_conv2d_2960_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_2960_bias_conv2d_2960_bias
//         bit 31~0 - Conv2d_2960_bias_conv2d_2960_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_2963_weight_conv2d_2963_weight
//         bit 31~0 - Conv2d_2963_weight_conv2d_2963_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_2963_bias_conv2d_2963_bias
//         bit 31~0 - Conv2d_2963_bias_conv2d_2963_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_2390_weight_dense_2390_weight
//         bit 31~0 - Dense_2390_weight_dense_2390_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_2390_bias_dense_2390_bias
//         bit 31~0 - Dense_2390_bias_dense_2390_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_2392_weight_dense_2392_weight
//         bit 31~0 - Dense_2392_weight_dense_2392_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_2392_bias_dense_2392_bias
//         bit 31~0 - Dense_2392_bias_dense_2392_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_2961_weight_conv2d_2961_weight
//         bit 31~0 - Conv2d_2961_weight_conv2d_2961_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_2961_bias_conv2d_2961_bias
//         bit 31~0 - Conv2d_2961_bias_conv2d_2961_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_2964_weight_conv2d_2964_weight
//         bit 31~0 - Conv2d_2964_weight_conv2d_2964_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_2964_bias_conv2d_2964_bias
//         bit 31~0 - Conv2d_2964_bias_conv2d_2964_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_2965_weight_conv2d_2965_weight
//         bit 31~0 - Conv2d_2965_weight_conv2d_2965_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_2965_bias_conv2d_2965_bias
//         bit 31~0 - Conv2d_2965_bias_conv2d_2965_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_2393_weight_dense_2393_weight
//         bit 31~0 - Dense_2393_weight_dense_2393_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_2393_bias_dense_2393_bias
//         bit 31~0 - Dense_2393_bias_dense_2393_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_2394_weight_dense_2394_weight
//         bit 31~0 - Dense_2394_weight_dense_2394_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_2394_bias_dense_2394_bias
//         bit 31~0 - Dense_2394_bias_dense_2394_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_2395_weight_dense_2395_weight
//         bit 31~0 - Dense_2395_weight_dense_2395_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_2395_bias_dense_2395_bias
//         bit 31~0 - Dense_2395_bias_dense_2395_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_2396_weight_dense_2396_weight
//         bit 31~0 - Dense_2396_weight_dense_2396_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_2396_bias_dense_2396_bias
//         bit 31~0 - Dense_2396_bias_dense_2396_bias[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_2397_weight_dense_2397_weight
//         bit 31~0 - Dense_2397_weight_dense_2397_weight[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_2397_bias_dense_2397_bias
//         bit 31~0 - Dense_2397_bias_dense_2397_bias[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_2398_weight_dense_2398_weight
//         bit 31~0 - Dense_2398_weight_dense_2398_weight[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_2398_bias_dense_2398_bias
//         bit 31~0 - Dense_2398_bias_dense_2398_bias[31:0] (Read/Write)
// 0x1f4 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT1_INPUT1_DATA                         0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT1_INPUT1_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT2_INPUT2_DATA                         0x020
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT2_INPUT2_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2959_CONV2D_2959_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2959_CONV2D_2959_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2962_CONV2D_2962_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2962_CONV2D_2962_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2496_MAX_POOLING2D_2496_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2496_MAX_POOLING2D_2496_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2498_MAX_POOLING2D_2498_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2498_MAX_POOLING2D_2498_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2389_DENSE_2389_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2389_DENSE_2389_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2391_DENSE_2391_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2391_DENSE_2391_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2960_CONV2D_2960_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2960_CONV2D_2960_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2963_CONV2D_2963_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2963_CONV2D_2963_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2497_MAX_POOLING2D_2497_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2497_MAX_POOLING2D_2497_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2499_MAX_POOLING2D_2499_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2499_MAX_POOLING2D_2499_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2390_DENSE_2390_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2390_DENSE_2390_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2392_DENSE_2392_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2392_DENSE_2392_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2961_CONV2D_2961_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2961_CONV2D_2961_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2964_CONV2D_2964_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2964_CONV2D_2964_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_524_CONCATENATE_524_DATA       0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_524_CONCATENATE_524_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2965_CONV2D_2965_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2965_CONV2D_2965_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2500_MAX_POOLING2D_2500_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2500_MAX_POOLING2D_2500_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2393_DENSE_2393_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2393_DENSE_2393_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2394_DENSE_2394_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2394_DENSE_2394_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2395_DENSE_2395_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2395_DENSE_2395_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2396_DENSE_2396_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2396_DENSE_2396_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_265_FLATTEN_265_DATA               0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_265_FLATTEN_265_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2397_DENSE_2397_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2397_DENSE_2397_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2398_DENSE_2398_DATA                 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2398_DENSE_2398_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2959_WEIGHT_CONV2D_2959_WEIGHT_DATA 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2959_WEIGHT_CONV2D_2959_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2959_BIAS_CONV2D_2959_BIAS_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2959_BIAS_CONV2D_2959_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2962_WEIGHT_CONV2D_2962_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2962_WEIGHT_CONV2D_2962_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2962_BIAS_CONV2D_2962_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2962_BIAS_CONV2D_2962_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2389_WEIGHT_DENSE_2389_WEIGHT_DATA   0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2389_WEIGHT_DENSE_2389_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2389_BIAS_DENSE_2389_BIAS_DATA       0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2389_BIAS_DENSE_2389_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2391_WEIGHT_DENSE_2391_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2391_WEIGHT_DENSE_2391_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2391_BIAS_DENSE_2391_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2391_BIAS_DENSE_2391_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2960_WEIGHT_CONV2D_2960_WEIGHT_DATA 0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2960_WEIGHT_CONV2D_2960_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2960_BIAS_CONV2D_2960_BIAS_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2960_BIAS_CONV2D_2960_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2963_WEIGHT_CONV2D_2963_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2963_WEIGHT_CONV2D_2963_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2963_BIAS_CONV2D_2963_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2963_BIAS_CONV2D_2963_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2390_WEIGHT_DENSE_2390_WEIGHT_DATA   0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2390_WEIGHT_DENSE_2390_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2390_BIAS_DENSE_2390_BIAS_DATA       0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2390_BIAS_DENSE_2390_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2392_WEIGHT_DENSE_2392_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2392_WEIGHT_DENSE_2392_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2392_BIAS_DENSE_2392_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2392_BIAS_DENSE_2392_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2961_WEIGHT_CONV2D_2961_WEIGHT_DATA 0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2961_WEIGHT_CONV2D_2961_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2961_BIAS_CONV2D_2961_BIAS_DATA     0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2961_BIAS_CONV2D_2961_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2964_WEIGHT_CONV2D_2964_WEIGHT_DATA 0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2964_WEIGHT_CONV2D_2964_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2964_BIAS_CONV2D_2964_BIAS_DATA     0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2964_BIAS_CONV2D_2964_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2965_WEIGHT_CONV2D_2965_WEIGHT_DATA 0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2965_WEIGHT_CONV2D_2965_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2965_BIAS_CONV2D_2965_BIAS_DATA     0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2965_BIAS_CONV2D_2965_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2393_WEIGHT_DENSE_2393_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2393_WEIGHT_DENSE_2393_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2393_BIAS_DENSE_2393_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2393_BIAS_DENSE_2393_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2394_WEIGHT_DENSE_2394_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2394_WEIGHT_DENSE_2394_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2394_BIAS_DENSE_2394_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2394_BIAS_DENSE_2394_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2395_WEIGHT_DENSE_2395_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2395_WEIGHT_DENSE_2395_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2395_BIAS_DENSE_2395_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2395_BIAS_DENSE_2395_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2396_WEIGHT_DENSE_2396_WEIGHT_DATA   0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2396_WEIGHT_DENSE_2396_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2396_BIAS_DENSE_2396_BIAS_DATA       0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2396_BIAS_DENSE_2396_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2397_WEIGHT_DENSE_2397_WEIGHT_DATA   0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2397_WEIGHT_DENSE_2397_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2397_BIAS_DENSE_2397_BIAS_DATA       0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2397_BIAS_DENSE_2397_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2398_WEIGHT_DENSE_2398_WEIGHT_DATA   0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2398_WEIGHT_DENSE_2398_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2398_BIAS_DENSE_2398_BIAS_DATA       0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2398_BIAS_DENSE_2398_BIAS_DATA       32

