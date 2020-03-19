// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// control
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of ap_return
//        bit 31~0 - ap_return[31:0] (Read)
// 0x18 : Data signal of Input_input
//        bit 31~0 - Input_input[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of Conv2d_2285_conv2d_2285
//        bit 31~0 - Conv2d_2285_conv2d_2285[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of Conv2d_2286_conv2d_2286
//        bit 31~0 - Conv2d_2286_conv2d_2286[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of Max_pooling2d_1856_max_pooling2d_1856
//        bit 31~0 - Max_pooling2d_1856_max_pooling2d_1856[31:0] (Read/Write)
// 0x34 : reserved
// 0x38 : Data signal of Conv2d_2287_conv2d_2287
//        bit 31~0 - Conv2d_2287_conv2d_2287[31:0] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of Conv2d_2288_conv2d_2288
//        bit 31~0 - Conv2d_2288_conv2d_2288[31:0] (Read/Write)
// 0x44 : reserved
// 0x48 : Data signal of Max_pooling2d_1857_max_pooling2d_1857
//        bit 31~0 - Max_pooling2d_1857_max_pooling2d_1857[31:0] (Read/Write)
// 0x4c : reserved
// 0x50 : Data signal of Conv2d_2289_conv2d_2289
//        bit 31~0 - Conv2d_2289_conv2d_2289[31:0] (Read/Write)
// 0x54 : reserved
// 0x58 : Data signal of Conv2d_2290_conv2d_2290
//        bit 31~0 - Conv2d_2290_conv2d_2290[31:0] (Read/Write)
// 0x5c : reserved
// 0x60 : Data signal of Flatten_49_flatten_49
//        bit 31~0 - Flatten_49_flatten_49[31:0] (Read/Write)
// 0x64 : reserved
// 0x68 : Data signal of Dense_1741_dense_1741
//        bit 31~0 - Dense_1741_dense_1741[31:0] (Read/Write)
// 0x6c : reserved
// 0x70 : Data signal of Dense_1742_dense_1742
//        bit 31~0 - Dense_1742_dense_1742[31:0] (Read/Write)
// 0x74 : reserved
// 0x78 : Data signal of Conv2d_2285_weight_conv2d_2285_weight
//        bit 31~0 - Conv2d_2285_weight_conv2d_2285_weight[31:0] (Read/Write)
// 0x7c : reserved
// 0x80 : Data signal of Conv2d_2285_bias_conv2d_2285_bias
//        bit 31~0 - Conv2d_2285_bias_conv2d_2285_bias[31:0] (Read/Write)
// 0x84 : reserved
// 0x88 : Data signal of Conv2d_2286_weight_conv2d_2286_weight
//        bit 31~0 - Conv2d_2286_weight_conv2d_2286_weight[31:0] (Read/Write)
// 0x8c : reserved
// 0x90 : Data signal of Conv2d_2286_bias_conv2d_2286_bias
//        bit 31~0 - Conv2d_2286_bias_conv2d_2286_bias[31:0] (Read/Write)
// 0x94 : reserved
// 0x98 : Data signal of Conv2d_2287_weight_conv2d_2287_weight
//        bit 31~0 - Conv2d_2287_weight_conv2d_2287_weight[31:0] (Read/Write)
// 0x9c : reserved
// 0xa0 : Data signal of Conv2d_2287_bias_conv2d_2287_bias
//        bit 31~0 - Conv2d_2287_bias_conv2d_2287_bias[31:0] (Read/Write)
// 0xa4 : reserved
// 0xa8 : Data signal of Conv2d_2288_weight_conv2d_2288_weight
//        bit 31~0 - Conv2d_2288_weight_conv2d_2288_weight[31:0] (Read/Write)
// 0xac : reserved
// 0xb0 : Data signal of Conv2d_2288_bias_conv2d_2288_bias
//        bit 31~0 - Conv2d_2288_bias_conv2d_2288_bias[31:0] (Read/Write)
// 0xb4 : reserved
// 0xb8 : Data signal of Conv2d_2289_weight_conv2d_2289_weight
//        bit 31~0 - Conv2d_2289_weight_conv2d_2289_weight[31:0] (Read/Write)
// 0xbc : reserved
// 0xc0 : Data signal of Conv2d_2289_bias_conv2d_2289_bias
//        bit 31~0 - Conv2d_2289_bias_conv2d_2289_bias[31:0] (Read/Write)
// 0xc4 : reserved
// 0xc8 : Data signal of Conv2d_2290_weight_conv2d_2290_weight
//        bit 31~0 - Conv2d_2290_weight_conv2d_2290_weight[31:0] (Read/Write)
// 0xcc : reserved
// 0xd0 : Data signal of Conv2d_2290_bias_conv2d_2290_bias
//        bit 31~0 - Conv2d_2290_bias_conv2d_2290_bias[31:0] (Read/Write)
// 0xd4 : reserved
// 0xd8 : Data signal of Dense_1741_weight_dense_1741_weight
//        bit 31~0 - Dense_1741_weight_dense_1741_weight[31:0] (Read/Write)
// 0xdc : reserved
// 0xe0 : Data signal of Dense_1741_bias_dense_1741_bias
//        bit 31~0 - Dense_1741_bias_dense_1741_bias[31:0] (Read/Write)
// 0xe4 : reserved
// 0xe8 : Data signal of Dense_1742_weight_dense_1742_weight
//        bit 31~0 - Dense_1742_weight_dense_1742_weight[31:0] (Read/Write)
// 0xec : reserved
// 0xf0 : Data signal of Dense_1742_bias_dense_1742_bias
//        bit 31~0 - Dense_1742_bias_dense_1742_bias[31:0] (Read/Write)
// 0xf4 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x00
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x04
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x08
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x0c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x10
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                           0x18
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                           32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2285_CONV2D_2285_DATA               0x20
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2285_CONV2D_2285_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2286_CONV2D_2286_DATA               0x28
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2286_CONV2D_2286_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1856_MAX_POOLING2D_1856_DATA 0x30
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1856_MAX_POOLING2D_1856_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2287_CONV2D_2287_DATA               0x38
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2287_CONV2D_2287_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2288_CONV2D_2288_DATA               0x40
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2288_CONV2D_2288_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1857_MAX_POOLING2D_1857_DATA 0x48
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1857_MAX_POOLING2D_1857_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2289_CONV2D_2289_DATA               0x50
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2289_CONV2D_2289_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2290_CONV2D_2290_DATA               0x58
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2290_CONV2D_2290_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_49_FLATTEN_49_DATA                 0x60
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_49_FLATTEN_49_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1741_DENSE_1741_DATA                 0x68
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1741_DENSE_1741_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1742_DENSE_1742_DATA                 0x70
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1742_DENSE_1742_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2285_WEIGHT_CONV2D_2285_WEIGHT_DATA 0x78
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2285_WEIGHT_CONV2D_2285_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2285_BIAS_CONV2D_2285_BIAS_DATA     0x80
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2285_BIAS_CONV2D_2285_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2286_WEIGHT_CONV2D_2286_WEIGHT_DATA 0x88
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2286_WEIGHT_CONV2D_2286_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2286_BIAS_CONV2D_2286_BIAS_DATA     0x90
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2286_BIAS_CONV2D_2286_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2287_WEIGHT_CONV2D_2287_WEIGHT_DATA 0x98
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2287_WEIGHT_CONV2D_2287_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2287_BIAS_CONV2D_2287_BIAS_DATA     0xa0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2287_BIAS_CONV2D_2287_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2288_WEIGHT_CONV2D_2288_WEIGHT_DATA 0xa8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2288_WEIGHT_CONV2D_2288_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2288_BIAS_CONV2D_2288_BIAS_DATA     0xb0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2288_BIAS_CONV2D_2288_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2289_WEIGHT_CONV2D_2289_WEIGHT_DATA 0xb8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2289_WEIGHT_CONV2D_2289_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2289_BIAS_CONV2D_2289_BIAS_DATA     0xc0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2289_BIAS_CONV2D_2289_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2290_WEIGHT_CONV2D_2290_WEIGHT_DATA 0xc8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2290_WEIGHT_CONV2D_2290_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2290_BIAS_CONV2D_2290_BIAS_DATA     0xd0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2290_BIAS_CONV2D_2290_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1741_WEIGHT_DENSE_1741_WEIGHT_DATA   0xd8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1741_WEIGHT_DENSE_1741_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1741_BIAS_DENSE_1741_BIAS_DATA       0xe0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1741_BIAS_DENSE_1741_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1742_WEIGHT_DENSE_1742_WEIGHT_DATA   0xe8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1742_WEIGHT_DENSE_1742_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1742_BIAS_DENSE_1742_BIAS_DATA       0xf0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1742_BIAS_DENSE_1742_BIAS_DATA       32

