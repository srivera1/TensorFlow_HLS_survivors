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
// 0x018 : Data signal of Input_input
//         bit 31~0 - Input_input[31:0] (Read/Write)
// 0x01c : reserved
// 0x020 : Data signal of Conv2d_1062_conv2d_1062
//         bit 31~0 - Conv2d_1062_conv2d_1062[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Max_pooling2d_747_max_pooling2d_747
//         bit 31~0 - Max_pooling2d_747_max_pooling2d_747[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_1065_conv2d_1065
//         bit 31~0 - Conv2d_1065_conv2d_1065[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Dense_809_dense_809
//         bit 31~0 - Dense_809_dense_809[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_750_max_pooling2d_750
//         bit 31~0 - Max_pooling2d_750_max_pooling2d_750[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Conv2d_1063_conv2d_1063
//         bit 31~0 - Conv2d_1063_conv2d_1063[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_812_dense_812
//         bit 31~0 - Dense_812_dense_812[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Max_pooling2d_748_max_pooling2d_748
//         bit 31~0 - Max_pooling2d_748_max_pooling2d_748[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_1066_conv2d_1066
//         bit 31~0 - Conv2d_1066_conv2d_1066[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Dense_810_dense_810
//         bit 31~0 - Dense_810_dense_810[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_751_max_pooling2d_751
//         bit 31~0 - Max_pooling2d_751_max_pooling2d_751[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_1064_conv2d_1064
//         bit 31~0 - Conv2d_1064_conv2d_1064[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_1067_conv2d_1067
//         bit 31~0 - Conv2d_1067_conv2d_1067[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_749_max_pooling2d_749
//         bit 31~0 - Max_pooling2d_749_max_pooling2d_749[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Max_pooling2d_752_max_pooling2d_752
//         bit 31~0 - Max_pooling2d_752_max_pooling2d_752[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_811_dense_811
//         bit 31~0 - Dense_811_dense_811[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_813_dense_813
//         bit 31~0 - Dense_813_dense_813[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Concatenate_76_concatenate_76
//         bit 31~0 - Concatenate_76_concatenate_76[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Max_pooling2d_753_max_pooling2d_753
//         bit 31~0 - Max_pooling2d_753_max_pooling2d_753[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Flatten_50_flatten_50
//         bit 31~0 - Flatten_50_flatten_50[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_814_dense_814
//         bit 31~0 - Dense_814_dense_814[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_815_dense_815
//         bit 31~0 - Dense_815_dense_815[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_1062_weight_conv2d_1062_weight
//         bit 31~0 - Conv2d_1062_weight_conv2d_1062_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_1062_bias_conv2d_1062_bias
//         bit 31~0 - Conv2d_1062_bias_conv2d_1062_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_1065_weight_conv2d_1065_weight
//         bit 31~0 - Conv2d_1065_weight_conv2d_1065_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_1065_bias_conv2d_1065_bias
//         bit 31~0 - Conv2d_1065_bias_conv2d_1065_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_809_weight_dense_809_weight
//         bit 31~0 - Dense_809_weight_dense_809_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_809_bias_dense_809_bias
//         bit 31~0 - Dense_809_bias_dense_809_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_1063_weight_conv2d_1063_weight
//         bit 31~0 - Conv2d_1063_weight_conv2d_1063_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_1063_bias_conv2d_1063_bias
//         bit 31~0 - Conv2d_1063_bias_conv2d_1063_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_812_weight_dense_812_weight
//         bit 31~0 - Dense_812_weight_dense_812_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_812_bias_dense_812_bias
//         bit 31~0 - Dense_812_bias_dense_812_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_1066_weight_conv2d_1066_weight
//         bit 31~0 - Conv2d_1066_weight_conv2d_1066_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_1066_bias_conv2d_1066_bias
//         bit 31~0 - Conv2d_1066_bias_conv2d_1066_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_810_weight_dense_810_weight
//         bit 31~0 - Dense_810_weight_dense_810_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_810_bias_dense_810_bias
//         bit 31~0 - Dense_810_bias_dense_810_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_1064_weight_conv2d_1064_weight
//         bit 31~0 - Conv2d_1064_weight_conv2d_1064_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_1064_bias_conv2d_1064_bias
//         bit 31~0 - Conv2d_1064_bias_conv2d_1064_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_1067_weight_conv2d_1067_weight
//         bit 31~0 - Conv2d_1067_weight_conv2d_1067_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_1067_bias_conv2d_1067_bias
//         bit 31~0 - Conv2d_1067_bias_conv2d_1067_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_811_weight_dense_811_weight
//         bit 31~0 - Dense_811_weight_dense_811_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_811_bias_dense_811_bias
//         bit 31~0 - Dense_811_bias_dense_811_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_813_weight_dense_813_weight
//         bit 31~0 - Dense_813_weight_dense_813_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_813_bias_dense_813_bias
//         bit 31~0 - Dense_813_bias_dense_813_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_814_weight_dense_814_weight
//         bit 31~0 - Dense_814_weight_dense_814_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_814_bias_dense_814_bias
//         bit 31~0 - Dense_814_bias_dense_814_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_815_weight_dense_815_weight
//         bit 31~0 - Dense_815_weight_dense_815_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_815_bias_dense_815_bias
//         bit 31~0 - Dense_815_bias_dense_815_bias[31:0] (Read/Write)
// 0x19c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                           0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                           32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1062_CONV2D_1062_DATA               0x020
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1062_CONV2D_1062_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_747_MAX_POOLING2D_747_DATA   0x028
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_747_MAX_POOLING2D_747_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1065_CONV2D_1065_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1065_CONV2D_1065_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_809_DENSE_809_DATA                   0x038
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_809_DENSE_809_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_750_MAX_POOLING2D_750_DATA   0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_750_MAX_POOLING2D_750_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1063_CONV2D_1063_DATA               0x048
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1063_CONV2D_1063_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_812_DENSE_812_DATA                   0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_812_DENSE_812_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_748_MAX_POOLING2D_748_DATA   0x058
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_748_MAX_POOLING2D_748_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1066_CONV2D_1066_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1066_CONV2D_1066_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_810_DENSE_810_DATA                   0x068
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_810_DENSE_810_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_751_MAX_POOLING2D_751_DATA   0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_751_MAX_POOLING2D_751_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1064_CONV2D_1064_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1064_CONV2D_1064_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1067_CONV2D_1067_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1067_CONV2D_1067_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_749_MAX_POOLING2D_749_DATA   0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_749_MAX_POOLING2D_749_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_752_MAX_POOLING2D_752_DATA   0x090
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_752_MAX_POOLING2D_752_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_811_DENSE_811_DATA                   0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_811_DENSE_811_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_813_DENSE_813_DATA                   0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_813_DENSE_813_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_76_CONCATENATE_76_DATA         0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_76_CONCATENATE_76_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_753_MAX_POOLING2D_753_DATA   0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_753_MAX_POOLING2D_753_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_50_FLATTEN_50_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_50_FLATTEN_50_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_814_DENSE_814_DATA                   0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_814_DENSE_814_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_815_DENSE_815_DATA                   0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_815_DENSE_815_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1062_WEIGHT_CONV2D_1062_WEIGHT_DATA 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1062_WEIGHT_CONV2D_1062_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1062_BIAS_CONV2D_1062_BIAS_DATA     0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1062_BIAS_CONV2D_1062_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1065_WEIGHT_CONV2D_1065_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1065_WEIGHT_CONV2D_1065_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1065_BIAS_CONV2D_1065_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1065_BIAS_CONV2D_1065_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_809_WEIGHT_DENSE_809_WEIGHT_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_809_WEIGHT_DENSE_809_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_809_BIAS_DENSE_809_BIAS_DATA         0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_809_BIAS_DENSE_809_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1063_WEIGHT_CONV2D_1063_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1063_WEIGHT_CONV2D_1063_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1063_BIAS_CONV2D_1063_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1063_BIAS_CONV2D_1063_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_812_WEIGHT_DENSE_812_WEIGHT_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_812_WEIGHT_DENSE_812_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_812_BIAS_DENSE_812_BIAS_DATA         0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_812_BIAS_DENSE_812_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1066_WEIGHT_CONV2D_1066_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1066_WEIGHT_CONV2D_1066_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1066_BIAS_CONV2D_1066_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1066_BIAS_CONV2D_1066_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_810_WEIGHT_DENSE_810_WEIGHT_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_810_WEIGHT_DENSE_810_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_810_BIAS_DENSE_810_BIAS_DATA         0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_810_BIAS_DENSE_810_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1064_WEIGHT_CONV2D_1064_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1064_WEIGHT_CONV2D_1064_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1064_BIAS_CONV2D_1064_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1064_BIAS_CONV2D_1064_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1067_WEIGHT_CONV2D_1067_WEIGHT_DATA 0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1067_WEIGHT_CONV2D_1067_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1067_BIAS_CONV2D_1067_BIAS_DATA     0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1067_BIAS_CONV2D_1067_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_811_WEIGHT_DENSE_811_WEIGHT_DATA     0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_811_WEIGHT_DENSE_811_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_811_BIAS_DENSE_811_BIAS_DATA         0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_811_BIAS_DENSE_811_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_813_WEIGHT_DENSE_813_WEIGHT_DATA     0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_813_WEIGHT_DENSE_813_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_813_BIAS_DENSE_813_BIAS_DATA         0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_813_BIAS_DENSE_813_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_814_WEIGHT_DENSE_814_WEIGHT_DATA     0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_814_WEIGHT_DENSE_814_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_814_BIAS_DENSE_814_BIAS_DATA         0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_814_BIAS_DENSE_814_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_815_WEIGHT_DENSE_815_WEIGHT_DATA     0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_815_WEIGHT_DENSE_815_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_815_BIAS_DENSE_815_BIAS_DATA         0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_815_BIAS_DENSE_815_BIAS_DATA         32

