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
// 0x20 : Data signal of Conv2d_173_conv2d_173
//        bit 31~0 - Conv2d_173_conv2d_173[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of Conv2d_174_conv2d_174
//        bit 31~0 - Conv2d_174_conv2d_174[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of Max_pooling2d_131_max_pooling2d_131
//        bit 31~0 - Max_pooling2d_131_max_pooling2d_131[31:0] (Read/Write)
// 0x34 : reserved
// 0x38 : Data signal of Conv2d_175_conv2d_175
//        bit 31~0 - Conv2d_175_conv2d_175[31:0] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of Conv2d_176_conv2d_176
//        bit 31~0 - Conv2d_176_conv2d_176[31:0] (Read/Write)
// 0x44 : reserved
// 0x48 : Data signal of Max_pooling2d_132_max_pooling2d_132
//        bit 31~0 - Max_pooling2d_132_max_pooling2d_132[31:0] (Read/Write)
// 0x4c : reserved
// 0x50 : Data signal of Max_pooling2d_133_max_pooling2d_133
//        bit 31~0 - Max_pooling2d_133_max_pooling2d_133[31:0] (Read/Write)
// 0x54 : reserved
// 0x58 : Data signal of Max_pooling2d_134_max_pooling2d_134
//        bit 31~0 - Max_pooling2d_134_max_pooling2d_134[31:0] (Read/Write)
// 0x5c : reserved
// 0x60 : Data signal of Flatten_6_flatten_6
//        bit 31~0 - Flatten_6_flatten_6[31:0] (Read/Write)
// 0x64 : reserved
// 0x68 : Data signal of Dense_123_dense_123
//        bit 31~0 - Dense_123_dense_123[31:0] (Read/Write)
// 0x6c : reserved
// 0x70 : Data signal of Dense_124_dense_124
//        bit 31~0 - Dense_124_dense_124[31:0] (Read/Write)
// 0x74 : reserved
// 0x78 : Data signal of Conv2d_173_weight_conv2d_173_weight
//        bit 31~0 - Conv2d_173_weight_conv2d_173_weight[31:0] (Read/Write)
// 0x7c : reserved
// 0x80 : Data signal of Conv2d_173_bias_conv2d_173_bias
//        bit 31~0 - Conv2d_173_bias_conv2d_173_bias[31:0] (Read/Write)
// 0x84 : reserved
// 0x88 : Data signal of Conv2d_174_weight_conv2d_174_weight
//        bit 31~0 - Conv2d_174_weight_conv2d_174_weight[31:0] (Read/Write)
// 0x8c : reserved
// 0x90 : Data signal of Conv2d_174_bias_conv2d_174_bias
//        bit 31~0 - Conv2d_174_bias_conv2d_174_bias[31:0] (Read/Write)
// 0x94 : reserved
// 0x98 : Data signal of Conv2d_175_weight_conv2d_175_weight
//        bit 31~0 - Conv2d_175_weight_conv2d_175_weight[31:0] (Read/Write)
// 0x9c : reserved
// 0xa0 : Data signal of Conv2d_175_bias_conv2d_175_bias
//        bit 31~0 - Conv2d_175_bias_conv2d_175_bias[31:0] (Read/Write)
// 0xa4 : reserved
// 0xa8 : Data signal of Conv2d_176_weight_conv2d_176_weight
//        bit 31~0 - Conv2d_176_weight_conv2d_176_weight[31:0] (Read/Write)
// 0xac : reserved
// 0xb0 : Data signal of Conv2d_176_bias_conv2d_176_bias
//        bit 31~0 - Conv2d_176_bias_conv2d_176_bias[31:0] (Read/Write)
// 0xb4 : reserved
// 0xb8 : Data signal of Dense_123_weight_dense_123_weight
//        bit 31~0 - Dense_123_weight_dense_123_weight[31:0] (Read/Write)
// 0xbc : reserved
// 0xc0 : Data signal of Dense_123_bias_dense_123_bias
//        bit 31~0 - Dense_123_bias_dense_123_bias[31:0] (Read/Write)
// 0xc4 : reserved
// 0xc8 : Data signal of Dense_124_weight_dense_124_weight
//        bit 31~0 - Dense_124_weight_dense_124_weight[31:0] (Read/Write)
// 0xcc : reserved
// 0xd0 : Data signal of Dense_124_bias_dense_124_bias
//        bit 31~0 - Dense_124_bias_dense_124_bias[31:0] (Read/Write)
// 0xd4 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                  0x00
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                      0x04
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                      0x08
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                      0x0c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                0x10
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                         0x18
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_173_CONV2D_173_DATA               0x20
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_173_CONV2D_173_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_174_CONV2D_174_DATA               0x28
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_174_CONV2D_174_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_131_MAX_POOLING2D_131_DATA 0x30
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_131_MAX_POOLING2D_131_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_175_CONV2D_175_DATA               0x38
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_175_CONV2D_175_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_176_CONV2D_176_DATA               0x40
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_176_CONV2D_176_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_132_MAX_POOLING2D_132_DATA 0x48
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_132_MAX_POOLING2D_132_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_133_MAX_POOLING2D_133_DATA 0x50
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_133_MAX_POOLING2D_133_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_134_MAX_POOLING2D_134_DATA 0x58
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_134_MAX_POOLING2D_134_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_6_FLATTEN_6_DATA                 0x60
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_6_FLATTEN_6_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_123_DENSE_123_DATA                 0x68
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_123_DENSE_123_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_124_DENSE_124_DATA                 0x70
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_124_DENSE_124_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_173_WEIGHT_CONV2D_173_WEIGHT_DATA 0x78
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_173_WEIGHT_CONV2D_173_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_173_BIAS_CONV2D_173_BIAS_DATA     0x80
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_173_BIAS_CONV2D_173_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_174_WEIGHT_CONV2D_174_WEIGHT_DATA 0x88
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_174_WEIGHT_CONV2D_174_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_174_BIAS_CONV2D_174_BIAS_DATA     0x90
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_174_BIAS_CONV2D_174_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_175_WEIGHT_CONV2D_175_WEIGHT_DATA 0x98
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_175_WEIGHT_CONV2D_175_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_175_BIAS_CONV2D_175_BIAS_DATA     0xa0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_175_BIAS_CONV2D_175_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_176_WEIGHT_CONV2D_176_WEIGHT_DATA 0xa8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_176_WEIGHT_CONV2D_176_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_176_BIAS_CONV2D_176_BIAS_DATA     0xb0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_176_BIAS_CONV2D_176_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_123_WEIGHT_DENSE_123_WEIGHT_DATA   0xb8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_123_WEIGHT_DENSE_123_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_123_BIAS_DENSE_123_BIAS_DATA       0xc0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_123_BIAS_DENSE_123_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_124_WEIGHT_DENSE_124_WEIGHT_DATA   0xc8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_124_WEIGHT_DENSE_124_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_124_BIAS_DENSE_124_BIAS_DATA       0xd0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_124_BIAS_DENSE_124_BIAS_DATA       32

