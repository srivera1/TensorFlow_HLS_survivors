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
// 0x028 : Data signal of Conv2d_2601_conv2d_2601
//         bit 31~0 - Conv2d_2601_conv2d_2601[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2599_conv2d_2599
//         bit 31~0 - Conv2d_2599_conv2d_2599[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2190_max_pooling2d_2190
//         bit 31~0 - Max_pooling2d_2190_max_pooling2d_2190[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2189_max_pooling2d_2189
//         bit 31~0 - Max_pooling2d_2189_max_pooling2d_2189[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2105_dense_2105
//         bit 31~0 - Dense_2105_dense_2105[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_2600_conv2d_2600
//         bit 31~0 - Conv2d_2600_conv2d_2600[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_2602_conv2d_2602
//         bit 31~0 - Conv2d_2602_conv2d_2602[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Concatenate_458_concatenate_458
//         bit 31~0 - Concatenate_458_concatenate_458[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Conv2d_2603_conv2d_2603
//         bit 31~0 - Conv2d_2603_conv2d_2603[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_2191_max_pooling2d_2191
//         bit 31~0 - Max_pooling2d_2191_max_pooling2d_2191[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_2604_conv2d_2604
//         bit 31~0 - Conv2d_2604_conv2d_2604[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_2192_max_pooling2d_2192
//         bit 31~0 - Max_pooling2d_2192_max_pooling2d_2192[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_2106_dense_2106
//         bit 31~0 - Dense_2106_dense_2106[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_2107_dense_2107
//         bit 31~0 - Dense_2107_dense_2107[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_2108_dense_2108
//         bit 31~0 - Dense_2108_dense_2108[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_2109_dense_2109
//         bit 31~0 - Dense_2109_dense_2109[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_2110_dense_2110
//         bit 31~0 - Dense_2110_dense_2110[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Flatten_235_flatten_235
//         bit 31~0 - Flatten_235_flatten_235[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_2111_dense_2111
//         bit 31~0 - Dense_2111_dense_2111[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_2112_dense_2112
//         bit 31~0 - Dense_2112_dense_2112[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_2601_weight_conv2d_2601_weight
//         bit 31~0 - Conv2d_2601_weight_conv2d_2601_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_2601_bias_conv2d_2601_bias
//         bit 31~0 - Conv2d_2601_bias_conv2d_2601_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_2599_weight_conv2d_2599_weight
//         bit 31~0 - Conv2d_2599_weight_conv2d_2599_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_2599_bias_conv2d_2599_bias
//         bit 31~0 - Conv2d_2599_bias_conv2d_2599_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_2105_weight_dense_2105_weight
//         bit 31~0 - Dense_2105_weight_dense_2105_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_2105_bias_dense_2105_bias
//         bit 31~0 - Dense_2105_bias_dense_2105_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_2600_weight_conv2d_2600_weight
//         bit 31~0 - Conv2d_2600_weight_conv2d_2600_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_2600_bias_conv2d_2600_bias
//         bit 31~0 - Conv2d_2600_bias_conv2d_2600_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_2602_weight_conv2d_2602_weight
//         bit 31~0 - Conv2d_2602_weight_conv2d_2602_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_2602_bias_conv2d_2602_bias
//         bit 31~0 - Conv2d_2602_bias_conv2d_2602_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_2603_weight_conv2d_2603_weight
//         bit 31~0 - Conv2d_2603_weight_conv2d_2603_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_2603_bias_conv2d_2603_bias
//         bit 31~0 - Conv2d_2603_bias_conv2d_2603_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_2604_weight_conv2d_2604_weight
//         bit 31~0 - Conv2d_2604_weight_conv2d_2604_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_2604_bias_conv2d_2604_bias
//         bit 31~0 - Conv2d_2604_bias_conv2d_2604_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_2106_weight_dense_2106_weight
//         bit 31~0 - Dense_2106_weight_dense_2106_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_2106_bias_dense_2106_bias
//         bit 31~0 - Dense_2106_bias_dense_2106_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_2107_weight_dense_2107_weight
//         bit 31~0 - Dense_2107_weight_dense_2107_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_2107_bias_dense_2107_bias
//         bit 31~0 - Dense_2107_bias_dense_2107_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_2108_weight_dense_2108_weight
//         bit 31~0 - Dense_2108_weight_dense_2108_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_2108_bias_dense_2108_bias
//         bit 31~0 - Dense_2108_bias_dense_2108_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_2109_weight_dense_2109_weight
//         bit 31~0 - Dense_2109_weight_dense_2109_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_2109_bias_dense_2109_bias
//         bit 31~0 - Dense_2109_bias_dense_2109_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_2110_weight_dense_2110_weight
//         bit 31~0 - Dense_2110_weight_dense_2110_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_2110_bias_dense_2110_bias
//         bit 31~0 - Dense_2110_bias_dense_2110_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_2111_weight_dense_2111_weight
//         bit 31~0 - Dense_2111_weight_dense_2111_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_2111_bias_dense_2111_bias
//         bit 31~0 - Dense_2111_bias_dense_2111_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_2112_weight_dense_2112_weight
//         bit 31~0 - Dense_2112_weight_dense_2112_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_2112_bias_dense_2112_bias
//         bit 31~0 - Dense_2112_bias_dense_2112_bias[31:0] (Read/Write)
// 0x1a4 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2601_CONV2D_2601_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2601_CONV2D_2601_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2599_CONV2D_2599_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2599_CONV2D_2599_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2190_MAX_POOLING2D_2190_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2190_MAX_POOLING2D_2190_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2189_MAX_POOLING2D_2189_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2189_MAX_POOLING2D_2189_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2105_DENSE_2105_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2105_DENSE_2105_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2600_CONV2D_2600_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2600_CONV2D_2600_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2602_CONV2D_2602_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2602_CONV2D_2602_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_458_CONCATENATE_458_DATA       0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_458_CONCATENATE_458_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2603_CONV2D_2603_DATA               0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2603_CONV2D_2603_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2191_MAX_POOLING2D_2191_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2191_MAX_POOLING2D_2191_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2604_CONV2D_2604_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2604_CONV2D_2604_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2192_MAX_POOLING2D_2192_DATA 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2192_MAX_POOLING2D_2192_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2106_DENSE_2106_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2106_DENSE_2106_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2107_DENSE_2107_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2107_DENSE_2107_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2108_DENSE_2108_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2108_DENSE_2108_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2109_DENSE_2109_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2109_DENSE_2109_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2110_DENSE_2110_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2110_DENSE_2110_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_235_FLATTEN_235_DATA               0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_235_FLATTEN_235_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2111_DENSE_2111_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2111_DENSE_2111_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2112_DENSE_2112_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2112_DENSE_2112_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2601_WEIGHT_CONV2D_2601_WEIGHT_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2601_WEIGHT_CONV2D_2601_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2601_BIAS_CONV2D_2601_BIAS_DATA     0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2601_BIAS_CONV2D_2601_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2599_WEIGHT_CONV2D_2599_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2599_WEIGHT_CONV2D_2599_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2599_BIAS_CONV2D_2599_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2599_BIAS_CONV2D_2599_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2105_WEIGHT_DENSE_2105_WEIGHT_DATA   0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2105_WEIGHT_DENSE_2105_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2105_BIAS_DENSE_2105_BIAS_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2105_BIAS_DENSE_2105_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2600_WEIGHT_CONV2D_2600_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2600_WEIGHT_CONV2D_2600_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2600_BIAS_CONV2D_2600_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2600_BIAS_CONV2D_2600_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2602_WEIGHT_CONV2D_2602_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2602_WEIGHT_CONV2D_2602_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2602_BIAS_CONV2D_2602_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2602_BIAS_CONV2D_2602_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2603_WEIGHT_CONV2D_2603_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2603_WEIGHT_CONV2D_2603_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2603_BIAS_CONV2D_2603_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2603_BIAS_CONV2D_2603_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2604_WEIGHT_CONV2D_2604_WEIGHT_DATA 0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2604_WEIGHT_CONV2D_2604_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2604_BIAS_CONV2D_2604_BIAS_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2604_BIAS_CONV2D_2604_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2106_WEIGHT_DENSE_2106_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2106_WEIGHT_DENSE_2106_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2106_BIAS_DENSE_2106_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2106_BIAS_DENSE_2106_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2107_WEIGHT_DENSE_2107_WEIGHT_DATA   0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2107_WEIGHT_DENSE_2107_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2107_BIAS_DENSE_2107_BIAS_DATA       0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2107_BIAS_DENSE_2107_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2108_WEIGHT_DENSE_2108_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2108_WEIGHT_DENSE_2108_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2108_BIAS_DENSE_2108_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2108_BIAS_DENSE_2108_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2109_WEIGHT_DENSE_2109_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2109_WEIGHT_DENSE_2109_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2109_BIAS_DENSE_2109_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2109_BIAS_DENSE_2109_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2110_WEIGHT_DENSE_2110_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2110_WEIGHT_DENSE_2110_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2110_BIAS_DENSE_2110_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2110_BIAS_DENSE_2110_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2111_WEIGHT_DENSE_2111_WEIGHT_DATA   0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2111_WEIGHT_DENSE_2111_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2111_BIAS_DENSE_2111_BIAS_DATA       0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2111_BIAS_DENSE_2111_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2112_WEIGHT_DENSE_2112_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2112_WEIGHT_DENSE_2112_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2112_BIAS_DENSE_2112_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2112_BIAS_DENSE_2112_BIAS_DATA       32

