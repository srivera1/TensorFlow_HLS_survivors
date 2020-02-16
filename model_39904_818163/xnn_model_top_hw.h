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
// 0x028 : Data signal of Conv2d_6577_conv2d_6577
//         bit 31~0 - Conv2d_6577_conv2d_6577[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_6582_conv2d_6582
//         bit 31~0 - Conv2d_6582_conv2d_6582[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_5189_max_pooling2d_5189
//         bit 31~0 - Max_pooling2d_5189_max_pooling2d_5189[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_5193_max_pooling2d_5193
//         bit 31~0 - Max_pooling2d_5193_max_pooling2d_5193[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_4892_dense_4892
//         bit 31~0 - Dense_4892_dense_4892[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_4896_dense_4896
//         bit 31~0 - Dense_4896_dense_4896[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_6578_conv2d_6578
//         bit 31~0 - Conv2d_6578_conv2d_6578[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_6583_conv2d_6583
//         bit 31~0 - Conv2d_6583_conv2d_6583[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_5190_max_pooling2d_5190
//         bit 31~0 - Max_pooling2d_5190_max_pooling2d_5190[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_5194_max_pooling2d_5194
//         bit 31~0 - Max_pooling2d_5194_max_pooling2d_5194[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_4893_dense_4893
//         bit 31~0 - Dense_4893_dense_4893[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_4897_dense_4897
//         bit 31~0 - Dense_4897_dense_4897[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_6579_conv2d_6579
//         bit 31~0 - Conv2d_6579_conv2d_6579[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_6584_conv2d_6584
//         bit 31~0 - Conv2d_6584_conv2d_6584[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_5191_max_pooling2d_5191
//         bit 31~0 - Max_pooling2d_5191_max_pooling2d_5191[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Max_pooling2d_5195_max_pooling2d_5195
//         bit 31~0 - Max_pooling2d_5195_max_pooling2d_5195[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_4894_dense_4894
//         bit 31~0 - Dense_4894_dense_4894[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_4898_dense_4898
//         bit 31~0 - Dense_4898_dense_4898[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Max_pooling2d_5192_max_pooling2d_5192
//         bit 31~0 - Max_pooling2d_5192_max_pooling2d_5192[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Max_pooling2d_5196_max_pooling2d_5196
//         bit 31~0 - Max_pooling2d_5196_max_pooling2d_5196[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_4895_dense_4895
//         bit 31~0 - Dense_4895_dense_4895[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_4899_dense_4899
//         bit 31~0 - Dense_4899_dense_4899[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Concatenate_506_concatenate_506
//         bit 31~0 - Concatenate_506_concatenate_506[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Flatten_188_flatten_188
//         bit 31~0 - Flatten_188_flatten_188[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_4900_dense_4900
//         bit 31~0 - Dense_4900_dense_4900[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_4901_dense_4901
//         bit 31~0 - Dense_4901_dense_4901[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_6577_weight_conv2d_6577_weight
//         bit 31~0 - Conv2d_6577_weight_conv2d_6577_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_6577_bias_conv2d_6577_bias
//         bit 31~0 - Conv2d_6577_bias_conv2d_6577_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_6582_weight_conv2d_6582_weight
//         bit 31~0 - Conv2d_6582_weight_conv2d_6582_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_6582_bias_conv2d_6582_bias
//         bit 31~0 - Conv2d_6582_bias_conv2d_6582_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_4892_weight_dense_4892_weight
//         bit 31~0 - Dense_4892_weight_dense_4892_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_4892_bias_dense_4892_bias
//         bit 31~0 - Dense_4892_bias_dense_4892_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_4896_weight_dense_4896_weight
//         bit 31~0 - Dense_4896_weight_dense_4896_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_4896_bias_dense_4896_bias
//         bit 31~0 - Dense_4896_bias_dense_4896_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_6578_weight_conv2d_6578_weight
//         bit 31~0 - Conv2d_6578_weight_conv2d_6578_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_6578_bias_conv2d_6578_bias
//         bit 31~0 - Conv2d_6578_bias_conv2d_6578_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_6583_weight_conv2d_6583_weight
//         bit 31~0 - Conv2d_6583_weight_conv2d_6583_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_6583_bias_conv2d_6583_bias
//         bit 31~0 - Conv2d_6583_bias_conv2d_6583_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_4893_weight_dense_4893_weight
//         bit 31~0 - Dense_4893_weight_dense_4893_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_4893_bias_dense_4893_bias
//         bit 31~0 - Dense_4893_bias_dense_4893_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_4897_weight_dense_4897_weight
//         bit 31~0 - Dense_4897_weight_dense_4897_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_4897_bias_dense_4897_bias
//         bit 31~0 - Dense_4897_bias_dense_4897_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_6579_weight_conv2d_6579_weight
//         bit 31~0 - Conv2d_6579_weight_conv2d_6579_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_6579_bias_conv2d_6579_bias
//         bit 31~0 - Conv2d_6579_bias_conv2d_6579_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_6584_weight_conv2d_6584_weight
//         bit 31~0 - Conv2d_6584_weight_conv2d_6584_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_6584_bias_conv2d_6584_bias
//         bit 31~0 - Conv2d_6584_bias_conv2d_6584_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_4894_weight_dense_4894_weight
//         bit 31~0 - Dense_4894_weight_dense_4894_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_4894_bias_dense_4894_bias
//         bit 31~0 - Dense_4894_bias_dense_4894_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_4898_weight_dense_4898_weight
//         bit 31~0 - Dense_4898_weight_dense_4898_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_4898_bias_dense_4898_bias
//         bit 31~0 - Dense_4898_bias_dense_4898_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_4895_weight_dense_4895_weight
//         bit 31~0 - Dense_4895_weight_dense_4895_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_4895_bias_dense_4895_bias
//         bit 31~0 - Dense_4895_bias_dense_4895_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_4899_weight_dense_4899_weight
//         bit 31~0 - Dense_4899_weight_dense_4899_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_4899_bias_dense_4899_bias
//         bit 31~0 - Dense_4899_bias_dense_4899_bias[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_4900_weight_dense_4900_weight
//         bit 31~0 - Dense_4900_weight_dense_4900_weight[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_4900_bias_dense_4900_bias
//         bit 31~0 - Dense_4900_bias_dense_4900_bias[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_4901_weight_dense_4901_weight
//         bit 31~0 - Dense_4901_weight_dense_4901_weight[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_4901_bias_dense_4901_bias
//         bit 31~0 - Dense_4901_bias_dense_4901_bias[31:0] (Read/Write)
// 0x1f4 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT1_INPUT1_DATA                         0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT1_INPUT1_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT2_INPUT2_DATA                         0x020
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT2_INPUT2_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6577_CONV2D_6577_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6577_CONV2D_6577_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6582_CONV2D_6582_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6582_CONV2D_6582_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5189_MAX_POOLING2D_5189_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5189_MAX_POOLING2D_5189_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5193_MAX_POOLING2D_5193_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5193_MAX_POOLING2D_5193_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4892_DENSE_4892_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4892_DENSE_4892_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4896_DENSE_4896_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4896_DENSE_4896_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6578_CONV2D_6578_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6578_CONV2D_6578_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6583_CONV2D_6583_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6583_CONV2D_6583_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5190_MAX_POOLING2D_5190_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5190_MAX_POOLING2D_5190_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5194_MAX_POOLING2D_5194_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5194_MAX_POOLING2D_5194_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4893_DENSE_4893_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4893_DENSE_4893_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4897_DENSE_4897_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4897_DENSE_4897_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6579_CONV2D_6579_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6579_CONV2D_6579_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6584_CONV2D_6584_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6584_CONV2D_6584_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5191_MAX_POOLING2D_5191_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5191_MAX_POOLING2D_5191_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5195_MAX_POOLING2D_5195_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5195_MAX_POOLING2D_5195_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4894_DENSE_4894_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4894_DENSE_4894_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4898_DENSE_4898_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4898_DENSE_4898_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5192_MAX_POOLING2D_5192_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5192_MAX_POOLING2D_5192_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5196_MAX_POOLING2D_5196_DATA 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5196_MAX_POOLING2D_5196_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4895_DENSE_4895_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4895_DENSE_4895_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4899_DENSE_4899_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4899_DENSE_4899_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_506_CONCATENATE_506_DATA       0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_506_CONCATENATE_506_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_188_FLATTEN_188_DATA               0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_188_FLATTEN_188_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4900_DENSE_4900_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4900_DENSE_4900_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4901_DENSE_4901_DATA                 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4901_DENSE_4901_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6577_WEIGHT_CONV2D_6577_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6577_WEIGHT_CONV2D_6577_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6577_BIAS_CONV2D_6577_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6577_BIAS_CONV2D_6577_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6582_WEIGHT_CONV2D_6582_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6582_WEIGHT_CONV2D_6582_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6582_BIAS_CONV2D_6582_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6582_BIAS_CONV2D_6582_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4892_WEIGHT_DENSE_4892_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4892_WEIGHT_DENSE_4892_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4892_BIAS_DENSE_4892_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4892_BIAS_DENSE_4892_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4896_WEIGHT_DENSE_4896_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4896_WEIGHT_DENSE_4896_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4896_BIAS_DENSE_4896_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4896_BIAS_DENSE_4896_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6578_WEIGHT_CONV2D_6578_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6578_WEIGHT_CONV2D_6578_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6578_BIAS_CONV2D_6578_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6578_BIAS_CONV2D_6578_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6583_WEIGHT_CONV2D_6583_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6583_WEIGHT_CONV2D_6583_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6583_BIAS_CONV2D_6583_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6583_BIAS_CONV2D_6583_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4893_WEIGHT_DENSE_4893_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4893_WEIGHT_DENSE_4893_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4893_BIAS_DENSE_4893_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4893_BIAS_DENSE_4893_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4897_WEIGHT_DENSE_4897_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4897_WEIGHT_DENSE_4897_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4897_BIAS_DENSE_4897_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4897_BIAS_DENSE_4897_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6579_WEIGHT_CONV2D_6579_WEIGHT_DATA 0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6579_WEIGHT_CONV2D_6579_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6579_BIAS_CONV2D_6579_BIAS_DATA     0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6579_BIAS_CONV2D_6579_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6584_WEIGHT_CONV2D_6584_WEIGHT_DATA 0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6584_WEIGHT_CONV2D_6584_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6584_BIAS_CONV2D_6584_BIAS_DATA     0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6584_BIAS_CONV2D_6584_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4894_WEIGHT_DENSE_4894_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4894_WEIGHT_DENSE_4894_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4894_BIAS_DENSE_4894_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4894_BIAS_DENSE_4894_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4898_WEIGHT_DENSE_4898_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4898_WEIGHT_DENSE_4898_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4898_BIAS_DENSE_4898_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4898_BIAS_DENSE_4898_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4895_WEIGHT_DENSE_4895_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4895_WEIGHT_DENSE_4895_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4895_BIAS_DENSE_4895_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4895_BIAS_DENSE_4895_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4899_WEIGHT_DENSE_4899_WEIGHT_DATA   0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4899_WEIGHT_DENSE_4899_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4899_BIAS_DENSE_4899_BIAS_DATA       0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4899_BIAS_DENSE_4899_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4900_WEIGHT_DENSE_4900_WEIGHT_DATA   0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4900_WEIGHT_DENSE_4900_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4900_BIAS_DENSE_4900_BIAS_DATA       0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4900_BIAS_DENSE_4900_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4901_WEIGHT_DENSE_4901_WEIGHT_DATA   0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4901_WEIGHT_DENSE_4901_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4901_BIAS_DENSE_4901_BIAS_DATA       0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4901_BIAS_DENSE_4901_BIAS_DATA       32

