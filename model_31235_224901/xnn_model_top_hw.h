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
// 0x18 : Data signal of Input1_input1
//        bit 31~0 - Input1_input1[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of Input2_input2
//        bit 31~0 - Input2_input2[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of Dense_1_dense_1
//        bit 31~0 - Dense_1_dense_1[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of Dense_2_dense_2
//        bit 31~0 - Dense_2_dense_2[31:0] (Read/Write)
// 0x34 : reserved
// 0x38 : Data signal of Conv2d_1_conv2d_1
//        bit 31~0 - Conv2d_1_conv2d_1[31:0] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of Conv2d_2_conv2d_2
//        bit 31~0 - Conv2d_2_conv2d_2[31:0] (Read/Write)
// 0x44 : reserved
// 0x48 : Data signal of Concatenate_3_concatenate_3
//        bit 31~0 - Concatenate_3_concatenate_3[31:0] (Read/Write)
// 0x4c : reserved
// 0x50 : Data signal of Conv2d_16_conv2d_16
//        bit 31~0 - Conv2d_16_conv2d_16[31:0] (Read/Write)
// 0x54 : reserved
// 0x58 : Data signal of Max_pooling2d_1_max_pooling2d_1
//        bit 31~0 - Max_pooling2d_1_max_pooling2d_1[31:0] (Read/Write)
// 0x5c : reserved
// 0x60 : Data signal of Max_pooling2d_2_max_pooling2d_2
//        bit 31~0 - Max_pooling2d_2_max_pooling2d_2[31:0] (Read/Write)
// 0x64 : reserved
// 0x68 : Data signal of Max_pooling2d_3_max_pooling2d_3
//        bit 31~0 - Max_pooling2d_3_max_pooling2d_3[31:0] (Read/Write)
// 0x6c : reserved
// 0x70 : Data signal of Max_pooling2d_4_max_pooling2d_4
//        bit 31~0 - Max_pooling2d_4_max_pooling2d_4[31:0] (Read/Write)
// 0x74 : reserved
// 0x78 : Data signal of Flatten_1_flatten_1
//        bit 31~0 - Flatten_1_flatten_1[31:0] (Read/Write)
// 0x7c : reserved
// 0x80 : Data signal of Dense_46_dense_46
//        bit 31~0 - Dense_46_dense_46[31:0] (Read/Write)
// 0x84 : reserved
// 0x88 : Data signal of Dense_47_dense_47
//        bit 31~0 - Dense_47_dense_47[31:0] (Read/Write)
// 0x8c : reserved
// 0x90 : Data signal of Dense_1_weight_dense_1_weight
//        bit 31~0 - Dense_1_weight_dense_1_weight[31:0] (Read/Write)
// 0x94 : reserved
// 0x98 : Data signal of Dense_1_bias_dense_1_bias
//        bit 31~0 - Dense_1_bias_dense_1_bias[31:0] (Read/Write)
// 0x9c : reserved
// 0xa0 : Data signal of Dense_2_weight_dense_2_weight
//        bit 31~0 - Dense_2_weight_dense_2_weight[31:0] (Read/Write)
// 0xa4 : reserved
// 0xa8 : Data signal of Dense_2_bias_dense_2_bias
//        bit 31~0 - Dense_2_bias_dense_2_bias[31:0] (Read/Write)
// 0xac : reserved
// 0xb0 : Data signal of Conv2d_1_weight_conv2d_1_weight
//        bit 31~0 - Conv2d_1_weight_conv2d_1_weight[31:0] (Read/Write)
// 0xb4 : reserved
// 0xb8 : Data signal of Conv2d_1_bias_conv2d_1_bias
//        bit 31~0 - Conv2d_1_bias_conv2d_1_bias[31:0] (Read/Write)
// 0xbc : reserved
// 0xc0 : Data signal of Conv2d_2_weight_conv2d_2_weight
//        bit 31~0 - Conv2d_2_weight_conv2d_2_weight[31:0] (Read/Write)
// 0xc4 : reserved
// 0xc8 : Data signal of Conv2d_2_bias_conv2d_2_bias
//        bit 31~0 - Conv2d_2_bias_conv2d_2_bias[31:0] (Read/Write)
// 0xcc : reserved
// 0xd0 : Data signal of Conv2d_16_weight_conv2d_16_weight
//        bit 31~0 - Conv2d_16_weight_conv2d_16_weight[31:0] (Read/Write)
// 0xd4 : reserved
// 0xd8 : Data signal of Conv2d_16_bias_conv2d_16_bias
//        bit 31~0 - Conv2d_16_bias_conv2d_16_bias[31:0] (Read/Write)
// 0xdc : reserved
// 0xe0 : Data signal of Dense_46_weight_dense_46_weight
//        bit 31~0 - Dense_46_weight_dense_46_weight[31:0] (Read/Write)
// 0xe4 : reserved
// 0xe8 : Data signal of Dense_46_bias_dense_46_bias
//        bit 31~0 - Dense_46_bias_dense_46_bias[31:0] (Read/Write)
// 0xec : reserved
// 0xf0 : Data signal of Dense_47_weight_dense_47_weight
//        bit 31~0 - Dense_47_weight_dense_47_weight[31:0] (Read/Write)
// 0xf4 : reserved
// 0xf8 : Data signal of Dense_47_bias_dense_47_bias
//        bit 31~0 - Dense_47_bias_dense_47_bias[31:0] (Read/Write)
// 0xfc : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                0x00
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                    0x04
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                    0x08
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                    0x0c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                              0x10
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                              32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT1_INPUT1_DATA                     0x18
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT1_INPUT1_DATA                     32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT2_INPUT2_DATA                     0x20
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT2_INPUT2_DATA                     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1_DENSE_1_DATA                   0x28
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1_DENSE_1_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2_DENSE_2_DATA                   0x30
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2_DENSE_2_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1_CONV2D_1_DATA                 0x38
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1_CONV2D_1_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2_CONV2D_2_DATA                 0x40
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2_CONV2D_2_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_3_CONCATENATE_3_DATA       0x48
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_3_CONCATENATE_3_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_16_CONV2D_16_DATA               0x50
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_16_CONV2D_16_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1_MAX_POOLING2D_1_DATA   0x58
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1_MAX_POOLING2D_1_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2_MAX_POOLING2D_2_DATA   0x60
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2_MAX_POOLING2D_2_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3_MAX_POOLING2D_3_DATA   0x68
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3_MAX_POOLING2D_3_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4_MAX_POOLING2D_4_DATA   0x70
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4_MAX_POOLING2D_4_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_1_FLATTEN_1_DATA               0x78
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_1_FLATTEN_1_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_46_DENSE_46_DATA                 0x80
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_46_DENSE_46_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_47_DENSE_47_DATA                 0x88
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_47_DENSE_47_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1_WEIGHT_DENSE_1_WEIGHT_DATA     0x90
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1_WEIGHT_DENSE_1_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1_BIAS_DENSE_1_BIAS_DATA         0x98
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1_BIAS_DENSE_1_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2_WEIGHT_DENSE_2_WEIGHT_DATA     0xa0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2_WEIGHT_DENSE_2_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2_BIAS_DENSE_2_BIAS_DATA         0xa8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2_BIAS_DENSE_2_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1_WEIGHT_CONV2D_1_WEIGHT_DATA   0xb0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1_WEIGHT_CONV2D_1_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1_BIAS_CONV2D_1_BIAS_DATA       0xb8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1_BIAS_CONV2D_1_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2_WEIGHT_CONV2D_2_WEIGHT_DATA   0xc0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2_WEIGHT_CONV2D_2_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2_BIAS_CONV2D_2_BIAS_DATA       0xc8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2_BIAS_CONV2D_2_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_16_WEIGHT_CONV2D_16_WEIGHT_DATA 0xd0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_16_WEIGHT_CONV2D_16_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_16_BIAS_CONV2D_16_BIAS_DATA     0xd8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_16_BIAS_CONV2D_16_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_46_WEIGHT_DENSE_46_WEIGHT_DATA   0xe0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_46_WEIGHT_DENSE_46_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_46_BIAS_DENSE_46_BIAS_DATA       0xe8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_46_BIAS_DENSE_46_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_47_WEIGHT_DENSE_47_WEIGHT_DATA   0xf0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_47_WEIGHT_DENSE_47_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_47_BIAS_DENSE_47_BIAS_DATA       0xf8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_47_BIAS_DENSE_47_BIAS_DATA       32

