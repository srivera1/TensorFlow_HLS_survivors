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
// 0x028 : Data signal of Conv2d_3216_conv2d_3216
//         bit 31~0 - Conv2d_3216_conv2d_3216[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_3218_conv2d_3218
//         bit 31~0 - Conv2d_3218_conv2d_3218[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2709_max_pooling2d_2709
//         bit 31~0 - Max_pooling2d_2709_max_pooling2d_2709[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2711_max_pooling2d_2711
//         bit 31~0 - Max_pooling2d_2711_max_pooling2d_2711[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2592_dense_2592
//         bit 31~0 - Dense_2592_dense_2592[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2594_dense_2594
//         bit 31~0 - Dense_2594_dense_2594[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_3217_conv2d_3217
//         bit 31~0 - Conv2d_3217_conv2d_3217[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_3219_conv2d_3219
//         bit 31~0 - Conv2d_3219_conv2d_3219[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_2710_max_pooling2d_2710
//         bit 31~0 - Max_pooling2d_2710_max_pooling2d_2710[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_2712_max_pooling2d_2712
//         bit 31~0 - Max_pooling2d_2712_max_pooling2d_2712[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_2593_dense_2593
//         bit 31~0 - Dense_2593_dense_2593[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_2595_dense_2595
//         bit 31~0 - Dense_2595_dense_2595[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Concatenate_566_concatenate_566
//         bit 31~0 - Concatenate_566_concatenate_566[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_3220_conv2d_3220
//         bit 31~0 - Conv2d_3220_conv2d_3220[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_2713_max_pooling2d_2713
//         bit 31~0 - Max_pooling2d_2713_max_pooling2d_2713[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_3223_conv2d_3223
//         bit 31~0 - Conv2d_3223_conv2d_3223[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_2596_dense_2596
//         bit 31~0 - Dense_2596_dense_2596[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Max_pooling2d_2715_max_pooling2d_2715
//         bit 31~0 - Max_pooling2d_2715_max_pooling2d_2715[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Max_pooling2d_2714_max_pooling2d_2714
//         bit 31~0 - Max_pooling2d_2714_max_pooling2d_2714[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Max_pooling2d_2716_max_pooling2d_2716
//         bit 31~0 - Max_pooling2d_2716_max_pooling2d_2716[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_2597_dense_2597
//         bit 31~0 - Dense_2597_dense_2597[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_2598_dense_2598
//         bit 31~0 - Dense_2598_dense_2598[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Concatenate_567_concatenate_567
//         bit 31~0 - Concatenate_567_concatenate_567[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Flatten_288_flatten_288
//         bit 31~0 - Flatten_288_flatten_288[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_2599_dense_2599
//         bit 31~0 - Dense_2599_dense_2599[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_2600_dense_2600
//         bit 31~0 - Dense_2600_dense_2600[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_2601_dense_2601
//         bit 31~0 - Dense_2601_dense_2601[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_3216_weight_conv2d_3216_weight
//         bit 31~0 - Conv2d_3216_weight_conv2d_3216_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_3216_bias_conv2d_3216_bias
//         bit 31~0 - Conv2d_3216_bias_conv2d_3216_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_3218_weight_conv2d_3218_weight
//         bit 31~0 - Conv2d_3218_weight_conv2d_3218_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_3218_bias_conv2d_3218_bias
//         bit 31~0 - Conv2d_3218_bias_conv2d_3218_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_2592_weight_dense_2592_weight
//         bit 31~0 - Dense_2592_weight_dense_2592_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_2592_bias_dense_2592_bias
//         bit 31~0 - Dense_2592_bias_dense_2592_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_2594_weight_dense_2594_weight
//         bit 31~0 - Dense_2594_weight_dense_2594_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_2594_bias_dense_2594_bias
//         bit 31~0 - Dense_2594_bias_dense_2594_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_3217_weight_conv2d_3217_weight
//         bit 31~0 - Conv2d_3217_weight_conv2d_3217_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_3217_bias_conv2d_3217_bias
//         bit 31~0 - Conv2d_3217_bias_conv2d_3217_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_3219_weight_conv2d_3219_weight
//         bit 31~0 - Conv2d_3219_weight_conv2d_3219_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_3219_bias_conv2d_3219_bias
//         bit 31~0 - Conv2d_3219_bias_conv2d_3219_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_2593_weight_dense_2593_weight
//         bit 31~0 - Dense_2593_weight_dense_2593_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_2593_bias_dense_2593_bias
//         bit 31~0 - Dense_2593_bias_dense_2593_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_2595_weight_dense_2595_weight
//         bit 31~0 - Dense_2595_weight_dense_2595_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_2595_bias_dense_2595_bias
//         bit 31~0 - Dense_2595_bias_dense_2595_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_3220_weight_conv2d_3220_weight
//         bit 31~0 - Conv2d_3220_weight_conv2d_3220_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_3220_bias_conv2d_3220_bias
//         bit 31~0 - Conv2d_3220_bias_conv2d_3220_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_3223_weight_conv2d_3223_weight
//         bit 31~0 - Conv2d_3223_weight_conv2d_3223_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Conv2d_3223_bias_conv2d_3223_bias
//         bit 31~0 - Conv2d_3223_bias_conv2d_3223_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_2596_weight_dense_2596_weight
//         bit 31~0 - Dense_2596_weight_dense_2596_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_2596_bias_dense_2596_bias
//         bit 31~0 - Dense_2596_bias_dense_2596_bias[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_2597_weight_dense_2597_weight
//         bit 31~0 - Dense_2597_weight_dense_2597_weight[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_2597_bias_dense_2597_bias
//         bit 31~0 - Dense_2597_bias_dense_2597_bias[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_2598_weight_dense_2598_weight
//         bit 31~0 - Dense_2598_weight_dense_2598_weight[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_2598_bias_dense_2598_bias
//         bit 31~0 - Dense_2598_bias_dense_2598_bias[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_2599_weight_dense_2599_weight
//         bit 31~0 - Dense_2599_weight_dense_2599_weight[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_2599_bias_dense_2599_bias
//         bit 31~0 - Dense_2599_bias_dense_2599_bias[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_2600_weight_dense_2600_weight
//         bit 31~0 - Dense_2600_weight_dense_2600_weight[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_2600_bias_dense_2600_bias
//         bit 31~0 - Dense_2600_bias_dense_2600_bias[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_2601_weight_dense_2601_weight
//         bit 31~0 - Dense_2601_weight_dense_2601_weight[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of Dense_2601_bias_dense_2601_bias
//         bit 31~0 - Dense_2601_bias_dense_2601_bias[31:0] (Read/Write)
// 0x1fc : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3216_CONV2D_3216_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3216_CONV2D_3216_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3218_CONV2D_3218_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3218_CONV2D_3218_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2709_MAX_POOLING2D_2709_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2709_MAX_POOLING2D_2709_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2711_MAX_POOLING2D_2711_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2711_MAX_POOLING2D_2711_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2592_DENSE_2592_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2592_DENSE_2592_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2594_DENSE_2594_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2594_DENSE_2594_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3217_CONV2D_3217_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3217_CONV2D_3217_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3219_CONV2D_3219_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3219_CONV2D_3219_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2710_MAX_POOLING2D_2710_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2710_MAX_POOLING2D_2710_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2712_MAX_POOLING2D_2712_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2712_MAX_POOLING2D_2712_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2593_DENSE_2593_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2593_DENSE_2593_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2595_DENSE_2595_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2595_DENSE_2595_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_566_CONCATENATE_566_DATA       0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_566_CONCATENATE_566_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3220_CONV2D_3220_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3220_CONV2D_3220_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2713_MAX_POOLING2D_2713_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2713_MAX_POOLING2D_2713_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3223_CONV2D_3223_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3223_CONV2D_3223_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2596_DENSE_2596_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2596_DENSE_2596_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2715_MAX_POOLING2D_2715_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2715_MAX_POOLING2D_2715_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2714_MAX_POOLING2D_2714_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2714_MAX_POOLING2D_2714_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2716_MAX_POOLING2D_2716_DATA 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2716_MAX_POOLING2D_2716_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2597_DENSE_2597_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2597_DENSE_2597_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2598_DENSE_2598_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2598_DENSE_2598_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_567_CONCATENATE_567_DATA       0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_567_CONCATENATE_567_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_288_FLATTEN_288_DATA               0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_288_FLATTEN_288_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2599_DENSE_2599_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2599_DENSE_2599_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2600_DENSE_2600_DATA                 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2600_DENSE_2600_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2601_DENSE_2601_DATA                 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2601_DENSE_2601_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3216_WEIGHT_CONV2D_3216_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3216_WEIGHT_CONV2D_3216_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3216_BIAS_CONV2D_3216_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3216_BIAS_CONV2D_3216_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3218_WEIGHT_CONV2D_3218_WEIGHT_DATA 0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3218_WEIGHT_CONV2D_3218_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3218_BIAS_CONV2D_3218_BIAS_DATA     0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3218_BIAS_CONV2D_3218_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2592_WEIGHT_DENSE_2592_WEIGHT_DATA   0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2592_WEIGHT_DENSE_2592_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2592_BIAS_DENSE_2592_BIAS_DATA       0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2592_BIAS_DENSE_2592_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2594_WEIGHT_DENSE_2594_WEIGHT_DATA   0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2594_WEIGHT_DENSE_2594_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2594_BIAS_DENSE_2594_BIAS_DATA       0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2594_BIAS_DENSE_2594_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3217_WEIGHT_CONV2D_3217_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3217_WEIGHT_CONV2D_3217_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3217_BIAS_CONV2D_3217_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3217_BIAS_CONV2D_3217_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3219_WEIGHT_CONV2D_3219_WEIGHT_DATA 0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3219_WEIGHT_CONV2D_3219_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3219_BIAS_CONV2D_3219_BIAS_DATA     0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3219_BIAS_CONV2D_3219_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2593_WEIGHT_DENSE_2593_WEIGHT_DATA   0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2593_WEIGHT_DENSE_2593_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2593_BIAS_DENSE_2593_BIAS_DATA       0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2593_BIAS_DENSE_2593_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2595_WEIGHT_DENSE_2595_WEIGHT_DATA   0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2595_WEIGHT_DENSE_2595_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2595_BIAS_DENSE_2595_BIAS_DATA       0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2595_BIAS_DENSE_2595_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3220_WEIGHT_CONV2D_3220_WEIGHT_DATA 0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3220_WEIGHT_CONV2D_3220_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3220_BIAS_CONV2D_3220_BIAS_DATA     0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3220_BIAS_CONV2D_3220_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3223_WEIGHT_CONV2D_3223_WEIGHT_DATA 0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3223_WEIGHT_CONV2D_3223_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3223_BIAS_CONV2D_3223_BIAS_DATA     0x198
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3223_BIAS_CONV2D_3223_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2596_WEIGHT_DENSE_2596_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2596_WEIGHT_DENSE_2596_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2596_BIAS_DENSE_2596_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2596_BIAS_DENSE_2596_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2597_WEIGHT_DENSE_2597_WEIGHT_DATA   0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2597_WEIGHT_DENSE_2597_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2597_BIAS_DENSE_2597_BIAS_DATA       0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2597_BIAS_DENSE_2597_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2598_WEIGHT_DENSE_2598_WEIGHT_DATA   0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2598_WEIGHT_DENSE_2598_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2598_BIAS_DENSE_2598_BIAS_DATA       0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2598_BIAS_DENSE_2598_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2599_WEIGHT_DENSE_2599_WEIGHT_DATA   0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2599_WEIGHT_DENSE_2599_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2599_BIAS_DENSE_2599_BIAS_DATA       0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2599_BIAS_DENSE_2599_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2600_WEIGHT_DENSE_2600_WEIGHT_DATA   0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2600_WEIGHT_DENSE_2600_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2600_BIAS_DENSE_2600_BIAS_DATA       0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2600_BIAS_DENSE_2600_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2601_WEIGHT_DENSE_2601_WEIGHT_DATA   0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2601_WEIGHT_DENSE_2601_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2601_BIAS_DENSE_2601_BIAS_DATA       0x1f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2601_BIAS_DENSE_2601_BIAS_DATA       32

