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
// 0x028 : Data signal of Conv2d_3075_conv2d_3075
//         bit 31~0 - Conv2d_3075_conv2d_3075[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_3078_conv2d_3078
//         bit 31~0 - Conv2d_3078_conv2d_3078[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2594_max_pooling2d_2594
//         bit 31~0 - Max_pooling2d_2594_max_pooling2d_2594[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2596_max_pooling2d_2596
//         bit 31~0 - Max_pooling2d_2596_max_pooling2d_2596[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2487_dense_2487
//         bit 31~0 - Dense_2487_dense_2487[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2488_dense_2488
//         bit 31~0 - Dense_2488_dense_2488[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_3076_conv2d_3076
//         bit 31~0 - Conv2d_3076_conv2d_3076[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_3079_conv2d_3079
//         bit 31~0 - Conv2d_3079_conv2d_3079[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_2595_max_pooling2d_2595
//         bit 31~0 - Max_pooling2d_2595_max_pooling2d_2595[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_2597_max_pooling2d_2597
//         bit 31~0 - Max_pooling2d_2597_max_pooling2d_2597[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_3077_conv2d_3077
//         bit 31~0 - Conv2d_3077_conv2d_3077[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_3080_conv2d_3080
//         bit 31~0 - Conv2d_3080_conv2d_3080[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Concatenate_541_concatenate_541
//         bit 31~0 - Concatenate_541_concatenate_541[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_3081_conv2d_3081
//         bit 31~0 - Conv2d_3081_conv2d_3081[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_2598_max_pooling2d_2598
//         bit 31~0 - Max_pooling2d_2598_max_pooling2d_2598[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_2489_dense_2489
//         bit 31~0 - Dense_2489_dense_2489[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_2490_dense_2490
//         bit 31~0 - Dense_2490_dense_2490[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_2491_dense_2491
//         bit 31~0 - Dense_2491_dense_2491[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_2492_dense_2492
//         bit 31~0 - Dense_2492_dense_2492[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Flatten_277_flatten_277
//         bit 31~0 - Flatten_277_flatten_277[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_2493_dense_2493
//         bit 31~0 - Dense_2493_dense_2493[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_2494_dense_2494
//         bit 31~0 - Dense_2494_dense_2494[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_2495_dense_2495
//         bit 31~0 - Dense_2495_dense_2495[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_3075_weight_conv2d_3075_weight
//         bit 31~0 - Conv2d_3075_weight_conv2d_3075_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_3075_bias_conv2d_3075_bias
//         bit 31~0 - Conv2d_3075_bias_conv2d_3075_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_3078_weight_conv2d_3078_weight
//         bit 31~0 - Conv2d_3078_weight_conv2d_3078_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_3078_bias_conv2d_3078_bias
//         bit 31~0 - Conv2d_3078_bias_conv2d_3078_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_2487_weight_dense_2487_weight
//         bit 31~0 - Dense_2487_weight_dense_2487_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_2487_bias_dense_2487_bias
//         bit 31~0 - Dense_2487_bias_dense_2487_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_2488_weight_dense_2488_weight
//         bit 31~0 - Dense_2488_weight_dense_2488_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_2488_bias_dense_2488_bias
//         bit 31~0 - Dense_2488_bias_dense_2488_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_3076_weight_conv2d_3076_weight
//         bit 31~0 - Conv2d_3076_weight_conv2d_3076_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_3076_bias_conv2d_3076_bias
//         bit 31~0 - Conv2d_3076_bias_conv2d_3076_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_3079_weight_conv2d_3079_weight
//         bit 31~0 - Conv2d_3079_weight_conv2d_3079_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_3079_bias_conv2d_3079_bias
//         bit 31~0 - Conv2d_3079_bias_conv2d_3079_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_3077_weight_conv2d_3077_weight
//         bit 31~0 - Conv2d_3077_weight_conv2d_3077_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_3077_bias_conv2d_3077_bias
//         bit 31~0 - Conv2d_3077_bias_conv2d_3077_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_3080_weight_conv2d_3080_weight
//         bit 31~0 - Conv2d_3080_weight_conv2d_3080_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_3080_bias_conv2d_3080_bias
//         bit 31~0 - Conv2d_3080_bias_conv2d_3080_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_3081_weight_conv2d_3081_weight
//         bit 31~0 - Conv2d_3081_weight_conv2d_3081_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_3081_bias_conv2d_3081_bias
//         bit 31~0 - Conv2d_3081_bias_conv2d_3081_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_2489_weight_dense_2489_weight
//         bit 31~0 - Dense_2489_weight_dense_2489_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_2489_bias_dense_2489_bias
//         bit 31~0 - Dense_2489_bias_dense_2489_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_2490_weight_dense_2490_weight
//         bit 31~0 - Dense_2490_weight_dense_2490_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_2490_bias_dense_2490_bias
//         bit 31~0 - Dense_2490_bias_dense_2490_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_2491_weight_dense_2491_weight
//         bit 31~0 - Dense_2491_weight_dense_2491_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_2491_bias_dense_2491_bias
//         bit 31~0 - Dense_2491_bias_dense_2491_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_2492_weight_dense_2492_weight
//         bit 31~0 - Dense_2492_weight_dense_2492_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_2492_bias_dense_2492_bias
//         bit 31~0 - Dense_2492_bias_dense_2492_bias[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_2493_weight_dense_2493_weight
//         bit 31~0 - Dense_2493_weight_dense_2493_weight[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_2493_bias_dense_2493_bias
//         bit 31~0 - Dense_2493_bias_dense_2493_bias[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_2494_weight_dense_2494_weight
//         bit 31~0 - Dense_2494_weight_dense_2494_weight[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_2494_bias_dense_2494_bias
//         bit 31~0 - Dense_2494_bias_dense_2494_bias[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_2495_weight_dense_2495_weight
//         bit 31~0 - Dense_2495_weight_dense_2495_weight[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_2495_bias_dense_2495_bias
//         bit 31~0 - Dense_2495_bias_dense_2495_bias[31:0] (Read/Write)
// 0x1dc : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3075_CONV2D_3075_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3075_CONV2D_3075_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3078_CONV2D_3078_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3078_CONV2D_3078_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2594_MAX_POOLING2D_2594_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2594_MAX_POOLING2D_2594_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2596_MAX_POOLING2D_2596_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2596_MAX_POOLING2D_2596_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2487_DENSE_2487_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2487_DENSE_2487_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2488_DENSE_2488_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2488_DENSE_2488_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3076_CONV2D_3076_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3076_CONV2D_3076_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3079_CONV2D_3079_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3079_CONV2D_3079_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2595_MAX_POOLING2D_2595_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2595_MAX_POOLING2D_2595_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2597_MAX_POOLING2D_2597_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2597_MAX_POOLING2D_2597_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3077_CONV2D_3077_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3077_CONV2D_3077_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3080_CONV2D_3080_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3080_CONV2D_3080_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_541_CONCATENATE_541_DATA       0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_541_CONCATENATE_541_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3081_CONV2D_3081_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3081_CONV2D_3081_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2598_MAX_POOLING2D_2598_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2598_MAX_POOLING2D_2598_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2489_DENSE_2489_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2489_DENSE_2489_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2490_DENSE_2490_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2490_DENSE_2490_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2491_DENSE_2491_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2491_DENSE_2491_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2492_DENSE_2492_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2492_DENSE_2492_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_277_FLATTEN_277_DATA               0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_277_FLATTEN_277_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2493_DENSE_2493_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2493_DENSE_2493_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2494_DENSE_2494_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2494_DENSE_2494_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2495_DENSE_2495_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2495_DENSE_2495_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3075_WEIGHT_CONV2D_3075_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3075_WEIGHT_CONV2D_3075_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3075_BIAS_CONV2D_3075_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3075_BIAS_CONV2D_3075_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3078_WEIGHT_CONV2D_3078_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3078_WEIGHT_CONV2D_3078_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3078_BIAS_CONV2D_3078_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3078_BIAS_CONV2D_3078_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2487_WEIGHT_DENSE_2487_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2487_WEIGHT_DENSE_2487_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2487_BIAS_DENSE_2487_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2487_BIAS_DENSE_2487_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2488_WEIGHT_DENSE_2488_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2488_WEIGHT_DENSE_2488_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2488_BIAS_DENSE_2488_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2488_BIAS_DENSE_2488_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3076_WEIGHT_CONV2D_3076_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3076_WEIGHT_CONV2D_3076_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3076_BIAS_CONV2D_3076_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3076_BIAS_CONV2D_3076_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3079_WEIGHT_CONV2D_3079_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3079_WEIGHT_CONV2D_3079_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3079_BIAS_CONV2D_3079_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3079_BIAS_CONV2D_3079_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3077_WEIGHT_CONV2D_3077_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3077_WEIGHT_CONV2D_3077_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3077_BIAS_CONV2D_3077_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3077_BIAS_CONV2D_3077_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3080_WEIGHT_CONV2D_3080_WEIGHT_DATA 0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3080_WEIGHT_CONV2D_3080_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3080_BIAS_CONV2D_3080_BIAS_DATA     0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3080_BIAS_CONV2D_3080_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3081_WEIGHT_CONV2D_3081_WEIGHT_DATA 0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3081_WEIGHT_CONV2D_3081_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3081_BIAS_CONV2D_3081_BIAS_DATA     0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3081_BIAS_CONV2D_3081_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2489_WEIGHT_DENSE_2489_WEIGHT_DATA   0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2489_WEIGHT_DENSE_2489_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2489_BIAS_DENSE_2489_BIAS_DATA       0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2489_BIAS_DENSE_2489_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2490_WEIGHT_DENSE_2490_WEIGHT_DATA   0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2490_WEIGHT_DENSE_2490_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2490_BIAS_DENSE_2490_BIAS_DATA       0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2490_BIAS_DENSE_2490_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2491_WEIGHT_DENSE_2491_WEIGHT_DATA   0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2491_WEIGHT_DENSE_2491_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2491_BIAS_DENSE_2491_BIAS_DATA       0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2491_BIAS_DENSE_2491_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2492_WEIGHT_DENSE_2492_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2492_WEIGHT_DENSE_2492_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2492_BIAS_DENSE_2492_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2492_BIAS_DENSE_2492_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2493_WEIGHT_DENSE_2493_WEIGHT_DATA   0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2493_WEIGHT_DENSE_2493_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2493_BIAS_DENSE_2493_BIAS_DATA       0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2493_BIAS_DENSE_2493_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2494_WEIGHT_DENSE_2494_WEIGHT_DATA   0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2494_WEIGHT_DENSE_2494_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2494_BIAS_DENSE_2494_BIAS_DATA       0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2494_BIAS_DENSE_2494_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2495_WEIGHT_DENSE_2495_WEIGHT_DATA   0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2495_WEIGHT_DENSE_2495_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2495_BIAS_DENSE_2495_BIAS_DATA       0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2495_BIAS_DENSE_2495_BIAS_DATA       32

