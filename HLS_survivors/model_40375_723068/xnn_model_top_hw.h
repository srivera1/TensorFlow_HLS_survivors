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
// 0x028 : Data signal of Conv2d_633_conv2d_633
//         bit 31~0 - Conv2d_633_conv2d_633[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_635_conv2d_635
//         bit 31~0 - Conv2d_635_conv2d_635[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_537_max_pooling2d_537
//         bit 31~0 - Max_pooling2d_537_max_pooling2d_537[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_538_max_pooling2d_538
//         bit 31~0 - Max_pooling2d_538_max_pooling2d_538[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_521_dense_521
//         bit 31~0 - Dense_521_dense_521[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_522_dense_522
//         bit 31~0 - Dense_522_dense_522[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_634_conv2d_634
//         bit 31~0 - Conv2d_634_conv2d_634[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_636_conv2d_636
//         bit 31~0 - Conv2d_636_conv2d_636[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Concatenate_116_concatenate_116
//         bit 31~0 - Concatenate_116_concatenate_116[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_637_conv2d_637
//         bit 31~0 - Conv2d_637_conv2d_637[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_539_max_pooling2d_539
//         bit 31~0 - Max_pooling2d_539_max_pooling2d_539[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_638_conv2d_638
//         bit 31~0 - Conv2d_638_conv2d_638[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_540_max_pooling2d_540
//         bit 31~0 - Max_pooling2d_540_max_pooling2d_540[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_523_dense_523
//         bit 31~0 - Dense_523_dense_523[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_524_dense_524
//         bit 31~0 - Dense_524_dense_524[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_525_dense_525
//         bit 31~0 - Dense_525_dense_525[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_527_dense_527
//         bit 31~0 - Dense_527_dense_527[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_526_dense_526
//         bit 31~0 - Dense_526_dense_526[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_528_dense_528
//         bit 31~0 - Dense_528_dense_528[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Concatenate_117_concatenate_117
//         bit 31~0 - Concatenate_117_concatenate_117[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_529_dense_529
//         bit 31~0 - Dense_529_dense_529[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_530_dense_530
//         bit 31~0 - Dense_530_dense_530[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Flatten_60_flatten_60
//         bit 31~0 - Flatten_60_flatten_60[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_531_dense_531
//         bit 31~0 - Dense_531_dense_531[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_532_dense_532
//         bit 31~0 - Dense_532_dense_532[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_533_dense_533
//         bit 31~0 - Dense_533_dense_533[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_633_weight_conv2d_633_weight
//         bit 31~0 - Conv2d_633_weight_conv2d_633_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_633_bias_conv2d_633_bias
//         bit 31~0 - Conv2d_633_bias_conv2d_633_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_635_weight_conv2d_635_weight
//         bit 31~0 - Conv2d_635_weight_conv2d_635_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_635_bias_conv2d_635_bias
//         bit 31~0 - Conv2d_635_bias_conv2d_635_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_521_weight_dense_521_weight
//         bit 31~0 - Dense_521_weight_dense_521_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_521_bias_dense_521_bias
//         bit 31~0 - Dense_521_bias_dense_521_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_522_weight_dense_522_weight
//         bit 31~0 - Dense_522_weight_dense_522_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_522_bias_dense_522_bias
//         bit 31~0 - Dense_522_bias_dense_522_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_634_weight_conv2d_634_weight
//         bit 31~0 - Conv2d_634_weight_conv2d_634_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_634_bias_conv2d_634_bias
//         bit 31~0 - Conv2d_634_bias_conv2d_634_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_636_weight_conv2d_636_weight
//         bit 31~0 - Conv2d_636_weight_conv2d_636_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_636_bias_conv2d_636_bias
//         bit 31~0 - Conv2d_636_bias_conv2d_636_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_637_weight_conv2d_637_weight
//         bit 31~0 - Conv2d_637_weight_conv2d_637_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_637_bias_conv2d_637_bias
//         bit 31~0 - Conv2d_637_bias_conv2d_637_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_638_weight_conv2d_638_weight
//         bit 31~0 - Conv2d_638_weight_conv2d_638_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_638_bias_conv2d_638_bias
//         bit 31~0 - Conv2d_638_bias_conv2d_638_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_523_weight_dense_523_weight
//         bit 31~0 - Dense_523_weight_dense_523_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_523_bias_dense_523_bias
//         bit 31~0 - Dense_523_bias_dense_523_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_524_weight_dense_524_weight
//         bit 31~0 - Dense_524_weight_dense_524_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_524_bias_dense_524_bias
//         bit 31~0 - Dense_524_bias_dense_524_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_525_weight_dense_525_weight
//         bit 31~0 - Dense_525_weight_dense_525_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_525_bias_dense_525_bias
//         bit 31~0 - Dense_525_bias_dense_525_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_527_weight_dense_527_weight
//         bit 31~0 - Dense_527_weight_dense_527_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_527_bias_dense_527_bias
//         bit 31~0 - Dense_527_bias_dense_527_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_526_weight_dense_526_weight
//         bit 31~0 - Dense_526_weight_dense_526_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_526_bias_dense_526_bias
//         bit 31~0 - Dense_526_bias_dense_526_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_528_weight_dense_528_weight
//         bit 31~0 - Dense_528_weight_dense_528_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_528_bias_dense_528_bias
//         bit 31~0 - Dense_528_bias_dense_528_bias[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_529_weight_dense_529_weight
//         bit 31~0 - Dense_529_weight_dense_529_weight[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_529_bias_dense_529_bias
//         bit 31~0 - Dense_529_bias_dense_529_bias[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_530_weight_dense_530_weight
//         bit 31~0 - Dense_530_weight_dense_530_weight[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_530_bias_dense_530_bias
//         bit 31~0 - Dense_530_bias_dense_530_bias[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of Dense_531_weight_dense_531_weight
//         bit 31~0 - Dense_531_weight_dense_531_weight[31:0] (Read/Write)
// 0x1fc : reserved
// 0x200 : Data signal of Dense_531_bias_dense_531_bias
//         bit 31~0 - Dense_531_bias_dense_531_bias[31:0] (Read/Write)
// 0x204 : reserved
// 0x208 : Data signal of Dense_532_weight_dense_532_weight
//         bit 31~0 - Dense_532_weight_dense_532_weight[31:0] (Read/Write)
// 0x20c : reserved
// 0x210 : Data signal of Dense_532_bias_dense_532_bias
//         bit 31~0 - Dense_532_bias_dense_532_bias[31:0] (Read/Write)
// 0x214 : reserved
// 0x218 : Data signal of Dense_533_weight_dense_533_weight
//         bit 31~0 - Dense_533_weight_dense_533_weight[31:0] (Read/Write)
// 0x21c : reserved
// 0x220 : Data signal of Dense_533_bias_dense_533_bias
//         bit 31~0 - Dense_533_bias_dense_533_bias[31:0] (Read/Write)
// 0x224 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_633_CONV2D_633_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_633_CONV2D_633_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_635_CONV2D_635_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_635_CONV2D_635_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_537_MAX_POOLING2D_537_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_537_MAX_POOLING2D_537_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_538_MAX_POOLING2D_538_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_538_MAX_POOLING2D_538_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_521_DENSE_521_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_521_DENSE_521_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_522_DENSE_522_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_522_DENSE_522_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_634_CONV2D_634_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_634_CONV2D_634_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_636_CONV2D_636_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_636_CONV2D_636_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_116_CONCATENATE_116_DATA     0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_116_CONCATENATE_116_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_637_CONV2D_637_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_637_CONV2D_637_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_539_MAX_POOLING2D_539_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_539_MAX_POOLING2D_539_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_638_CONV2D_638_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_638_CONV2D_638_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_540_MAX_POOLING2D_540_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_540_MAX_POOLING2D_540_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_523_DENSE_523_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_523_DENSE_523_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_524_DENSE_524_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_524_DENSE_524_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_525_DENSE_525_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_525_DENSE_525_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_527_DENSE_527_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_527_DENSE_527_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_526_DENSE_526_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_526_DENSE_526_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_528_DENSE_528_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_528_DENSE_528_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_117_CONCATENATE_117_DATA     0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_117_CONCATENATE_117_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_529_DENSE_529_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_529_DENSE_529_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_530_DENSE_530_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_530_DENSE_530_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_60_FLATTEN_60_DATA               0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_60_FLATTEN_60_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_531_DENSE_531_DATA                 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_531_DENSE_531_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_532_DENSE_532_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_532_DENSE_532_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_533_DENSE_533_DATA                 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_533_DENSE_533_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_633_WEIGHT_CONV2D_633_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_633_WEIGHT_CONV2D_633_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_633_BIAS_CONV2D_633_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_633_BIAS_CONV2D_633_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_635_WEIGHT_CONV2D_635_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_635_WEIGHT_CONV2D_635_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_635_BIAS_CONV2D_635_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_635_BIAS_CONV2D_635_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_521_WEIGHT_DENSE_521_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_521_WEIGHT_DENSE_521_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_521_BIAS_DENSE_521_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_521_BIAS_DENSE_521_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_522_WEIGHT_DENSE_522_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_522_WEIGHT_DENSE_522_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_522_BIAS_DENSE_522_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_522_BIAS_DENSE_522_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_634_WEIGHT_CONV2D_634_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_634_WEIGHT_CONV2D_634_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_634_BIAS_CONV2D_634_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_634_BIAS_CONV2D_634_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_636_WEIGHT_CONV2D_636_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_636_WEIGHT_CONV2D_636_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_636_BIAS_CONV2D_636_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_636_BIAS_CONV2D_636_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_637_WEIGHT_CONV2D_637_WEIGHT_DATA 0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_637_WEIGHT_CONV2D_637_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_637_BIAS_CONV2D_637_BIAS_DATA     0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_637_BIAS_CONV2D_637_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_638_WEIGHT_CONV2D_638_WEIGHT_DATA 0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_638_WEIGHT_CONV2D_638_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_638_BIAS_CONV2D_638_BIAS_DATA     0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_638_BIAS_CONV2D_638_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_523_WEIGHT_DENSE_523_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_523_WEIGHT_DENSE_523_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_523_BIAS_DENSE_523_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_523_BIAS_DENSE_523_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_524_WEIGHT_DENSE_524_WEIGHT_DATA   0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_524_WEIGHT_DENSE_524_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_524_BIAS_DENSE_524_BIAS_DATA       0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_524_BIAS_DENSE_524_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_525_WEIGHT_DENSE_525_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_525_WEIGHT_DENSE_525_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_525_BIAS_DENSE_525_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_525_BIAS_DENSE_525_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_527_WEIGHT_DENSE_527_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_527_WEIGHT_DENSE_527_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_527_BIAS_DENSE_527_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_527_BIAS_DENSE_527_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_526_WEIGHT_DENSE_526_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_526_WEIGHT_DENSE_526_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_526_BIAS_DENSE_526_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_526_BIAS_DENSE_526_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_528_WEIGHT_DENSE_528_WEIGHT_DATA   0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_528_WEIGHT_DENSE_528_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_528_BIAS_DENSE_528_BIAS_DATA       0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_528_BIAS_DENSE_528_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_529_WEIGHT_DENSE_529_WEIGHT_DATA   0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_529_WEIGHT_DENSE_529_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_529_BIAS_DENSE_529_BIAS_DATA       0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_529_BIAS_DENSE_529_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_530_WEIGHT_DENSE_530_WEIGHT_DATA   0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_530_WEIGHT_DENSE_530_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_530_BIAS_DENSE_530_BIAS_DATA       0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_530_BIAS_DENSE_530_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_531_WEIGHT_DENSE_531_WEIGHT_DATA   0x1f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_531_WEIGHT_DENSE_531_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_531_BIAS_DENSE_531_BIAS_DATA       0x200
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_531_BIAS_DENSE_531_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_532_WEIGHT_DENSE_532_WEIGHT_DATA   0x208
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_532_WEIGHT_DENSE_532_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_532_BIAS_DENSE_532_BIAS_DATA       0x210
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_532_BIAS_DENSE_532_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_533_WEIGHT_DENSE_533_WEIGHT_DATA   0x218
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_533_WEIGHT_DENSE_533_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_533_BIAS_DENSE_533_BIAS_DATA       0x220
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_533_BIAS_DENSE_533_BIAS_DATA       32

