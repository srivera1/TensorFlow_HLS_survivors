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
// 0x028 : Data signal of Conv2d_241_conv2d_241
//         bit 31~0 - Conv2d_241_conv2d_241[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_242_conv2d_242
//         bit 31~0 - Conv2d_242_conv2d_242[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_215_max_pooling2d_215
//         bit 31~0 - Max_pooling2d_215_max_pooling2d_215[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_216_max_pooling2d_216
//         bit 31~0 - Max_pooling2d_216_max_pooling2d_216[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_203_dense_203
//         bit 31~0 - Dense_203_dense_203[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_204_dense_204
//         bit 31~0 - Dense_204_dense_204[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_45_concatenate_45
//         bit 31~0 - Concatenate_45_concatenate_45[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_243_conv2d_243
//         bit 31~0 - Conv2d_243_conv2d_243[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_217_max_pooling2d_217
//         bit 31~0 - Max_pooling2d_217_max_pooling2d_217[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_218_max_pooling2d_218
//         bit 31~0 - Max_pooling2d_218_max_pooling2d_218[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_219_max_pooling2d_219
//         bit 31~0 - Max_pooling2d_219_max_pooling2d_219[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Flatten_23_flatten_23
//         bit 31~0 - Flatten_23_flatten_23[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_205_dense_205
//         bit 31~0 - Dense_205_dense_205[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_206_dense_206
//         bit 31~0 - Dense_206_dense_206[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_207_dense_207
//         bit 31~0 - Dense_207_dense_207[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_241_weight_conv2d_241_weight
//         bit 31~0 - Conv2d_241_weight_conv2d_241_weight[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_241_bias_conv2d_241_bias
//         bit 31~0 - Conv2d_241_bias_conv2d_241_bias[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_242_weight_conv2d_242_weight
//         bit 31~0 - Conv2d_242_weight_conv2d_242_weight[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_242_bias_conv2d_242_bias
//         bit 31~0 - Conv2d_242_bias_conv2d_242_bias[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_203_weight_dense_203_weight
//         bit 31~0 - Dense_203_weight_dense_203_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_203_bias_dense_203_bias
//         bit 31~0 - Dense_203_bias_dense_203_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_204_weight_dense_204_weight
//         bit 31~0 - Dense_204_weight_dense_204_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_204_bias_dense_204_bias
//         bit 31~0 - Dense_204_bias_dense_204_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_243_weight_conv2d_243_weight
//         bit 31~0 - Conv2d_243_weight_conv2d_243_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_243_bias_conv2d_243_bias
//         bit 31~0 - Conv2d_243_bias_conv2d_243_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_205_weight_dense_205_weight
//         bit 31~0 - Dense_205_weight_dense_205_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_205_bias_dense_205_bias
//         bit 31~0 - Dense_205_bias_dense_205_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_206_weight_dense_206_weight
//         bit 31~0 - Dense_206_weight_dense_206_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_206_bias_dense_206_bias
//         bit 31~0 - Dense_206_bias_dense_206_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_207_weight_dense_207_weight
//         bit 31~0 - Dense_207_weight_dense_207_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_207_bias_dense_207_bias
//         bit 31~0 - Dense_207_bias_dense_207_bias[31:0] (Read/Write)
// 0x11c : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_241_CONV2D_241_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_241_CONV2D_241_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_242_CONV2D_242_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_242_CONV2D_242_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_215_MAX_POOLING2D_215_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_215_MAX_POOLING2D_215_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_216_MAX_POOLING2D_216_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_216_MAX_POOLING2D_216_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_203_DENSE_203_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_203_DENSE_203_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_204_DENSE_204_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_204_DENSE_204_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_45_CONCATENATE_45_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_45_CONCATENATE_45_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_243_CONV2D_243_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_243_CONV2D_243_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_217_MAX_POOLING2D_217_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_217_MAX_POOLING2D_217_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_218_MAX_POOLING2D_218_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_218_MAX_POOLING2D_218_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_219_MAX_POOLING2D_219_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_219_MAX_POOLING2D_219_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_23_FLATTEN_23_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_23_FLATTEN_23_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_205_DENSE_205_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_205_DENSE_205_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_206_DENSE_206_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_206_DENSE_206_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_207_DENSE_207_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_207_DENSE_207_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_241_WEIGHT_CONV2D_241_WEIGHT_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_241_WEIGHT_CONV2D_241_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_241_BIAS_CONV2D_241_BIAS_DATA     0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_241_BIAS_CONV2D_241_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_242_WEIGHT_CONV2D_242_WEIGHT_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_242_WEIGHT_CONV2D_242_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_242_BIAS_CONV2D_242_BIAS_DATA     0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_242_BIAS_CONV2D_242_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_203_WEIGHT_DENSE_203_WEIGHT_DATA   0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_203_WEIGHT_DENSE_203_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_203_BIAS_DENSE_203_BIAS_DATA       0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_203_BIAS_DENSE_203_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_204_WEIGHT_DENSE_204_WEIGHT_DATA   0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_204_WEIGHT_DENSE_204_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_204_BIAS_DENSE_204_BIAS_DATA       0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_204_BIAS_DENSE_204_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_243_WEIGHT_CONV2D_243_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_243_WEIGHT_CONV2D_243_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_243_BIAS_CONV2D_243_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_243_BIAS_CONV2D_243_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_205_WEIGHT_DENSE_205_WEIGHT_DATA   0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_205_WEIGHT_DENSE_205_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_205_BIAS_DENSE_205_BIAS_DATA       0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_205_BIAS_DENSE_205_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_206_WEIGHT_DENSE_206_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_206_WEIGHT_DENSE_206_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_206_BIAS_DENSE_206_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_206_BIAS_DENSE_206_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_207_WEIGHT_DENSE_207_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_207_WEIGHT_DENSE_207_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_207_BIAS_DENSE_207_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_207_BIAS_DENSE_207_BIAS_DATA       32

