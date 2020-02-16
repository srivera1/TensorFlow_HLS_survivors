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
// 0x028 : Data signal of Conv2d_727_conv2d_727
//         bit 31~0 - Conv2d_727_conv2d_727[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_730_conv2d_730
//         bit 31~0 - Conv2d_730_conv2d_730[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_608_max_pooling2d_608
//         bit 31~0 - Max_pooling2d_608_max_pooling2d_608[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_610_max_pooling2d_610
//         bit 31~0 - Max_pooling2d_610_max_pooling2d_610[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_594_dense_594
//         bit 31~0 - Dense_594_dense_594[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_596_dense_596
//         bit 31~0 - Dense_596_dense_596[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_728_conv2d_728
//         bit 31~0 - Conv2d_728_conv2d_728[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_731_conv2d_731
//         bit 31~0 - Conv2d_731_conv2d_731[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_609_max_pooling2d_609
//         bit 31~0 - Max_pooling2d_609_max_pooling2d_609[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_611_max_pooling2d_611
//         bit 31~0 - Max_pooling2d_611_max_pooling2d_611[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_595_dense_595
//         bit 31~0 - Dense_595_dense_595[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_597_dense_597
//         bit 31~0 - Dense_597_dense_597[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_729_conv2d_729
//         bit 31~0 - Conv2d_729_conv2d_729[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_732_conv2d_732
//         bit 31~0 - Conv2d_732_conv2d_732[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Concatenate_132_concatenate_132
//         bit 31~0 - Concatenate_132_concatenate_132[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_733_conv2d_733
//         bit 31~0 - Conv2d_733_conv2d_733[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_612_max_pooling2d_612
//         bit 31~0 - Max_pooling2d_612_max_pooling2d_612[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Flatten_66_flatten_66
//         bit 31~0 - Flatten_66_flatten_66[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_598_dense_598
//         bit 31~0 - Dense_598_dense_598[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_599_dense_599
//         bit 31~0 - Dense_599_dense_599[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_600_dense_600
//         bit 31~0 - Dense_600_dense_600[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_727_weight_conv2d_727_weight
//         bit 31~0 - Conv2d_727_weight_conv2d_727_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_727_bias_conv2d_727_bias
//         bit 31~0 - Conv2d_727_bias_conv2d_727_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_730_weight_conv2d_730_weight
//         bit 31~0 - Conv2d_730_weight_conv2d_730_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_730_bias_conv2d_730_bias
//         bit 31~0 - Conv2d_730_bias_conv2d_730_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_594_weight_dense_594_weight
//         bit 31~0 - Dense_594_weight_dense_594_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_594_bias_dense_594_bias
//         bit 31~0 - Dense_594_bias_dense_594_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_596_weight_dense_596_weight
//         bit 31~0 - Dense_596_weight_dense_596_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_596_bias_dense_596_bias
//         bit 31~0 - Dense_596_bias_dense_596_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_728_weight_conv2d_728_weight
//         bit 31~0 - Conv2d_728_weight_conv2d_728_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_728_bias_conv2d_728_bias
//         bit 31~0 - Conv2d_728_bias_conv2d_728_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_731_weight_conv2d_731_weight
//         bit 31~0 - Conv2d_731_weight_conv2d_731_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_731_bias_conv2d_731_bias
//         bit 31~0 - Conv2d_731_bias_conv2d_731_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_595_weight_dense_595_weight
//         bit 31~0 - Dense_595_weight_dense_595_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_595_bias_dense_595_bias
//         bit 31~0 - Dense_595_bias_dense_595_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_597_weight_dense_597_weight
//         bit 31~0 - Dense_597_weight_dense_597_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_597_bias_dense_597_bias
//         bit 31~0 - Dense_597_bias_dense_597_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_729_weight_conv2d_729_weight
//         bit 31~0 - Conv2d_729_weight_conv2d_729_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_729_bias_conv2d_729_bias
//         bit 31~0 - Conv2d_729_bias_conv2d_729_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_732_weight_conv2d_732_weight
//         bit 31~0 - Conv2d_732_weight_conv2d_732_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_732_bias_conv2d_732_bias
//         bit 31~0 - Conv2d_732_bias_conv2d_732_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_733_weight_conv2d_733_weight
//         bit 31~0 - Conv2d_733_weight_conv2d_733_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_733_bias_conv2d_733_bias
//         bit 31~0 - Conv2d_733_bias_conv2d_733_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_598_weight_dense_598_weight
//         bit 31~0 - Dense_598_weight_dense_598_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_598_bias_dense_598_bias
//         bit 31~0 - Dense_598_bias_dense_598_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_599_weight_dense_599_weight
//         bit 31~0 - Dense_599_weight_dense_599_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_599_bias_dense_599_bias
//         bit 31~0 - Dense_599_bias_dense_599_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_600_weight_dense_600_weight
//         bit 31~0 - Dense_600_weight_dense_600_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_600_bias_dense_600_bias
//         bit 31~0 - Dense_600_bias_dense_600_bias[31:0] (Read/Write)
// 0x1ac : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_727_CONV2D_727_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_727_CONV2D_727_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_730_CONV2D_730_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_730_CONV2D_730_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_608_MAX_POOLING2D_608_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_608_MAX_POOLING2D_608_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_610_MAX_POOLING2D_610_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_610_MAX_POOLING2D_610_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_594_DENSE_594_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_594_DENSE_594_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_596_DENSE_596_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_596_DENSE_596_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_728_CONV2D_728_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_728_CONV2D_728_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_731_CONV2D_731_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_731_CONV2D_731_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_609_MAX_POOLING2D_609_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_609_MAX_POOLING2D_609_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_611_MAX_POOLING2D_611_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_611_MAX_POOLING2D_611_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_595_DENSE_595_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_595_DENSE_595_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_597_DENSE_597_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_597_DENSE_597_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_729_CONV2D_729_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_729_CONV2D_729_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_732_CONV2D_732_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_732_CONV2D_732_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_132_CONCATENATE_132_DATA     0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_132_CONCATENATE_132_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_733_CONV2D_733_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_733_CONV2D_733_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_612_MAX_POOLING2D_612_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_612_MAX_POOLING2D_612_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_66_FLATTEN_66_DATA               0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_66_FLATTEN_66_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_598_DENSE_598_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_598_DENSE_598_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_599_DENSE_599_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_599_DENSE_599_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_600_DENSE_600_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_600_DENSE_600_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_727_WEIGHT_CONV2D_727_WEIGHT_DATA 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_727_WEIGHT_CONV2D_727_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_727_BIAS_CONV2D_727_BIAS_DATA     0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_727_BIAS_CONV2D_727_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_730_WEIGHT_CONV2D_730_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_730_WEIGHT_CONV2D_730_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_730_BIAS_CONV2D_730_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_730_BIAS_CONV2D_730_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_594_WEIGHT_DENSE_594_WEIGHT_DATA   0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_594_WEIGHT_DENSE_594_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_594_BIAS_DENSE_594_BIAS_DATA       0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_594_BIAS_DENSE_594_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_596_WEIGHT_DENSE_596_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_596_WEIGHT_DENSE_596_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_596_BIAS_DENSE_596_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_596_BIAS_DENSE_596_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_728_WEIGHT_CONV2D_728_WEIGHT_DATA 0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_728_WEIGHT_CONV2D_728_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_728_BIAS_CONV2D_728_BIAS_DATA     0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_728_BIAS_CONV2D_728_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_731_WEIGHT_CONV2D_731_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_731_WEIGHT_CONV2D_731_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_731_BIAS_CONV2D_731_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_731_BIAS_CONV2D_731_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_595_WEIGHT_DENSE_595_WEIGHT_DATA   0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_595_WEIGHT_DENSE_595_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_595_BIAS_DENSE_595_BIAS_DATA       0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_595_BIAS_DENSE_595_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_597_WEIGHT_DENSE_597_WEIGHT_DATA   0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_597_WEIGHT_DENSE_597_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_597_BIAS_DENSE_597_BIAS_DATA       0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_597_BIAS_DENSE_597_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_729_WEIGHT_CONV2D_729_WEIGHT_DATA 0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_729_WEIGHT_CONV2D_729_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_729_BIAS_CONV2D_729_BIAS_DATA     0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_729_BIAS_CONV2D_729_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_732_WEIGHT_CONV2D_732_WEIGHT_DATA 0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_732_WEIGHT_CONV2D_732_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_732_BIAS_CONV2D_732_BIAS_DATA     0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_732_BIAS_CONV2D_732_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_733_WEIGHT_CONV2D_733_WEIGHT_DATA 0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_733_WEIGHT_CONV2D_733_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_733_BIAS_CONV2D_733_BIAS_DATA     0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_733_BIAS_CONV2D_733_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_598_WEIGHT_DENSE_598_WEIGHT_DATA   0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_598_WEIGHT_DENSE_598_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_598_BIAS_DENSE_598_BIAS_DATA       0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_598_BIAS_DENSE_598_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_599_WEIGHT_DENSE_599_WEIGHT_DATA   0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_599_WEIGHT_DENSE_599_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_599_BIAS_DENSE_599_BIAS_DATA       0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_599_BIAS_DENSE_599_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_600_WEIGHT_DENSE_600_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_600_WEIGHT_DENSE_600_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_600_BIAS_DENSE_600_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_600_BIAS_DENSE_600_BIAS_DATA       32

