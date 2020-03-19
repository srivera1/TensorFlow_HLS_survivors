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
// 0x028 : Data signal of Conv2d_280_conv2d_280
//         bit 31~0 - Conv2d_280_conv2d_280[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_281_conv2d_281
//         bit 31~0 - Conv2d_281_conv2d_281[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_246_max_pooling2d_246
//         bit 31~0 - Max_pooling2d_246_max_pooling2d_246[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_247_max_pooling2d_247
//         bit 31~0 - Max_pooling2d_247_max_pooling2d_247[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_236_dense_236
//         bit 31~0 - Dense_236_dense_236[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_237_dense_237
//         bit 31~0 - Dense_237_dense_237[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_51_concatenate_51
//         bit 31~0 - Concatenate_51_concatenate_51[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_282_conv2d_282
//         bit 31~0 - Conv2d_282_conv2d_282[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_248_max_pooling2d_248
//         bit 31~0 - Max_pooling2d_248_max_pooling2d_248[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_238_dense_238
//         bit 31~0 - Dense_238_dense_238[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_283_conv2d_283
//         bit 31~0 - Conv2d_283_conv2d_283[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_284_conv2d_284
//         bit 31~0 - Conv2d_284_conv2d_284[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_249_max_pooling2d_249
//         bit 31~0 - Max_pooling2d_249_max_pooling2d_249[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_239_dense_239
//         bit 31~0 - Dense_239_dense_239[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_240_dense_240
//         bit 31~0 - Dense_240_dense_240[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_241_dense_241
//         bit 31~0 - Dense_241_dense_241[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Concatenate_52_concatenate_52
//         bit 31~0 - Concatenate_52_concatenate_52[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Flatten_27_flatten_27
//         bit 31~0 - Flatten_27_flatten_27[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_242_dense_242
//         bit 31~0 - Dense_242_dense_242[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_243_dense_243
//         bit 31~0 - Dense_243_dense_243[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_280_weight_conv2d_280_weight
//         bit 31~0 - Conv2d_280_weight_conv2d_280_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_280_bias_conv2d_280_bias
//         bit 31~0 - Conv2d_280_bias_conv2d_280_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_281_weight_conv2d_281_weight
//         bit 31~0 - Conv2d_281_weight_conv2d_281_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_281_bias_conv2d_281_bias
//         bit 31~0 - Conv2d_281_bias_conv2d_281_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_236_weight_dense_236_weight
//         bit 31~0 - Dense_236_weight_dense_236_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_236_bias_dense_236_bias
//         bit 31~0 - Dense_236_bias_dense_236_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_237_weight_dense_237_weight
//         bit 31~0 - Dense_237_weight_dense_237_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_237_bias_dense_237_bias
//         bit 31~0 - Dense_237_bias_dense_237_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_282_weight_conv2d_282_weight
//         bit 31~0 - Conv2d_282_weight_conv2d_282_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_282_bias_conv2d_282_bias
//         bit 31~0 - Conv2d_282_bias_conv2d_282_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_238_weight_dense_238_weight
//         bit 31~0 - Dense_238_weight_dense_238_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_238_bias_dense_238_bias
//         bit 31~0 - Dense_238_bias_dense_238_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_283_weight_conv2d_283_weight
//         bit 31~0 - Conv2d_283_weight_conv2d_283_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_283_bias_conv2d_283_bias
//         bit 31~0 - Conv2d_283_bias_conv2d_283_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_284_weight_conv2d_284_weight
//         bit 31~0 - Conv2d_284_weight_conv2d_284_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_284_bias_conv2d_284_bias
//         bit 31~0 - Conv2d_284_bias_conv2d_284_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_239_weight_dense_239_weight
//         bit 31~0 - Dense_239_weight_dense_239_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_239_bias_dense_239_bias
//         bit 31~0 - Dense_239_bias_dense_239_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_240_weight_dense_240_weight
//         bit 31~0 - Dense_240_weight_dense_240_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_240_bias_dense_240_bias
//         bit 31~0 - Dense_240_bias_dense_240_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_241_weight_dense_241_weight
//         bit 31~0 - Dense_241_weight_dense_241_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_241_bias_dense_241_bias
//         bit 31~0 - Dense_241_bias_dense_241_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_242_weight_dense_242_weight
//         bit 31~0 - Dense_242_weight_dense_242_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_242_bias_dense_242_bias
//         bit 31~0 - Dense_242_bias_dense_242_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_243_weight_dense_243_weight
//         bit 31~0 - Dense_243_weight_dense_243_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_243_bias_dense_243_bias
//         bit 31~0 - Dense_243_bias_dense_243_bias[31:0] (Read/Write)
// 0x194 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_280_CONV2D_280_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_280_CONV2D_280_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_281_CONV2D_281_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_281_CONV2D_281_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_246_MAX_POOLING2D_246_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_246_MAX_POOLING2D_246_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_247_MAX_POOLING2D_247_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_247_MAX_POOLING2D_247_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_236_DENSE_236_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_236_DENSE_236_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_237_DENSE_237_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_237_DENSE_237_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_51_CONCATENATE_51_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_51_CONCATENATE_51_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_282_CONV2D_282_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_282_CONV2D_282_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_248_MAX_POOLING2D_248_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_248_MAX_POOLING2D_248_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_238_DENSE_238_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_238_DENSE_238_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_283_CONV2D_283_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_283_CONV2D_283_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_284_CONV2D_284_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_284_CONV2D_284_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_249_MAX_POOLING2D_249_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_249_MAX_POOLING2D_249_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_239_DENSE_239_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_239_DENSE_239_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_240_DENSE_240_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_240_DENSE_240_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_241_DENSE_241_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_241_DENSE_241_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_52_CONCATENATE_52_DATA       0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_52_CONCATENATE_52_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_27_FLATTEN_27_DATA               0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_27_FLATTEN_27_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_242_DENSE_242_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_242_DENSE_242_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_243_DENSE_243_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_243_DENSE_243_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_280_WEIGHT_CONV2D_280_WEIGHT_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_280_WEIGHT_CONV2D_280_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_280_BIAS_CONV2D_280_BIAS_DATA     0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_280_BIAS_CONV2D_280_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_281_WEIGHT_CONV2D_281_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_281_WEIGHT_CONV2D_281_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_281_BIAS_CONV2D_281_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_281_BIAS_CONV2D_281_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_236_WEIGHT_DENSE_236_WEIGHT_DATA   0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_236_WEIGHT_DENSE_236_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_236_BIAS_DENSE_236_BIAS_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_236_BIAS_DENSE_236_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_237_WEIGHT_DENSE_237_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_237_WEIGHT_DENSE_237_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_237_BIAS_DENSE_237_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_237_BIAS_DENSE_237_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_282_WEIGHT_CONV2D_282_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_282_WEIGHT_CONV2D_282_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_282_BIAS_CONV2D_282_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_282_BIAS_CONV2D_282_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_238_WEIGHT_DENSE_238_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_238_WEIGHT_DENSE_238_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_238_BIAS_DENSE_238_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_238_BIAS_DENSE_238_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_283_WEIGHT_CONV2D_283_WEIGHT_DATA 0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_283_WEIGHT_CONV2D_283_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_283_BIAS_CONV2D_283_BIAS_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_283_BIAS_CONV2D_283_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_284_WEIGHT_CONV2D_284_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_284_WEIGHT_CONV2D_284_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_284_BIAS_CONV2D_284_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_284_BIAS_CONV2D_284_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_239_WEIGHT_DENSE_239_WEIGHT_DATA   0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_239_WEIGHT_DENSE_239_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_239_BIAS_DENSE_239_BIAS_DATA       0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_239_BIAS_DENSE_239_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_240_WEIGHT_DENSE_240_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_240_WEIGHT_DENSE_240_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_240_BIAS_DENSE_240_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_240_BIAS_DENSE_240_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_241_WEIGHT_DENSE_241_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_241_WEIGHT_DENSE_241_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_241_BIAS_DENSE_241_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_241_BIAS_DENSE_241_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_242_WEIGHT_DENSE_242_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_242_WEIGHT_DENSE_242_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_242_BIAS_DENSE_242_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_242_BIAS_DENSE_242_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_243_WEIGHT_DENSE_243_WEIGHT_DATA   0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_243_WEIGHT_DENSE_243_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_243_BIAS_DENSE_243_BIAS_DATA       0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_243_BIAS_DENSE_243_BIAS_DATA       32

