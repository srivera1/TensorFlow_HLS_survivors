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
// 0x20 : Data signal of Conv2d_4837_conv2d_4837
//        bit 31~0 - Conv2d_4837_conv2d_4837[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of Conv2d_4838_conv2d_4838
//        bit 31~0 - Conv2d_4838_conv2d_4838[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of Max_pooling2d_3873_max_pooling2d_3873
//        bit 31~0 - Max_pooling2d_3873_max_pooling2d_3873[31:0] (Read/Write)
// 0x34 : reserved
// 0x38 : Data signal of Conv2d_4839_conv2d_4839
//        bit 31~0 - Conv2d_4839_conv2d_4839[31:0] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of Conv2d_4840_conv2d_4840
//        bit 31~0 - Conv2d_4840_conv2d_4840[31:0] (Read/Write)
// 0x44 : reserved
// 0x48 : Data signal of Max_pooling2d_3874_max_pooling2d_3874
//        bit 31~0 - Max_pooling2d_3874_max_pooling2d_3874[31:0] (Read/Write)
// 0x4c : reserved
// 0x50 : Data signal of Conv2d_4841_conv2d_4841
//        bit 31~0 - Conv2d_4841_conv2d_4841[31:0] (Read/Write)
// 0x54 : reserved
// 0x58 : Data signal of Conv2d_4842_conv2d_4842
//        bit 31~0 - Conv2d_4842_conv2d_4842[31:0] (Read/Write)
// 0x5c : reserved
// 0x60 : Data signal of Flatten_103_flatten_103
//        bit 31~0 - Flatten_103_flatten_103[31:0] (Read/Write)
// 0x64 : reserved
// 0x68 : Data signal of Dense_3624_dense_3624
//        bit 31~0 - Dense_3624_dense_3624[31:0] (Read/Write)
// 0x6c : reserved
// 0x70 : Data signal of Dense_3625_dense_3625
//        bit 31~0 - Dense_3625_dense_3625[31:0] (Read/Write)
// 0x74 : reserved
// 0x78 : Data signal of Conv2d_4837_weight_conv2d_4837_weight
//        bit 31~0 - Conv2d_4837_weight_conv2d_4837_weight[31:0] (Read/Write)
// 0x7c : reserved
// 0x80 : Data signal of Conv2d_4837_bias_conv2d_4837_bias
//        bit 31~0 - Conv2d_4837_bias_conv2d_4837_bias[31:0] (Read/Write)
// 0x84 : reserved
// 0x88 : Data signal of Conv2d_4838_weight_conv2d_4838_weight
//        bit 31~0 - Conv2d_4838_weight_conv2d_4838_weight[31:0] (Read/Write)
// 0x8c : reserved
// 0x90 : Data signal of Conv2d_4838_bias_conv2d_4838_bias
//        bit 31~0 - Conv2d_4838_bias_conv2d_4838_bias[31:0] (Read/Write)
// 0x94 : reserved
// 0x98 : Data signal of Conv2d_4839_weight_conv2d_4839_weight
//        bit 31~0 - Conv2d_4839_weight_conv2d_4839_weight[31:0] (Read/Write)
// 0x9c : reserved
// 0xa0 : Data signal of Conv2d_4839_bias_conv2d_4839_bias
//        bit 31~0 - Conv2d_4839_bias_conv2d_4839_bias[31:0] (Read/Write)
// 0xa4 : reserved
// 0xa8 : Data signal of Conv2d_4840_weight_conv2d_4840_weight
//        bit 31~0 - Conv2d_4840_weight_conv2d_4840_weight[31:0] (Read/Write)
// 0xac : reserved
// 0xb0 : Data signal of Conv2d_4840_bias_conv2d_4840_bias
//        bit 31~0 - Conv2d_4840_bias_conv2d_4840_bias[31:0] (Read/Write)
// 0xb4 : reserved
// 0xb8 : Data signal of Conv2d_4841_weight_conv2d_4841_weight
//        bit 31~0 - Conv2d_4841_weight_conv2d_4841_weight[31:0] (Read/Write)
// 0xbc : reserved
// 0xc0 : Data signal of Conv2d_4841_bias_conv2d_4841_bias
//        bit 31~0 - Conv2d_4841_bias_conv2d_4841_bias[31:0] (Read/Write)
// 0xc4 : reserved
// 0xc8 : Data signal of Conv2d_4842_weight_conv2d_4842_weight
//        bit 31~0 - Conv2d_4842_weight_conv2d_4842_weight[31:0] (Read/Write)
// 0xcc : reserved
// 0xd0 : Data signal of Conv2d_4842_bias_conv2d_4842_bias
//        bit 31~0 - Conv2d_4842_bias_conv2d_4842_bias[31:0] (Read/Write)
// 0xd4 : reserved
// 0xd8 : Data signal of Dense_3624_weight_dense_3624_weight
//        bit 31~0 - Dense_3624_weight_dense_3624_weight[31:0] (Read/Write)
// 0xdc : reserved
// 0xe0 : Data signal of Dense_3624_bias_dense_3624_bias
//        bit 31~0 - Dense_3624_bias_dense_3624_bias[31:0] (Read/Write)
// 0xe4 : reserved
// 0xe8 : Data signal of Dense_3625_weight_dense_3625_weight
//        bit 31~0 - Dense_3625_weight_dense_3625_weight[31:0] (Read/Write)
// 0xec : reserved
// 0xf0 : Data signal of Dense_3625_bias_dense_3625_bias
//        bit 31~0 - Dense_3625_bias_dense_3625_bias[31:0] (Read/Write)
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4837_CONV2D_4837_DATA               0x20
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4837_CONV2D_4837_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4838_CONV2D_4838_DATA               0x28
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4838_CONV2D_4838_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3873_MAX_POOLING2D_3873_DATA 0x30
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3873_MAX_POOLING2D_3873_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4839_CONV2D_4839_DATA               0x38
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4839_CONV2D_4839_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4840_CONV2D_4840_DATA               0x40
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4840_CONV2D_4840_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3874_MAX_POOLING2D_3874_DATA 0x48
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3874_MAX_POOLING2D_3874_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4841_CONV2D_4841_DATA               0x50
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4841_CONV2D_4841_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4842_CONV2D_4842_DATA               0x58
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4842_CONV2D_4842_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_103_FLATTEN_103_DATA               0x60
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_103_FLATTEN_103_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3624_DENSE_3624_DATA                 0x68
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3624_DENSE_3624_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3625_DENSE_3625_DATA                 0x70
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3625_DENSE_3625_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4837_WEIGHT_CONV2D_4837_WEIGHT_DATA 0x78
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4837_WEIGHT_CONV2D_4837_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4837_BIAS_CONV2D_4837_BIAS_DATA     0x80
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4837_BIAS_CONV2D_4837_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4838_WEIGHT_CONV2D_4838_WEIGHT_DATA 0x88
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4838_WEIGHT_CONV2D_4838_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4838_BIAS_CONV2D_4838_BIAS_DATA     0x90
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4838_BIAS_CONV2D_4838_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4839_WEIGHT_CONV2D_4839_WEIGHT_DATA 0x98
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4839_WEIGHT_CONV2D_4839_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4839_BIAS_CONV2D_4839_BIAS_DATA     0xa0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4839_BIAS_CONV2D_4839_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4840_WEIGHT_CONV2D_4840_WEIGHT_DATA 0xa8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4840_WEIGHT_CONV2D_4840_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4840_BIAS_CONV2D_4840_BIAS_DATA     0xb0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4840_BIAS_CONV2D_4840_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4841_WEIGHT_CONV2D_4841_WEIGHT_DATA 0xb8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4841_WEIGHT_CONV2D_4841_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4841_BIAS_CONV2D_4841_BIAS_DATA     0xc0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4841_BIAS_CONV2D_4841_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4842_WEIGHT_CONV2D_4842_WEIGHT_DATA 0xc8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4842_WEIGHT_CONV2D_4842_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4842_BIAS_CONV2D_4842_BIAS_DATA     0xd0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4842_BIAS_CONV2D_4842_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3624_WEIGHT_DENSE_3624_WEIGHT_DATA   0xd8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3624_WEIGHT_DENSE_3624_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3624_BIAS_DENSE_3624_BIAS_DATA       0xe0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3624_BIAS_DENSE_3624_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3625_WEIGHT_DENSE_3625_WEIGHT_DATA   0xe8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3625_WEIGHT_DENSE_3625_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3625_BIAS_DENSE_3625_BIAS_DATA       0xf0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3625_BIAS_DENSE_3625_BIAS_DATA       32

