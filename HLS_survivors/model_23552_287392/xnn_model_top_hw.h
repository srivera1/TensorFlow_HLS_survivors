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
// 0x028 : Data signal of Conv2d_375_conv2d_375
//         bit 31~0 - Conv2d_375_conv2d_375[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_377_conv2d_377
//         bit 31~0 - Conv2d_377_conv2d_377[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_330_max_pooling2d_330
//         bit 31~0 - Max_pooling2d_330_max_pooling2d_330[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_332_max_pooling2d_332
//         bit 31~0 - Max_pooling2d_332_max_pooling2d_332[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_320_dense_320
//         bit 31~0 - Dense_320_dense_320[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_322_dense_322
//         bit 31~0 - Dense_322_dense_322[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_376_conv2d_376
//         bit 31~0 - Conv2d_376_conv2d_376[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_378_conv2d_378
//         bit 31~0 - Conv2d_378_conv2d_378[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_331_max_pooling2d_331
//         bit 31~0 - Max_pooling2d_331_max_pooling2d_331[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_333_max_pooling2d_333
//         bit 31~0 - Max_pooling2d_333_max_pooling2d_333[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_321_dense_321
//         bit 31~0 - Dense_321_dense_321[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_323_dense_323
//         bit 31~0 - Dense_323_dense_323[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Concatenate_69_concatenate_69
//         bit 31~0 - Concatenate_69_concatenate_69[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_379_conv2d_379
//         bit 31~0 - Conv2d_379_conv2d_379[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_334_max_pooling2d_334
//         bit 31~0 - Max_pooling2d_334_max_pooling2d_334[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_324_dense_324
//         bit 31~0 - Dense_324_dense_324[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_335_max_pooling2d_335
//         bit 31~0 - Max_pooling2d_335_max_pooling2d_335[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Flatten_38_flatten_38
//         bit 31~0 - Flatten_38_flatten_38[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_325_dense_325
//         bit 31~0 - Dense_325_dense_325[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_326_dense_326
//         bit 31~0 - Dense_326_dense_326[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_375_weight_conv2d_375_weight
//         bit 31~0 - Conv2d_375_weight_conv2d_375_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_375_bias_conv2d_375_bias
//         bit 31~0 - Conv2d_375_bias_conv2d_375_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_377_weight_conv2d_377_weight
//         bit 31~0 - Conv2d_377_weight_conv2d_377_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_377_bias_conv2d_377_bias
//         bit 31~0 - Conv2d_377_bias_conv2d_377_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_320_weight_dense_320_weight
//         bit 31~0 - Dense_320_weight_dense_320_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_320_bias_dense_320_bias
//         bit 31~0 - Dense_320_bias_dense_320_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_322_weight_dense_322_weight
//         bit 31~0 - Dense_322_weight_dense_322_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_322_bias_dense_322_bias
//         bit 31~0 - Dense_322_bias_dense_322_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_376_weight_conv2d_376_weight
//         bit 31~0 - Conv2d_376_weight_conv2d_376_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_376_bias_conv2d_376_bias
//         bit 31~0 - Conv2d_376_bias_conv2d_376_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_378_weight_conv2d_378_weight
//         bit 31~0 - Conv2d_378_weight_conv2d_378_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_378_bias_conv2d_378_bias
//         bit 31~0 - Conv2d_378_bias_conv2d_378_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_321_weight_dense_321_weight
//         bit 31~0 - Dense_321_weight_dense_321_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_321_bias_dense_321_bias
//         bit 31~0 - Dense_321_bias_dense_321_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_323_weight_dense_323_weight
//         bit 31~0 - Dense_323_weight_dense_323_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_323_bias_dense_323_bias
//         bit 31~0 - Dense_323_bias_dense_323_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_379_weight_conv2d_379_weight
//         bit 31~0 - Conv2d_379_weight_conv2d_379_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_379_bias_conv2d_379_bias
//         bit 31~0 - Conv2d_379_bias_conv2d_379_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_324_weight_dense_324_weight
//         bit 31~0 - Dense_324_weight_dense_324_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_324_bias_dense_324_bias
//         bit 31~0 - Dense_324_bias_dense_324_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_325_weight_dense_325_weight
//         bit 31~0 - Dense_325_weight_dense_325_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_325_bias_dense_325_bias
//         bit 31~0 - Dense_325_bias_dense_325_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_326_weight_dense_326_weight
//         bit 31~0 - Dense_326_weight_dense_326_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_326_bias_dense_326_bias
//         bit 31~0 - Dense_326_bias_dense_326_bias[31:0] (Read/Write)
// 0x184 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_375_CONV2D_375_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_375_CONV2D_375_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_377_CONV2D_377_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_377_CONV2D_377_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_330_MAX_POOLING2D_330_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_330_MAX_POOLING2D_330_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_332_MAX_POOLING2D_332_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_332_MAX_POOLING2D_332_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_320_DENSE_320_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_320_DENSE_320_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_322_DENSE_322_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_322_DENSE_322_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_376_CONV2D_376_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_376_CONV2D_376_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_378_CONV2D_378_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_378_CONV2D_378_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_331_MAX_POOLING2D_331_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_331_MAX_POOLING2D_331_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_333_MAX_POOLING2D_333_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_333_MAX_POOLING2D_333_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_321_DENSE_321_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_321_DENSE_321_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_323_DENSE_323_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_323_DENSE_323_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_69_CONCATENATE_69_DATA       0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_69_CONCATENATE_69_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_379_CONV2D_379_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_379_CONV2D_379_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_334_MAX_POOLING2D_334_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_334_MAX_POOLING2D_334_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_324_DENSE_324_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_324_DENSE_324_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_335_MAX_POOLING2D_335_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_335_MAX_POOLING2D_335_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_38_FLATTEN_38_DATA               0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_38_FLATTEN_38_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_325_DENSE_325_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_325_DENSE_325_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_326_DENSE_326_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_326_DENSE_326_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_375_WEIGHT_CONV2D_375_WEIGHT_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_375_WEIGHT_CONV2D_375_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_375_BIAS_CONV2D_375_BIAS_DATA     0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_375_BIAS_CONV2D_375_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_377_WEIGHT_CONV2D_377_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_377_WEIGHT_CONV2D_377_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_377_BIAS_CONV2D_377_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_377_BIAS_CONV2D_377_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_320_WEIGHT_DENSE_320_WEIGHT_DATA   0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_320_WEIGHT_DENSE_320_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_320_BIAS_DENSE_320_BIAS_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_320_BIAS_DENSE_320_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_322_WEIGHT_DENSE_322_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_322_WEIGHT_DENSE_322_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_322_BIAS_DENSE_322_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_322_BIAS_DENSE_322_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_376_WEIGHT_CONV2D_376_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_376_WEIGHT_CONV2D_376_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_376_BIAS_CONV2D_376_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_376_BIAS_CONV2D_376_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_378_WEIGHT_CONV2D_378_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_378_WEIGHT_CONV2D_378_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_378_BIAS_CONV2D_378_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_378_BIAS_CONV2D_378_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_321_WEIGHT_DENSE_321_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_321_WEIGHT_DENSE_321_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_321_BIAS_DENSE_321_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_321_BIAS_DENSE_321_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_323_WEIGHT_DENSE_323_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_323_WEIGHT_DENSE_323_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_323_BIAS_DENSE_323_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_323_BIAS_DENSE_323_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_379_WEIGHT_CONV2D_379_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_379_WEIGHT_CONV2D_379_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_379_BIAS_CONV2D_379_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_379_BIAS_CONV2D_379_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_324_WEIGHT_DENSE_324_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_324_WEIGHT_DENSE_324_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_324_BIAS_DENSE_324_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_324_BIAS_DENSE_324_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_325_WEIGHT_DENSE_325_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_325_WEIGHT_DENSE_325_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_325_BIAS_DENSE_325_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_325_BIAS_DENSE_325_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_326_WEIGHT_DENSE_326_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_326_WEIGHT_DENSE_326_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_326_BIAS_DENSE_326_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_326_BIAS_DENSE_326_BIAS_DATA       32

