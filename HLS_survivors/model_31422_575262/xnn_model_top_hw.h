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
// 0x028 : Data signal of Conv2d_14_conv2d_14
//         bit 31~0 - Conv2d_14_conv2d_14[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_16_conv2d_16
//         bit 31~0 - Conv2d_16_conv2d_16[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_6_max_pooling2d_6
//         bit 31~0 - Max_pooling2d_6_max_pooling2d_6[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_7_max_pooling2d_7
//         bit 31~0 - Max_pooling2d_7_max_pooling2d_7[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_4_dense_4
//         bit 31~0 - Dense_4_dense_4[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_5_dense_5
//         bit 31~0 - Dense_5_dense_5[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_15_conv2d_15
//         bit 31~0 - Conv2d_15_conv2d_15[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_17_conv2d_17
//         bit 31~0 - Conv2d_17_conv2d_17[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Concatenate_2_concatenate_2
//         bit 31~0 - Concatenate_2_concatenate_2[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_18_conv2d_18
//         bit 31~0 - Conv2d_18_conv2d_18[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_19_conv2d_19
//         bit 31~0 - Conv2d_19_conv2d_19[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_8_max_pooling2d_8
//         bit 31~0 - Max_pooling2d_8_max_pooling2d_8[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_20_conv2d_20
//         bit 31~0 - Conv2d_20_conv2d_20[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Max_pooling2d_9_max_pooling2d_9
//         bit 31~0 - Max_pooling2d_9_max_pooling2d_9[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Flatten_2_flatten_2
//         bit 31~0 - Flatten_2_flatten_2[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_6_dense_6
//         bit 31~0 - Dense_6_dense_6[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_7_dense_7
//         bit 31~0 - Dense_7_dense_7[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_14_weight_conv2d_14_weight
//         bit 31~0 - Conv2d_14_weight_conv2d_14_weight[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_14_bias_conv2d_14_bias
//         bit 31~0 - Conv2d_14_bias_conv2d_14_bias[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Conv2d_16_weight_conv2d_16_weight
//         bit 31~0 - Conv2d_16_weight_conv2d_16_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_16_bias_conv2d_16_bias
//         bit 31~0 - Conv2d_16_bias_conv2d_16_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_4_weight_dense_4_weight
//         bit 31~0 - Dense_4_weight_dense_4_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_4_bias_dense_4_bias
//         bit 31~0 - Dense_4_bias_dense_4_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_5_weight_dense_5_weight
//         bit 31~0 - Dense_5_weight_dense_5_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_5_bias_dense_5_bias
//         bit 31~0 - Dense_5_bias_dense_5_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_15_weight_conv2d_15_weight
//         bit 31~0 - Conv2d_15_weight_conv2d_15_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_15_bias_conv2d_15_bias
//         bit 31~0 - Conv2d_15_bias_conv2d_15_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_17_weight_conv2d_17_weight
//         bit 31~0 - Conv2d_17_weight_conv2d_17_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_17_bias_conv2d_17_bias
//         bit 31~0 - Conv2d_17_bias_conv2d_17_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_18_weight_conv2d_18_weight
//         bit 31~0 - Conv2d_18_weight_conv2d_18_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_18_bias_conv2d_18_bias
//         bit 31~0 - Conv2d_18_bias_conv2d_18_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_19_weight_conv2d_19_weight
//         bit 31~0 - Conv2d_19_weight_conv2d_19_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_19_bias_conv2d_19_bias
//         bit 31~0 - Conv2d_19_bias_conv2d_19_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_20_weight_conv2d_20_weight
//         bit 31~0 - Conv2d_20_weight_conv2d_20_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_20_bias_conv2d_20_bias
//         bit 31~0 - Conv2d_20_bias_conv2d_20_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_6_weight_dense_6_weight
//         bit 31~0 - Dense_6_weight_dense_6_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_6_bias_dense_6_bias
//         bit 31~0 - Dense_6_bias_dense_6_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_7_weight_dense_7_weight
//         bit 31~0 - Dense_7_weight_dense_7_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_7_bias_dense_7_bias
//         bit 31~0 - Dense_7_bias_dense_7_bias[31:0] (Read/Write)
// 0x15c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                    0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                    0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                    0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                              0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                              32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT1_INPUT1_DATA                     0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT1_INPUT1_DATA                     32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT2_INPUT2_DATA                     0x020
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT2_INPUT2_DATA                     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_14_CONV2D_14_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_14_CONV2D_14_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_16_CONV2D_16_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_16_CONV2D_16_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_6_MAX_POOLING2D_6_DATA   0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_6_MAX_POOLING2D_6_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_7_MAX_POOLING2D_7_DATA   0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_7_MAX_POOLING2D_7_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4_DENSE_4_DATA                   0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4_DENSE_4_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5_DENSE_5_DATA                   0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5_DENSE_5_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_15_CONV2D_15_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_15_CONV2D_15_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_17_CONV2D_17_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_17_CONV2D_17_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_2_CONCATENATE_2_DATA       0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_2_CONCATENATE_2_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_18_CONV2D_18_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_18_CONV2D_18_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_19_CONV2D_19_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_19_CONV2D_19_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_8_MAX_POOLING2D_8_DATA   0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_8_MAX_POOLING2D_8_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_20_CONV2D_20_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_20_CONV2D_20_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_9_MAX_POOLING2D_9_DATA   0x090
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_9_MAX_POOLING2D_9_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_2_FLATTEN_2_DATA               0x098
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_2_FLATTEN_2_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6_DENSE_6_DATA                   0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6_DENSE_6_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_7_DENSE_7_DATA                   0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_7_DENSE_7_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_14_WEIGHT_CONV2D_14_WEIGHT_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_14_WEIGHT_CONV2D_14_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_14_BIAS_CONV2D_14_BIAS_DATA     0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_14_BIAS_CONV2D_14_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_16_WEIGHT_CONV2D_16_WEIGHT_DATA 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_16_WEIGHT_CONV2D_16_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_16_BIAS_CONV2D_16_BIAS_DATA     0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_16_BIAS_CONV2D_16_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4_WEIGHT_DENSE_4_WEIGHT_DATA     0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4_WEIGHT_DENSE_4_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4_BIAS_DENSE_4_BIAS_DATA         0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4_BIAS_DENSE_4_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5_WEIGHT_DENSE_5_WEIGHT_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5_WEIGHT_DENSE_5_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5_BIAS_DENSE_5_BIAS_DATA         0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5_BIAS_DENSE_5_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_15_WEIGHT_CONV2D_15_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_15_WEIGHT_CONV2D_15_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_15_BIAS_CONV2D_15_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_15_BIAS_CONV2D_15_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_17_WEIGHT_CONV2D_17_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_17_WEIGHT_CONV2D_17_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_17_BIAS_CONV2D_17_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_17_BIAS_CONV2D_17_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_18_WEIGHT_CONV2D_18_WEIGHT_DATA 0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_18_WEIGHT_CONV2D_18_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_18_BIAS_CONV2D_18_BIAS_DATA     0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_18_BIAS_CONV2D_18_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_19_WEIGHT_CONV2D_19_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_19_WEIGHT_CONV2D_19_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_19_BIAS_CONV2D_19_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_19_BIAS_CONV2D_19_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_20_WEIGHT_CONV2D_20_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_20_WEIGHT_CONV2D_20_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_20_BIAS_CONV2D_20_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_20_BIAS_CONV2D_20_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6_WEIGHT_DENSE_6_WEIGHT_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6_WEIGHT_DENSE_6_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6_BIAS_DENSE_6_BIAS_DATA         0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6_BIAS_DENSE_6_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_7_WEIGHT_DENSE_7_WEIGHT_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_7_WEIGHT_DENSE_7_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_7_BIAS_DENSE_7_BIAS_DATA         0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_7_BIAS_DENSE_7_BIAS_DATA         32

