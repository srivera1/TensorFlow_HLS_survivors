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
// 0x028 : Data signal of Conv2d_3479_conv2d_3479
//         bit 31~0 - Conv2d_3479_conv2d_3479[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_3481_conv2d_3481
//         bit 31~0 - Conv2d_3481_conv2d_3481[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2941_max_pooling2d_2941
//         bit 31~0 - Max_pooling2d_2941_max_pooling2d_2941[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2942_max_pooling2d_2942
//         bit 31~0 - Max_pooling2d_2942_max_pooling2d_2942[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2808_dense_2808
//         bit 31~0 - Dense_2808_dense_2808[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2809_dense_2809
//         bit 31~0 - Dense_2809_dense_2809[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_3480_conv2d_3480
//         bit 31~0 - Conv2d_3480_conv2d_3480[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_3482_conv2d_3482
//         bit 31~0 - Conv2d_3482_conv2d_3482[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Concatenate_606_concatenate_606
//         bit 31~0 - Concatenate_606_concatenate_606[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_3487_conv2d_3487
//         bit 31~0 - Conv2d_3487_conv2d_3487[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_3486_conv2d_3486
//         bit 31~0 - Conv2d_3486_conv2d_3486[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_2946_max_pooling2d_2946
//         bit 31~0 - Max_pooling2d_2946_max_pooling2d_2946[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_2945_max_pooling2d_2945
//         bit 31~0 - Max_pooling2d_2945_max_pooling2d_2945[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_2811_dense_2811
//         bit 31~0 - Dense_2811_dense_2811[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Concatenate_608_concatenate_608
//         bit 31~0 - Concatenate_608_concatenate_608[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_3488_conv2d_3488
//         bit 31~0 - Conv2d_3488_conv2d_3488[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_2947_max_pooling2d_2947
//         bit 31~0 - Max_pooling2d_2947_max_pooling2d_2947[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_2812_dense_2812
//         bit 31~0 - Dense_2812_dense_2812[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_2813_dense_2813
//         bit 31~0 - Dense_2813_dense_2813[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Flatten_312_flatten_312
//         bit 31~0 - Flatten_312_flatten_312[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_2814_dense_2814
//         bit 31~0 - Dense_2814_dense_2814[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_2815_dense_2815
//         bit 31~0 - Dense_2815_dense_2815[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_3479_weight_conv2d_3479_weight
//         bit 31~0 - Conv2d_3479_weight_conv2d_3479_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_3479_bias_conv2d_3479_bias
//         bit 31~0 - Conv2d_3479_bias_conv2d_3479_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_3481_weight_conv2d_3481_weight
//         bit 31~0 - Conv2d_3481_weight_conv2d_3481_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_3481_bias_conv2d_3481_bias
//         bit 31~0 - Conv2d_3481_bias_conv2d_3481_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_2808_weight_dense_2808_weight
//         bit 31~0 - Dense_2808_weight_dense_2808_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_2808_bias_dense_2808_bias
//         bit 31~0 - Dense_2808_bias_dense_2808_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_2809_weight_dense_2809_weight
//         bit 31~0 - Dense_2809_weight_dense_2809_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_2809_bias_dense_2809_bias
//         bit 31~0 - Dense_2809_bias_dense_2809_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_3480_weight_conv2d_3480_weight
//         bit 31~0 - Conv2d_3480_weight_conv2d_3480_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_3480_bias_conv2d_3480_bias
//         bit 31~0 - Conv2d_3480_bias_conv2d_3480_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_3482_weight_conv2d_3482_weight
//         bit 31~0 - Conv2d_3482_weight_conv2d_3482_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_3482_bias_conv2d_3482_bias
//         bit 31~0 - Conv2d_3482_bias_conv2d_3482_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_3487_weight_conv2d_3487_weight
//         bit 31~0 - Conv2d_3487_weight_conv2d_3487_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_3487_bias_conv2d_3487_bias
//         bit 31~0 - Conv2d_3487_bias_conv2d_3487_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_3486_weight_conv2d_3486_weight
//         bit 31~0 - Conv2d_3486_weight_conv2d_3486_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_3486_bias_conv2d_3486_bias
//         bit 31~0 - Conv2d_3486_bias_conv2d_3486_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_2811_weight_dense_2811_weight
//         bit 31~0 - Dense_2811_weight_dense_2811_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_2811_bias_dense_2811_bias
//         bit 31~0 - Dense_2811_bias_dense_2811_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_3488_weight_conv2d_3488_weight
//         bit 31~0 - Conv2d_3488_weight_conv2d_3488_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_3488_bias_conv2d_3488_bias
//         bit 31~0 - Conv2d_3488_bias_conv2d_3488_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_2812_weight_dense_2812_weight
//         bit 31~0 - Dense_2812_weight_dense_2812_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_2812_bias_dense_2812_bias
//         bit 31~0 - Dense_2812_bias_dense_2812_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_2813_weight_dense_2813_weight
//         bit 31~0 - Dense_2813_weight_dense_2813_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_2813_bias_dense_2813_bias
//         bit 31~0 - Dense_2813_bias_dense_2813_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_2814_weight_dense_2814_weight
//         bit 31~0 - Dense_2814_weight_dense_2814_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_2814_bias_dense_2814_bias
//         bit 31~0 - Dense_2814_bias_dense_2814_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_2815_weight_dense_2815_weight
//         bit 31~0 - Dense_2815_weight_dense_2815_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_2815_bias_dense_2815_bias
//         bit 31~0 - Dense_2815_bias_dense_2815_bias[31:0] (Read/Write)
// 0x1b4 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3479_CONV2D_3479_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3479_CONV2D_3479_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3481_CONV2D_3481_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3481_CONV2D_3481_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2941_MAX_POOLING2D_2941_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2941_MAX_POOLING2D_2941_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2942_MAX_POOLING2D_2942_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2942_MAX_POOLING2D_2942_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2808_DENSE_2808_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2808_DENSE_2808_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2809_DENSE_2809_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2809_DENSE_2809_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3480_CONV2D_3480_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3480_CONV2D_3480_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3482_CONV2D_3482_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3482_CONV2D_3482_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_606_CONCATENATE_606_DATA       0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_606_CONCATENATE_606_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3487_CONV2D_3487_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3487_CONV2D_3487_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3486_CONV2D_3486_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3486_CONV2D_3486_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2946_MAX_POOLING2D_2946_DATA 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2946_MAX_POOLING2D_2946_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2945_MAX_POOLING2D_2945_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2945_MAX_POOLING2D_2945_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2811_DENSE_2811_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2811_DENSE_2811_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_608_CONCATENATE_608_DATA       0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_608_CONCATENATE_608_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3488_CONV2D_3488_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3488_CONV2D_3488_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2947_MAX_POOLING2D_2947_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2947_MAX_POOLING2D_2947_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2812_DENSE_2812_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2812_DENSE_2812_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2813_DENSE_2813_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2813_DENSE_2813_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_312_FLATTEN_312_DATA               0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_312_FLATTEN_312_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2814_DENSE_2814_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2814_DENSE_2814_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2815_DENSE_2815_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2815_DENSE_2815_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3479_WEIGHT_CONV2D_3479_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3479_WEIGHT_CONV2D_3479_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3479_BIAS_CONV2D_3479_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3479_BIAS_CONV2D_3479_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3481_WEIGHT_CONV2D_3481_WEIGHT_DATA 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3481_WEIGHT_CONV2D_3481_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3481_BIAS_CONV2D_3481_BIAS_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3481_BIAS_CONV2D_3481_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2808_WEIGHT_DENSE_2808_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2808_WEIGHT_DENSE_2808_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2808_BIAS_DENSE_2808_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2808_BIAS_DENSE_2808_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2809_WEIGHT_DENSE_2809_WEIGHT_DATA   0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2809_WEIGHT_DENSE_2809_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2809_BIAS_DENSE_2809_BIAS_DATA       0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2809_BIAS_DENSE_2809_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3480_WEIGHT_CONV2D_3480_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3480_WEIGHT_CONV2D_3480_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3480_BIAS_CONV2D_3480_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3480_BIAS_CONV2D_3480_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3482_WEIGHT_CONV2D_3482_WEIGHT_DATA 0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3482_WEIGHT_CONV2D_3482_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3482_BIAS_CONV2D_3482_BIAS_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3482_BIAS_CONV2D_3482_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3487_WEIGHT_CONV2D_3487_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3487_WEIGHT_CONV2D_3487_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3487_BIAS_CONV2D_3487_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3487_BIAS_CONV2D_3487_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3486_WEIGHT_CONV2D_3486_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3486_WEIGHT_CONV2D_3486_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3486_BIAS_CONV2D_3486_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3486_BIAS_CONV2D_3486_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2811_WEIGHT_DENSE_2811_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2811_WEIGHT_DENSE_2811_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2811_BIAS_DENSE_2811_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2811_BIAS_DENSE_2811_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3488_WEIGHT_CONV2D_3488_WEIGHT_DATA 0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3488_WEIGHT_CONV2D_3488_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3488_BIAS_CONV2D_3488_BIAS_DATA     0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3488_BIAS_CONV2D_3488_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2812_WEIGHT_DENSE_2812_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2812_WEIGHT_DENSE_2812_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2812_BIAS_DENSE_2812_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2812_BIAS_DENSE_2812_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2813_WEIGHT_DENSE_2813_WEIGHT_DATA   0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2813_WEIGHT_DENSE_2813_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2813_BIAS_DENSE_2813_BIAS_DATA       0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2813_BIAS_DENSE_2813_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2814_WEIGHT_DENSE_2814_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2814_WEIGHT_DENSE_2814_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2814_BIAS_DENSE_2814_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2814_BIAS_DENSE_2814_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2815_WEIGHT_DENSE_2815_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2815_WEIGHT_DENSE_2815_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2815_BIAS_DENSE_2815_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2815_BIAS_DENSE_2815_BIAS_DATA       32

