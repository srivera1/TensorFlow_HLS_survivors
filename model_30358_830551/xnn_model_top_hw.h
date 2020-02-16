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
// 0x028 : Data signal of Conv2d_341_conv2d_341
//         bit 31~0 - Conv2d_341_conv2d_341[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_342_conv2d_342
//         bit 31~0 - Conv2d_342_conv2d_342[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_306_max_pooling2d_306
//         bit 31~0 - Max_pooling2d_306_max_pooling2d_306[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_307_max_pooling2d_307
//         bit 31~0 - Max_pooling2d_307_max_pooling2d_307[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_294_dense_294
//         bit 31~0 - Dense_294_dense_294[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_295_dense_295
//         bit 31~0 - Dense_295_dense_295[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_62_concatenate_62
//         bit 31~0 - Concatenate_62_concatenate_62[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_343_conv2d_343
//         bit 31~0 - Conv2d_343_conv2d_343[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_308_max_pooling2d_308
//         bit 31~0 - Max_pooling2d_308_max_pooling2d_308[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_344_conv2d_344
//         bit 31~0 - Conv2d_344_conv2d_344[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_296_dense_296
//         bit 31~0 - Dense_296_dense_296[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_309_max_pooling2d_309
//         bit 31~0 - Max_pooling2d_309_max_pooling2d_309[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Concatenate_63_concatenate_63
//         bit 31~0 - Concatenate_63_concatenate_63[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_345_conv2d_345
//         bit 31~0 - Conv2d_345_conv2d_345[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_348_conv2d_348
//         bit 31~0 - Conv2d_348_conv2d_348[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Max_pooling2d_310_max_pooling2d_310
//         bit 31~0 - Max_pooling2d_310_max_pooling2d_310[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_312_max_pooling2d_312
//         bit 31~0 - Max_pooling2d_312_max_pooling2d_312[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_297_dense_297
//         bit 31~0 - Dense_297_dense_297[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_299_dense_299
//         bit 31~0 - Dense_299_dense_299[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Max_pooling2d_311_max_pooling2d_311
//         bit 31~0 - Max_pooling2d_311_max_pooling2d_311[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Max_pooling2d_313_max_pooling2d_313
//         bit 31~0 - Max_pooling2d_313_max_pooling2d_313[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_298_dense_298
//         bit 31~0 - Dense_298_dense_298[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_300_dense_300
//         bit 31~0 - Dense_300_dense_300[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Concatenate_64_concatenate_64
//         bit 31~0 - Concatenate_64_concatenate_64[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_301_dense_301
//         bit 31~0 - Dense_301_dense_301[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Concatenate_65_concatenate_65
//         bit 31~0 - Concatenate_65_concatenate_65[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Flatten_35_flatten_35
//         bit 31~0 - Flatten_35_flatten_35[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_302_dense_302
//         bit 31~0 - Dense_302_dense_302[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_303_dense_303
//         bit 31~0 - Dense_303_dense_303[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_304_dense_304
//         bit 31~0 - Dense_304_dense_304[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_341_weight_conv2d_341_weight
//         bit 31~0 - Conv2d_341_weight_conv2d_341_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_341_bias_conv2d_341_bias
//         bit 31~0 - Conv2d_341_bias_conv2d_341_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_342_weight_conv2d_342_weight
//         bit 31~0 - Conv2d_342_weight_conv2d_342_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_342_bias_conv2d_342_bias
//         bit 31~0 - Conv2d_342_bias_conv2d_342_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_294_weight_dense_294_weight
//         bit 31~0 - Dense_294_weight_dense_294_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_294_bias_dense_294_bias
//         bit 31~0 - Dense_294_bias_dense_294_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_295_weight_dense_295_weight
//         bit 31~0 - Dense_295_weight_dense_295_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_295_bias_dense_295_bias
//         bit 31~0 - Dense_295_bias_dense_295_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_343_weight_conv2d_343_weight
//         bit 31~0 - Conv2d_343_weight_conv2d_343_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_343_bias_conv2d_343_bias
//         bit 31~0 - Conv2d_343_bias_conv2d_343_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_344_weight_conv2d_344_weight
//         bit 31~0 - Conv2d_344_weight_conv2d_344_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_344_bias_conv2d_344_bias
//         bit 31~0 - Conv2d_344_bias_conv2d_344_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_296_weight_dense_296_weight
//         bit 31~0 - Dense_296_weight_dense_296_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_296_bias_dense_296_bias
//         bit 31~0 - Dense_296_bias_dense_296_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_345_weight_conv2d_345_weight
//         bit 31~0 - Conv2d_345_weight_conv2d_345_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_345_bias_conv2d_345_bias
//         bit 31~0 - Conv2d_345_bias_conv2d_345_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Conv2d_348_weight_conv2d_348_weight
//         bit 31~0 - Conv2d_348_weight_conv2d_348_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Conv2d_348_bias_conv2d_348_bias
//         bit 31~0 - Conv2d_348_bias_conv2d_348_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_297_weight_dense_297_weight
//         bit 31~0 - Dense_297_weight_dense_297_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_297_bias_dense_297_bias
//         bit 31~0 - Dense_297_bias_dense_297_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_299_weight_dense_299_weight
//         bit 31~0 - Dense_299_weight_dense_299_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_299_bias_dense_299_bias
//         bit 31~0 - Dense_299_bias_dense_299_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_298_weight_dense_298_weight
//         bit 31~0 - Dense_298_weight_dense_298_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_298_bias_dense_298_bias
//         bit 31~0 - Dense_298_bias_dense_298_bias[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_300_weight_dense_300_weight
//         bit 31~0 - Dense_300_weight_dense_300_weight[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_300_bias_dense_300_bias
//         bit 31~0 - Dense_300_bias_dense_300_bias[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_301_weight_dense_301_weight
//         bit 31~0 - Dense_301_weight_dense_301_weight[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_301_bias_dense_301_bias
//         bit 31~0 - Dense_301_bias_dense_301_bias[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of Dense_302_weight_dense_302_weight
//         bit 31~0 - Dense_302_weight_dense_302_weight[31:0] (Read/Write)
// 0x1fc : reserved
// 0x200 : Data signal of Dense_302_bias_dense_302_bias
//         bit 31~0 - Dense_302_bias_dense_302_bias[31:0] (Read/Write)
// 0x204 : reserved
// 0x208 : Data signal of Dense_303_weight_dense_303_weight
//         bit 31~0 - Dense_303_weight_dense_303_weight[31:0] (Read/Write)
// 0x20c : reserved
// 0x210 : Data signal of Dense_303_bias_dense_303_bias
//         bit 31~0 - Dense_303_bias_dense_303_bias[31:0] (Read/Write)
// 0x214 : reserved
// 0x218 : Data signal of Dense_304_weight_dense_304_weight
//         bit 31~0 - Dense_304_weight_dense_304_weight[31:0] (Read/Write)
// 0x21c : reserved
// 0x220 : Data signal of Dense_304_bias_dense_304_bias
//         bit 31~0 - Dense_304_bias_dense_304_bias[31:0] (Read/Write)
// 0x224 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_341_CONV2D_341_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_341_CONV2D_341_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_342_CONV2D_342_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_342_CONV2D_342_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_306_MAX_POOLING2D_306_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_306_MAX_POOLING2D_306_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_307_MAX_POOLING2D_307_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_307_MAX_POOLING2D_307_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_294_DENSE_294_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_294_DENSE_294_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_295_DENSE_295_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_295_DENSE_295_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_62_CONCATENATE_62_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_62_CONCATENATE_62_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_343_CONV2D_343_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_343_CONV2D_343_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_308_MAX_POOLING2D_308_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_308_MAX_POOLING2D_308_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_344_CONV2D_344_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_344_CONV2D_344_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_296_DENSE_296_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_296_DENSE_296_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_309_MAX_POOLING2D_309_DATA 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_309_MAX_POOLING2D_309_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_63_CONCATENATE_63_DATA       0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_63_CONCATENATE_63_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_345_CONV2D_345_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_345_CONV2D_345_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_348_CONV2D_348_DATA               0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_348_CONV2D_348_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_310_MAX_POOLING2D_310_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_310_MAX_POOLING2D_310_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_312_MAX_POOLING2D_312_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_312_MAX_POOLING2D_312_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_297_DENSE_297_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_297_DENSE_297_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_299_DENSE_299_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_299_DENSE_299_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_311_MAX_POOLING2D_311_DATA 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_311_MAX_POOLING2D_311_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_313_MAX_POOLING2D_313_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_313_MAX_POOLING2D_313_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_298_DENSE_298_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_298_DENSE_298_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_300_DENSE_300_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_300_DENSE_300_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_64_CONCATENATE_64_DATA       0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_64_CONCATENATE_64_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_301_DENSE_301_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_301_DENSE_301_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_65_CONCATENATE_65_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_65_CONCATENATE_65_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_35_FLATTEN_35_DATA               0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_35_FLATTEN_35_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_302_DENSE_302_DATA                 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_302_DENSE_302_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_303_DENSE_303_DATA                 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_303_DENSE_303_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_304_DENSE_304_DATA                 0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_304_DENSE_304_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_341_WEIGHT_CONV2D_341_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_341_WEIGHT_CONV2D_341_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_341_BIAS_CONV2D_341_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_341_BIAS_CONV2D_341_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_342_WEIGHT_CONV2D_342_WEIGHT_DATA 0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_342_WEIGHT_CONV2D_342_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_342_BIAS_CONV2D_342_BIAS_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_342_BIAS_CONV2D_342_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_294_WEIGHT_DENSE_294_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_294_WEIGHT_DENSE_294_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_294_BIAS_DENSE_294_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_294_BIAS_DENSE_294_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_295_WEIGHT_DENSE_295_WEIGHT_DATA   0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_295_WEIGHT_DENSE_295_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_295_BIAS_DENSE_295_BIAS_DATA       0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_295_BIAS_DENSE_295_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_343_WEIGHT_CONV2D_343_WEIGHT_DATA 0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_343_WEIGHT_CONV2D_343_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_343_BIAS_CONV2D_343_BIAS_DATA     0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_343_BIAS_CONV2D_343_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_344_WEIGHT_CONV2D_344_WEIGHT_DATA 0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_344_WEIGHT_CONV2D_344_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_344_BIAS_CONV2D_344_BIAS_DATA     0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_344_BIAS_CONV2D_344_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_296_WEIGHT_DENSE_296_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_296_WEIGHT_DENSE_296_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_296_BIAS_DENSE_296_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_296_BIAS_DENSE_296_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_345_WEIGHT_CONV2D_345_WEIGHT_DATA 0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_345_WEIGHT_CONV2D_345_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_345_BIAS_CONV2D_345_BIAS_DATA     0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_345_BIAS_CONV2D_345_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_348_WEIGHT_CONV2D_348_WEIGHT_DATA 0x198
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_348_WEIGHT_CONV2D_348_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_348_BIAS_CONV2D_348_BIAS_DATA     0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_348_BIAS_CONV2D_348_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_297_WEIGHT_DENSE_297_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_297_WEIGHT_DENSE_297_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_297_BIAS_DENSE_297_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_297_BIAS_DENSE_297_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_299_WEIGHT_DENSE_299_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_299_WEIGHT_DENSE_299_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_299_BIAS_DENSE_299_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_299_BIAS_DENSE_299_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_298_WEIGHT_DENSE_298_WEIGHT_DATA   0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_298_WEIGHT_DENSE_298_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_298_BIAS_DENSE_298_BIAS_DATA       0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_298_BIAS_DENSE_298_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_300_WEIGHT_DENSE_300_WEIGHT_DATA   0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_300_WEIGHT_DENSE_300_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_300_BIAS_DENSE_300_BIAS_DATA       0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_300_BIAS_DENSE_300_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_301_WEIGHT_DENSE_301_WEIGHT_DATA   0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_301_WEIGHT_DENSE_301_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_301_BIAS_DENSE_301_BIAS_DATA       0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_301_BIAS_DENSE_301_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_302_WEIGHT_DENSE_302_WEIGHT_DATA   0x1f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_302_WEIGHT_DENSE_302_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_302_BIAS_DENSE_302_BIAS_DATA       0x200
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_302_BIAS_DENSE_302_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_303_WEIGHT_DENSE_303_WEIGHT_DATA   0x208
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_303_WEIGHT_DENSE_303_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_303_BIAS_DENSE_303_BIAS_DATA       0x210
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_303_BIAS_DENSE_303_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_304_WEIGHT_DENSE_304_WEIGHT_DATA   0x218
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_304_WEIGHT_DENSE_304_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_304_BIAS_DENSE_304_BIAS_DATA       0x220
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_304_BIAS_DENSE_304_BIAS_DATA       32

