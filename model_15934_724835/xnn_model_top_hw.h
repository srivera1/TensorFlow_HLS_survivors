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
// 0x028 : Data signal of Conv2d_1016_conv2d_1016
//         bit 31~0 - Conv2d_1016_conv2d_1016[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_1020_conv2d_1020
//         bit 31~0 - Conv2d_1020_conv2d_1020[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_809_max_pooling2d_809
//         bit 31~0 - Max_pooling2d_809_max_pooling2d_809[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_813_max_pooling2d_813
//         bit 31~0 - Max_pooling2d_813_max_pooling2d_813[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_749_dense_749
//         bit 31~0 - Dense_749_dense_749[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_753_dense_753
//         bit 31~0 - Dense_753_dense_753[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_1017_conv2d_1017
//         bit 31~0 - Conv2d_1017_conv2d_1017[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_1021_conv2d_1021
//         bit 31~0 - Conv2d_1021_conv2d_1021[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_810_max_pooling2d_810
//         bit 31~0 - Max_pooling2d_810_max_pooling2d_810[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_814_max_pooling2d_814
//         bit 31~0 - Max_pooling2d_814_max_pooling2d_814[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_750_dense_750
//         bit 31~0 - Dense_750_dense_750[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_754_dense_754
//         bit 31~0 - Dense_754_dense_754[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_1018_conv2d_1018
//         bit 31~0 - Conv2d_1018_conv2d_1018[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_1022_conv2d_1022
//         bit 31~0 - Conv2d_1022_conv2d_1022[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_811_max_pooling2d_811
//         bit 31~0 - Max_pooling2d_811_max_pooling2d_811[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Max_pooling2d_815_max_pooling2d_815
//         bit 31~0 - Max_pooling2d_815_max_pooling2d_815[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_751_dense_751
//         bit 31~0 - Dense_751_dense_751[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_755_dense_755
//         bit 31~0 - Dense_755_dense_755[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Max_pooling2d_812_max_pooling2d_812
//         bit 31~0 - Max_pooling2d_812_max_pooling2d_812[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Max_pooling2d_816_max_pooling2d_816
//         bit 31~0 - Max_pooling2d_816_max_pooling2d_816[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_752_dense_752
//         bit 31~0 - Dense_752_dense_752[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_756_dense_756
//         bit 31~0 - Dense_756_dense_756[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Concatenate_77_concatenate_77
//         bit 31~0 - Concatenate_77_concatenate_77[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_757_dense_757
//         bit 31~0 - Dense_757_dense_757[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Concatenate_78_concatenate_78
//         bit 31~0 - Concatenate_78_concatenate_78[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Flatten_27_flatten_27
//         bit 31~0 - Flatten_27_flatten_27[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_758_dense_758
//         bit 31~0 - Dense_758_dense_758[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_759_dense_759
//         bit 31~0 - Dense_759_dense_759[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_1016_weight_conv2d_1016_weight
//         bit 31~0 - Conv2d_1016_weight_conv2d_1016_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_1016_bias_conv2d_1016_bias
//         bit 31~0 - Conv2d_1016_bias_conv2d_1016_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_1020_weight_conv2d_1020_weight
//         bit 31~0 - Conv2d_1020_weight_conv2d_1020_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_1020_bias_conv2d_1020_bias
//         bit 31~0 - Conv2d_1020_bias_conv2d_1020_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_749_weight_dense_749_weight
//         bit 31~0 - Dense_749_weight_dense_749_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_749_bias_dense_749_bias
//         bit 31~0 - Dense_749_bias_dense_749_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_753_weight_dense_753_weight
//         bit 31~0 - Dense_753_weight_dense_753_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_753_bias_dense_753_bias
//         bit 31~0 - Dense_753_bias_dense_753_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_1017_weight_conv2d_1017_weight
//         bit 31~0 - Conv2d_1017_weight_conv2d_1017_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_1017_bias_conv2d_1017_bias
//         bit 31~0 - Conv2d_1017_bias_conv2d_1017_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_1021_weight_conv2d_1021_weight
//         bit 31~0 - Conv2d_1021_weight_conv2d_1021_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_1021_bias_conv2d_1021_bias
//         bit 31~0 - Conv2d_1021_bias_conv2d_1021_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_750_weight_dense_750_weight
//         bit 31~0 - Dense_750_weight_dense_750_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_750_bias_dense_750_bias
//         bit 31~0 - Dense_750_bias_dense_750_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_754_weight_dense_754_weight
//         bit 31~0 - Dense_754_weight_dense_754_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_754_bias_dense_754_bias
//         bit 31~0 - Dense_754_bias_dense_754_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_1018_weight_conv2d_1018_weight
//         bit 31~0 - Conv2d_1018_weight_conv2d_1018_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_1018_bias_conv2d_1018_bias
//         bit 31~0 - Conv2d_1018_bias_conv2d_1018_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Conv2d_1022_weight_conv2d_1022_weight
//         bit 31~0 - Conv2d_1022_weight_conv2d_1022_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Conv2d_1022_bias_conv2d_1022_bias
//         bit 31~0 - Conv2d_1022_bias_conv2d_1022_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_751_weight_dense_751_weight
//         bit 31~0 - Dense_751_weight_dense_751_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_751_bias_dense_751_bias
//         bit 31~0 - Dense_751_bias_dense_751_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_755_weight_dense_755_weight
//         bit 31~0 - Dense_755_weight_dense_755_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_755_bias_dense_755_bias
//         bit 31~0 - Dense_755_bias_dense_755_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_752_weight_dense_752_weight
//         bit 31~0 - Dense_752_weight_dense_752_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_752_bias_dense_752_bias
//         bit 31~0 - Dense_752_bias_dense_752_bias[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_756_weight_dense_756_weight
//         bit 31~0 - Dense_756_weight_dense_756_weight[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_756_bias_dense_756_bias
//         bit 31~0 - Dense_756_bias_dense_756_bias[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_757_weight_dense_757_weight
//         bit 31~0 - Dense_757_weight_dense_757_weight[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_757_bias_dense_757_bias
//         bit 31~0 - Dense_757_bias_dense_757_bias[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of Dense_758_weight_dense_758_weight
//         bit 31~0 - Dense_758_weight_dense_758_weight[31:0] (Read/Write)
// 0x1fc : reserved
// 0x200 : Data signal of Dense_758_bias_dense_758_bias
//         bit 31~0 - Dense_758_bias_dense_758_bias[31:0] (Read/Write)
// 0x204 : reserved
// 0x208 : Data signal of Dense_759_weight_dense_759_weight
//         bit 31~0 - Dense_759_weight_dense_759_weight[31:0] (Read/Write)
// 0x20c : reserved
// 0x210 : Data signal of Dense_759_bias_dense_759_bias
//         bit 31~0 - Dense_759_bias_dense_759_bias[31:0] (Read/Write)
// 0x214 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1016_CONV2D_1016_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1016_CONV2D_1016_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1020_CONV2D_1020_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1020_CONV2D_1020_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_809_MAX_POOLING2D_809_DATA   0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_809_MAX_POOLING2D_809_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_813_MAX_POOLING2D_813_DATA   0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_813_MAX_POOLING2D_813_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_749_DENSE_749_DATA                   0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_749_DENSE_749_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_753_DENSE_753_DATA                   0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_753_DENSE_753_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1017_CONV2D_1017_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1017_CONV2D_1017_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1021_CONV2D_1021_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1021_CONV2D_1021_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_810_MAX_POOLING2D_810_DATA   0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_810_MAX_POOLING2D_810_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_814_MAX_POOLING2D_814_DATA   0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_814_MAX_POOLING2D_814_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_750_DENSE_750_DATA                   0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_750_DENSE_750_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_754_DENSE_754_DATA                   0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_754_DENSE_754_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1018_CONV2D_1018_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1018_CONV2D_1018_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1022_CONV2D_1022_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1022_CONV2D_1022_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_811_MAX_POOLING2D_811_DATA   0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_811_MAX_POOLING2D_811_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_815_MAX_POOLING2D_815_DATA   0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_815_MAX_POOLING2D_815_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_751_DENSE_751_DATA                   0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_751_DENSE_751_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_755_DENSE_755_DATA                   0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_755_DENSE_755_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_812_MAX_POOLING2D_812_DATA   0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_812_MAX_POOLING2D_812_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_816_MAX_POOLING2D_816_DATA   0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_816_MAX_POOLING2D_816_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_752_DENSE_752_DATA                   0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_752_DENSE_752_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_756_DENSE_756_DATA                   0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_756_DENSE_756_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_77_CONCATENATE_77_DATA         0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_77_CONCATENATE_77_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_757_DENSE_757_DATA                   0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_757_DENSE_757_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_78_CONCATENATE_78_DATA         0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_78_CONCATENATE_78_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_27_FLATTEN_27_DATA                 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_27_FLATTEN_27_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_758_DENSE_758_DATA                   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_758_DENSE_758_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_759_DENSE_759_DATA                   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_759_DENSE_759_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1016_WEIGHT_CONV2D_1016_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1016_WEIGHT_CONV2D_1016_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1016_BIAS_CONV2D_1016_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1016_BIAS_CONV2D_1016_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1020_WEIGHT_CONV2D_1020_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1020_WEIGHT_CONV2D_1020_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1020_BIAS_CONV2D_1020_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1020_BIAS_CONV2D_1020_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_749_WEIGHT_DENSE_749_WEIGHT_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_749_WEIGHT_DENSE_749_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_749_BIAS_DENSE_749_BIAS_DATA         0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_749_BIAS_DENSE_749_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_753_WEIGHT_DENSE_753_WEIGHT_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_753_WEIGHT_DENSE_753_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_753_BIAS_DENSE_753_BIAS_DATA         0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_753_BIAS_DENSE_753_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1017_WEIGHT_CONV2D_1017_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1017_WEIGHT_CONV2D_1017_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1017_BIAS_CONV2D_1017_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1017_BIAS_CONV2D_1017_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1021_WEIGHT_CONV2D_1021_WEIGHT_DATA 0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1021_WEIGHT_CONV2D_1021_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1021_BIAS_CONV2D_1021_BIAS_DATA     0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1021_BIAS_CONV2D_1021_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_750_WEIGHT_DENSE_750_WEIGHT_DATA     0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_750_WEIGHT_DENSE_750_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_750_BIAS_DENSE_750_BIAS_DATA         0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_750_BIAS_DENSE_750_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_754_WEIGHT_DENSE_754_WEIGHT_DATA     0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_754_WEIGHT_DENSE_754_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_754_BIAS_DENSE_754_BIAS_DATA         0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_754_BIAS_DENSE_754_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1018_WEIGHT_CONV2D_1018_WEIGHT_DATA 0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1018_WEIGHT_CONV2D_1018_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1018_BIAS_CONV2D_1018_BIAS_DATA     0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1018_BIAS_CONV2D_1018_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1022_WEIGHT_CONV2D_1022_WEIGHT_DATA 0x198
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1022_WEIGHT_CONV2D_1022_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1022_BIAS_CONV2D_1022_BIAS_DATA     0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1022_BIAS_CONV2D_1022_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_751_WEIGHT_DENSE_751_WEIGHT_DATA     0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_751_WEIGHT_DENSE_751_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_751_BIAS_DENSE_751_BIAS_DATA         0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_751_BIAS_DENSE_751_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_755_WEIGHT_DENSE_755_WEIGHT_DATA     0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_755_WEIGHT_DENSE_755_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_755_BIAS_DENSE_755_BIAS_DATA         0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_755_BIAS_DENSE_755_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_752_WEIGHT_DENSE_752_WEIGHT_DATA     0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_752_WEIGHT_DENSE_752_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_752_BIAS_DENSE_752_BIAS_DATA         0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_752_BIAS_DENSE_752_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_756_WEIGHT_DENSE_756_WEIGHT_DATA     0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_756_WEIGHT_DENSE_756_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_756_BIAS_DENSE_756_BIAS_DATA         0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_756_BIAS_DENSE_756_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_757_WEIGHT_DENSE_757_WEIGHT_DATA     0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_757_WEIGHT_DENSE_757_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_757_BIAS_DENSE_757_BIAS_DATA         0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_757_BIAS_DENSE_757_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_758_WEIGHT_DENSE_758_WEIGHT_DATA     0x1f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_758_WEIGHT_DENSE_758_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_758_BIAS_DENSE_758_BIAS_DATA         0x200
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_758_BIAS_DENSE_758_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_759_WEIGHT_DENSE_759_WEIGHT_DATA     0x208
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_759_WEIGHT_DENSE_759_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_759_BIAS_DENSE_759_BIAS_DATA         0x210
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_759_BIAS_DENSE_759_BIAS_DATA         32

