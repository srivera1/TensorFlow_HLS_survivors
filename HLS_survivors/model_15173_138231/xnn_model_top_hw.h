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
// 0x028 : Data signal of Conv2d_296_conv2d_296
//         bit 31~0 - Conv2d_296_conv2d_296[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_298_conv2d_298
//         bit 31~0 - Conv2d_298_conv2d_298[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_262_max_pooling2d_262
//         bit 31~0 - Max_pooling2d_262_max_pooling2d_262[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_264_max_pooling2d_264
//         bit 31~0 - Max_pooling2d_264_max_pooling2d_264[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_251_dense_251
//         bit 31~0 - Dense_251_dense_251[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_253_dense_253
//         bit 31~0 - Dense_253_dense_253[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_297_conv2d_297
//         bit 31~0 - Conv2d_297_conv2d_297[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_299_conv2d_299
//         bit 31~0 - Conv2d_299_conv2d_299[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_263_max_pooling2d_263
//         bit 31~0 - Max_pooling2d_263_max_pooling2d_263[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_265_max_pooling2d_265
//         bit 31~0 - Max_pooling2d_265_max_pooling2d_265[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_252_dense_252
//         bit 31~0 - Dense_252_dense_252[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_254_dense_254
//         bit 31~0 - Dense_254_dense_254[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Concatenate_54_concatenate_54
//         bit 31~0 - Concatenate_54_concatenate_54[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_300_conv2d_300
//         bit 31~0 - Conv2d_300_conv2d_300[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_266_max_pooling2d_266
//         bit 31~0 - Max_pooling2d_266_max_pooling2d_266[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Max_pooling2d_267_max_pooling2d_267
//         bit 31~0 - Max_pooling2d_267_max_pooling2d_267[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Flatten_29_flatten_29
//         bit 31~0 - Flatten_29_flatten_29[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_255_dense_255
//         bit 31~0 - Dense_255_dense_255[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_256_dense_256
//         bit 31~0 - Dense_256_dense_256[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Conv2d_296_weight_conv2d_296_weight
//         bit 31~0 - Conv2d_296_weight_conv2d_296_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_296_bias_conv2d_296_bias
//         bit 31~0 - Conv2d_296_bias_conv2d_296_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_298_weight_conv2d_298_weight
//         bit 31~0 - Conv2d_298_weight_conv2d_298_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_298_bias_conv2d_298_bias
//         bit 31~0 - Conv2d_298_bias_conv2d_298_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_251_weight_dense_251_weight
//         bit 31~0 - Dense_251_weight_dense_251_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_251_bias_dense_251_bias
//         bit 31~0 - Dense_251_bias_dense_251_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_253_weight_dense_253_weight
//         bit 31~0 - Dense_253_weight_dense_253_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_253_bias_dense_253_bias
//         bit 31~0 - Dense_253_bias_dense_253_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_297_weight_conv2d_297_weight
//         bit 31~0 - Conv2d_297_weight_conv2d_297_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_297_bias_conv2d_297_bias
//         bit 31~0 - Conv2d_297_bias_conv2d_297_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_299_weight_conv2d_299_weight
//         bit 31~0 - Conv2d_299_weight_conv2d_299_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_299_bias_conv2d_299_bias
//         bit 31~0 - Conv2d_299_bias_conv2d_299_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_252_weight_dense_252_weight
//         bit 31~0 - Dense_252_weight_dense_252_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_252_bias_dense_252_bias
//         bit 31~0 - Dense_252_bias_dense_252_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_254_weight_dense_254_weight
//         bit 31~0 - Dense_254_weight_dense_254_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_254_bias_dense_254_bias
//         bit 31~0 - Dense_254_bias_dense_254_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_300_weight_conv2d_300_weight
//         bit 31~0 - Conv2d_300_weight_conv2d_300_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_300_bias_conv2d_300_bias
//         bit 31~0 - Conv2d_300_bias_conv2d_300_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_255_weight_dense_255_weight
//         bit 31~0 - Dense_255_weight_dense_255_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_255_bias_dense_255_bias
//         bit 31~0 - Dense_255_bias_dense_255_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_256_weight_dense_256_weight
//         bit 31~0 - Dense_256_weight_dense_256_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_256_bias_dense_256_bias
//         bit 31~0 - Dense_256_bias_dense_256_bias[31:0] (Read/Write)
// 0x16c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                  0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                      0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                      0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                      0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT1_INPUT1_DATA                       0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT1_INPUT1_DATA                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT2_INPUT2_DATA                       0x020
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT2_INPUT2_DATA                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_296_CONV2D_296_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_296_CONV2D_296_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_298_CONV2D_298_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_298_CONV2D_298_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_262_MAX_POOLING2D_262_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_262_MAX_POOLING2D_262_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_264_MAX_POOLING2D_264_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_264_MAX_POOLING2D_264_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_251_DENSE_251_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_251_DENSE_251_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_253_DENSE_253_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_253_DENSE_253_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_297_CONV2D_297_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_297_CONV2D_297_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_299_CONV2D_299_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_299_CONV2D_299_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_263_MAX_POOLING2D_263_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_263_MAX_POOLING2D_263_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_265_MAX_POOLING2D_265_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_265_MAX_POOLING2D_265_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_252_DENSE_252_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_252_DENSE_252_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_254_DENSE_254_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_254_DENSE_254_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_54_CONCATENATE_54_DATA       0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_54_CONCATENATE_54_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_300_CONV2D_300_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_300_CONV2D_300_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_266_MAX_POOLING2D_266_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_266_MAX_POOLING2D_266_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_267_MAX_POOLING2D_267_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_267_MAX_POOLING2D_267_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_29_FLATTEN_29_DATA               0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_29_FLATTEN_29_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_255_DENSE_255_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_255_DENSE_255_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_256_DENSE_256_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_256_DENSE_256_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_296_WEIGHT_CONV2D_296_WEIGHT_DATA 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_296_WEIGHT_CONV2D_296_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_296_BIAS_CONV2D_296_BIAS_DATA     0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_296_BIAS_CONV2D_296_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_298_WEIGHT_CONV2D_298_WEIGHT_DATA 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_298_WEIGHT_CONV2D_298_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_298_BIAS_CONV2D_298_BIAS_DATA     0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_298_BIAS_CONV2D_298_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_251_WEIGHT_DENSE_251_WEIGHT_DATA   0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_251_WEIGHT_DENSE_251_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_251_BIAS_DENSE_251_BIAS_DATA       0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_251_BIAS_DENSE_251_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_253_WEIGHT_DENSE_253_WEIGHT_DATA   0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_253_WEIGHT_DENSE_253_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_253_BIAS_DENSE_253_BIAS_DATA       0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_253_BIAS_DENSE_253_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_297_WEIGHT_CONV2D_297_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_297_WEIGHT_CONV2D_297_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_297_BIAS_CONV2D_297_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_297_BIAS_CONV2D_297_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_299_WEIGHT_CONV2D_299_WEIGHT_DATA 0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_299_WEIGHT_CONV2D_299_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_299_BIAS_CONV2D_299_BIAS_DATA     0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_299_BIAS_CONV2D_299_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_252_WEIGHT_DENSE_252_WEIGHT_DATA   0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_252_WEIGHT_DENSE_252_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_252_BIAS_DENSE_252_BIAS_DATA       0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_252_BIAS_DENSE_252_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_254_WEIGHT_DENSE_254_WEIGHT_DATA   0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_254_WEIGHT_DENSE_254_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_254_BIAS_DENSE_254_BIAS_DATA       0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_254_BIAS_DENSE_254_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_300_WEIGHT_CONV2D_300_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_300_WEIGHT_CONV2D_300_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_300_BIAS_CONV2D_300_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_300_BIAS_CONV2D_300_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_255_WEIGHT_DENSE_255_WEIGHT_DATA   0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_255_WEIGHT_DENSE_255_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_255_BIAS_DENSE_255_BIAS_DATA       0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_255_BIAS_DENSE_255_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_256_WEIGHT_DENSE_256_WEIGHT_DATA   0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_256_WEIGHT_DENSE_256_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_256_BIAS_DENSE_256_BIAS_DATA       0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_256_BIAS_DENSE_256_BIAS_DATA       32

