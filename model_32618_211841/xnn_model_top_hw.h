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
// 0x028 : Data signal of Conv2d_319_conv2d_319
//         bit 31~0 - Conv2d_319_conv2d_319[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_320_conv2d_320
//         bit 31~0 - Conv2d_320_conv2d_320[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_283_max_pooling2d_283
//         bit 31~0 - Max_pooling2d_283_max_pooling2d_283[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_284_max_pooling2d_284
//         bit 31~0 - Max_pooling2d_284_max_pooling2d_284[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_273_dense_273
//         bit 31~0 - Dense_273_dense_273[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_274_dense_274
//         bit 31~0 - Dense_274_dense_274[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_57_concatenate_57
//         bit 31~0 - Concatenate_57_concatenate_57[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_321_conv2d_321
//         bit 31~0 - Conv2d_321_conv2d_321[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_285_max_pooling2d_285
//         bit 31~0 - Max_pooling2d_285_max_pooling2d_285[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_323_conv2d_323
//         bit 31~0 - Conv2d_323_conv2d_323[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_275_dense_275
//         bit 31~0 - Dense_275_dense_275[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_287_max_pooling2d_287
//         bit 31~0 - Max_pooling2d_287_max_pooling2d_287[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_322_conv2d_322
//         bit 31~0 - Conv2d_322_conv2d_322[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_324_conv2d_324
//         bit 31~0 - Conv2d_324_conv2d_324[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_286_max_pooling2d_286
//         bit 31~0 - Max_pooling2d_286_max_pooling2d_286[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Max_pooling2d_288_max_pooling2d_288
//         bit 31~0 - Max_pooling2d_288_max_pooling2d_288[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_276_dense_276
//         bit 31~0 - Dense_276_dense_276[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_277_dense_277
//         bit 31~0 - Dense_277_dense_277[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Concatenate_58_concatenate_58
//         bit 31~0 - Concatenate_58_concatenate_58[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Max_pooling2d_289_max_pooling2d_289
//         bit 31~0 - Max_pooling2d_289_max_pooling2d_289[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Flatten_32_flatten_32
//         bit 31~0 - Flatten_32_flatten_32[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_278_dense_278
//         bit 31~0 - Dense_278_dense_278[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_279_dense_279
//         bit 31~0 - Dense_279_dense_279[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_319_weight_conv2d_319_weight
//         bit 31~0 - Conv2d_319_weight_conv2d_319_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_319_bias_conv2d_319_bias
//         bit 31~0 - Conv2d_319_bias_conv2d_319_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_320_weight_conv2d_320_weight
//         bit 31~0 - Conv2d_320_weight_conv2d_320_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_320_bias_conv2d_320_bias
//         bit 31~0 - Conv2d_320_bias_conv2d_320_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_273_weight_dense_273_weight
//         bit 31~0 - Dense_273_weight_dense_273_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_273_bias_dense_273_bias
//         bit 31~0 - Dense_273_bias_dense_273_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_274_weight_dense_274_weight
//         bit 31~0 - Dense_274_weight_dense_274_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_274_bias_dense_274_bias
//         bit 31~0 - Dense_274_bias_dense_274_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_321_weight_conv2d_321_weight
//         bit 31~0 - Conv2d_321_weight_conv2d_321_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_321_bias_conv2d_321_bias
//         bit 31~0 - Conv2d_321_bias_conv2d_321_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_323_weight_conv2d_323_weight
//         bit 31~0 - Conv2d_323_weight_conv2d_323_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_323_bias_conv2d_323_bias
//         bit 31~0 - Conv2d_323_bias_conv2d_323_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_275_weight_dense_275_weight
//         bit 31~0 - Dense_275_weight_dense_275_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_275_bias_dense_275_bias
//         bit 31~0 - Dense_275_bias_dense_275_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_322_weight_conv2d_322_weight
//         bit 31~0 - Conv2d_322_weight_conv2d_322_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_322_bias_conv2d_322_bias
//         bit 31~0 - Conv2d_322_bias_conv2d_322_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_324_weight_conv2d_324_weight
//         bit 31~0 - Conv2d_324_weight_conv2d_324_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_324_bias_conv2d_324_bias
//         bit 31~0 - Conv2d_324_bias_conv2d_324_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_276_weight_dense_276_weight
//         bit 31~0 - Dense_276_weight_dense_276_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_276_bias_dense_276_bias
//         bit 31~0 - Dense_276_bias_dense_276_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_277_weight_dense_277_weight
//         bit 31~0 - Dense_277_weight_dense_277_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_277_bias_dense_277_bias
//         bit 31~0 - Dense_277_bias_dense_277_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_278_weight_dense_278_weight
//         bit 31~0 - Dense_278_weight_dense_278_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_278_bias_dense_278_bias
//         bit 31~0 - Dense_278_bias_dense_278_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_279_weight_dense_279_weight
//         bit 31~0 - Dense_279_weight_dense_279_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_279_bias_dense_279_bias
//         bit 31~0 - Dense_279_bias_dense_279_bias[31:0] (Read/Write)
// 0x1ac : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_319_CONV2D_319_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_319_CONV2D_319_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_320_CONV2D_320_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_320_CONV2D_320_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_283_MAX_POOLING2D_283_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_283_MAX_POOLING2D_283_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_284_MAX_POOLING2D_284_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_284_MAX_POOLING2D_284_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_273_DENSE_273_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_273_DENSE_273_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_274_DENSE_274_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_274_DENSE_274_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_57_CONCATENATE_57_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_57_CONCATENATE_57_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_321_CONV2D_321_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_321_CONV2D_321_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_285_MAX_POOLING2D_285_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_285_MAX_POOLING2D_285_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_323_CONV2D_323_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_323_CONV2D_323_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_275_DENSE_275_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_275_DENSE_275_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_287_MAX_POOLING2D_287_DATA 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_287_MAX_POOLING2D_287_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_322_CONV2D_322_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_322_CONV2D_322_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_324_CONV2D_324_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_324_CONV2D_324_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_286_MAX_POOLING2D_286_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_286_MAX_POOLING2D_286_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_288_MAX_POOLING2D_288_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_288_MAX_POOLING2D_288_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_276_DENSE_276_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_276_DENSE_276_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_277_DENSE_277_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_277_DENSE_277_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_58_CONCATENATE_58_DATA       0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_58_CONCATENATE_58_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_289_MAX_POOLING2D_289_DATA 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_289_MAX_POOLING2D_289_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_32_FLATTEN_32_DATA               0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_32_FLATTEN_32_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_278_DENSE_278_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_278_DENSE_278_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_279_DENSE_279_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_279_DENSE_279_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_319_WEIGHT_CONV2D_319_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_319_WEIGHT_CONV2D_319_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_319_BIAS_CONV2D_319_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_319_BIAS_CONV2D_319_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_320_WEIGHT_CONV2D_320_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_320_WEIGHT_CONV2D_320_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_320_BIAS_CONV2D_320_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_320_BIAS_CONV2D_320_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_273_WEIGHT_DENSE_273_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_273_WEIGHT_DENSE_273_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_273_BIAS_DENSE_273_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_273_BIAS_DENSE_273_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_274_WEIGHT_DENSE_274_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_274_WEIGHT_DENSE_274_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_274_BIAS_DENSE_274_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_274_BIAS_DENSE_274_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_321_WEIGHT_CONV2D_321_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_321_WEIGHT_CONV2D_321_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_321_BIAS_CONV2D_321_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_321_BIAS_CONV2D_321_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_323_WEIGHT_CONV2D_323_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_323_WEIGHT_CONV2D_323_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_323_BIAS_CONV2D_323_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_323_BIAS_CONV2D_323_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_275_WEIGHT_DENSE_275_WEIGHT_DATA   0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_275_WEIGHT_DENSE_275_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_275_BIAS_DENSE_275_BIAS_DATA       0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_275_BIAS_DENSE_275_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_322_WEIGHT_CONV2D_322_WEIGHT_DATA 0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_322_WEIGHT_CONV2D_322_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_322_BIAS_CONV2D_322_BIAS_DATA     0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_322_BIAS_CONV2D_322_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_324_WEIGHT_CONV2D_324_WEIGHT_DATA 0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_324_WEIGHT_CONV2D_324_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_324_BIAS_CONV2D_324_BIAS_DATA     0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_324_BIAS_CONV2D_324_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_276_WEIGHT_DENSE_276_WEIGHT_DATA   0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_276_WEIGHT_DENSE_276_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_276_BIAS_DENSE_276_BIAS_DATA       0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_276_BIAS_DENSE_276_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_277_WEIGHT_DENSE_277_WEIGHT_DATA   0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_277_WEIGHT_DENSE_277_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_277_BIAS_DENSE_277_BIAS_DATA       0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_277_BIAS_DENSE_277_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_278_WEIGHT_DENSE_278_WEIGHT_DATA   0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_278_WEIGHT_DENSE_278_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_278_BIAS_DENSE_278_BIAS_DATA       0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_278_BIAS_DENSE_278_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_279_WEIGHT_DENSE_279_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_279_WEIGHT_DENSE_279_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_279_BIAS_DENSE_279_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_279_BIAS_DENSE_279_BIAS_DATA       32

