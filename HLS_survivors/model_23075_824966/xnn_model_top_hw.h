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
// 0x028 : Data signal of Conv2d_3509_conv2d_3509
//         bit 31~0 - Conv2d_3509_conv2d_3509[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_3515_conv2d_3515
//         bit 31~0 - Conv2d_3515_conv2d_3515[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2810_max_pooling2d_2810
//         bit 31~0 - Max_pooling2d_2810_max_pooling2d_2810[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2815_max_pooling2d_2815
//         bit 31~0 - Max_pooling2d_2815_max_pooling2d_2815[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2629_dense_2629
//         bit 31~0 - Dense_2629_dense_2629[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2633_dense_2633
//         bit 31~0 - Dense_2633_dense_2633[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_3510_conv2d_3510
//         bit 31~0 - Conv2d_3510_conv2d_3510[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_3516_conv2d_3516
//         bit 31~0 - Conv2d_3516_conv2d_3516[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_2811_max_pooling2d_2811
//         bit 31~0 - Max_pooling2d_2811_max_pooling2d_2811[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_2816_max_pooling2d_2816
//         bit 31~0 - Max_pooling2d_2816_max_pooling2d_2816[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_2630_dense_2630
//         bit 31~0 - Dense_2630_dense_2630[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_2634_dense_2634
//         bit 31~0 - Dense_2634_dense_2634[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_3511_conv2d_3511
//         bit 31~0 - Conv2d_3511_conv2d_3511[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_3517_conv2d_3517
//         bit 31~0 - Conv2d_3517_conv2d_3517[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_2812_max_pooling2d_2812
//         bit 31~0 - Max_pooling2d_2812_max_pooling2d_2812[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Max_pooling2d_2817_max_pooling2d_2817
//         bit 31~0 - Max_pooling2d_2817_max_pooling2d_2817[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_2631_dense_2631
//         bit 31~0 - Dense_2631_dense_2631[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Max_pooling2d_2818_max_pooling2d_2818
//         bit 31~0 - Max_pooling2d_2818_max_pooling2d_2818[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Max_pooling2d_2813_max_pooling2d_2813
//         bit 31~0 - Max_pooling2d_2813_max_pooling2d_2813[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_2635_dense_2635
//         bit 31~0 - Dense_2635_dense_2635[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_2632_dense_2632
//         bit 31~0 - Dense_2632_dense_2632[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_2636_dense_2636
//         bit 31~0 - Dense_2636_dense_2636[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Concatenate_275_concatenate_275
//         bit 31~0 - Concatenate_275_concatenate_275[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Flatten_98_flatten_98
//         bit 31~0 - Flatten_98_flatten_98[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_2637_dense_2637
//         bit 31~0 - Dense_2637_dense_2637[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_2638_dense_2638
//         bit 31~0 - Dense_2638_dense_2638[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_3509_weight_conv2d_3509_weight
//         bit 31~0 - Conv2d_3509_weight_conv2d_3509_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_3509_bias_conv2d_3509_bias
//         bit 31~0 - Conv2d_3509_bias_conv2d_3509_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_3515_weight_conv2d_3515_weight
//         bit 31~0 - Conv2d_3515_weight_conv2d_3515_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_3515_bias_conv2d_3515_bias
//         bit 31~0 - Conv2d_3515_bias_conv2d_3515_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_2629_weight_dense_2629_weight
//         bit 31~0 - Dense_2629_weight_dense_2629_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_2629_bias_dense_2629_bias
//         bit 31~0 - Dense_2629_bias_dense_2629_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_2633_weight_dense_2633_weight
//         bit 31~0 - Dense_2633_weight_dense_2633_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_2633_bias_dense_2633_bias
//         bit 31~0 - Dense_2633_bias_dense_2633_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_3510_weight_conv2d_3510_weight
//         bit 31~0 - Conv2d_3510_weight_conv2d_3510_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_3510_bias_conv2d_3510_bias
//         bit 31~0 - Conv2d_3510_bias_conv2d_3510_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_3516_weight_conv2d_3516_weight
//         bit 31~0 - Conv2d_3516_weight_conv2d_3516_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_3516_bias_conv2d_3516_bias
//         bit 31~0 - Conv2d_3516_bias_conv2d_3516_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_2630_weight_dense_2630_weight
//         bit 31~0 - Dense_2630_weight_dense_2630_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_2630_bias_dense_2630_bias
//         bit 31~0 - Dense_2630_bias_dense_2630_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_2634_weight_dense_2634_weight
//         bit 31~0 - Dense_2634_weight_dense_2634_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_2634_bias_dense_2634_bias
//         bit 31~0 - Dense_2634_bias_dense_2634_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_3511_weight_conv2d_3511_weight
//         bit 31~0 - Conv2d_3511_weight_conv2d_3511_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_3511_bias_conv2d_3511_bias
//         bit 31~0 - Conv2d_3511_bias_conv2d_3511_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_3517_weight_conv2d_3517_weight
//         bit 31~0 - Conv2d_3517_weight_conv2d_3517_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_3517_bias_conv2d_3517_bias
//         bit 31~0 - Conv2d_3517_bias_conv2d_3517_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_2631_weight_dense_2631_weight
//         bit 31~0 - Dense_2631_weight_dense_2631_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_2631_bias_dense_2631_bias
//         bit 31~0 - Dense_2631_bias_dense_2631_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_2635_weight_dense_2635_weight
//         bit 31~0 - Dense_2635_weight_dense_2635_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_2635_bias_dense_2635_bias
//         bit 31~0 - Dense_2635_bias_dense_2635_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_2632_weight_dense_2632_weight
//         bit 31~0 - Dense_2632_weight_dense_2632_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_2632_bias_dense_2632_bias
//         bit 31~0 - Dense_2632_bias_dense_2632_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_2636_weight_dense_2636_weight
//         bit 31~0 - Dense_2636_weight_dense_2636_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_2636_bias_dense_2636_bias
//         bit 31~0 - Dense_2636_bias_dense_2636_bias[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_2637_weight_dense_2637_weight
//         bit 31~0 - Dense_2637_weight_dense_2637_weight[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_2637_bias_dense_2637_bias
//         bit 31~0 - Dense_2637_bias_dense_2637_bias[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_2638_weight_dense_2638_weight
//         bit 31~0 - Dense_2638_weight_dense_2638_weight[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_2638_bias_dense_2638_bias
//         bit 31~0 - Dense_2638_bias_dense_2638_bias[31:0] (Read/Write)
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3509_CONV2D_3509_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3509_CONV2D_3509_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3515_CONV2D_3515_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3515_CONV2D_3515_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2810_MAX_POOLING2D_2810_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2810_MAX_POOLING2D_2810_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2815_MAX_POOLING2D_2815_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2815_MAX_POOLING2D_2815_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2629_DENSE_2629_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2629_DENSE_2629_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2633_DENSE_2633_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2633_DENSE_2633_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3510_CONV2D_3510_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3510_CONV2D_3510_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3516_CONV2D_3516_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3516_CONV2D_3516_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2811_MAX_POOLING2D_2811_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2811_MAX_POOLING2D_2811_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2816_MAX_POOLING2D_2816_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2816_MAX_POOLING2D_2816_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2630_DENSE_2630_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2630_DENSE_2630_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2634_DENSE_2634_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2634_DENSE_2634_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3511_CONV2D_3511_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3511_CONV2D_3511_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3517_CONV2D_3517_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3517_CONV2D_3517_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2812_MAX_POOLING2D_2812_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2812_MAX_POOLING2D_2812_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2817_MAX_POOLING2D_2817_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2817_MAX_POOLING2D_2817_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2631_DENSE_2631_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2631_DENSE_2631_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2818_MAX_POOLING2D_2818_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2818_MAX_POOLING2D_2818_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2813_MAX_POOLING2D_2813_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2813_MAX_POOLING2D_2813_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2635_DENSE_2635_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2635_DENSE_2635_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2632_DENSE_2632_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2632_DENSE_2632_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2636_DENSE_2636_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2636_DENSE_2636_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_275_CONCATENATE_275_DATA       0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_275_CONCATENATE_275_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_98_FLATTEN_98_DATA                 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_98_FLATTEN_98_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2637_DENSE_2637_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2637_DENSE_2637_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2638_DENSE_2638_DATA                 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2638_DENSE_2638_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3509_WEIGHT_CONV2D_3509_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3509_WEIGHT_CONV2D_3509_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3509_BIAS_CONV2D_3509_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3509_BIAS_CONV2D_3509_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3515_WEIGHT_CONV2D_3515_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3515_WEIGHT_CONV2D_3515_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3515_BIAS_CONV2D_3515_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3515_BIAS_CONV2D_3515_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2629_WEIGHT_DENSE_2629_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2629_WEIGHT_DENSE_2629_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2629_BIAS_DENSE_2629_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2629_BIAS_DENSE_2629_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2633_WEIGHT_DENSE_2633_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2633_WEIGHT_DENSE_2633_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2633_BIAS_DENSE_2633_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2633_BIAS_DENSE_2633_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3510_WEIGHT_CONV2D_3510_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3510_WEIGHT_CONV2D_3510_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3510_BIAS_CONV2D_3510_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3510_BIAS_CONV2D_3510_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3516_WEIGHT_CONV2D_3516_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3516_WEIGHT_CONV2D_3516_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3516_BIAS_CONV2D_3516_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3516_BIAS_CONV2D_3516_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2630_WEIGHT_DENSE_2630_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2630_WEIGHT_DENSE_2630_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2630_BIAS_DENSE_2630_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2630_BIAS_DENSE_2630_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2634_WEIGHT_DENSE_2634_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2634_WEIGHT_DENSE_2634_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2634_BIAS_DENSE_2634_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2634_BIAS_DENSE_2634_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3511_WEIGHT_CONV2D_3511_WEIGHT_DATA 0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3511_WEIGHT_CONV2D_3511_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3511_BIAS_CONV2D_3511_BIAS_DATA     0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3511_BIAS_CONV2D_3511_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3517_WEIGHT_CONV2D_3517_WEIGHT_DATA 0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3517_WEIGHT_CONV2D_3517_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3517_BIAS_CONV2D_3517_BIAS_DATA     0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3517_BIAS_CONV2D_3517_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2631_WEIGHT_DENSE_2631_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2631_WEIGHT_DENSE_2631_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2631_BIAS_DENSE_2631_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2631_BIAS_DENSE_2631_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2635_WEIGHT_DENSE_2635_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2635_WEIGHT_DENSE_2635_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2635_BIAS_DENSE_2635_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2635_BIAS_DENSE_2635_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2632_WEIGHT_DENSE_2632_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2632_WEIGHT_DENSE_2632_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2632_BIAS_DENSE_2632_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2632_BIAS_DENSE_2632_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2636_WEIGHT_DENSE_2636_WEIGHT_DATA   0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2636_WEIGHT_DENSE_2636_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2636_BIAS_DENSE_2636_BIAS_DATA       0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2636_BIAS_DENSE_2636_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2637_WEIGHT_DENSE_2637_WEIGHT_DATA   0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2637_WEIGHT_DENSE_2637_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2637_BIAS_DENSE_2637_BIAS_DATA       0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2637_BIAS_DENSE_2637_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2638_WEIGHT_DENSE_2638_WEIGHT_DATA   0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2638_WEIGHT_DENSE_2638_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2638_BIAS_DENSE_2638_BIAS_DATA       0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2638_BIAS_DENSE_2638_BIAS_DATA       32

