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
// 0x20 : Data signal of Conv2d_564_conv2d_564
//        bit 31~0 - Conv2d_564_conv2d_564[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of Conv2d_565_conv2d_565
//        bit 31~0 - Conv2d_565_conv2d_565[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of Max_pooling2d_430_max_pooling2d_430
//        bit 31~0 - Max_pooling2d_430_max_pooling2d_430[31:0] (Read/Write)
// 0x34 : reserved
// 0x38 : Data signal of Conv2d_566_conv2d_566
//        bit 31~0 - Conv2d_566_conv2d_566[31:0] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of Conv2d_567_conv2d_567
//        bit 31~0 - Conv2d_567_conv2d_567[31:0] (Read/Write)
// 0x44 : reserved
// 0x48 : Data signal of Max_pooling2d_431_max_pooling2d_431
//        bit 31~0 - Max_pooling2d_431_max_pooling2d_431[31:0] (Read/Write)
// 0x4c : reserved
// 0x50 : Data signal of Max_pooling2d_432_max_pooling2d_432
//        bit 31~0 - Max_pooling2d_432_max_pooling2d_432[31:0] (Read/Write)
// 0x54 : reserved
// 0x58 : Data signal of Max_pooling2d_433_max_pooling2d_433
//        bit 31~0 - Max_pooling2d_433_max_pooling2d_433[31:0] (Read/Write)
// 0x5c : reserved
// 0x60 : Data signal of Flatten_19_flatten_19
//        bit 31~0 - Flatten_19_flatten_19[31:0] (Read/Write)
// 0x64 : reserved
// 0x68 : Data signal of Dense_402_dense_402
//        bit 31~0 - Dense_402_dense_402[31:0] (Read/Write)
// 0x6c : reserved
// 0x70 : Data signal of Dense_403_dense_403
//        bit 31~0 - Dense_403_dense_403[31:0] (Read/Write)
// 0x74 : reserved
// 0x78 : Data signal of Conv2d_564_weight_conv2d_564_weight
//        bit 31~0 - Conv2d_564_weight_conv2d_564_weight[31:0] (Read/Write)
// 0x7c : reserved
// 0x80 : Data signal of Conv2d_564_bias_conv2d_564_bias
//        bit 31~0 - Conv2d_564_bias_conv2d_564_bias[31:0] (Read/Write)
// 0x84 : reserved
// 0x88 : Data signal of Conv2d_565_weight_conv2d_565_weight
//        bit 31~0 - Conv2d_565_weight_conv2d_565_weight[31:0] (Read/Write)
// 0x8c : reserved
// 0x90 : Data signal of Conv2d_565_bias_conv2d_565_bias
//        bit 31~0 - Conv2d_565_bias_conv2d_565_bias[31:0] (Read/Write)
// 0x94 : reserved
// 0x98 : Data signal of Conv2d_566_weight_conv2d_566_weight
//        bit 31~0 - Conv2d_566_weight_conv2d_566_weight[31:0] (Read/Write)
// 0x9c : reserved
// 0xa0 : Data signal of Conv2d_566_bias_conv2d_566_bias
//        bit 31~0 - Conv2d_566_bias_conv2d_566_bias[31:0] (Read/Write)
// 0xa4 : reserved
// 0xa8 : Data signal of Conv2d_567_weight_conv2d_567_weight
//        bit 31~0 - Conv2d_567_weight_conv2d_567_weight[31:0] (Read/Write)
// 0xac : reserved
// 0xb0 : Data signal of Conv2d_567_bias_conv2d_567_bias
//        bit 31~0 - Conv2d_567_bias_conv2d_567_bias[31:0] (Read/Write)
// 0xb4 : reserved
// 0xb8 : Data signal of Dense_402_weight_dense_402_weight
//        bit 31~0 - Dense_402_weight_dense_402_weight[31:0] (Read/Write)
// 0xbc : reserved
// 0xc0 : Data signal of Dense_402_bias_dense_402_bias
//        bit 31~0 - Dense_402_bias_dense_402_bias[31:0] (Read/Write)
// 0xc4 : reserved
// 0xc8 : Data signal of Dense_403_weight_dense_403_weight
//        bit 31~0 - Dense_403_weight_dense_403_weight[31:0] (Read/Write)
// 0xcc : reserved
// 0xd0 : Data signal of Dense_403_bias_dense_403_bias
//        bit 31~0 - Dense_403_bias_dense_403_bias[31:0] (Read/Write)
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_564_CONV2D_564_DATA               0x20
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_564_CONV2D_564_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_565_CONV2D_565_DATA               0x28
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_565_CONV2D_565_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_430_MAX_POOLING2D_430_DATA 0x30
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_430_MAX_POOLING2D_430_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_566_CONV2D_566_DATA               0x38
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_566_CONV2D_566_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_567_CONV2D_567_DATA               0x40
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_567_CONV2D_567_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_431_MAX_POOLING2D_431_DATA 0x48
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_431_MAX_POOLING2D_431_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_432_MAX_POOLING2D_432_DATA 0x50
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_432_MAX_POOLING2D_432_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_433_MAX_POOLING2D_433_DATA 0x58
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_433_MAX_POOLING2D_433_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_19_FLATTEN_19_DATA               0x60
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_19_FLATTEN_19_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_402_DENSE_402_DATA                 0x68
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_402_DENSE_402_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_403_DENSE_403_DATA                 0x70
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_403_DENSE_403_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_564_WEIGHT_CONV2D_564_WEIGHT_DATA 0x78
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_564_WEIGHT_CONV2D_564_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_564_BIAS_CONV2D_564_BIAS_DATA     0x80
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_564_BIAS_CONV2D_564_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_565_WEIGHT_CONV2D_565_WEIGHT_DATA 0x88
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_565_WEIGHT_CONV2D_565_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_565_BIAS_CONV2D_565_BIAS_DATA     0x90
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_565_BIAS_CONV2D_565_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_566_WEIGHT_CONV2D_566_WEIGHT_DATA 0x98
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_566_WEIGHT_CONV2D_566_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_566_BIAS_CONV2D_566_BIAS_DATA     0xa0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_566_BIAS_CONV2D_566_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_567_WEIGHT_CONV2D_567_WEIGHT_DATA 0xa8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_567_WEIGHT_CONV2D_567_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_567_BIAS_CONV2D_567_BIAS_DATA     0xb0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_567_BIAS_CONV2D_567_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_402_WEIGHT_DENSE_402_WEIGHT_DATA   0xb8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_402_WEIGHT_DENSE_402_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_402_BIAS_DENSE_402_BIAS_DATA       0xc0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_402_BIAS_DENSE_402_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_403_WEIGHT_DENSE_403_WEIGHT_DATA   0xc8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_403_WEIGHT_DENSE_403_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_403_BIAS_DENSE_403_BIAS_DATA       0xd0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_403_BIAS_DENSE_403_BIAS_DATA       32

