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
// 0x028 : Data signal of Conv2d_3346_conv2d_3346
//         bit 31~0 - Conv2d_3346_conv2d_3346[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_3349_conv2d_3349
//         bit 31~0 - Conv2d_3349_conv2d_3349[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2823_max_pooling2d_2823
//         bit 31~0 - Max_pooling2d_2823_max_pooling2d_2823[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2825_max_pooling2d_2825
//         bit 31~0 - Max_pooling2d_2825_max_pooling2d_2825[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2701_dense_2701
//         bit 31~0 - Dense_2701_dense_2701[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2703_dense_2703
//         bit 31~0 - Dense_2703_dense_2703[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_3347_conv2d_3347
//         bit 31~0 - Conv2d_3347_conv2d_3347[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_3350_conv2d_3350
//         bit 31~0 - Conv2d_3350_conv2d_3350[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_2824_max_pooling2d_2824
//         bit 31~0 - Max_pooling2d_2824_max_pooling2d_2824[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_2826_max_pooling2d_2826
//         bit 31~0 - Max_pooling2d_2826_max_pooling2d_2826[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_2702_dense_2702
//         bit 31~0 - Dense_2702_dense_2702[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_2704_dense_2704
//         bit 31~0 - Dense_2704_dense_2704[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_3348_conv2d_3348
//         bit 31~0 - Conv2d_3348_conv2d_3348[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_3351_conv2d_3351
//         bit 31~0 - Conv2d_3351_conv2d_3351[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Concatenate_584_concatenate_584
//         bit 31~0 - Concatenate_584_concatenate_584[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_3352_conv2d_3352
//         bit 31~0 - Conv2d_3352_conv2d_3352[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_2827_max_pooling2d_2827
//         bit 31~0 - Max_pooling2d_2827_max_pooling2d_2827[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_2705_dense_2705
//         bit 31~0 - Dense_2705_dense_2705[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_2706_dense_2706
//         bit 31~0 - Dense_2706_dense_2706[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_2707_dense_2707
//         bit 31~0 - Dense_2707_dense_2707[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_2708_dense_2708
//         bit 31~0 - Dense_2708_dense_2708[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Flatten_300_flatten_300
//         bit 31~0 - Flatten_300_flatten_300[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_2709_dense_2709
//         bit 31~0 - Dense_2709_dense_2709[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_2710_dense_2710
//         bit 31~0 - Dense_2710_dense_2710[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_3346_weight_conv2d_3346_weight
//         bit 31~0 - Conv2d_3346_weight_conv2d_3346_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_3346_bias_conv2d_3346_bias
//         bit 31~0 - Conv2d_3346_bias_conv2d_3346_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_3349_weight_conv2d_3349_weight
//         bit 31~0 - Conv2d_3349_weight_conv2d_3349_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_3349_bias_conv2d_3349_bias
//         bit 31~0 - Conv2d_3349_bias_conv2d_3349_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_2701_weight_dense_2701_weight
//         bit 31~0 - Dense_2701_weight_dense_2701_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_2701_bias_dense_2701_bias
//         bit 31~0 - Dense_2701_bias_dense_2701_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_2703_weight_dense_2703_weight
//         bit 31~0 - Dense_2703_weight_dense_2703_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_2703_bias_dense_2703_bias
//         bit 31~0 - Dense_2703_bias_dense_2703_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_3347_weight_conv2d_3347_weight
//         bit 31~0 - Conv2d_3347_weight_conv2d_3347_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_3347_bias_conv2d_3347_bias
//         bit 31~0 - Conv2d_3347_bias_conv2d_3347_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_3350_weight_conv2d_3350_weight
//         bit 31~0 - Conv2d_3350_weight_conv2d_3350_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_3350_bias_conv2d_3350_bias
//         bit 31~0 - Conv2d_3350_bias_conv2d_3350_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_2702_weight_dense_2702_weight
//         bit 31~0 - Dense_2702_weight_dense_2702_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_2702_bias_dense_2702_bias
//         bit 31~0 - Dense_2702_bias_dense_2702_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_2704_weight_dense_2704_weight
//         bit 31~0 - Dense_2704_weight_dense_2704_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_2704_bias_dense_2704_bias
//         bit 31~0 - Dense_2704_bias_dense_2704_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_3348_weight_conv2d_3348_weight
//         bit 31~0 - Conv2d_3348_weight_conv2d_3348_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_3348_bias_conv2d_3348_bias
//         bit 31~0 - Conv2d_3348_bias_conv2d_3348_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_3351_weight_conv2d_3351_weight
//         bit 31~0 - Conv2d_3351_weight_conv2d_3351_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_3351_bias_conv2d_3351_bias
//         bit 31~0 - Conv2d_3351_bias_conv2d_3351_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_3352_weight_conv2d_3352_weight
//         bit 31~0 - Conv2d_3352_weight_conv2d_3352_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_3352_bias_conv2d_3352_bias
//         bit 31~0 - Conv2d_3352_bias_conv2d_3352_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_2705_weight_dense_2705_weight
//         bit 31~0 - Dense_2705_weight_dense_2705_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_2705_bias_dense_2705_bias
//         bit 31~0 - Dense_2705_bias_dense_2705_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_2706_weight_dense_2706_weight
//         bit 31~0 - Dense_2706_weight_dense_2706_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_2706_bias_dense_2706_bias
//         bit 31~0 - Dense_2706_bias_dense_2706_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_2707_weight_dense_2707_weight
//         bit 31~0 - Dense_2707_weight_dense_2707_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_2707_bias_dense_2707_bias
//         bit 31~0 - Dense_2707_bias_dense_2707_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_2708_weight_dense_2708_weight
//         bit 31~0 - Dense_2708_weight_dense_2708_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_2708_bias_dense_2708_bias
//         bit 31~0 - Dense_2708_bias_dense_2708_bias[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_2709_weight_dense_2709_weight
//         bit 31~0 - Dense_2709_weight_dense_2709_weight[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_2709_bias_dense_2709_bias
//         bit 31~0 - Dense_2709_bias_dense_2709_bias[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_2710_weight_dense_2710_weight
//         bit 31~0 - Dense_2710_weight_dense_2710_weight[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_2710_bias_dense_2710_bias
//         bit 31~0 - Dense_2710_bias_dense_2710_bias[31:0] (Read/Write)
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3346_CONV2D_3346_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3346_CONV2D_3346_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3349_CONV2D_3349_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3349_CONV2D_3349_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2823_MAX_POOLING2D_2823_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2823_MAX_POOLING2D_2823_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2825_MAX_POOLING2D_2825_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2825_MAX_POOLING2D_2825_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2701_DENSE_2701_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2701_DENSE_2701_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2703_DENSE_2703_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2703_DENSE_2703_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3347_CONV2D_3347_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3347_CONV2D_3347_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3350_CONV2D_3350_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3350_CONV2D_3350_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2824_MAX_POOLING2D_2824_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2824_MAX_POOLING2D_2824_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2826_MAX_POOLING2D_2826_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2826_MAX_POOLING2D_2826_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2702_DENSE_2702_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2702_DENSE_2702_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2704_DENSE_2704_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2704_DENSE_2704_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3348_CONV2D_3348_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3348_CONV2D_3348_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3351_CONV2D_3351_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3351_CONV2D_3351_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_584_CONCATENATE_584_DATA       0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_584_CONCATENATE_584_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3352_CONV2D_3352_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3352_CONV2D_3352_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2827_MAX_POOLING2D_2827_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2827_MAX_POOLING2D_2827_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2705_DENSE_2705_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2705_DENSE_2705_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2706_DENSE_2706_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2706_DENSE_2706_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2707_DENSE_2707_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2707_DENSE_2707_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2708_DENSE_2708_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2708_DENSE_2708_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_300_FLATTEN_300_DATA               0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_300_FLATTEN_300_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2709_DENSE_2709_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2709_DENSE_2709_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2710_DENSE_2710_DATA                 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2710_DENSE_2710_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3346_WEIGHT_CONV2D_3346_WEIGHT_DATA 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3346_WEIGHT_CONV2D_3346_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3346_BIAS_CONV2D_3346_BIAS_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3346_BIAS_CONV2D_3346_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3349_WEIGHT_CONV2D_3349_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3349_WEIGHT_CONV2D_3349_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3349_BIAS_CONV2D_3349_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3349_BIAS_CONV2D_3349_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2701_WEIGHT_DENSE_2701_WEIGHT_DATA   0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2701_WEIGHT_DENSE_2701_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2701_BIAS_DENSE_2701_BIAS_DATA       0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2701_BIAS_DENSE_2701_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2703_WEIGHT_DENSE_2703_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2703_WEIGHT_DENSE_2703_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2703_BIAS_DENSE_2703_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2703_BIAS_DENSE_2703_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3347_WEIGHT_CONV2D_3347_WEIGHT_DATA 0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3347_WEIGHT_CONV2D_3347_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3347_BIAS_CONV2D_3347_BIAS_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3347_BIAS_CONV2D_3347_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3350_WEIGHT_CONV2D_3350_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3350_WEIGHT_CONV2D_3350_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3350_BIAS_CONV2D_3350_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3350_BIAS_CONV2D_3350_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2702_WEIGHT_DENSE_2702_WEIGHT_DATA   0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2702_WEIGHT_DENSE_2702_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2702_BIAS_DENSE_2702_BIAS_DATA       0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2702_BIAS_DENSE_2702_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2704_WEIGHT_DENSE_2704_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2704_WEIGHT_DENSE_2704_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2704_BIAS_DENSE_2704_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2704_BIAS_DENSE_2704_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3348_WEIGHT_CONV2D_3348_WEIGHT_DATA 0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3348_WEIGHT_CONV2D_3348_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3348_BIAS_CONV2D_3348_BIAS_DATA     0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3348_BIAS_CONV2D_3348_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3351_WEIGHT_CONV2D_3351_WEIGHT_DATA 0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3351_WEIGHT_CONV2D_3351_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3351_BIAS_CONV2D_3351_BIAS_DATA     0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3351_BIAS_CONV2D_3351_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3352_WEIGHT_CONV2D_3352_WEIGHT_DATA 0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3352_WEIGHT_CONV2D_3352_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3352_BIAS_CONV2D_3352_BIAS_DATA     0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3352_BIAS_CONV2D_3352_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2705_WEIGHT_DENSE_2705_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2705_WEIGHT_DENSE_2705_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2705_BIAS_DENSE_2705_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2705_BIAS_DENSE_2705_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2706_WEIGHT_DENSE_2706_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2706_WEIGHT_DENSE_2706_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2706_BIAS_DENSE_2706_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2706_BIAS_DENSE_2706_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2707_WEIGHT_DENSE_2707_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2707_WEIGHT_DENSE_2707_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2707_BIAS_DENSE_2707_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2707_BIAS_DENSE_2707_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2708_WEIGHT_DENSE_2708_WEIGHT_DATA   0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2708_WEIGHT_DENSE_2708_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2708_BIAS_DENSE_2708_BIAS_DATA       0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2708_BIAS_DENSE_2708_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2709_WEIGHT_DENSE_2709_WEIGHT_DATA   0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2709_WEIGHT_DENSE_2709_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2709_BIAS_DENSE_2709_BIAS_DATA       0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2709_BIAS_DENSE_2709_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2710_WEIGHT_DENSE_2710_WEIGHT_DATA   0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2710_WEIGHT_DENSE_2710_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2710_BIAS_DENSE_2710_BIAS_DATA       0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2710_BIAS_DENSE_2710_BIAS_DATA       32

