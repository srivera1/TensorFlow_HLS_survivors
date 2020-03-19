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
// 0x028 : Data signal of Conv2d_364_conv2d_364
//         bit 31~0 - Conv2d_364_conv2d_364[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_367_conv2d_367
//         bit 31~0 - Conv2d_367_conv2d_367[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_323_max_pooling2d_323
//         bit 31~0 - Max_pooling2d_323_max_pooling2d_323[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_325_max_pooling2d_325
//         bit 31~0 - Max_pooling2d_325_max_pooling2d_325[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_311_dense_311
//         bit 31~0 - Dense_311_dense_311[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_313_dense_313
//         bit 31~0 - Dense_313_dense_313[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_365_conv2d_365
//         bit 31~0 - Conv2d_365_conv2d_365[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_368_conv2d_368
//         bit 31~0 - Conv2d_368_conv2d_368[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_324_max_pooling2d_324
//         bit 31~0 - Max_pooling2d_324_max_pooling2d_324[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_326_max_pooling2d_326
//         bit 31~0 - Max_pooling2d_326_max_pooling2d_326[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_312_dense_312
//         bit 31~0 - Dense_312_dense_312[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_314_dense_314
//         bit 31~0 - Dense_314_dense_314[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_366_conv2d_366
//         bit 31~0 - Conv2d_366_conv2d_366[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_369_conv2d_369
//         bit 31~0 - Conv2d_369_conv2d_369[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Concatenate_67_concatenate_67
//         bit 31~0 - Concatenate_67_concatenate_67[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_370_conv2d_370
//         bit 31~0 - Conv2d_370_conv2d_370[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_372_conv2d_372
//         bit 31~0 - Conv2d_372_conv2d_372[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Max_pooling2d_327_max_pooling2d_327
//         bit 31~0 - Max_pooling2d_327_max_pooling2d_327[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Max_pooling2d_328_max_pooling2d_328
//         bit 31~0 - Max_pooling2d_328_max_pooling2d_328[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_315_dense_315
//         bit 31~0 - Dense_315_dense_315[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_316_dense_316
//         bit 31~0 - Dense_316_dense_316[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Concatenate_68_concatenate_68
//         bit 31~0 - Concatenate_68_concatenate_68[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Flatten_37_flatten_37
//         bit 31~0 - Flatten_37_flatten_37[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_317_dense_317
//         bit 31~0 - Dense_317_dense_317[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_318_dense_318
//         bit 31~0 - Dense_318_dense_318[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_319_dense_319
//         bit 31~0 - Dense_319_dense_319[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_364_weight_conv2d_364_weight
//         bit 31~0 - Conv2d_364_weight_conv2d_364_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_364_bias_conv2d_364_bias
//         bit 31~0 - Conv2d_364_bias_conv2d_364_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_367_weight_conv2d_367_weight
//         bit 31~0 - Conv2d_367_weight_conv2d_367_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_367_bias_conv2d_367_bias
//         bit 31~0 - Conv2d_367_bias_conv2d_367_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_311_weight_dense_311_weight
//         bit 31~0 - Dense_311_weight_dense_311_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_311_bias_dense_311_bias
//         bit 31~0 - Dense_311_bias_dense_311_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_313_weight_dense_313_weight
//         bit 31~0 - Dense_313_weight_dense_313_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_313_bias_dense_313_bias
//         bit 31~0 - Dense_313_bias_dense_313_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_365_weight_conv2d_365_weight
//         bit 31~0 - Conv2d_365_weight_conv2d_365_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_365_bias_conv2d_365_bias
//         bit 31~0 - Conv2d_365_bias_conv2d_365_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_368_weight_conv2d_368_weight
//         bit 31~0 - Conv2d_368_weight_conv2d_368_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_368_bias_conv2d_368_bias
//         bit 31~0 - Conv2d_368_bias_conv2d_368_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_312_weight_dense_312_weight
//         bit 31~0 - Dense_312_weight_dense_312_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_312_bias_dense_312_bias
//         bit 31~0 - Dense_312_bias_dense_312_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_314_weight_dense_314_weight
//         bit 31~0 - Dense_314_weight_dense_314_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_314_bias_dense_314_bias
//         bit 31~0 - Dense_314_bias_dense_314_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_366_weight_conv2d_366_weight
//         bit 31~0 - Conv2d_366_weight_conv2d_366_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_366_bias_conv2d_366_bias
//         bit 31~0 - Conv2d_366_bias_conv2d_366_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_369_weight_conv2d_369_weight
//         bit 31~0 - Conv2d_369_weight_conv2d_369_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_369_bias_conv2d_369_bias
//         bit 31~0 - Conv2d_369_bias_conv2d_369_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Conv2d_370_weight_conv2d_370_weight
//         bit 31~0 - Conv2d_370_weight_conv2d_370_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Conv2d_370_bias_conv2d_370_bias
//         bit 31~0 - Conv2d_370_bias_conv2d_370_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Conv2d_372_weight_conv2d_372_weight
//         bit 31~0 - Conv2d_372_weight_conv2d_372_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Conv2d_372_bias_conv2d_372_bias
//         bit 31~0 - Conv2d_372_bias_conv2d_372_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_315_weight_dense_315_weight
//         bit 31~0 - Dense_315_weight_dense_315_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_315_bias_dense_315_bias
//         bit 31~0 - Dense_315_bias_dense_315_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_316_weight_dense_316_weight
//         bit 31~0 - Dense_316_weight_dense_316_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_316_bias_dense_316_bias
//         bit 31~0 - Dense_316_bias_dense_316_bias[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_317_weight_dense_317_weight
//         bit 31~0 - Dense_317_weight_dense_317_weight[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_317_bias_dense_317_bias
//         bit 31~0 - Dense_317_bias_dense_317_bias[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_318_weight_dense_318_weight
//         bit 31~0 - Dense_318_weight_dense_318_weight[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_318_bias_dense_318_bias
//         bit 31~0 - Dense_318_bias_dense_318_bias[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of Dense_319_weight_dense_319_weight
//         bit 31~0 - Dense_319_weight_dense_319_weight[31:0] (Read/Write)
// 0x1fc : reserved
// 0x200 : Data signal of Dense_319_bias_dense_319_bias
//         bit 31~0 - Dense_319_bias_dense_319_bias[31:0] (Read/Write)
// 0x204 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_364_CONV2D_364_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_364_CONV2D_364_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_367_CONV2D_367_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_367_CONV2D_367_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_323_MAX_POOLING2D_323_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_323_MAX_POOLING2D_323_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_325_MAX_POOLING2D_325_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_325_MAX_POOLING2D_325_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_311_DENSE_311_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_311_DENSE_311_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_313_DENSE_313_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_313_DENSE_313_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_365_CONV2D_365_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_365_CONV2D_365_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_368_CONV2D_368_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_368_CONV2D_368_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_324_MAX_POOLING2D_324_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_324_MAX_POOLING2D_324_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_326_MAX_POOLING2D_326_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_326_MAX_POOLING2D_326_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_312_DENSE_312_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_312_DENSE_312_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_314_DENSE_314_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_314_DENSE_314_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_366_CONV2D_366_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_366_CONV2D_366_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_369_CONV2D_369_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_369_CONV2D_369_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_67_CONCATENATE_67_DATA       0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_67_CONCATENATE_67_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_370_CONV2D_370_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_370_CONV2D_370_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_372_CONV2D_372_DATA               0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_372_CONV2D_372_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_327_MAX_POOLING2D_327_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_327_MAX_POOLING2D_327_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_328_MAX_POOLING2D_328_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_328_MAX_POOLING2D_328_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_315_DENSE_315_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_315_DENSE_315_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_316_DENSE_316_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_316_DENSE_316_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_68_CONCATENATE_68_DATA       0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_68_CONCATENATE_68_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_37_FLATTEN_37_DATA               0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_37_FLATTEN_37_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_317_DENSE_317_DATA                 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_317_DENSE_317_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_318_DENSE_318_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_318_DENSE_318_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_319_DENSE_319_DATA                 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_319_DENSE_319_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_364_WEIGHT_CONV2D_364_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_364_WEIGHT_CONV2D_364_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_364_BIAS_CONV2D_364_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_364_BIAS_CONV2D_364_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_367_WEIGHT_CONV2D_367_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_367_WEIGHT_CONV2D_367_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_367_BIAS_CONV2D_367_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_367_BIAS_CONV2D_367_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_311_WEIGHT_DENSE_311_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_311_WEIGHT_DENSE_311_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_311_BIAS_DENSE_311_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_311_BIAS_DENSE_311_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_313_WEIGHT_DENSE_313_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_313_WEIGHT_DENSE_313_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_313_BIAS_DENSE_313_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_313_BIAS_DENSE_313_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_365_WEIGHT_CONV2D_365_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_365_WEIGHT_CONV2D_365_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_365_BIAS_CONV2D_365_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_365_BIAS_CONV2D_365_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_368_WEIGHT_CONV2D_368_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_368_WEIGHT_CONV2D_368_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_368_BIAS_CONV2D_368_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_368_BIAS_CONV2D_368_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_312_WEIGHT_DENSE_312_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_312_WEIGHT_DENSE_312_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_312_BIAS_DENSE_312_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_312_BIAS_DENSE_312_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_314_WEIGHT_DENSE_314_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_314_WEIGHT_DENSE_314_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_314_BIAS_DENSE_314_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_314_BIAS_DENSE_314_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_366_WEIGHT_CONV2D_366_WEIGHT_DATA 0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_366_WEIGHT_CONV2D_366_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_366_BIAS_CONV2D_366_BIAS_DATA     0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_366_BIAS_CONV2D_366_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_369_WEIGHT_CONV2D_369_WEIGHT_DATA 0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_369_WEIGHT_CONV2D_369_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_369_BIAS_CONV2D_369_BIAS_DATA     0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_369_BIAS_CONV2D_369_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_370_WEIGHT_CONV2D_370_WEIGHT_DATA 0x198
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_370_WEIGHT_CONV2D_370_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_370_BIAS_CONV2D_370_BIAS_DATA     0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_370_BIAS_CONV2D_370_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_372_WEIGHT_CONV2D_372_WEIGHT_DATA 0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_372_WEIGHT_CONV2D_372_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_372_BIAS_CONV2D_372_BIAS_DATA     0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_372_BIAS_CONV2D_372_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_315_WEIGHT_DENSE_315_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_315_WEIGHT_DENSE_315_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_315_BIAS_DENSE_315_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_315_BIAS_DENSE_315_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_316_WEIGHT_DENSE_316_WEIGHT_DATA   0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_316_WEIGHT_DENSE_316_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_316_BIAS_DENSE_316_BIAS_DATA       0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_316_BIAS_DENSE_316_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_317_WEIGHT_DENSE_317_WEIGHT_DATA   0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_317_WEIGHT_DENSE_317_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_317_BIAS_DENSE_317_BIAS_DATA       0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_317_BIAS_DENSE_317_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_318_WEIGHT_DENSE_318_WEIGHT_DATA   0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_318_WEIGHT_DENSE_318_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_318_BIAS_DENSE_318_BIAS_DATA       0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_318_BIAS_DENSE_318_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_319_WEIGHT_DENSE_319_WEIGHT_DATA   0x1f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_319_WEIGHT_DENSE_319_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_319_BIAS_DENSE_319_BIAS_DATA       0x200
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_319_BIAS_DENSE_319_BIAS_DATA       32

