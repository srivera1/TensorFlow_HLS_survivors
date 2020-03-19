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
// 0x028 : Data signal of Conv2d_93_conv2d_93
//         bit 31~0 - Conv2d_93_conv2d_93[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_91_conv2d_91
//         bit 31~0 - Conv2d_91_conv2d_91[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_60_max_pooling2d_60
//         bit 31~0 - Max_pooling2d_60_max_pooling2d_60[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_59_max_pooling2d_59
//         bit 31~0 - Max_pooling2d_59_max_pooling2d_59[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_42_dense_42
//         bit 31~0 - Dense_42_dense_42[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_92_conv2d_92
//         bit 31~0 - Conv2d_92_conv2d_92[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_94_conv2d_94
//         bit 31~0 - Conv2d_94_conv2d_94[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Concatenate_10_concatenate_10
//         bit 31~0 - Concatenate_10_concatenate_10[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Conv2d_95_conv2d_95
//         bit 31~0 - Conv2d_95_conv2d_95[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_96_conv2d_96
//         bit 31~0 - Conv2d_96_conv2d_96[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_61_max_pooling2d_61
//         bit 31~0 - Max_pooling2d_61_max_pooling2d_61[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_97_conv2d_97
//         bit 31~0 - Conv2d_97_conv2d_97[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_62_max_pooling2d_62
//         bit 31~0 - Max_pooling2d_62_max_pooling2d_62[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Flatten_9_flatten_9
//         bit 31~0 - Flatten_9_flatten_9[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_43_dense_43
//         bit 31~0 - Dense_43_dense_43[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_44_dense_44
//         bit 31~0 - Dense_44_dense_44[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_93_weight_conv2d_93_weight
//         bit 31~0 - Conv2d_93_weight_conv2d_93_weight[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_93_bias_conv2d_93_bias
//         bit 31~0 - Conv2d_93_bias_conv2d_93_bias[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_91_weight_conv2d_91_weight
//         bit 31~0 - Conv2d_91_weight_conv2d_91_weight[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Conv2d_91_bias_conv2d_91_bias
//         bit 31~0 - Conv2d_91_bias_conv2d_91_bias[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_42_weight_dense_42_weight
//         bit 31~0 - Dense_42_weight_dense_42_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_42_bias_dense_42_bias
//         bit 31~0 - Dense_42_bias_dense_42_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_92_weight_conv2d_92_weight
//         bit 31~0 - Conv2d_92_weight_conv2d_92_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_92_bias_conv2d_92_bias
//         bit 31~0 - Conv2d_92_bias_conv2d_92_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_94_weight_conv2d_94_weight
//         bit 31~0 - Conv2d_94_weight_conv2d_94_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_94_bias_conv2d_94_bias
//         bit 31~0 - Conv2d_94_bias_conv2d_94_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_95_weight_conv2d_95_weight
//         bit 31~0 - Conv2d_95_weight_conv2d_95_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_95_bias_conv2d_95_bias
//         bit 31~0 - Conv2d_95_bias_conv2d_95_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_96_weight_conv2d_96_weight
//         bit 31~0 - Conv2d_96_weight_conv2d_96_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_96_bias_conv2d_96_bias
//         bit 31~0 - Conv2d_96_bias_conv2d_96_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_97_weight_conv2d_97_weight
//         bit 31~0 - Conv2d_97_weight_conv2d_97_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_97_bias_conv2d_97_bias
//         bit 31~0 - Conv2d_97_bias_conv2d_97_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_43_weight_dense_43_weight
//         bit 31~0 - Dense_43_weight_dense_43_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_43_bias_dense_43_bias
//         bit 31~0 - Dense_43_bias_dense_43_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_44_weight_dense_44_weight
//         bit 31~0 - Dense_44_weight_dense_44_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_44_bias_dense_44_bias
//         bit 31~0 - Dense_44_bias_dense_44_bias[31:0] (Read/Write)
// 0x144 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_93_CONV2D_93_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_93_CONV2D_93_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_91_CONV2D_91_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_91_CONV2D_91_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_60_MAX_POOLING2D_60_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_60_MAX_POOLING2D_60_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_59_MAX_POOLING2D_59_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_59_MAX_POOLING2D_59_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_42_DENSE_42_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_42_DENSE_42_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_92_CONV2D_92_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_92_CONV2D_92_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_94_CONV2D_94_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_94_CONV2D_94_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_10_CONCATENATE_10_DATA     0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_10_CONCATENATE_10_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_95_CONV2D_95_DATA               0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_95_CONV2D_95_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_96_CONV2D_96_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_96_CONV2D_96_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_61_MAX_POOLING2D_61_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_61_MAX_POOLING2D_61_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_97_CONV2D_97_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_97_CONV2D_97_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_62_MAX_POOLING2D_62_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_62_MAX_POOLING2D_62_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_9_FLATTEN_9_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_9_FLATTEN_9_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_43_DENSE_43_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_43_DENSE_43_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_44_DENSE_44_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_44_DENSE_44_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_93_WEIGHT_CONV2D_93_WEIGHT_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_93_WEIGHT_CONV2D_93_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_93_BIAS_CONV2D_93_BIAS_DATA     0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_93_BIAS_CONV2D_93_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_91_WEIGHT_CONV2D_91_WEIGHT_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_91_WEIGHT_CONV2D_91_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_91_BIAS_CONV2D_91_BIAS_DATA     0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_91_BIAS_CONV2D_91_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_42_WEIGHT_DENSE_42_WEIGHT_DATA   0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_42_WEIGHT_DENSE_42_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_42_BIAS_DENSE_42_BIAS_DATA       0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_42_BIAS_DENSE_42_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_92_WEIGHT_CONV2D_92_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_92_WEIGHT_CONV2D_92_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_92_BIAS_CONV2D_92_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_92_BIAS_CONV2D_92_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_94_WEIGHT_CONV2D_94_WEIGHT_DATA 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_94_WEIGHT_CONV2D_94_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_94_BIAS_CONV2D_94_BIAS_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_94_BIAS_CONV2D_94_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_95_WEIGHT_CONV2D_95_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_95_WEIGHT_CONV2D_95_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_95_BIAS_CONV2D_95_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_95_BIAS_CONV2D_95_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_96_WEIGHT_CONV2D_96_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_96_WEIGHT_CONV2D_96_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_96_BIAS_CONV2D_96_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_96_BIAS_CONV2D_96_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_97_WEIGHT_CONV2D_97_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_97_WEIGHT_CONV2D_97_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_97_BIAS_CONV2D_97_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_97_BIAS_CONV2D_97_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_43_WEIGHT_DENSE_43_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_43_WEIGHT_DENSE_43_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_43_BIAS_DENSE_43_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_43_BIAS_DENSE_43_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_44_WEIGHT_DENSE_44_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_44_WEIGHT_DENSE_44_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_44_BIAS_DENSE_44_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_44_BIAS_DENSE_44_BIAS_DATA       32

