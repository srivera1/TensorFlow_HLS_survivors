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
// 0x028 : Data signal of Conv2d_357_conv2d_357
//         bit 31~0 - Conv2d_357_conv2d_357[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_358_conv2d_358
//         bit 31~0 - Conv2d_358_conv2d_358[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_317_max_pooling2d_317
//         bit 31~0 - Max_pooling2d_317_max_pooling2d_317[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_318_max_pooling2d_318
//         bit 31~0 - Max_pooling2d_318_max_pooling2d_318[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_305_dense_305
//         bit 31~0 - Dense_305_dense_305[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_306_dense_306
//         bit 31~0 - Dense_306_dense_306[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_66_concatenate_66
//         bit 31~0 - Concatenate_66_concatenate_66[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_359_conv2d_359
//         bit 31~0 - Conv2d_359_conv2d_359[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_319_max_pooling2d_319
//         bit 31~0 - Max_pooling2d_319_max_pooling2d_319[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_307_dense_307
//         bit 31~0 - Dense_307_dense_307[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_360_conv2d_360
//         bit 31~0 - Conv2d_360_conv2d_360[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_320_max_pooling2d_320
//         bit 31~0 - Max_pooling2d_320_max_pooling2d_320[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_308_dense_308
//         bit 31~0 - Dense_308_dense_308[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Max_pooling2d_321_max_pooling2d_321
//         bit 31~0 - Max_pooling2d_321_max_pooling2d_321[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Flatten_36_flatten_36
//         bit 31~0 - Flatten_36_flatten_36[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_309_dense_309
//         bit 31~0 - Dense_309_dense_309[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_310_dense_310
//         bit 31~0 - Dense_310_dense_310[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_357_weight_conv2d_357_weight
//         bit 31~0 - Conv2d_357_weight_conv2d_357_weight[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_357_bias_conv2d_357_bias
//         bit 31~0 - Conv2d_357_bias_conv2d_357_bias[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Conv2d_358_weight_conv2d_358_weight
//         bit 31~0 - Conv2d_358_weight_conv2d_358_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_358_bias_conv2d_358_bias
//         bit 31~0 - Conv2d_358_bias_conv2d_358_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_305_weight_dense_305_weight
//         bit 31~0 - Dense_305_weight_dense_305_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_305_bias_dense_305_bias
//         bit 31~0 - Dense_305_bias_dense_305_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_306_weight_dense_306_weight
//         bit 31~0 - Dense_306_weight_dense_306_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_306_bias_dense_306_bias
//         bit 31~0 - Dense_306_bias_dense_306_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_359_weight_conv2d_359_weight
//         bit 31~0 - Conv2d_359_weight_conv2d_359_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_359_bias_conv2d_359_bias
//         bit 31~0 - Conv2d_359_bias_conv2d_359_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_307_weight_dense_307_weight
//         bit 31~0 - Dense_307_weight_dense_307_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_307_bias_dense_307_bias
//         bit 31~0 - Dense_307_bias_dense_307_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_360_weight_conv2d_360_weight
//         bit 31~0 - Conv2d_360_weight_conv2d_360_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_360_bias_conv2d_360_bias
//         bit 31~0 - Conv2d_360_bias_conv2d_360_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_308_weight_dense_308_weight
//         bit 31~0 - Dense_308_weight_dense_308_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_308_bias_dense_308_bias
//         bit 31~0 - Dense_308_bias_dense_308_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_309_weight_dense_309_weight
//         bit 31~0 - Dense_309_weight_dense_309_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_309_bias_dense_309_bias
//         bit 31~0 - Dense_309_bias_dense_309_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_310_weight_dense_310_weight
//         bit 31~0 - Dense_310_weight_dense_310_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_310_bias_dense_310_bias
//         bit 31~0 - Dense_310_bias_dense_310_bias[31:0] (Read/Write)
// 0x14c : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_357_CONV2D_357_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_357_CONV2D_357_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_358_CONV2D_358_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_358_CONV2D_358_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_317_MAX_POOLING2D_317_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_317_MAX_POOLING2D_317_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_318_MAX_POOLING2D_318_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_318_MAX_POOLING2D_318_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_305_DENSE_305_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_305_DENSE_305_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_306_DENSE_306_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_306_DENSE_306_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_66_CONCATENATE_66_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_66_CONCATENATE_66_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_359_CONV2D_359_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_359_CONV2D_359_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_319_MAX_POOLING2D_319_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_319_MAX_POOLING2D_319_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_307_DENSE_307_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_307_DENSE_307_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_360_CONV2D_360_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_360_CONV2D_360_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_320_MAX_POOLING2D_320_DATA 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_320_MAX_POOLING2D_320_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_308_DENSE_308_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_308_DENSE_308_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_321_MAX_POOLING2D_321_DATA 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_321_MAX_POOLING2D_321_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_36_FLATTEN_36_DATA               0x098
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_36_FLATTEN_36_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_309_DENSE_309_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_309_DENSE_309_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_310_DENSE_310_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_310_DENSE_310_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_357_WEIGHT_CONV2D_357_WEIGHT_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_357_WEIGHT_CONV2D_357_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_357_BIAS_CONV2D_357_BIAS_DATA     0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_357_BIAS_CONV2D_357_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_358_WEIGHT_CONV2D_358_WEIGHT_DATA 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_358_WEIGHT_CONV2D_358_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_358_BIAS_CONV2D_358_BIAS_DATA     0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_358_BIAS_CONV2D_358_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_305_WEIGHT_DENSE_305_WEIGHT_DATA   0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_305_WEIGHT_DENSE_305_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_305_BIAS_DENSE_305_BIAS_DATA       0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_305_BIAS_DENSE_305_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_306_WEIGHT_DENSE_306_WEIGHT_DATA   0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_306_WEIGHT_DENSE_306_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_306_BIAS_DENSE_306_BIAS_DATA       0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_306_BIAS_DENSE_306_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_359_WEIGHT_CONV2D_359_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_359_WEIGHT_CONV2D_359_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_359_BIAS_CONV2D_359_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_359_BIAS_CONV2D_359_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_307_WEIGHT_DENSE_307_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_307_WEIGHT_DENSE_307_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_307_BIAS_DENSE_307_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_307_BIAS_DENSE_307_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_360_WEIGHT_CONV2D_360_WEIGHT_DATA 0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_360_WEIGHT_CONV2D_360_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_360_BIAS_CONV2D_360_BIAS_DATA     0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_360_BIAS_CONV2D_360_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_308_WEIGHT_DENSE_308_WEIGHT_DATA   0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_308_WEIGHT_DENSE_308_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_308_BIAS_DENSE_308_BIAS_DATA       0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_308_BIAS_DENSE_308_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_309_WEIGHT_DENSE_309_WEIGHT_DATA   0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_309_WEIGHT_DENSE_309_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_309_BIAS_DENSE_309_BIAS_DATA       0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_309_BIAS_DENSE_309_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_310_WEIGHT_DENSE_310_WEIGHT_DATA   0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_310_WEIGHT_DENSE_310_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_310_BIAS_DENSE_310_BIAS_DATA       0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_310_BIAS_DENSE_310_BIAS_DATA       32

