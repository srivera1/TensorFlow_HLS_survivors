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
// 0x028 : Data signal of Conv2d_330_conv2d_330
//         bit 31~0 - Conv2d_330_conv2d_330[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_332_conv2d_332
//         bit 31~0 - Conv2d_332_conv2d_332[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_297_max_pooling2d_297
//         bit 31~0 - Max_pooling2d_297_max_pooling2d_297[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_299_max_pooling2d_299
//         bit 31~0 - Max_pooling2d_299_max_pooling2d_299[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_285_dense_285
//         bit 31~0 - Dense_285_dense_285[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_287_dense_287
//         bit 31~0 - Dense_287_dense_287[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_331_conv2d_331
//         bit 31~0 - Conv2d_331_conv2d_331[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_333_conv2d_333
//         bit 31~0 - Conv2d_333_conv2d_333[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_298_max_pooling2d_298
//         bit 31~0 - Max_pooling2d_298_max_pooling2d_298[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_300_max_pooling2d_300
//         bit 31~0 - Max_pooling2d_300_max_pooling2d_300[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_286_dense_286
//         bit 31~0 - Dense_286_dense_286[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_288_dense_288
//         bit 31~0 - Dense_288_dense_288[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Concatenate_60_concatenate_60
//         bit 31~0 - Concatenate_60_concatenate_60[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_337_conv2d_337
//         bit 31~0 - Conv2d_337_conv2d_337[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_334_conv2d_334
//         bit 31~0 - Conv2d_334_conv2d_334[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Max_pooling2d_303_max_pooling2d_303
//         bit 31~0 - Max_pooling2d_303_max_pooling2d_303[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_301_max_pooling2d_301
//         bit 31~0 - Max_pooling2d_301_max_pooling2d_301[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_290_dense_290
//         bit 31~0 - Dense_290_dense_290[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Max_pooling2d_302_max_pooling2d_302
//         bit 31~0 - Max_pooling2d_302_max_pooling2d_302[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Max_pooling2d_304_max_pooling2d_304
//         bit 31~0 - Max_pooling2d_304_max_pooling2d_304[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_289_dense_289
//         bit 31~0 - Dense_289_dense_289[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_291_dense_291
//         bit 31~0 - Dense_291_dense_291[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Concatenate_61_concatenate_61
//         bit 31~0 - Concatenate_61_concatenate_61[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Flatten_34_flatten_34
//         bit 31~0 - Flatten_34_flatten_34[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_292_dense_292
//         bit 31~0 - Dense_292_dense_292[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_293_dense_293
//         bit 31~0 - Dense_293_dense_293[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_330_weight_conv2d_330_weight
//         bit 31~0 - Conv2d_330_weight_conv2d_330_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_330_bias_conv2d_330_bias
//         bit 31~0 - Conv2d_330_bias_conv2d_330_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_332_weight_conv2d_332_weight
//         bit 31~0 - Conv2d_332_weight_conv2d_332_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_332_bias_conv2d_332_bias
//         bit 31~0 - Conv2d_332_bias_conv2d_332_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_285_weight_dense_285_weight
//         bit 31~0 - Dense_285_weight_dense_285_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_285_bias_dense_285_bias
//         bit 31~0 - Dense_285_bias_dense_285_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_287_weight_dense_287_weight
//         bit 31~0 - Dense_287_weight_dense_287_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_287_bias_dense_287_bias
//         bit 31~0 - Dense_287_bias_dense_287_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_331_weight_conv2d_331_weight
//         bit 31~0 - Conv2d_331_weight_conv2d_331_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_331_bias_conv2d_331_bias
//         bit 31~0 - Conv2d_331_bias_conv2d_331_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_333_weight_conv2d_333_weight
//         bit 31~0 - Conv2d_333_weight_conv2d_333_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_333_bias_conv2d_333_bias
//         bit 31~0 - Conv2d_333_bias_conv2d_333_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_286_weight_dense_286_weight
//         bit 31~0 - Dense_286_weight_dense_286_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_286_bias_dense_286_bias
//         bit 31~0 - Dense_286_bias_dense_286_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_288_weight_dense_288_weight
//         bit 31~0 - Dense_288_weight_dense_288_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_288_bias_dense_288_bias
//         bit 31~0 - Dense_288_bias_dense_288_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_337_weight_conv2d_337_weight
//         bit 31~0 - Conv2d_337_weight_conv2d_337_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_337_bias_conv2d_337_bias
//         bit 31~0 - Conv2d_337_bias_conv2d_337_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_334_weight_conv2d_334_weight
//         bit 31~0 - Conv2d_334_weight_conv2d_334_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_334_bias_conv2d_334_bias
//         bit 31~0 - Conv2d_334_bias_conv2d_334_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_290_weight_dense_290_weight
//         bit 31~0 - Dense_290_weight_dense_290_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_290_bias_dense_290_bias
//         bit 31~0 - Dense_290_bias_dense_290_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_289_weight_dense_289_weight
//         bit 31~0 - Dense_289_weight_dense_289_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_289_bias_dense_289_bias
//         bit 31~0 - Dense_289_bias_dense_289_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_291_weight_dense_291_weight
//         bit 31~0 - Dense_291_weight_dense_291_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_291_bias_dense_291_bias
//         bit 31~0 - Dense_291_bias_dense_291_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_292_weight_dense_292_weight
//         bit 31~0 - Dense_292_weight_dense_292_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_292_bias_dense_292_bias
//         bit 31~0 - Dense_292_bias_dense_292_bias[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_293_weight_dense_293_weight
//         bit 31~0 - Dense_293_weight_dense_293_weight[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_293_bias_dense_293_bias
//         bit 31~0 - Dense_293_bias_dense_293_bias[31:0] (Read/Write)
// 0x1e4 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_330_CONV2D_330_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_330_CONV2D_330_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_332_CONV2D_332_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_332_CONV2D_332_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_297_MAX_POOLING2D_297_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_297_MAX_POOLING2D_297_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_299_MAX_POOLING2D_299_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_299_MAX_POOLING2D_299_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_285_DENSE_285_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_285_DENSE_285_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_287_DENSE_287_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_287_DENSE_287_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_331_CONV2D_331_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_331_CONV2D_331_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_333_CONV2D_333_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_333_CONV2D_333_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_298_MAX_POOLING2D_298_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_298_MAX_POOLING2D_298_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_300_MAX_POOLING2D_300_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_300_MAX_POOLING2D_300_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_286_DENSE_286_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_286_DENSE_286_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_288_DENSE_288_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_288_DENSE_288_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_60_CONCATENATE_60_DATA       0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_60_CONCATENATE_60_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_337_CONV2D_337_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_337_CONV2D_337_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_334_CONV2D_334_DATA               0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_334_CONV2D_334_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_303_MAX_POOLING2D_303_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_303_MAX_POOLING2D_303_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_301_MAX_POOLING2D_301_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_301_MAX_POOLING2D_301_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_290_DENSE_290_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_290_DENSE_290_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_302_MAX_POOLING2D_302_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_302_MAX_POOLING2D_302_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_304_MAX_POOLING2D_304_DATA 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_304_MAX_POOLING2D_304_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_289_DENSE_289_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_289_DENSE_289_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_291_DENSE_291_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_291_DENSE_291_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_61_CONCATENATE_61_DATA       0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_61_CONCATENATE_61_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_34_FLATTEN_34_DATA               0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_34_FLATTEN_34_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_292_DENSE_292_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_292_DENSE_292_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_293_DENSE_293_DATA                 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_293_DENSE_293_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_330_WEIGHT_CONV2D_330_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_330_WEIGHT_CONV2D_330_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_330_BIAS_CONV2D_330_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_330_BIAS_CONV2D_330_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_332_WEIGHT_CONV2D_332_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_332_WEIGHT_CONV2D_332_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_332_BIAS_CONV2D_332_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_332_BIAS_CONV2D_332_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_285_WEIGHT_DENSE_285_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_285_WEIGHT_DENSE_285_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_285_BIAS_DENSE_285_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_285_BIAS_DENSE_285_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_287_WEIGHT_DENSE_287_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_287_WEIGHT_DENSE_287_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_287_BIAS_DENSE_287_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_287_BIAS_DENSE_287_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_331_WEIGHT_CONV2D_331_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_331_WEIGHT_CONV2D_331_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_331_BIAS_CONV2D_331_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_331_BIAS_CONV2D_331_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_333_WEIGHT_CONV2D_333_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_333_WEIGHT_CONV2D_333_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_333_BIAS_CONV2D_333_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_333_BIAS_CONV2D_333_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_286_WEIGHT_DENSE_286_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_286_WEIGHT_DENSE_286_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_286_BIAS_DENSE_286_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_286_BIAS_DENSE_286_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_288_WEIGHT_DENSE_288_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_288_WEIGHT_DENSE_288_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_288_BIAS_DENSE_288_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_288_BIAS_DENSE_288_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_337_WEIGHT_CONV2D_337_WEIGHT_DATA 0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_337_WEIGHT_CONV2D_337_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_337_BIAS_CONV2D_337_BIAS_DATA     0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_337_BIAS_CONV2D_337_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_334_WEIGHT_CONV2D_334_WEIGHT_DATA 0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_334_WEIGHT_CONV2D_334_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_334_BIAS_CONV2D_334_BIAS_DATA     0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_334_BIAS_CONV2D_334_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_290_WEIGHT_DENSE_290_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_290_WEIGHT_DENSE_290_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_290_BIAS_DENSE_290_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_290_BIAS_DENSE_290_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_289_WEIGHT_DENSE_289_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_289_WEIGHT_DENSE_289_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_289_BIAS_DENSE_289_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_289_BIAS_DENSE_289_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_291_WEIGHT_DENSE_291_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_291_WEIGHT_DENSE_291_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_291_BIAS_DENSE_291_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_291_BIAS_DENSE_291_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_292_WEIGHT_DENSE_292_WEIGHT_DATA   0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_292_WEIGHT_DENSE_292_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_292_BIAS_DENSE_292_BIAS_DATA       0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_292_BIAS_DENSE_292_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_293_WEIGHT_DENSE_293_WEIGHT_DATA   0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_293_WEIGHT_DENSE_293_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_293_BIAS_DENSE_293_BIAS_DATA       0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_293_BIAS_DENSE_293_BIAS_DATA       32

