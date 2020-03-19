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
// 0x028 : Data signal of Conv2d_1088_conv2d_1088
//         bit 31~0 - Conv2d_1088_conv2d_1088[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_1092_conv2d_1092
//         bit 31~0 - Conv2d_1092_conv2d_1092[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_857_max_pooling2d_857
//         bit 31~0 - Max_pooling2d_857_max_pooling2d_857[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_860_max_pooling2d_860
//         bit 31~0 - Max_pooling2d_860_max_pooling2d_860[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_791_dense_791
//         bit 31~0 - Dense_791_dense_791[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_794_dense_794
//         bit 31~0 - Dense_794_dense_794[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_1089_conv2d_1089
//         bit 31~0 - Conv2d_1089_conv2d_1089[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_1093_conv2d_1093
//         bit 31~0 - Conv2d_1093_conv2d_1093[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_858_max_pooling2d_858
//         bit 31~0 - Max_pooling2d_858_max_pooling2d_858[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_861_max_pooling2d_861
//         bit 31~0 - Max_pooling2d_861_max_pooling2d_861[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_792_dense_792
//         bit 31~0 - Dense_792_dense_792[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_795_dense_795
//         bit 31~0 - Dense_795_dense_795[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_1090_conv2d_1090
//         bit 31~0 - Conv2d_1090_conv2d_1090[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_1094_conv2d_1094
//         bit 31~0 - Conv2d_1094_conv2d_1094[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_859_max_pooling2d_859
//         bit 31~0 - Max_pooling2d_859_max_pooling2d_859[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Max_pooling2d_862_max_pooling2d_862
//         bit 31~0 - Max_pooling2d_862_max_pooling2d_862[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_793_dense_793
//         bit 31~0 - Dense_793_dense_793[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_796_dense_796
//         bit 31~0 - Dense_796_dense_796[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Concatenate_83_concatenate_83
//         bit 31~0 - Concatenate_83_concatenate_83[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Max_pooling2d_863_max_pooling2d_863
//         bit 31~0 - Max_pooling2d_863_max_pooling2d_863[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Flatten_29_flatten_29
//         bit 31~0 - Flatten_29_flatten_29[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_797_dense_797
//         bit 31~0 - Dense_797_dense_797[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_798_dense_798
//         bit 31~0 - Dense_798_dense_798[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_1088_weight_conv2d_1088_weight
//         bit 31~0 - Conv2d_1088_weight_conv2d_1088_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_1088_bias_conv2d_1088_bias
//         bit 31~0 - Conv2d_1088_bias_conv2d_1088_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_1092_weight_conv2d_1092_weight
//         bit 31~0 - Conv2d_1092_weight_conv2d_1092_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_1092_bias_conv2d_1092_bias
//         bit 31~0 - Conv2d_1092_bias_conv2d_1092_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_791_weight_dense_791_weight
//         bit 31~0 - Dense_791_weight_dense_791_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_791_bias_dense_791_bias
//         bit 31~0 - Dense_791_bias_dense_791_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_794_weight_dense_794_weight
//         bit 31~0 - Dense_794_weight_dense_794_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_794_bias_dense_794_bias
//         bit 31~0 - Dense_794_bias_dense_794_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_1089_weight_conv2d_1089_weight
//         bit 31~0 - Conv2d_1089_weight_conv2d_1089_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_1089_bias_conv2d_1089_bias
//         bit 31~0 - Conv2d_1089_bias_conv2d_1089_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_1093_weight_conv2d_1093_weight
//         bit 31~0 - Conv2d_1093_weight_conv2d_1093_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_1093_bias_conv2d_1093_bias
//         bit 31~0 - Conv2d_1093_bias_conv2d_1093_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_792_weight_dense_792_weight
//         bit 31~0 - Dense_792_weight_dense_792_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_792_bias_dense_792_bias
//         bit 31~0 - Dense_792_bias_dense_792_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_795_weight_dense_795_weight
//         bit 31~0 - Dense_795_weight_dense_795_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_795_bias_dense_795_bias
//         bit 31~0 - Dense_795_bias_dense_795_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_1090_weight_conv2d_1090_weight
//         bit 31~0 - Conv2d_1090_weight_conv2d_1090_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_1090_bias_conv2d_1090_bias
//         bit 31~0 - Conv2d_1090_bias_conv2d_1090_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_1094_weight_conv2d_1094_weight
//         bit 31~0 - Conv2d_1094_weight_conv2d_1094_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_1094_bias_conv2d_1094_bias
//         bit 31~0 - Conv2d_1094_bias_conv2d_1094_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_793_weight_dense_793_weight
//         bit 31~0 - Dense_793_weight_dense_793_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_793_bias_dense_793_bias
//         bit 31~0 - Dense_793_bias_dense_793_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_796_weight_dense_796_weight
//         bit 31~0 - Dense_796_weight_dense_796_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_796_bias_dense_796_bias
//         bit 31~0 - Dense_796_bias_dense_796_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_797_weight_dense_797_weight
//         bit 31~0 - Dense_797_weight_dense_797_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_797_bias_dense_797_bias
//         bit 31~0 - Dense_797_bias_dense_797_bias[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_798_weight_dense_798_weight
//         bit 31~0 - Dense_798_weight_dense_798_weight[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_798_bias_dense_798_bias
//         bit 31~0 - Dense_798_bias_dense_798_bias[31:0] (Read/Write)
// 0x1bc : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1088_CONV2D_1088_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1088_CONV2D_1088_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1092_CONV2D_1092_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1092_CONV2D_1092_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_857_MAX_POOLING2D_857_DATA   0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_857_MAX_POOLING2D_857_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_860_MAX_POOLING2D_860_DATA   0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_860_MAX_POOLING2D_860_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_791_DENSE_791_DATA                   0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_791_DENSE_791_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_794_DENSE_794_DATA                   0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_794_DENSE_794_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1089_CONV2D_1089_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1089_CONV2D_1089_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1093_CONV2D_1093_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1093_CONV2D_1093_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_858_MAX_POOLING2D_858_DATA   0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_858_MAX_POOLING2D_858_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_861_MAX_POOLING2D_861_DATA   0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_861_MAX_POOLING2D_861_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_792_DENSE_792_DATA                   0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_792_DENSE_792_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_795_DENSE_795_DATA                   0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_795_DENSE_795_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1090_CONV2D_1090_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1090_CONV2D_1090_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1094_CONV2D_1094_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1094_CONV2D_1094_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_859_MAX_POOLING2D_859_DATA   0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_859_MAX_POOLING2D_859_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_862_MAX_POOLING2D_862_DATA   0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_862_MAX_POOLING2D_862_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_793_DENSE_793_DATA                   0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_793_DENSE_793_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_796_DENSE_796_DATA                   0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_796_DENSE_796_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_83_CONCATENATE_83_DATA         0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_83_CONCATENATE_83_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_863_MAX_POOLING2D_863_DATA   0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_863_MAX_POOLING2D_863_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_29_FLATTEN_29_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_29_FLATTEN_29_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_797_DENSE_797_DATA                   0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_797_DENSE_797_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_798_DENSE_798_DATA                   0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_798_DENSE_798_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1088_WEIGHT_CONV2D_1088_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1088_WEIGHT_CONV2D_1088_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1088_BIAS_CONV2D_1088_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1088_BIAS_CONV2D_1088_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1092_WEIGHT_CONV2D_1092_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1092_WEIGHT_CONV2D_1092_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1092_BIAS_CONV2D_1092_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1092_BIAS_CONV2D_1092_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_791_WEIGHT_DENSE_791_WEIGHT_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_791_WEIGHT_DENSE_791_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_791_BIAS_DENSE_791_BIAS_DATA         0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_791_BIAS_DENSE_791_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_794_WEIGHT_DENSE_794_WEIGHT_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_794_WEIGHT_DENSE_794_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_794_BIAS_DENSE_794_BIAS_DATA         0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_794_BIAS_DENSE_794_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1089_WEIGHT_CONV2D_1089_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1089_WEIGHT_CONV2D_1089_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1089_BIAS_CONV2D_1089_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1089_BIAS_CONV2D_1089_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1093_WEIGHT_CONV2D_1093_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1093_WEIGHT_CONV2D_1093_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1093_BIAS_CONV2D_1093_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1093_BIAS_CONV2D_1093_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_792_WEIGHT_DENSE_792_WEIGHT_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_792_WEIGHT_DENSE_792_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_792_BIAS_DENSE_792_BIAS_DATA         0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_792_BIAS_DENSE_792_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_795_WEIGHT_DENSE_795_WEIGHT_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_795_WEIGHT_DENSE_795_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_795_BIAS_DENSE_795_BIAS_DATA         0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_795_BIAS_DENSE_795_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1090_WEIGHT_CONV2D_1090_WEIGHT_DATA 0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1090_WEIGHT_CONV2D_1090_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1090_BIAS_CONV2D_1090_BIAS_DATA     0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1090_BIAS_CONV2D_1090_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1094_WEIGHT_CONV2D_1094_WEIGHT_DATA 0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1094_WEIGHT_CONV2D_1094_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1094_BIAS_CONV2D_1094_BIAS_DATA     0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1094_BIAS_CONV2D_1094_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_793_WEIGHT_DENSE_793_WEIGHT_DATA     0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_793_WEIGHT_DENSE_793_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_793_BIAS_DENSE_793_BIAS_DATA         0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_793_BIAS_DENSE_793_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_796_WEIGHT_DENSE_796_WEIGHT_DATA     0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_796_WEIGHT_DENSE_796_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_796_BIAS_DENSE_796_BIAS_DATA         0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_796_BIAS_DENSE_796_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_797_WEIGHT_DENSE_797_WEIGHT_DATA     0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_797_WEIGHT_DENSE_797_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_797_BIAS_DENSE_797_BIAS_DATA         0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_797_BIAS_DENSE_797_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_798_WEIGHT_DENSE_798_WEIGHT_DATA     0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_798_WEIGHT_DENSE_798_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_798_BIAS_DENSE_798_BIAS_DATA         0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_798_BIAS_DENSE_798_BIAS_DATA         32

