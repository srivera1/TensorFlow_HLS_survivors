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
// 0x028 : Data signal of Conv2d_3986_conv2d_3986
//         bit 31~0 - Conv2d_3986_conv2d_3986[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_3987_conv2d_3987
//         bit 31~0 - Conv2d_3987_conv2d_3987[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_3378_max_pooling2d_3378
//         bit 31~0 - Max_pooling2d_3378_max_pooling2d_3378[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_3379_max_pooling2d_3379
//         bit 31~0 - Max_pooling2d_3379_max_pooling2d_3379[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_3225_dense_3225
//         bit 31~0 - Dense_3225_dense_3225[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_3226_dense_3226
//         bit 31~0 - Dense_3226_dense_3226[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_696_concatenate_696
//         bit 31~0 - Concatenate_696_concatenate_696[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_3988_conv2d_3988
//         bit 31~0 - Conv2d_3988_conv2d_3988[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_3380_max_pooling2d_3380
//         bit 31~0 - Max_pooling2d_3380_max_pooling2d_3380[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_3227_dense_3227
//         bit 31~0 - Dense_3227_dense_3227[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_3989_conv2d_3989
//         bit 31~0 - Conv2d_3989_conv2d_3989[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_3381_max_pooling2d_3381
//         bit 31~0 - Max_pooling2d_3381_max_pooling2d_3381[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_3228_dense_3228
//         bit 31~0 - Dense_3228_dense_3228[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Max_pooling2d_3382_max_pooling2d_3382
//         bit 31~0 - Max_pooling2d_3382_max_pooling2d_3382[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_3229_dense_3229
//         bit 31~0 - Dense_3229_dense_3229[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_3231_dense_3231
//         bit 31~0 - Dense_3231_dense_3231[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_3230_dense_3230
//         bit 31~0 - Dense_3230_dense_3230[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_3232_dense_3232
//         bit 31~0 - Dense_3232_dense_3232[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Concatenate_697_concatenate_697
//         bit 31~0 - Concatenate_697_concatenate_697[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Flatten_360_flatten_360
//         bit 31~0 - Flatten_360_flatten_360[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_3233_dense_3233
//         bit 31~0 - Dense_3233_dense_3233[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_3234_dense_3234
//         bit 31~0 - Dense_3234_dense_3234[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_3235_dense_3235
//         bit 31~0 - Dense_3235_dense_3235[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_3986_weight_conv2d_3986_weight
//         bit 31~0 - Conv2d_3986_weight_conv2d_3986_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_3986_bias_conv2d_3986_bias
//         bit 31~0 - Conv2d_3986_bias_conv2d_3986_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_3987_weight_conv2d_3987_weight
//         bit 31~0 - Conv2d_3987_weight_conv2d_3987_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_3987_bias_conv2d_3987_bias
//         bit 31~0 - Conv2d_3987_bias_conv2d_3987_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_3225_weight_dense_3225_weight
//         bit 31~0 - Dense_3225_weight_dense_3225_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_3225_bias_dense_3225_bias
//         bit 31~0 - Dense_3225_bias_dense_3225_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_3226_weight_dense_3226_weight
//         bit 31~0 - Dense_3226_weight_dense_3226_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_3226_bias_dense_3226_bias
//         bit 31~0 - Dense_3226_bias_dense_3226_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_3988_weight_conv2d_3988_weight
//         bit 31~0 - Conv2d_3988_weight_conv2d_3988_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_3988_bias_conv2d_3988_bias
//         bit 31~0 - Conv2d_3988_bias_conv2d_3988_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_3227_weight_dense_3227_weight
//         bit 31~0 - Dense_3227_weight_dense_3227_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_3227_bias_dense_3227_bias
//         bit 31~0 - Dense_3227_bias_dense_3227_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_3989_weight_conv2d_3989_weight
//         bit 31~0 - Conv2d_3989_weight_conv2d_3989_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_3989_bias_conv2d_3989_bias
//         bit 31~0 - Conv2d_3989_bias_conv2d_3989_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_3228_weight_dense_3228_weight
//         bit 31~0 - Dense_3228_weight_dense_3228_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_3228_bias_dense_3228_bias
//         bit 31~0 - Dense_3228_bias_dense_3228_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_3229_weight_dense_3229_weight
//         bit 31~0 - Dense_3229_weight_dense_3229_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_3229_bias_dense_3229_bias
//         bit 31~0 - Dense_3229_bias_dense_3229_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_3231_weight_dense_3231_weight
//         bit 31~0 - Dense_3231_weight_dense_3231_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_3231_bias_dense_3231_bias
//         bit 31~0 - Dense_3231_bias_dense_3231_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_3230_weight_dense_3230_weight
//         bit 31~0 - Dense_3230_weight_dense_3230_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_3230_bias_dense_3230_bias
//         bit 31~0 - Dense_3230_bias_dense_3230_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_3232_weight_dense_3232_weight
//         bit 31~0 - Dense_3232_weight_dense_3232_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_3232_bias_dense_3232_bias
//         bit 31~0 - Dense_3232_bias_dense_3232_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_3233_weight_dense_3233_weight
//         bit 31~0 - Dense_3233_weight_dense_3233_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_3233_bias_dense_3233_bias
//         bit 31~0 - Dense_3233_bias_dense_3233_bias[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_3234_weight_dense_3234_weight
//         bit 31~0 - Dense_3234_weight_dense_3234_weight[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_3234_bias_dense_3234_bias
//         bit 31~0 - Dense_3234_bias_dense_3234_bias[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_3235_weight_dense_3235_weight
//         bit 31~0 - Dense_3235_weight_dense_3235_weight[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_3235_bias_dense_3235_bias
//         bit 31~0 - Dense_3235_bias_dense_3235_bias[31:0] (Read/Write)
// 0x1cc : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3986_CONV2D_3986_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3986_CONV2D_3986_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3987_CONV2D_3987_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3987_CONV2D_3987_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3378_MAX_POOLING2D_3378_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3378_MAX_POOLING2D_3378_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3379_MAX_POOLING2D_3379_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3379_MAX_POOLING2D_3379_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3225_DENSE_3225_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3225_DENSE_3225_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3226_DENSE_3226_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3226_DENSE_3226_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_696_CONCATENATE_696_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_696_CONCATENATE_696_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3988_CONV2D_3988_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3988_CONV2D_3988_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3380_MAX_POOLING2D_3380_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3380_MAX_POOLING2D_3380_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3227_DENSE_3227_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3227_DENSE_3227_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3989_CONV2D_3989_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3989_CONV2D_3989_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3381_MAX_POOLING2D_3381_DATA 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3381_MAX_POOLING2D_3381_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3228_DENSE_3228_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3228_DENSE_3228_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3382_MAX_POOLING2D_3382_DATA 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3382_MAX_POOLING2D_3382_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3229_DENSE_3229_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3229_DENSE_3229_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3231_DENSE_3231_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3231_DENSE_3231_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3230_DENSE_3230_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3230_DENSE_3230_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3232_DENSE_3232_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3232_DENSE_3232_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_697_CONCATENATE_697_DATA       0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_697_CONCATENATE_697_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_360_FLATTEN_360_DATA               0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_360_FLATTEN_360_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3233_DENSE_3233_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3233_DENSE_3233_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3234_DENSE_3234_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3234_DENSE_3234_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3235_DENSE_3235_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3235_DENSE_3235_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3986_WEIGHT_CONV2D_3986_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3986_WEIGHT_CONV2D_3986_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3986_BIAS_CONV2D_3986_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3986_BIAS_CONV2D_3986_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3987_WEIGHT_CONV2D_3987_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3987_WEIGHT_CONV2D_3987_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3987_BIAS_CONV2D_3987_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3987_BIAS_CONV2D_3987_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3225_WEIGHT_DENSE_3225_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3225_WEIGHT_DENSE_3225_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3225_BIAS_DENSE_3225_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3225_BIAS_DENSE_3225_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3226_WEIGHT_DENSE_3226_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3226_WEIGHT_DENSE_3226_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3226_BIAS_DENSE_3226_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3226_BIAS_DENSE_3226_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3988_WEIGHT_CONV2D_3988_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3988_WEIGHT_CONV2D_3988_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3988_BIAS_CONV2D_3988_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3988_BIAS_CONV2D_3988_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3227_WEIGHT_DENSE_3227_WEIGHT_DATA   0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3227_WEIGHT_DENSE_3227_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3227_BIAS_DENSE_3227_BIAS_DATA       0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3227_BIAS_DENSE_3227_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3989_WEIGHT_CONV2D_3989_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3989_WEIGHT_CONV2D_3989_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3989_BIAS_CONV2D_3989_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3989_BIAS_CONV2D_3989_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3228_WEIGHT_DENSE_3228_WEIGHT_DATA   0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3228_WEIGHT_DENSE_3228_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3228_BIAS_DENSE_3228_BIAS_DATA       0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3228_BIAS_DENSE_3228_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3229_WEIGHT_DENSE_3229_WEIGHT_DATA   0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3229_WEIGHT_DENSE_3229_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3229_BIAS_DENSE_3229_BIAS_DATA       0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3229_BIAS_DENSE_3229_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3231_WEIGHT_DENSE_3231_WEIGHT_DATA   0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3231_WEIGHT_DENSE_3231_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3231_BIAS_DENSE_3231_BIAS_DATA       0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3231_BIAS_DENSE_3231_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3230_WEIGHT_DENSE_3230_WEIGHT_DATA   0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3230_WEIGHT_DENSE_3230_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3230_BIAS_DENSE_3230_BIAS_DATA       0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3230_BIAS_DENSE_3230_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3232_WEIGHT_DENSE_3232_WEIGHT_DATA   0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3232_WEIGHT_DENSE_3232_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3232_BIAS_DENSE_3232_BIAS_DATA       0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3232_BIAS_DENSE_3232_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3233_WEIGHT_DENSE_3233_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3233_WEIGHT_DENSE_3233_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3233_BIAS_DENSE_3233_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3233_BIAS_DENSE_3233_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3234_WEIGHT_DENSE_3234_WEIGHT_DATA   0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3234_WEIGHT_DENSE_3234_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3234_BIAS_DENSE_3234_BIAS_DATA       0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3234_BIAS_DENSE_3234_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3235_WEIGHT_DENSE_3235_WEIGHT_DATA   0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3235_WEIGHT_DENSE_3235_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3235_BIAS_DENSE_3235_BIAS_DATA       0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3235_BIAS_DENSE_3235_BIAS_DATA       32

