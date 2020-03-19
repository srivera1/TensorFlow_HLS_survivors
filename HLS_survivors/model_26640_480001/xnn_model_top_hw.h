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
// 0x018 : Data signal of Input2_input2
//         bit 31~0 - Input2_input2[31:0] (Read/Write)
// 0x01c : reserved
// 0x020 : Data signal of Input1_input1
//         bit 31~0 - Input1_input1[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Conv2d_454_conv2d_454
//         bit 31~0 - Conv2d_454_conv2d_454[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_452_conv2d_452
//         bit 31~0 - Conv2d_452_conv2d_452[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_391_max_pooling2d_391
//         bit 31~0 - Max_pooling2d_391_max_pooling2d_391[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_390_max_pooling2d_390
//         bit 31~0 - Max_pooling2d_390_max_pooling2d_390[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_381_dense_381
//         bit 31~0 - Dense_381_dense_381[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_453_conv2d_453
//         bit 31~0 - Conv2d_453_conv2d_453[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_455_conv2d_455
//         bit 31~0 - Conv2d_455_conv2d_455[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Concatenate_83_concatenate_83
//         bit 31~0 - Concatenate_83_concatenate_83[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Conv2d_456_conv2d_456
//         bit 31~0 - Conv2d_456_conv2d_456[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_457_conv2d_457
//         bit 31~0 - Conv2d_457_conv2d_457[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_392_max_pooling2d_392
//         bit 31~0 - Max_pooling2d_392_max_pooling2d_392[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_393_max_pooling2d_393
//         bit 31~0 - Max_pooling2d_393_max_pooling2d_393[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_394_max_pooling2d_394
//         bit 31~0 - Max_pooling2d_394_max_pooling2d_394[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Flatten_44_flatten_44
//         bit 31~0 - Flatten_44_flatten_44[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_382_dense_382
//         bit 31~0 - Dense_382_dense_382[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_383_dense_383
//         bit 31~0 - Dense_383_dense_383[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_454_weight_conv2d_454_weight
//         bit 31~0 - Conv2d_454_weight_conv2d_454_weight[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_454_bias_conv2d_454_bias
//         bit 31~0 - Conv2d_454_bias_conv2d_454_bias[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_452_weight_conv2d_452_weight
//         bit 31~0 - Conv2d_452_weight_conv2d_452_weight[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Conv2d_452_bias_conv2d_452_bias
//         bit 31~0 - Conv2d_452_bias_conv2d_452_bias[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_381_weight_dense_381_weight
//         bit 31~0 - Dense_381_weight_dense_381_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_381_bias_dense_381_bias
//         bit 31~0 - Dense_381_bias_dense_381_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_453_weight_conv2d_453_weight
//         bit 31~0 - Conv2d_453_weight_conv2d_453_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_453_bias_conv2d_453_bias
//         bit 31~0 - Conv2d_453_bias_conv2d_453_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_455_weight_conv2d_455_weight
//         bit 31~0 - Conv2d_455_weight_conv2d_455_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_455_bias_conv2d_455_bias
//         bit 31~0 - Conv2d_455_bias_conv2d_455_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_456_weight_conv2d_456_weight
//         bit 31~0 - Conv2d_456_weight_conv2d_456_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_456_bias_conv2d_456_bias
//         bit 31~0 - Conv2d_456_bias_conv2d_456_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_457_weight_conv2d_457_weight
//         bit 31~0 - Conv2d_457_weight_conv2d_457_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_457_bias_conv2d_457_bias
//         bit 31~0 - Conv2d_457_bias_conv2d_457_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_382_weight_dense_382_weight
//         bit 31~0 - Dense_382_weight_dense_382_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_382_bias_dense_382_bias
//         bit 31~0 - Dense_382_bias_dense_382_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_383_weight_dense_383_weight
//         bit 31~0 - Dense_383_weight_dense_383_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_383_bias_dense_383_bias
//         bit 31~0 - Dense_383_bias_dense_383_bias[31:0] (Read/Write)
// 0x134 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                  0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                      0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                      0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                      0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT2_INPUT2_DATA                       0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT2_INPUT2_DATA                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT1_INPUT1_DATA                       0x020
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT1_INPUT1_DATA                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_454_CONV2D_454_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_454_CONV2D_454_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_452_CONV2D_452_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_452_CONV2D_452_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_391_MAX_POOLING2D_391_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_391_MAX_POOLING2D_391_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_390_MAX_POOLING2D_390_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_390_MAX_POOLING2D_390_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_381_DENSE_381_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_381_DENSE_381_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_453_CONV2D_453_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_453_CONV2D_453_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_455_CONV2D_455_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_455_CONV2D_455_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_83_CONCATENATE_83_DATA       0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_83_CONCATENATE_83_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_456_CONV2D_456_DATA               0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_456_CONV2D_456_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_457_CONV2D_457_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_457_CONV2D_457_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_392_MAX_POOLING2D_392_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_392_MAX_POOLING2D_392_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_393_MAX_POOLING2D_393_DATA 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_393_MAX_POOLING2D_393_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_394_MAX_POOLING2D_394_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_394_MAX_POOLING2D_394_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_44_FLATTEN_44_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_44_FLATTEN_44_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_382_DENSE_382_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_382_DENSE_382_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_383_DENSE_383_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_383_DENSE_383_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_454_WEIGHT_CONV2D_454_WEIGHT_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_454_WEIGHT_CONV2D_454_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_454_BIAS_CONV2D_454_BIAS_DATA     0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_454_BIAS_CONV2D_454_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_452_WEIGHT_CONV2D_452_WEIGHT_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_452_WEIGHT_CONV2D_452_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_452_BIAS_CONV2D_452_BIAS_DATA     0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_452_BIAS_CONV2D_452_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_381_WEIGHT_DENSE_381_WEIGHT_DATA   0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_381_WEIGHT_DENSE_381_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_381_BIAS_DENSE_381_BIAS_DATA       0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_381_BIAS_DENSE_381_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_453_WEIGHT_CONV2D_453_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_453_WEIGHT_CONV2D_453_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_453_BIAS_CONV2D_453_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_453_BIAS_CONV2D_453_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_455_WEIGHT_CONV2D_455_WEIGHT_DATA 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_455_WEIGHT_CONV2D_455_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_455_BIAS_CONV2D_455_BIAS_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_455_BIAS_CONV2D_455_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_456_WEIGHT_CONV2D_456_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_456_WEIGHT_CONV2D_456_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_456_BIAS_CONV2D_456_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_456_BIAS_CONV2D_456_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_457_WEIGHT_CONV2D_457_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_457_WEIGHT_CONV2D_457_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_457_BIAS_CONV2D_457_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_457_BIAS_CONV2D_457_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_382_WEIGHT_DENSE_382_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_382_WEIGHT_DENSE_382_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_382_BIAS_DENSE_382_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_382_BIAS_DENSE_382_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_383_WEIGHT_DENSE_383_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_383_WEIGHT_DENSE_383_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_383_BIAS_DENSE_383_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_383_BIAS_DENSE_383_BIAS_DATA       32

