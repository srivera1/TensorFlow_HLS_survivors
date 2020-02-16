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
// 0x028 : Data signal of Dense_4351_dense_4351
//         bit 31~0 - Dense_4351_dense_4351[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Dense_4355_dense_4355
//         bit 31~0 - Dense_4355_dense_4355[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Dense_4352_dense_4352
//         bit 31~0 - Dense_4352_dense_4352[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Dense_4356_dense_4356
//         bit 31~0 - Dense_4356_dense_4356[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_4353_dense_4353
//         bit 31~0 - Dense_4353_dense_4353[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_4357_dense_4357
//         bit 31~0 - Dense_4357_dense_4357[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Dense_4354_dense_4354
//         bit 31~0 - Dense_4354_dense_4354[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Dense_4358_dense_4358
//         bit 31~0 - Dense_4358_dense_4358[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Conv2d_1296_conv2d_1296
//         bit 31~0 - Conv2d_1296_conv2d_1296[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_1297_conv2d_1297
//         bit 31~0 - Conv2d_1297_conv2d_1297[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Concatenate_3588_concatenate_3588
//         bit 31~0 - Concatenate_3588_concatenate_3588[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_1302_conv2d_1302
//         bit 31~0 - Conv2d_1302_conv2d_1302[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_1303_conv2d_1303
//         bit 31~0 - Conv2d_1303_conv2d_1303[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Max_pooling2d_566_max_pooling2d_566
//         bit 31~0 - Max_pooling2d_566_max_pooling2d_566[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_1304_conv2d_1304
//         bit 31~0 - Conv2d_1304_conv2d_1304[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_1305_conv2d_1305
//         bit 31~0 - Conv2d_1305_conv2d_1305[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_567_max_pooling2d_567
//         bit 31~0 - Max_pooling2d_567_max_pooling2d_567[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_1306_conv2d_1306
//         bit 31~0 - Conv2d_1306_conv2d_1306[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Max_pooling2d_568_max_pooling2d_568
//         bit 31~0 - Max_pooling2d_568_max_pooling2d_568[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Flatten_128_flatten_128
//         bit 31~0 - Flatten_128_flatten_128[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_4385_dense_4385
//         bit 31~0 - Dense_4385_dense_4385[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_4386_dense_4386
//         bit 31~0 - Dense_4386_dense_4386[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_4351_weight_dense_4351_weight
//         bit 31~0 - Dense_4351_weight_dense_4351_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_4351_bias_dense_4351_bias
//         bit 31~0 - Dense_4351_bias_dense_4351_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_4355_weight_dense_4355_weight
//         bit 31~0 - Dense_4355_weight_dense_4355_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_4355_bias_dense_4355_bias
//         bit 31~0 - Dense_4355_bias_dense_4355_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_4352_weight_dense_4352_weight
//         bit 31~0 - Dense_4352_weight_dense_4352_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_4352_bias_dense_4352_bias
//         bit 31~0 - Dense_4352_bias_dense_4352_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_4356_weight_dense_4356_weight
//         bit 31~0 - Dense_4356_weight_dense_4356_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_4356_bias_dense_4356_bias
//         bit 31~0 - Dense_4356_bias_dense_4356_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_4353_weight_dense_4353_weight
//         bit 31~0 - Dense_4353_weight_dense_4353_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_4353_bias_dense_4353_bias
//         bit 31~0 - Dense_4353_bias_dense_4353_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_4357_weight_dense_4357_weight
//         bit 31~0 - Dense_4357_weight_dense_4357_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_4357_bias_dense_4357_bias
//         bit 31~0 - Dense_4357_bias_dense_4357_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_4354_weight_dense_4354_weight
//         bit 31~0 - Dense_4354_weight_dense_4354_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_4354_bias_dense_4354_bias
//         bit 31~0 - Dense_4354_bias_dense_4354_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_4358_weight_dense_4358_weight
//         bit 31~0 - Dense_4358_weight_dense_4358_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_4358_bias_dense_4358_bias
//         bit 31~0 - Dense_4358_bias_dense_4358_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_1296_weight_conv2d_1296_weight
//         bit 31~0 - Conv2d_1296_weight_conv2d_1296_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_1296_bias_conv2d_1296_bias
//         bit 31~0 - Conv2d_1296_bias_conv2d_1296_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_1297_weight_conv2d_1297_weight
//         bit 31~0 - Conv2d_1297_weight_conv2d_1297_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_1297_bias_conv2d_1297_bias
//         bit 31~0 - Conv2d_1297_bias_conv2d_1297_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_1302_weight_conv2d_1302_weight
//         bit 31~0 - Conv2d_1302_weight_conv2d_1302_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_1302_bias_conv2d_1302_bias
//         bit 31~0 - Conv2d_1302_bias_conv2d_1302_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_1303_weight_conv2d_1303_weight
//         bit 31~0 - Conv2d_1303_weight_conv2d_1303_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_1303_bias_conv2d_1303_bias
//         bit 31~0 - Conv2d_1303_bias_conv2d_1303_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Conv2d_1304_weight_conv2d_1304_weight
//         bit 31~0 - Conv2d_1304_weight_conv2d_1304_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Conv2d_1304_bias_conv2d_1304_bias
//         bit 31~0 - Conv2d_1304_bias_conv2d_1304_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Conv2d_1305_weight_conv2d_1305_weight
//         bit 31~0 - Conv2d_1305_weight_conv2d_1305_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Conv2d_1305_bias_conv2d_1305_bias
//         bit 31~0 - Conv2d_1305_bias_conv2d_1305_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Conv2d_1306_weight_conv2d_1306_weight
//         bit 31~0 - Conv2d_1306_weight_conv2d_1306_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Conv2d_1306_bias_conv2d_1306_bias
//         bit 31~0 - Conv2d_1306_bias_conv2d_1306_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_4385_weight_dense_4385_weight
//         bit 31~0 - Dense_4385_weight_dense_4385_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_4385_bias_dense_4385_bias
//         bit 31~0 - Dense_4385_bias_dense_4385_bias[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_4386_weight_dense_4386_weight
//         bit 31~0 - Dense_4386_weight_dense_4386_weight[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_4386_bias_dense_4386_bias
//         bit 31~0 - Dense_4386_bias_dense_4386_bias[31:0] (Read/Write)
// 0x1e4 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT1_INPUT1_DATA                         0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT1_INPUT1_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT2_INPUT2_DATA                         0x020
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT2_INPUT2_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4351_DENSE_4351_DATA                 0x028
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4351_DENSE_4351_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4355_DENSE_4355_DATA                 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4355_DENSE_4355_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4352_DENSE_4352_DATA                 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4352_DENSE_4352_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4356_DENSE_4356_DATA                 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4356_DENSE_4356_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4353_DENSE_4353_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4353_DENSE_4353_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4357_DENSE_4357_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4357_DENSE_4357_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4354_DENSE_4354_DATA                 0x058
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4354_DENSE_4354_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4358_DENSE_4358_DATA                 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4358_DENSE_4358_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1296_CONV2D_1296_DATA               0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1296_CONV2D_1296_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1297_CONV2D_1297_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1297_CONV2D_1297_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_3588_CONCATENATE_3588_DATA     0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_3588_CONCATENATE_3588_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1302_CONV2D_1302_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1302_CONV2D_1302_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1303_CONV2D_1303_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1303_CONV2D_1303_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_566_MAX_POOLING2D_566_DATA   0x090
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_566_MAX_POOLING2D_566_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1304_CONV2D_1304_DATA               0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1304_CONV2D_1304_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1305_CONV2D_1305_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1305_CONV2D_1305_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_567_MAX_POOLING2D_567_DATA   0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_567_MAX_POOLING2D_567_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1306_CONV2D_1306_DATA               0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1306_CONV2D_1306_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_568_MAX_POOLING2D_568_DATA   0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_568_MAX_POOLING2D_568_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_128_FLATTEN_128_DATA               0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_128_FLATTEN_128_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4385_DENSE_4385_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4385_DENSE_4385_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4386_DENSE_4386_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4386_DENSE_4386_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4351_WEIGHT_DENSE_4351_WEIGHT_DATA   0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4351_WEIGHT_DENSE_4351_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4351_BIAS_DENSE_4351_BIAS_DATA       0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4351_BIAS_DENSE_4351_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4355_WEIGHT_DENSE_4355_WEIGHT_DATA   0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4355_WEIGHT_DENSE_4355_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4355_BIAS_DENSE_4355_BIAS_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4355_BIAS_DENSE_4355_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4352_WEIGHT_DENSE_4352_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4352_WEIGHT_DENSE_4352_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4352_BIAS_DENSE_4352_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4352_BIAS_DENSE_4352_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4356_WEIGHT_DENSE_4356_WEIGHT_DATA   0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4356_WEIGHT_DENSE_4356_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4356_BIAS_DENSE_4356_BIAS_DATA       0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4356_BIAS_DENSE_4356_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4353_WEIGHT_DENSE_4353_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4353_WEIGHT_DENSE_4353_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4353_BIAS_DENSE_4353_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4353_BIAS_DENSE_4353_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4357_WEIGHT_DENSE_4357_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4357_WEIGHT_DENSE_4357_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4357_BIAS_DENSE_4357_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4357_BIAS_DENSE_4357_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4354_WEIGHT_DENSE_4354_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4354_WEIGHT_DENSE_4354_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4354_BIAS_DENSE_4354_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4354_BIAS_DENSE_4354_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4358_WEIGHT_DENSE_4358_WEIGHT_DATA   0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4358_WEIGHT_DENSE_4358_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4358_BIAS_DENSE_4358_BIAS_DATA       0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4358_BIAS_DENSE_4358_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1296_WEIGHT_CONV2D_1296_WEIGHT_DATA 0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1296_WEIGHT_CONV2D_1296_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1296_BIAS_CONV2D_1296_BIAS_DATA     0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1296_BIAS_CONV2D_1296_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1297_WEIGHT_CONV2D_1297_WEIGHT_DATA 0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1297_WEIGHT_CONV2D_1297_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1297_BIAS_CONV2D_1297_BIAS_DATA     0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1297_BIAS_CONV2D_1297_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1302_WEIGHT_CONV2D_1302_WEIGHT_DATA 0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1302_WEIGHT_CONV2D_1302_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1302_BIAS_CONV2D_1302_BIAS_DATA     0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1302_BIAS_CONV2D_1302_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1303_WEIGHT_CONV2D_1303_WEIGHT_DATA 0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1303_WEIGHT_CONV2D_1303_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1303_BIAS_CONV2D_1303_BIAS_DATA     0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1303_BIAS_CONV2D_1303_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1304_WEIGHT_CONV2D_1304_WEIGHT_DATA 0x198
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1304_WEIGHT_CONV2D_1304_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1304_BIAS_CONV2D_1304_BIAS_DATA     0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1304_BIAS_CONV2D_1304_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1305_WEIGHT_CONV2D_1305_WEIGHT_DATA 0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1305_WEIGHT_CONV2D_1305_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1305_BIAS_CONV2D_1305_BIAS_DATA     0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1305_BIAS_CONV2D_1305_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1306_WEIGHT_CONV2D_1306_WEIGHT_DATA 0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1306_WEIGHT_CONV2D_1306_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1306_BIAS_CONV2D_1306_BIAS_DATA     0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1306_BIAS_CONV2D_1306_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4385_WEIGHT_DENSE_4385_WEIGHT_DATA   0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4385_WEIGHT_DENSE_4385_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4385_BIAS_DENSE_4385_BIAS_DATA       0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4385_BIAS_DENSE_4385_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4386_WEIGHT_DENSE_4386_WEIGHT_DATA   0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4386_WEIGHT_DENSE_4386_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4386_BIAS_DENSE_4386_BIAS_DATA       0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4386_BIAS_DENSE_4386_BIAS_DATA       32

