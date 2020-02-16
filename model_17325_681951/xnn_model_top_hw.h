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
// 0x028 : Data signal of Dense_13_dense_13
//         bit 31~0 - Dense_13_dense_13[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Dense_10_dense_10
//         bit 31~0 - Dense_10_dense_10[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Dense_14_dense_14
//         bit 31~0 - Dense_14_dense_14[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Dense_11_dense_11
//         bit 31~0 - Dense_11_dense_11[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_15_dense_15
//         bit 31~0 - Dense_15_dense_15[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_12_dense_12
//         bit 31~0 - Dense_12_dense_12[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Dense_16_dense_16
//         bit 31~0 - Dense_16_dense_16[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Concatenate_2_concatenate_2
//         bit 31~0 - Concatenate_2_concatenate_2[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Conv2d_7_conv2d_7
//         bit 31~0 - Conv2d_7_conv2d_7[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_8_conv2d_8
//         bit 31~0 - Conv2d_8_conv2d_8[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_5_max_pooling2d_5
//         bit 31~0 - Max_pooling2d_5_max_pooling2d_5[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_9_conv2d_9
//         bit 31~0 - Conv2d_9_conv2d_9[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_10_conv2d_10
//         bit 31~0 - Conv2d_10_conv2d_10[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Max_pooling2d_6_max_pooling2d_6
//         bit 31~0 - Max_pooling2d_6_max_pooling2d_6[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_11_conv2d_11
//         bit 31~0 - Conv2d_11_conv2d_11[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_12_conv2d_12
//         bit 31~0 - Conv2d_12_conv2d_12[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Flatten_2_flatten_2
//         bit 31~0 - Flatten_2_flatten_2[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_17_dense_17
//         bit 31~0 - Dense_17_dense_17[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_18_dense_18
//         bit 31~0 - Dense_18_dense_18[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_13_weight_dense_13_weight
//         bit 31~0 - Dense_13_weight_dense_13_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_13_bias_dense_13_bias
//         bit 31~0 - Dense_13_bias_dense_13_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_10_weight_dense_10_weight
//         bit 31~0 - Dense_10_weight_dense_10_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_10_bias_dense_10_bias
//         bit 31~0 - Dense_10_bias_dense_10_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_14_weight_dense_14_weight
//         bit 31~0 - Dense_14_weight_dense_14_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_14_bias_dense_14_bias
//         bit 31~0 - Dense_14_bias_dense_14_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_11_weight_dense_11_weight
//         bit 31~0 - Dense_11_weight_dense_11_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_11_bias_dense_11_bias
//         bit 31~0 - Dense_11_bias_dense_11_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_15_weight_dense_15_weight
//         bit 31~0 - Dense_15_weight_dense_15_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_15_bias_dense_15_bias
//         bit 31~0 - Dense_15_bias_dense_15_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_12_weight_dense_12_weight
//         bit 31~0 - Dense_12_weight_dense_12_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_12_bias_dense_12_bias
//         bit 31~0 - Dense_12_bias_dense_12_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_16_weight_dense_16_weight
//         bit 31~0 - Dense_16_weight_dense_16_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_16_bias_dense_16_bias
//         bit 31~0 - Dense_16_bias_dense_16_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_7_weight_conv2d_7_weight
//         bit 31~0 - Conv2d_7_weight_conv2d_7_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_7_bias_conv2d_7_bias
//         bit 31~0 - Conv2d_7_bias_conv2d_7_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_8_weight_conv2d_8_weight
//         bit 31~0 - Conv2d_8_weight_conv2d_8_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_8_bias_conv2d_8_bias
//         bit 31~0 - Conv2d_8_bias_conv2d_8_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_9_weight_conv2d_9_weight
//         bit 31~0 - Conv2d_9_weight_conv2d_9_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_9_bias_conv2d_9_bias
//         bit 31~0 - Conv2d_9_bias_conv2d_9_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_10_weight_conv2d_10_weight
//         bit 31~0 - Conv2d_10_weight_conv2d_10_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_10_bias_conv2d_10_bias
//         bit 31~0 - Conv2d_10_bias_conv2d_10_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_11_weight_conv2d_11_weight
//         bit 31~0 - Conv2d_11_weight_conv2d_11_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_11_bias_conv2d_11_bias
//         bit 31~0 - Conv2d_11_bias_conv2d_11_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_12_weight_conv2d_12_weight
//         bit 31~0 - Conv2d_12_weight_conv2d_12_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_12_bias_conv2d_12_bias
//         bit 31~0 - Conv2d_12_bias_conv2d_12_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_17_weight_dense_17_weight
//         bit 31~0 - Dense_17_weight_dense_17_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_17_bias_dense_17_bias
//         bit 31~0 - Dense_17_bias_dense_17_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_18_weight_dense_18_weight
//         bit 31~0 - Dense_18_weight_dense_18_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_18_bias_dense_18_bias
//         bit 31~0 - Dense_18_bias_dense_18_bias[31:0] (Read/Write)
// 0x1ac : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                    0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                    0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                    0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                              0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                              32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT2_INPUT2_DATA                     0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT2_INPUT2_DATA                     32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT1_INPUT1_DATA                     0x020
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT1_INPUT1_DATA                     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_13_DENSE_13_DATA                 0x028
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_13_DENSE_13_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_10_DENSE_10_DATA                 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_10_DENSE_10_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_14_DENSE_14_DATA                 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_14_DENSE_14_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_11_DENSE_11_DATA                 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_11_DENSE_11_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_15_DENSE_15_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_15_DENSE_15_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_12_DENSE_12_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_12_DENSE_12_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_16_DENSE_16_DATA                 0x058
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_16_DENSE_16_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_2_CONCATENATE_2_DATA       0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_2_CONCATENATE_2_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7_CONV2D_7_DATA                 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7_CONV2D_7_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8_CONV2D_8_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8_CONV2D_8_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5_MAX_POOLING2D_5_DATA   0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5_MAX_POOLING2D_5_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_9_CONV2D_9_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_9_CONV2D_9_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_10_CONV2D_10_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_10_CONV2D_10_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_6_MAX_POOLING2D_6_DATA   0x090
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_6_MAX_POOLING2D_6_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_11_CONV2D_11_DATA               0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_11_CONV2D_11_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_12_CONV2D_12_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_12_CONV2D_12_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_2_FLATTEN_2_DATA               0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_2_FLATTEN_2_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_17_DENSE_17_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_17_DENSE_17_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_18_DENSE_18_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_18_DENSE_18_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_13_WEIGHT_DENSE_13_WEIGHT_DATA   0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_13_WEIGHT_DENSE_13_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_13_BIAS_DENSE_13_BIAS_DATA       0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_13_BIAS_DENSE_13_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_10_WEIGHT_DENSE_10_WEIGHT_DATA   0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_10_WEIGHT_DENSE_10_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_10_BIAS_DENSE_10_BIAS_DATA       0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_10_BIAS_DENSE_10_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_14_WEIGHT_DENSE_14_WEIGHT_DATA   0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_14_WEIGHT_DENSE_14_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_14_BIAS_DENSE_14_BIAS_DATA       0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_14_BIAS_DENSE_14_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_11_WEIGHT_DENSE_11_WEIGHT_DATA   0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_11_WEIGHT_DENSE_11_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_11_BIAS_DENSE_11_BIAS_DATA       0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_11_BIAS_DENSE_11_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_15_WEIGHT_DENSE_15_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_15_WEIGHT_DENSE_15_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_15_BIAS_DENSE_15_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_15_BIAS_DENSE_15_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_12_WEIGHT_DENSE_12_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_12_WEIGHT_DENSE_12_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_12_BIAS_DENSE_12_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_12_BIAS_DENSE_12_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_16_WEIGHT_DENSE_16_WEIGHT_DATA   0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_16_WEIGHT_DENSE_16_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_16_BIAS_DENSE_16_BIAS_DATA       0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_16_BIAS_DENSE_16_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7_WEIGHT_CONV2D_7_WEIGHT_DATA   0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7_WEIGHT_CONV2D_7_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7_BIAS_CONV2D_7_BIAS_DATA       0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7_BIAS_CONV2D_7_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8_WEIGHT_CONV2D_8_WEIGHT_DATA   0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8_WEIGHT_CONV2D_8_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8_BIAS_CONV2D_8_BIAS_DATA       0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8_BIAS_CONV2D_8_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_9_WEIGHT_CONV2D_9_WEIGHT_DATA   0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_9_WEIGHT_CONV2D_9_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_9_BIAS_CONV2D_9_BIAS_DATA       0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_9_BIAS_CONV2D_9_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_10_WEIGHT_CONV2D_10_WEIGHT_DATA 0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_10_WEIGHT_CONV2D_10_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_10_BIAS_CONV2D_10_BIAS_DATA     0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_10_BIAS_CONV2D_10_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_11_WEIGHT_CONV2D_11_WEIGHT_DATA 0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_11_WEIGHT_CONV2D_11_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_11_BIAS_CONV2D_11_BIAS_DATA     0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_11_BIAS_CONV2D_11_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_12_WEIGHT_CONV2D_12_WEIGHT_DATA 0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_12_WEIGHT_CONV2D_12_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_12_BIAS_CONV2D_12_BIAS_DATA     0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_12_BIAS_CONV2D_12_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_17_WEIGHT_DENSE_17_WEIGHT_DATA   0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_17_WEIGHT_DENSE_17_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_17_BIAS_DENSE_17_BIAS_DATA       0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_17_BIAS_DENSE_17_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_18_WEIGHT_DENSE_18_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_18_WEIGHT_DENSE_18_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_18_BIAS_DENSE_18_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_18_BIAS_DENSE_18_BIAS_DATA       32

