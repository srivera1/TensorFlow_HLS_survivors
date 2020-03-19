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
// 0x018 : Data signal of Input2_input2
//         bit 31~0 - Input2_input2[31:0] (Read/Write)
// 0x01c : reserved
// 0x020 : Data signal of Input1_input1
//         bit 31~0 - Input1_input1[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Conv2d_1077_conv2d_1077
//         bit 31~0 - Conv2d_1077_conv2d_1077[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_1074_conv2d_1074
//         bit 31~0 - Conv2d_1074_conv2d_1074[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_911_max_pooling2d_911
//         bit 31~0 - Max_pooling2d_911_max_pooling2d_911[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_909_max_pooling2d_909
//         bit 31~0 - Max_pooling2d_909_max_pooling2d_909[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_886_dense_886
//         bit 31~0 - Dense_886_dense_886[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_1075_conv2d_1075
//         bit 31~0 - Conv2d_1075_conv2d_1075[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_1078_conv2d_1078
//         bit 31~0 - Conv2d_1078_conv2d_1078[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Max_pooling2d_910_max_pooling2d_910
//         bit 31~0 - Max_pooling2d_910_max_pooling2d_910[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_912_max_pooling2d_912
//         bit 31~0 - Max_pooling2d_912_max_pooling2d_912[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_885_dense_885
//         bit 31~0 - Dense_885_dense_885[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_887_dense_887
//         bit 31~0 - Dense_887_dense_887[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_1076_conv2d_1076
//         bit 31~0 - Conv2d_1076_conv2d_1076[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_1079_conv2d_1079
//         bit 31~0 - Conv2d_1079_conv2d_1079[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Concatenate_193_concatenate_193
//         bit 31~0 - Concatenate_193_concatenate_193[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_1080_conv2d_1080
//         bit 31~0 - Conv2d_1080_conv2d_1080[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Max_pooling2d_913_max_pooling2d_913
//         bit 31~0 - Max_pooling2d_913_max_pooling2d_913[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_888_dense_888
//         bit 31~0 - Dense_888_dense_888[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_889_dense_889
//         bit 31~0 - Dense_889_dense_889[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Flatten_100_flatten_100
//         bit 31~0 - Flatten_100_flatten_100[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_890_dense_890
//         bit 31~0 - Dense_890_dense_890[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_891_dense_891
//         bit 31~0 - Dense_891_dense_891[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_1077_weight_conv2d_1077_weight
//         bit 31~0 - Conv2d_1077_weight_conv2d_1077_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_1077_bias_conv2d_1077_bias
//         bit 31~0 - Conv2d_1077_bias_conv2d_1077_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_1074_weight_conv2d_1074_weight
//         bit 31~0 - Conv2d_1074_weight_conv2d_1074_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_1074_bias_conv2d_1074_bias
//         bit 31~0 - Conv2d_1074_bias_conv2d_1074_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_886_weight_dense_886_weight
//         bit 31~0 - Dense_886_weight_dense_886_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_886_bias_dense_886_bias
//         bit 31~0 - Dense_886_bias_dense_886_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_1075_weight_conv2d_1075_weight
//         bit 31~0 - Conv2d_1075_weight_conv2d_1075_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_1075_bias_conv2d_1075_bias
//         bit 31~0 - Conv2d_1075_bias_conv2d_1075_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_1078_weight_conv2d_1078_weight
//         bit 31~0 - Conv2d_1078_weight_conv2d_1078_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_1078_bias_conv2d_1078_bias
//         bit 31~0 - Conv2d_1078_bias_conv2d_1078_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_885_weight_dense_885_weight
//         bit 31~0 - Dense_885_weight_dense_885_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_885_bias_dense_885_bias
//         bit 31~0 - Dense_885_bias_dense_885_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_887_weight_dense_887_weight
//         bit 31~0 - Dense_887_weight_dense_887_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_887_bias_dense_887_bias
//         bit 31~0 - Dense_887_bias_dense_887_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_1076_weight_conv2d_1076_weight
//         bit 31~0 - Conv2d_1076_weight_conv2d_1076_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_1076_bias_conv2d_1076_bias
//         bit 31~0 - Conv2d_1076_bias_conv2d_1076_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_1079_weight_conv2d_1079_weight
//         bit 31~0 - Conv2d_1079_weight_conv2d_1079_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_1079_bias_conv2d_1079_bias
//         bit 31~0 - Conv2d_1079_bias_conv2d_1079_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_1080_weight_conv2d_1080_weight
//         bit 31~0 - Conv2d_1080_weight_conv2d_1080_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_1080_bias_conv2d_1080_bias
//         bit 31~0 - Conv2d_1080_bias_conv2d_1080_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_888_weight_dense_888_weight
//         bit 31~0 - Dense_888_weight_dense_888_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_888_bias_dense_888_bias
//         bit 31~0 - Dense_888_bias_dense_888_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_889_weight_dense_889_weight
//         bit 31~0 - Dense_889_weight_dense_889_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_889_bias_dense_889_bias
//         bit 31~0 - Dense_889_bias_dense_889_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_890_weight_dense_890_weight
//         bit 31~0 - Dense_890_weight_dense_890_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_890_bias_dense_890_bias
//         bit 31~0 - Dense_890_bias_dense_890_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_891_weight_dense_891_weight
//         bit 31~0 - Dense_891_weight_dense_891_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_891_bias_dense_891_bias
//         bit 31~0 - Dense_891_bias_dense_891_bias[31:0] (Read/Write)
// 0x1ac : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT2_INPUT2_DATA                         0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT2_INPUT2_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT1_INPUT1_DATA                         0x020
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT1_INPUT1_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1077_CONV2D_1077_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1077_CONV2D_1077_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1074_CONV2D_1074_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1074_CONV2D_1074_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_911_MAX_POOLING2D_911_DATA   0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_911_MAX_POOLING2D_911_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_909_MAX_POOLING2D_909_DATA   0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_909_MAX_POOLING2D_909_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_886_DENSE_886_DATA                   0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_886_DENSE_886_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1075_CONV2D_1075_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1075_CONV2D_1075_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1078_CONV2D_1078_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1078_CONV2D_1078_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_910_MAX_POOLING2D_910_DATA   0x060
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_910_MAX_POOLING2D_910_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_912_MAX_POOLING2D_912_DATA   0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_912_MAX_POOLING2D_912_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_885_DENSE_885_DATA                   0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_885_DENSE_885_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_887_DENSE_887_DATA                   0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_887_DENSE_887_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1076_CONV2D_1076_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1076_CONV2D_1076_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1079_CONV2D_1079_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1079_CONV2D_1079_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_193_CONCATENATE_193_DATA       0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_193_CONCATENATE_193_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1080_CONV2D_1080_DATA               0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1080_CONV2D_1080_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_913_MAX_POOLING2D_913_DATA   0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_913_MAX_POOLING2D_913_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_888_DENSE_888_DATA                   0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_888_DENSE_888_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_889_DENSE_889_DATA                   0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_889_DENSE_889_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_100_FLATTEN_100_DATA               0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_100_FLATTEN_100_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_890_DENSE_890_DATA                   0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_890_DENSE_890_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_891_DENSE_891_DATA                   0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_891_DENSE_891_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1077_WEIGHT_CONV2D_1077_WEIGHT_DATA 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1077_WEIGHT_CONV2D_1077_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1077_BIAS_CONV2D_1077_BIAS_DATA     0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1077_BIAS_CONV2D_1077_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1074_WEIGHT_CONV2D_1074_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1074_WEIGHT_CONV2D_1074_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1074_BIAS_CONV2D_1074_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1074_BIAS_CONV2D_1074_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_886_WEIGHT_DENSE_886_WEIGHT_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_886_WEIGHT_DENSE_886_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_886_BIAS_DENSE_886_BIAS_DATA         0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_886_BIAS_DENSE_886_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1075_WEIGHT_CONV2D_1075_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1075_WEIGHT_CONV2D_1075_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1075_BIAS_CONV2D_1075_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1075_BIAS_CONV2D_1075_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1078_WEIGHT_CONV2D_1078_WEIGHT_DATA 0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1078_WEIGHT_CONV2D_1078_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1078_BIAS_CONV2D_1078_BIAS_DATA     0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1078_BIAS_CONV2D_1078_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_885_WEIGHT_DENSE_885_WEIGHT_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_885_WEIGHT_DENSE_885_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_885_BIAS_DENSE_885_BIAS_DATA         0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_885_BIAS_DENSE_885_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_887_WEIGHT_DENSE_887_WEIGHT_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_887_WEIGHT_DENSE_887_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_887_BIAS_DENSE_887_BIAS_DATA         0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_887_BIAS_DENSE_887_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1076_WEIGHT_CONV2D_1076_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1076_WEIGHT_CONV2D_1076_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1076_BIAS_CONV2D_1076_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1076_BIAS_CONV2D_1076_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1079_WEIGHT_CONV2D_1079_WEIGHT_DATA 0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1079_WEIGHT_CONV2D_1079_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1079_BIAS_CONV2D_1079_BIAS_DATA     0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1079_BIAS_CONV2D_1079_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1080_WEIGHT_CONV2D_1080_WEIGHT_DATA 0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1080_WEIGHT_CONV2D_1080_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1080_BIAS_CONV2D_1080_BIAS_DATA     0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1080_BIAS_CONV2D_1080_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_888_WEIGHT_DENSE_888_WEIGHT_DATA     0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_888_WEIGHT_DENSE_888_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_888_BIAS_DENSE_888_BIAS_DATA         0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_888_BIAS_DENSE_888_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_889_WEIGHT_DENSE_889_WEIGHT_DATA     0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_889_WEIGHT_DENSE_889_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_889_BIAS_DENSE_889_BIAS_DATA         0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_889_BIAS_DENSE_889_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_890_WEIGHT_DENSE_890_WEIGHT_DATA     0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_890_WEIGHT_DENSE_890_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_890_BIAS_DENSE_890_BIAS_DATA         0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_890_BIAS_DENSE_890_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_891_WEIGHT_DENSE_891_WEIGHT_DATA     0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_891_WEIGHT_DENSE_891_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_891_BIAS_DENSE_891_BIAS_DATA         0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_891_BIAS_DENSE_891_BIAS_DATA         32

