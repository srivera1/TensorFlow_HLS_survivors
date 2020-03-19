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
// 0x028 : Data signal of Conv2d_3338_conv2d_3338
//         bit 31~0 - Conv2d_3338_conv2d_3338[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_3336_conv2d_3336
//         bit 31~0 - Conv2d_3336_conv2d_3336[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2812_max_pooling2d_2812
//         bit 31~0 - Max_pooling2d_2812_max_pooling2d_2812[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2810_max_pooling2d_2810
//         bit 31~0 - Max_pooling2d_2810_max_pooling2d_2810[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2691_dense_2691
//         bit 31~0 - Dense_2691_dense_2691[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_3337_conv2d_3337
//         bit 31~0 - Conv2d_3337_conv2d_3337[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_3339_conv2d_3339
//         bit 31~0 - Conv2d_3339_conv2d_3339[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Max_pooling2d_2811_max_pooling2d_2811
//         bit 31~0 - Max_pooling2d_2811_max_pooling2d_2811[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_2813_max_pooling2d_2813
//         bit 31~0 - Max_pooling2d_2813_max_pooling2d_2813[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_2690_dense_2690
//         bit 31~0 - Dense_2690_dense_2690[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_2692_dense_2692
//         bit 31~0 - Dense_2692_dense_2692[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Concatenate_582_concatenate_582
//         bit 31~0 - Concatenate_582_concatenate_582[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_3340_conv2d_3340
//         bit 31~0 - Conv2d_3340_conv2d_3340[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_3341_conv2d_3341
//         bit 31~0 - Conv2d_3341_conv2d_3341[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_2814_max_pooling2d_2814
//         bit 31~0 - Max_pooling2d_2814_max_pooling2d_2814[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Flatten_298_flatten_298
//         bit 31~0 - Flatten_298_flatten_298[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_2693_dense_2693
//         bit 31~0 - Dense_2693_dense_2693[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_2694_dense_2694
//         bit 31~0 - Dense_2694_dense_2694[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_2695_dense_2695
//         bit 31~0 - Dense_2695_dense_2695[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Conv2d_3338_weight_conv2d_3338_weight
//         bit 31~0 - Conv2d_3338_weight_conv2d_3338_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_3338_bias_conv2d_3338_bias
//         bit 31~0 - Conv2d_3338_bias_conv2d_3338_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_3336_weight_conv2d_3336_weight
//         bit 31~0 - Conv2d_3336_weight_conv2d_3336_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_3336_bias_conv2d_3336_bias
//         bit 31~0 - Conv2d_3336_bias_conv2d_3336_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_2691_weight_dense_2691_weight
//         bit 31~0 - Dense_2691_weight_dense_2691_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_2691_bias_dense_2691_bias
//         bit 31~0 - Dense_2691_bias_dense_2691_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_3337_weight_conv2d_3337_weight
//         bit 31~0 - Conv2d_3337_weight_conv2d_3337_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_3337_bias_conv2d_3337_bias
//         bit 31~0 - Conv2d_3337_bias_conv2d_3337_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_3339_weight_conv2d_3339_weight
//         bit 31~0 - Conv2d_3339_weight_conv2d_3339_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_3339_bias_conv2d_3339_bias
//         bit 31~0 - Conv2d_3339_bias_conv2d_3339_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_2690_weight_dense_2690_weight
//         bit 31~0 - Dense_2690_weight_dense_2690_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_2690_bias_dense_2690_bias
//         bit 31~0 - Dense_2690_bias_dense_2690_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_2692_weight_dense_2692_weight
//         bit 31~0 - Dense_2692_weight_dense_2692_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_2692_bias_dense_2692_bias
//         bit 31~0 - Dense_2692_bias_dense_2692_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_3340_weight_conv2d_3340_weight
//         bit 31~0 - Conv2d_3340_weight_conv2d_3340_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_3340_bias_conv2d_3340_bias
//         bit 31~0 - Conv2d_3340_bias_conv2d_3340_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_3341_weight_conv2d_3341_weight
//         bit 31~0 - Conv2d_3341_weight_conv2d_3341_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_3341_bias_conv2d_3341_bias
//         bit 31~0 - Conv2d_3341_bias_conv2d_3341_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_2693_weight_dense_2693_weight
//         bit 31~0 - Dense_2693_weight_dense_2693_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_2693_bias_dense_2693_bias
//         bit 31~0 - Dense_2693_bias_dense_2693_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_2694_weight_dense_2694_weight
//         bit 31~0 - Dense_2694_weight_dense_2694_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_2694_bias_dense_2694_bias
//         bit 31~0 - Dense_2694_bias_dense_2694_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_2695_weight_dense_2695_weight
//         bit 31~0 - Dense_2695_weight_dense_2695_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_2695_bias_dense_2695_bias
//         bit 31~0 - Dense_2695_bias_dense_2695_bias[31:0] (Read/Write)
// 0x17c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT2_INPUT2_DATA                         0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT2_INPUT2_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT1_INPUT1_DATA                         0x020
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT1_INPUT1_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3338_CONV2D_3338_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3338_CONV2D_3338_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3336_CONV2D_3336_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3336_CONV2D_3336_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2812_MAX_POOLING2D_2812_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2812_MAX_POOLING2D_2812_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2810_MAX_POOLING2D_2810_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2810_MAX_POOLING2D_2810_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2691_DENSE_2691_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2691_DENSE_2691_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3337_CONV2D_3337_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3337_CONV2D_3337_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3339_CONV2D_3339_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3339_CONV2D_3339_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2811_MAX_POOLING2D_2811_DATA 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2811_MAX_POOLING2D_2811_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2813_MAX_POOLING2D_2813_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2813_MAX_POOLING2D_2813_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2690_DENSE_2690_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2690_DENSE_2690_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2692_DENSE_2692_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2692_DENSE_2692_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_582_CONCATENATE_582_DATA       0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_582_CONCATENATE_582_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3340_CONV2D_3340_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3340_CONV2D_3340_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3341_CONV2D_3341_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3341_CONV2D_3341_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2814_MAX_POOLING2D_2814_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2814_MAX_POOLING2D_2814_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_298_FLATTEN_298_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_298_FLATTEN_298_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2693_DENSE_2693_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2693_DENSE_2693_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2694_DENSE_2694_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2694_DENSE_2694_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2695_DENSE_2695_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2695_DENSE_2695_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3338_WEIGHT_CONV2D_3338_WEIGHT_DATA 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3338_WEIGHT_CONV2D_3338_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3338_BIAS_CONV2D_3338_BIAS_DATA     0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3338_BIAS_CONV2D_3338_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3336_WEIGHT_CONV2D_3336_WEIGHT_DATA 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3336_WEIGHT_CONV2D_3336_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3336_BIAS_CONV2D_3336_BIAS_DATA     0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3336_BIAS_CONV2D_3336_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2691_WEIGHT_DENSE_2691_WEIGHT_DATA   0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2691_WEIGHT_DENSE_2691_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2691_BIAS_DENSE_2691_BIAS_DATA       0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2691_BIAS_DENSE_2691_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3337_WEIGHT_CONV2D_3337_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3337_WEIGHT_CONV2D_3337_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3337_BIAS_CONV2D_3337_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3337_BIAS_CONV2D_3337_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3339_WEIGHT_CONV2D_3339_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3339_WEIGHT_CONV2D_3339_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3339_BIAS_CONV2D_3339_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3339_BIAS_CONV2D_3339_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2690_WEIGHT_DENSE_2690_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2690_WEIGHT_DENSE_2690_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2690_BIAS_DENSE_2690_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2690_BIAS_DENSE_2690_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2692_WEIGHT_DENSE_2692_WEIGHT_DATA   0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2692_WEIGHT_DENSE_2692_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2692_BIAS_DENSE_2692_BIAS_DATA       0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2692_BIAS_DENSE_2692_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3340_WEIGHT_CONV2D_3340_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3340_WEIGHT_CONV2D_3340_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3340_BIAS_CONV2D_3340_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3340_BIAS_CONV2D_3340_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3341_WEIGHT_CONV2D_3341_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3341_WEIGHT_CONV2D_3341_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3341_BIAS_CONV2D_3341_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3341_BIAS_CONV2D_3341_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2693_WEIGHT_DENSE_2693_WEIGHT_DATA   0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2693_WEIGHT_DENSE_2693_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2693_BIAS_DENSE_2693_BIAS_DATA       0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2693_BIAS_DENSE_2693_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2694_WEIGHT_DENSE_2694_WEIGHT_DATA   0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2694_WEIGHT_DENSE_2694_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2694_BIAS_DENSE_2694_BIAS_DATA       0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2694_BIAS_DENSE_2694_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2695_WEIGHT_DENSE_2695_WEIGHT_DATA   0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2695_WEIGHT_DENSE_2695_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2695_BIAS_DENSE_2695_BIAS_DATA       0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2695_BIAS_DENSE_2695_BIAS_DATA       32

