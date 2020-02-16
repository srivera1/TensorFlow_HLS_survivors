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
// 0x028 : Data signal of Conv2d_3656_conv2d_3656
//         bit 31~0 - Conv2d_3656_conv2d_3656[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_3658_conv2d_3658
//         bit 31~0 - Conv2d_3658_conv2d_3658[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_3111_max_pooling2d_3111
//         bit 31~0 - Max_pooling2d_3111_max_pooling2d_3111[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_3112_max_pooling2d_3112
//         bit 31~0 - Max_pooling2d_3112_max_pooling2d_3112[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2955_dense_2955
//         bit 31~0 - Dense_2955_dense_2955[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2956_dense_2956
//         bit 31~0 - Dense_2956_dense_2956[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_3657_conv2d_3657
//         bit 31~0 - Conv2d_3657_conv2d_3657[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_3659_conv2d_3659
//         bit 31~0 - Conv2d_3659_conv2d_3659[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Concatenate_639_concatenate_639
//         bit 31~0 - Concatenate_639_concatenate_639[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_3660_conv2d_3660
//         bit 31~0 - Conv2d_3660_conv2d_3660[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_3113_max_pooling2d_3113
//         bit 31~0 - Max_pooling2d_3113_max_pooling2d_3113[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_2957_dense_2957
//         bit 31~0 - Dense_2957_dense_2957[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_3661_conv2d_3661
//         bit 31~0 - Conv2d_3661_conv2d_3661[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Max_pooling2d_3114_max_pooling2d_3114
//         bit 31~0 - Max_pooling2d_3114_max_pooling2d_3114[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_2958_dense_2958
//         bit 31~0 - Dense_2958_dense_2958[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_2959_dense_2959
//         bit 31~0 - Dense_2959_dense_2959[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_2960_dense_2960
//         bit 31~0 - Dense_2960_dense_2960[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_2961_dense_2961
//         bit 31~0 - Dense_2961_dense_2961[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Flatten_332_flatten_332
//         bit 31~0 - Flatten_332_flatten_332[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_2962_dense_2962
//         bit 31~0 - Dense_2962_dense_2962[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_2963_dense_2963
//         bit 31~0 - Dense_2963_dense_2963[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_2964_dense_2964
//         bit 31~0 - Dense_2964_dense_2964[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_3656_weight_conv2d_3656_weight
//         bit 31~0 - Conv2d_3656_weight_conv2d_3656_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_3656_bias_conv2d_3656_bias
//         bit 31~0 - Conv2d_3656_bias_conv2d_3656_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_3658_weight_conv2d_3658_weight
//         bit 31~0 - Conv2d_3658_weight_conv2d_3658_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_3658_bias_conv2d_3658_bias
//         bit 31~0 - Conv2d_3658_bias_conv2d_3658_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_2955_weight_dense_2955_weight
//         bit 31~0 - Dense_2955_weight_dense_2955_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_2955_bias_dense_2955_bias
//         bit 31~0 - Dense_2955_bias_dense_2955_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_2956_weight_dense_2956_weight
//         bit 31~0 - Dense_2956_weight_dense_2956_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_2956_bias_dense_2956_bias
//         bit 31~0 - Dense_2956_bias_dense_2956_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_3657_weight_conv2d_3657_weight
//         bit 31~0 - Conv2d_3657_weight_conv2d_3657_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_3657_bias_conv2d_3657_bias
//         bit 31~0 - Conv2d_3657_bias_conv2d_3657_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_3659_weight_conv2d_3659_weight
//         bit 31~0 - Conv2d_3659_weight_conv2d_3659_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_3659_bias_conv2d_3659_bias
//         bit 31~0 - Conv2d_3659_bias_conv2d_3659_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_3660_weight_conv2d_3660_weight
//         bit 31~0 - Conv2d_3660_weight_conv2d_3660_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_3660_bias_conv2d_3660_bias
//         bit 31~0 - Conv2d_3660_bias_conv2d_3660_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_2957_weight_dense_2957_weight
//         bit 31~0 - Dense_2957_weight_dense_2957_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_2957_bias_dense_2957_bias
//         bit 31~0 - Dense_2957_bias_dense_2957_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_3661_weight_conv2d_3661_weight
//         bit 31~0 - Conv2d_3661_weight_conv2d_3661_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_3661_bias_conv2d_3661_bias
//         bit 31~0 - Conv2d_3661_bias_conv2d_3661_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_2958_weight_dense_2958_weight
//         bit 31~0 - Dense_2958_weight_dense_2958_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_2958_bias_dense_2958_bias
//         bit 31~0 - Dense_2958_bias_dense_2958_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_2959_weight_dense_2959_weight
//         bit 31~0 - Dense_2959_weight_dense_2959_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_2959_bias_dense_2959_bias
//         bit 31~0 - Dense_2959_bias_dense_2959_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_2960_weight_dense_2960_weight
//         bit 31~0 - Dense_2960_weight_dense_2960_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_2960_bias_dense_2960_bias
//         bit 31~0 - Dense_2960_bias_dense_2960_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_2961_weight_dense_2961_weight
//         bit 31~0 - Dense_2961_weight_dense_2961_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_2961_bias_dense_2961_bias
//         bit 31~0 - Dense_2961_bias_dense_2961_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_2962_weight_dense_2962_weight
//         bit 31~0 - Dense_2962_weight_dense_2962_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_2962_bias_dense_2962_bias
//         bit 31~0 - Dense_2962_bias_dense_2962_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_2963_weight_dense_2963_weight
//         bit 31~0 - Dense_2963_weight_dense_2963_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_2963_bias_dense_2963_bias
//         bit 31~0 - Dense_2963_bias_dense_2963_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_2964_weight_dense_2964_weight
//         bit 31~0 - Dense_2964_weight_dense_2964_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_2964_bias_dense_2964_bias
//         bit 31~0 - Dense_2964_bias_dense_2964_bias[31:0] (Read/Write)
// 0x1d4 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3656_CONV2D_3656_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3656_CONV2D_3656_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3658_CONV2D_3658_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3658_CONV2D_3658_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3111_MAX_POOLING2D_3111_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3111_MAX_POOLING2D_3111_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3112_MAX_POOLING2D_3112_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3112_MAX_POOLING2D_3112_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2955_DENSE_2955_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2955_DENSE_2955_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2956_DENSE_2956_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2956_DENSE_2956_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3657_CONV2D_3657_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3657_CONV2D_3657_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3659_CONV2D_3659_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3659_CONV2D_3659_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_639_CONCATENATE_639_DATA       0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_639_CONCATENATE_639_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3660_CONV2D_3660_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3660_CONV2D_3660_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3113_MAX_POOLING2D_3113_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3113_MAX_POOLING2D_3113_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2957_DENSE_2957_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2957_DENSE_2957_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3661_CONV2D_3661_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3661_CONV2D_3661_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3114_MAX_POOLING2D_3114_DATA 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3114_MAX_POOLING2D_3114_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2958_DENSE_2958_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2958_DENSE_2958_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2959_DENSE_2959_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2959_DENSE_2959_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2960_DENSE_2960_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2960_DENSE_2960_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2961_DENSE_2961_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2961_DENSE_2961_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_332_FLATTEN_332_DATA               0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_332_FLATTEN_332_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2962_DENSE_2962_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2962_DENSE_2962_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2963_DENSE_2963_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2963_DENSE_2963_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2964_DENSE_2964_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2964_DENSE_2964_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3656_WEIGHT_CONV2D_3656_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3656_WEIGHT_CONV2D_3656_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3656_BIAS_CONV2D_3656_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3656_BIAS_CONV2D_3656_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3658_WEIGHT_CONV2D_3658_WEIGHT_DATA 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3658_WEIGHT_CONV2D_3658_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3658_BIAS_CONV2D_3658_BIAS_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3658_BIAS_CONV2D_3658_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2955_WEIGHT_DENSE_2955_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2955_WEIGHT_DENSE_2955_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2955_BIAS_DENSE_2955_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2955_BIAS_DENSE_2955_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2956_WEIGHT_DENSE_2956_WEIGHT_DATA   0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2956_WEIGHT_DENSE_2956_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2956_BIAS_DENSE_2956_BIAS_DATA       0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2956_BIAS_DENSE_2956_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3657_WEIGHT_CONV2D_3657_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3657_WEIGHT_CONV2D_3657_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3657_BIAS_CONV2D_3657_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3657_BIAS_CONV2D_3657_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3659_WEIGHT_CONV2D_3659_WEIGHT_DATA 0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3659_WEIGHT_CONV2D_3659_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3659_BIAS_CONV2D_3659_BIAS_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3659_BIAS_CONV2D_3659_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3660_WEIGHT_CONV2D_3660_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3660_WEIGHT_CONV2D_3660_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3660_BIAS_CONV2D_3660_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3660_BIAS_CONV2D_3660_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2957_WEIGHT_DENSE_2957_WEIGHT_DATA   0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2957_WEIGHT_DENSE_2957_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2957_BIAS_DENSE_2957_BIAS_DATA       0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2957_BIAS_DENSE_2957_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3661_WEIGHT_CONV2D_3661_WEIGHT_DATA 0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3661_WEIGHT_CONV2D_3661_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3661_BIAS_CONV2D_3661_BIAS_DATA     0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3661_BIAS_CONV2D_3661_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2958_WEIGHT_DENSE_2958_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2958_WEIGHT_DENSE_2958_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2958_BIAS_DENSE_2958_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2958_BIAS_DENSE_2958_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2959_WEIGHT_DENSE_2959_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2959_WEIGHT_DENSE_2959_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2959_BIAS_DENSE_2959_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2959_BIAS_DENSE_2959_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2960_WEIGHT_DENSE_2960_WEIGHT_DATA   0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2960_WEIGHT_DENSE_2960_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2960_BIAS_DENSE_2960_BIAS_DATA       0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2960_BIAS_DENSE_2960_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2961_WEIGHT_DENSE_2961_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2961_WEIGHT_DENSE_2961_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2961_BIAS_DENSE_2961_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2961_BIAS_DENSE_2961_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2962_WEIGHT_DENSE_2962_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2962_WEIGHT_DENSE_2962_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2962_BIAS_DENSE_2962_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2962_BIAS_DENSE_2962_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2963_WEIGHT_DENSE_2963_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2963_WEIGHT_DENSE_2963_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2963_BIAS_DENSE_2963_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2963_BIAS_DENSE_2963_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2964_WEIGHT_DENSE_2964_WEIGHT_DATA   0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2964_WEIGHT_DENSE_2964_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2964_BIAS_DENSE_2964_BIAS_DATA       0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2964_BIAS_DENSE_2964_BIAS_DATA       32

