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
// 0x028 : Data signal of Dense_77_dense_77
//         bit 31~0 - Dense_77_dense_77[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Dense_75_dense_75
//         bit 31~0 - Dense_75_dense_75[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Dense_78_dense_78
//         bit 31~0 - Dense_78_dense_78[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Dense_76_dense_76
//         bit 31~0 - Dense_76_dense_76[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_79_dense_79
//         bit 31~0 - Dense_79_dense_79[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_25_conv2d_25
//         bit 31~0 - Conv2d_25_conv2d_25[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_26_conv2d_26
//         bit 31~0 - Conv2d_26_conv2d_26[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Concatenate_9_concatenate_9
//         bit 31~0 - Concatenate_9_concatenate_9[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Conv2d_30_conv2d_30
//         bit 31~0 - Conv2d_30_conv2d_30[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_37_conv2d_37
//         bit 31~0 - Conv2d_37_conv2d_37[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_38_conv2d_38
//         bit 31~0 - Conv2d_38_conv2d_38[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_19_max_pooling2d_19
//         bit 31~0 - Max_pooling2d_19_max_pooling2d_19[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_39_conv2d_39
//         bit 31~0 - Conv2d_39_conv2d_39[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_40_conv2d_40
//         bit 31~0 - Conv2d_40_conv2d_40[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_20_max_pooling2d_20
//         bit 31~0 - Max_pooling2d_20_max_pooling2d_20[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_41_conv2d_41
//         bit 31~0 - Conv2d_41_conv2d_41[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_21_max_pooling2d_21
//         bit 31~0 - Max_pooling2d_21_max_pooling2d_21[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Flatten_5_flatten_5
//         bit 31~0 - Flatten_5_flatten_5[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_126_dense_126
//         bit 31~0 - Dense_126_dense_126[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_127_dense_127
//         bit 31~0 - Dense_127_dense_127[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_128_dense_128
//         bit 31~0 - Dense_128_dense_128[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_77_weight_dense_77_weight
//         bit 31~0 - Dense_77_weight_dense_77_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_77_bias_dense_77_bias
//         bit 31~0 - Dense_77_bias_dense_77_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_75_weight_dense_75_weight
//         bit 31~0 - Dense_75_weight_dense_75_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_75_bias_dense_75_bias
//         bit 31~0 - Dense_75_bias_dense_75_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_78_weight_dense_78_weight
//         bit 31~0 - Dense_78_weight_dense_78_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_78_bias_dense_78_bias
//         bit 31~0 - Dense_78_bias_dense_78_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_76_weight_dense_76_weight
//         bit 31~0 - Dense_76_weight_dense_76_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_76_bias_dense_76_bias
//         bit 31~0 - Dense_76_bias_dense_76_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_79_weight_dense_79_weight
//         bit 31~0 - Dense_79_weight_dense_79_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_79_bias_dense_79_bias
//         bit 31~0 - Dense_79_bias_dense_79_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_25_weight_conv2d_25_weight
//         bit 31~0 - Conv2d_25_weight_conv2d_25_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_25_bias_conv2d_25_bias
//         bit 31~0 - Conv2d_25_bias_conv2d_25_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_26_weight_conv2d_26_weight
//         bit 31~0 - Conv2d_26_weight_conv2d_26_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_26_bias_conv2d_26_bias
//         bit 31~0 - Conv2d_26_bias_conv2d_26_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_30_weight_conv2d_30_weight
//         bit 31~0 - Conv2d_30_weight_conv2d_30_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_30_bias_conv2d_30_bias
//         bit 31~0 - Conv2d_30_bias_conv2d_30_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_37_weight_conv2d_37_weight
//         bit 31~0 - Conv2d_37_weight_conv2d_37_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_37_bias_conv2d_37_bias
//         bit 31~0 - Conv2d_37_bias_conv2d_37_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_38_weight_conv2d_38_weight
//         bit 31~0 - Conv2d_38_weight_conv2d_38_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_38_bias_conv2d_38_bias
//         bit 31~0 - Conv2d_38_bias_conv2d_38_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_39_weight_conv2d_39_weight
//         bit 31~0 - Conv2d_39_weight_conv2d_39_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_39_bias_conv2d_39_bias
//         bit 31~0 - Conv2d_39_bias_conv2d_39_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_40_weight_conv2d_40_weight
//         bit 31~0 - Conv2d_40_weight_conv2d_40_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_40_bias_conv2d_40_bias
//         bit 31~0 - Conv2d_40_bias_conv2d_40_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_41_weight_conv2d_41_weight
//         bit 31~0 - Conv2d_41_weight_conv2d_41_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Conv2d_41_bias_conv2d_41_bias
//         bit 31~0 - Conv2d_41_bias_conv2d_41_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_126_weight_dense_126_weight
//         bit 31~0 - Dense_126_weight_dense_126_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_126_bias_dense_126_bias
//         bit 31~0 - Dense_126_bias_dense_126_bias[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_127_weight_dense_127_weight
//         bit 31~0 - Dense_127_weight_dense_127_weight[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_127_bias_dense_127_bias
//         bit 31~0 - Dense_127_bias_dense_127_bias[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_128_weight_dense_128_weight
//         bit 31~0 - Dense_128_weight_dense_128_weight[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_128_bias_dense_128_bias
//         bit 31~0 - Dense_128_bias_dense_128_bias[31:0] (Read/Write)
// 0x1cc : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_77_DENSE_77_DATA                 0x028
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_77_DENSE_77_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_75_DENSE_75_DATA                 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_75_DENSE_75_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_78_DENSE_78_DATA                 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_78_DENSE_78_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_76_DENSE_76_DATA                 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_76_DENSE_76_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_79_DENSE_79_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_79_DENSE_79_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_25_CONV2D_25_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_25_CONV2D_25_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_26_CONV2D_26_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_26_CONV2D_26_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_9_CONCATENATE_9_DATA       0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_9_CONCATENATE_9_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_30_CONV2D_30_DATA               0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_30_CONV2D_30_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_37_CONV2D_37_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_37_CONV2D_37_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_38_CONV2D_38_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_38_CONV2D_38_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_19_MAX_POOLING2D_19_DATA 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_19_MAX_POOLING2D_19_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_39_CONV2D_39_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_39_CONV2D_39_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_40_CONV2D_40_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_40_CONV2D_40_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_20_MAX_POOLING2D_20_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_20_MAX_POOLING2D_20_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_41_CONV2D_41_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_41_CONV2D_41_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_21_MAX_POOLING2D_21_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_21_MAX_POOLING2D_21_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_5_FLATTEN_5_DATA               0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_5_FLATTEN_5_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_126_DENSE_126_DATA               0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_126_DENSE_126_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_127_DENSE_127_DATA               0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_127_DENSE_127_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_128_DENSE_128_DATA               0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_128_DENSE_128_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_77_WEIGHT_DENSE_77_WEIGHT_DATA   0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_77_WEIGHT_DENSE_77_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_77_BIAS_DENSE_77_BIAS_DATA       0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_77_BIAS_DENSE_77_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_75_WEIGHT_DENSE_75_WEIGHT_DATA   0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_75_WEIGHT_DENSE_75_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_75_BIAS_DENSE_75_BIAS_DATA       0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_75_BIAS_DENSE_75_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_78_WEIGHT_DENSE_78_WEIGHT_DATA   0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_78_WEIGHT_DENSE_78_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_78_BIAS_DENSE_78_BIAS_DATA       0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_78_BIAS_DENSE_78_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_76_WEIGHT_DENSE_76_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_76_WEIGHT_DENSE_76_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_76_BIAS_DENSE_76_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_76_BIAS_DENSE_76_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_79_WEIGHT_DENSE_79_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_79_WEIGHT_DENSE_79_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_79_BIAS_DENSE_79_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_79_BIAS_DENSE_79_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_25_WEIGHT_CONV2D_25_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_25_WEIGHT_CONV2D_25_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_25_BIAS_CONV2D_25_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_25_BIAS_CONV2D_25_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_26_WEIGHT_CONV2D_26_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_26_WEIGHT_CONV2D_26_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_26_BIAS_CONV2D_26_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_26_BIAS_CONV2D_26_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_30_WEIGHT_CONV2D_30_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_30_WEIGHT_CONV2D_30_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_30_BIAS_CONV2D_30_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_30_BIAS_CONV2D_30_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_37_WEIGHT_CONV2D_37_WEIGHT_DATA 0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_37_WEIGHT_CONV2D_37_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_37_BIAS_CONV2D_37_BIAS_DATA     0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_37_BIAS_CONV2D_37_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_38_WEIGHT_CONV2D_38_WEIGHT_DATA 0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_38_WEIGHT_CONV2D_38_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_38_BIAS_CONV2D_38_BIAS_DATA     0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_38_BIAS_CONV2D_38_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_39_WEIGHT_CONV2D_39_WEIGHT_DATA 0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_39_WEIGHT_CONV2D_39_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_39_BIAS_CONV2D_39_BIAS_DATA     0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_39_BIAS_CONV2D_39_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_40_WEIGHT_CONV2D_40_WEIGHT_DATA 0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_40_WEIGHT_CONV2D_40_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_40_BIAS_CONV2D_40_BIAS_DATA     0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_40_BIAS_CONV2D_40_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_41_WEIGHT_CONV2D_41_WEIGHT_DATA 0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_41_WEIGHT_CONV2D_41_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_41_BIAS_CONV2D_41_BIAS_DATA     0x198
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_41_BIAS_CONV2D_41_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_126_WEIGHT_DENSE_126_WEIGHT_DATA 0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_126_WEIGHT_DENSE_126_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_126_BIAS_DENSE_126_BIAS_DATA     0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_126_BIAS_DENSE_126_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_127_WEIGHT_DENSE_127_WEIGHT_DATA 0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_127_WEIGHT_DENSE_127_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_127_BIAS_DENSE_127_BIAS_DATA     0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_127_BIAS_DENSE_127_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_128_WEIGHT_DENSE_128_WEIGHT_DATA 0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_128_WEIGHT_DENSE_128_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_128_BIAS_DENSE_128_BIAS_DATA     0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_128_BIAS_DENSE_128_BIAS_DATA     32

