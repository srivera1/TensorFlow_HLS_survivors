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
// 0x018 : Data signal of Input_input
//         bit 31~0 - Input_input[31:0] (Read/Write)
// 0x01c : reserved
// 0x020 : Data signal of Conv2d_6238_conv2d_6238
//         bit 31~0 - Conv2d_6238_conv2d_6238[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Max_pooling2d_4411_max_pooling2d_4411
//         bit 31~0 - Max_pooling2d_4411_max_pooling2d_4411[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Dense_4916_dense_4916
//         bit 31~0 - Dense_4916_dense_4916[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Conv2d_6239_conv2d_6239
//         bit 31~0 - Conv2d_6239_conv2d_6239[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_4412_max_pooling2d_4412
//         bit 31~0 - Max_pooling2d_4412_max_pooling2d_4412[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_4917_dense_4917
//         bit 31~0 - Dense_4917_dense_4917[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_6240_conv2d_6240
//         bit 31~0 - Conv2d_6240_conv2d_6240[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Max_pooling2d_4413_max_pooling2d_4413
//         bit 31~0 - Max_pooling2d_4413_max_pooling2d_4413[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Dense_4918_dense_4918
//         bit 31~0 - Dense_4918_dense_4918[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_4414_max_pooling2d_4414
//         bit 31~0 - Max_pooling2d_4414_max_pooling2d_4414[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_4919_dense_4919
//         bit 31~0 - Dense_4919_dense_4919[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Flatten_296_flatten_296
//         bit 31~0 - Flatten_296_flatten_296[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_4920_dense_4920
//         bit 31~0 - Dense_4920_dense_4920[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_4921_dense_4921
//         bit 31~0 - Dense_4921_dense_4921[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_6238_weight_conv2d_6238_weight
//         bit 31~0 - Conv2d_6238_weight_conv2d_6238_weight[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_6238_bias_conv2d_6238_bias
//         bit 31~0 - Conv2d_6238_bias_conv2d_6238_bias[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_4916_weight_dense_4916_weight
//         bit 31~0 - Dense_4916_weight_dense_4916_weight[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_4916_bias_dense_4916_bias
//         bit 31~0 - Dense_4916_bias_dense_4916_bias[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_6239_weight_conv2d_6239_weight
//         bit 31~0 - Conv2d_6239_weight_conv2d_6239_weight[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_6239_bias_conv2d_6239_bias
//         bit 31~0 - Conv2d_6239_bias_conv2d_6239_bias[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_4917_weight_dense_4917_weight
//         bit 31~0 - Dense_4917_weight_dense_4917_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_4917_bias_dense_4917_bias
//         bit 31~0 - Dense_4917_bias_dense_4917_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_6240_weight_conv2d_6240_weight
//         bit 31~0 - Conv2d_6240_weight_conv2d_6240_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_6240_bias_conv2d_6240_bias
//         bit 31~0 - Conv2d_6240_bias_conv2d_6240_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_4918_weight_dense_4918_weight
//         bit 31~0 - Dense_4918_weight_dense_4918_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_4918_bias_dense_4918_bias
//         bit 31~0 - Dense_4918_bias_dense_4918_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_4919_weight_dense_4919_weight
//         bit 31~0 - Dense_4919_weight_dense_4919_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_4919_bias_dense_4919_bias
//         bit 31~0 - Dense_4919_bias_dense_4919_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_4920_weight_dense_4920_weight
//         bit 31~0 - Dense_4920_weight_dense_4920_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_4920_bias_dense_4920_bias
//         bit 31~0 - Dense_4920_bias_dense_4920_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_4921_weight_dense_4921_weight
//         bit 31~0 - Dense_4921_weight_dense_4921_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_4921_bias_dense_4921_bias
//         bit 31~0 - Dense_4921_bias_dense_4921_bias[31:0] (Read/Write)
// 0x11c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                           0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                           32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6238_CONV2D_6238_DATA               0x020
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6238_CONV2D_6238_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4411_MAX_POOLING2D_4411_DATA 0x028
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4411_MAX_POOLING2D_4411_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4916_DENSE_4916_DATA                 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4916_DENSE_4916_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6239_CONV2D_6239_DATA               0x038
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6239_CONV2D_6239_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4412_MAX_POOLING2D_4412_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4412_MAX_POOLING2D_4412_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4917_DENSE_4917_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4917_DENSE_4917_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6240_CONV2D_6240_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6240_CONV2D_6240_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4413_MAX_POOLING2D_4413_DATA 0x058
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4413_MAX_POOLING2D_4413_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4918_DENSE_4918_DATA                 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4918_DENSE_4918_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4414_MAX_POOLING2D_4414_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4414_MAX_POOLING2D_4414_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4919_DENSE_4919_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4919_DENSE_4919_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_296_FLATTEN_296_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_296_FLATTEN_296_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4920_DENSE_4920_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4920_DENSE_4920_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4921_DENSE_4921_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4921_DENSE_4921_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6238_WEIGHT_CONV2D_6238_WEIGHT_DATA 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6238_WEIGHT_CONV2D_6238_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6238_BIAS_CONV2D_6238_BIAS_DATA     0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6238_BIAS_CONV2D_6238_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4916_WEIGHT_DENSE_4916_WEIGHT_DATA   0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4916_WEIGHT_DENSE_4916_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4916_BIAS_DENSE_4916_BIAS_DATA       0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4916_BIAS_DENSE_4916_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6239_WEIGHT_CONV2D_6239_WEIGHT_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6239_WEIGHT_CONV2D_6239_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6239_BIAS_CONV2D_6239_BIAS_DATA     0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6239_BIAS_CONV2D_6239_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4917_WEIGHT_DENSE_4917_WEIGHT_DATA   0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4917_WEIGHT_DENSE_4917_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4917_BIAS_DENSE_4917_BIAS_DATA       0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4917_BIAS_DENSE_4917_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6240_WEIGHT_CONV2D_6240_WEIGHT_DATA 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6240_WEIGHT_CONV2D_6240_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6240_BIAS_CONV2D_6240_BIAS_DATA     0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6240_BIAS_CONV2D_6240_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4918_WEIGHT_DENSE_4918_WEIGHT_DATA   0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4918_WEIGHT_DENSE_4918_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4918_BIAS_DENSE_4918_BIAS_DATA       0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4918_BIAS_DENSE_4918_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4919_WEIGHT_DENSE_4919_WEIGHT_DATA   0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4919_WEIGHT_DENSE_4919_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4919_BIAS_DENSE_4919_BIAS_DATA       0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4919_BIAS_DENSE_4919_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4920_WEIGHT_DENSE_4920_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4920_WEIGHT_DENSE_4920_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4920_BIAS_DENSE_4920_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4920_BIAS_DENSE_4920_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4921_WEIGHT_DENSE_4921_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4921_WEIGHT_DENSE_4921_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4921_BIAS_DENSE_4921_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4921_BIAS_DENSE_4921_BIAS_DATA       32

