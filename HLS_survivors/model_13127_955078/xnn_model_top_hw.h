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
// 0x028 : Data signal of Conv2d_625_conv2d_625
//         bit 31~0 - Conv2d_625_conv2d_625[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_627_conv2d_627
//         bit 31~0 - Conv2d_627_conv2d_627[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_530_max_pooling2d_530
//         bit 31~0 - Max_pooling2d_530_max_pooling2d_530[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_532_max_pooling2d_532
//         bit 31~0 - Max_pooling2d_532_max_pooling2d_532[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_513_dense_513
//         bit 31~0 - Dense_513_dense_513[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_515_dense_515
//         bit 31~0 - Dense_515_dense_515[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_626_conv2d_626
//         bit 31~0 - Conv2d_626_conv2d_626[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_628_conv2d_628
//         bit 31~0 - Conv2d_628_conv2d_628[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_531_max_pooling2d_531
//         bit 31~0 - Max_pooling2d_531_max_pooling2d_531[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_533_max_pooling2d_533
//         bit 31~0 - Max_pooling2d_533_max_pooling2d_533[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_514_dense_514
//         bit 31~0 - Dense_514_dense_514[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_516_dense_516
//         bit 31~0 - Dense_516_dense_516[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Concatenate_115_concatenate_115
//         bit 31~0 - Concatenate_115_concatenate_115[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_629_conv2d_629
//         bit 31~0 - Conv2d_629_conv2d_629[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_534_max_pooling2d_534
//         bit 31~0 - Max_pooling2d_534_max_pooling2d_534[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_517_dense_517
//         bit 31~0 - Dense_517_dense_517[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_535_max_pooling2d_535
//         bit 31~0 - Max_pooling2d_535_max_pooling2d_535[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_518_dense_518
//         bit 31~0 - Dense_518_dense_518[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Flatten_59_flatten_59
//         bit 31~0 - Flatten_59_flatten_59[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_519_dense_519
//         bit 31~0 - Dense_519_dense_519[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_520_dense_520
//         bit 31~0 - Dense_520_dense_520[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_625_weight_conv2d_625_weight
//         bit 31~0 - Conv2d_625_weight_conv2d_625_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_625_bias_conv2d_625_bias
//         bit 31~0 - Conv2d_625_bias_conv2d_625_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_627_weight_conv2d_627_weight
//         bit 31~0 - Conv2d_627_weight_conv2d_627_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_627_bias_conv2d_627_bias
//         bit 31~0 - Conv2d_627_bias_conv2d_627_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_513_weight_dense_513_weight
//         bit 31~0 - Dense_513_weight_dense_513_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_513_bias_dense_513_bias
//         bit 31~0 - Dense_513_bias_dense_513_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_515_weight_dense_515_weight
//         bit 31~0 - Dense_515_weight_dense_515_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_515_bias_dense_515_bias
//         bit 31~0 - Dense_515_bias_dense_515_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_626_weight_conv2d_626_weight
//         bit 31~0 - Conv2d_626_weight_conv2d_626_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_626_bias_conv2d_626_bias
//         bit 31~0 - Conv2d_626_bias_conv2d_626_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_628_weight_conv2d_628_weight
//         bit 31~0 - Conv2d_628_weight_conv2d_628_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_628_bias_conv2d_628_bias
//         bit 31~0 - Conv2d_628_bias_conv2d_628_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_514_weight_dense_514_weight
//         bit 31~0 - Dense_514_weight_dense_514_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_514_bias_dense_514_bias
//         bit 31~0 - Dense_514_bias_dense_514_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_516_weight_dense_516_weight
//         bit 31~0 - Dense_516_weight_dense_516_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_516_bias_dense_516_bias
//         bit 31~0 - Dense_516_bias_dense_516_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_629_weight_conv2d_629_weight
//         bit 31~0 - Conv2d_629_weight_conv2d_629_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_629_bias_conv2d_629_bias
//         bit 31~0 - Conv2d_629_bias_conv2d_629_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_517_weight_dense_517_weight
//         bit 31~0 - Dense_517_weight_dense_517_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_517_bias_dense_517_bias
//         bit 31~0 - Dense_517_bias_dense_517_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_518_weight_dense_518_weight
//         bit 31~0 - Dense_518_weight_dense_518_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_518_bias_dense_518_bias
//         bit 31~0 - Dense_518_bias_dense_518_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_519_weight_dense_519_weight
//         bit 31~0 - Dense_519_weight_dense_519_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_519_bias_dense_519_bias
//         bit 31~0 - Dense_519_bias_dense_519_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_520_weight_dense_520_weight
//         bit 31~0 - Dense_520_weight_dense_520_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_520_bias_dense_520_bias
//         bit 31~0 - Dense_520_bias_dense_520_bias[31:0] (Read/Write)
// 0x19c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                  0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                      0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                      0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                      0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT1_INPUT1_DATA                       0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT1_INPUT1_DATA                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT2_INPUT2_DATA                       0x020
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT2_INPUT2_DATA                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_625_CONV2D_625_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_625_CONV2D_625_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_627_CONV2D_627_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_627_CONV2D_627_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_530_MAX_POOLING2D_530_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_530_MAX_POOLING2D_530_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_532_MAX_POOLING2D_532_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_532_MAX_POOLING2D_532_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_513_DENSE_513_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_513_DENSE_513_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_515_DENSE_515_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_515_DENSE_515_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_626_CONV2D_626_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_626_CONV2D_626_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_628_CONV2D_628_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_628_CONV2D_628_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_531_MAX_POOLING2D_531_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_531_MAX_POOLING2D_531_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_533_MAX_POOLING2D_533_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_533_MAX_POOLING2D_533_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_514_DENSE_514_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_514_DENSE_514_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_516_DENSE_516_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_516_DENSE_516_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_115_CONCATENATE_115_DATA     0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_115_CONCATENATE_115_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_629_CONV2D_629_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_629_CONV2D_629_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_534_MAX_POOLING2D_534_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_534_MAX_POOLING2D_534_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_517_DENSE_517_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_517_DENSE_517_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_535_MAX_POOLING2D_535_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_535_MAX_POOLING2D_535_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_518_DENSE_518_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_518_DENSE_518_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_59_FLATTEN_59_DATA               0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_59_FLATTEN_59_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_519_DENSE_519_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_519_DENSE_519_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_520_DENSE_520_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_520_DENSE_520_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_625_WEIGHT_CONV2D_625_WEIGHT_DATA 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_625_WEIGHT_CONV2D_625_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_625_BIAS_CONV2D_625_BIAS_DATA     0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_625_BIAS_CONV2D_625_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_627_WEIGHT_CONV2D_627_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_627_WEIGHT_CONV2D_627_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_627_BIAS_CONV2D_627_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_627_BIAS_CONV2D_627_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_513_WEIGHT_DENSE_513_WEIGHT_DATA   0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_513_WEIGHT_DENSE_513_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_513_BIAS_DENSE_513_BIAS_DATA       0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_513_BIAS_DENSE_513_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_515_WEIGHT_DENSE_515_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_515_WEIGHT_DENSE_515_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_515_BIAS_DENSE_515_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_515_BIAS_DENSE_515_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_626_WEIGHT_CONV2D_626_WEIGHT_DATA 0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_626_WEIGHT_CONV2D_626_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_626_BIAS_CONV2D_626_BIAS_DATA     0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_626_BIAS_CONV2D_626_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_628_WEIGHT_CONV2D_628_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_628_WEIGHT_CONV2D_628_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_628_BIAS_CONV2D_628_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_628_BIAS_CONV2D_628_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_514_WEIGHT_DENSE_514_WEIGHT_DATA   0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_514_WEIGHT_DENSE_514_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_514_BIAS_DENSE_514_BIAS_DATA       0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_514_BIAS_DENSE_514_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_516_WEIGHT_DENSE_516_WEIGHT_DATA   0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_516_WEIGHT_DENSE_516_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_516_BIAS_DENSE_516_BIAS_DATA       0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_516_BIAS_DENSE_516_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_629_WEIGHT_CONV2D_629_WEIGHT_DATA 0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_629_WEIGHT_CONV2D_629_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_629_BIAS_CONV2D_629_BIAS_DATA     0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_629_BIAS_CONV2D_629_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_517_WEIGHT_DENSE_517_WEIGHT_DATA   0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_517_WEIGHT_DENSE_517_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_517_BIAS_DENSE_517_BIAS_DATA       0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_517_BIAS_DENSE_517_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_518_WEIGHT_DENSE_518_WEIGHT_DATA   0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_518_WEIGHT_DENSE_518_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_518_BIAS_DENSE_518_BIAS_DATA       0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_518_BIAS_DENSE_518_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_519_WEIGHT_DENSE_519_WEIGHT_DATA   0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_519_WEIGHT_DENSE_519_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_519_BIAS_DENSE_519_BIAS_DATA       0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_519_BIAS_DENSE_519_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_520_WEIGHT_DENSE_520_WEIGHT_DATA   0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_520_WEIGHT_DENSE_520_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_520_BIAS_DENSE_520_BIAS_DATA       0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_520_BIAS_DENSE_520_BIAS_DATA       32

