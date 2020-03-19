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
// 0x028 : Data signal of Conv2d_3240_conv2d_3240
//         bit 31~0 - Conv2d_3240_conv2d_3240[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_3243_conv2d_3243
//         bit 31~0 - Conv2d_3243_conv2d_3243[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2729_max_pooling2d_2729
//         bit 31~0 - Max_pooling2d_2729_max_pooling2d_2729[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2731_max_pooling2d_2731
//         bit 31~0 - Max_pooling2d_2731_max_pooling2d_2731[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2612_dense_2612
//         bit 31~0 - Dense_2612_dense_2612[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2614_dense_2614
//         bit 31~0 - Dense_2614_dense_2614[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_3241_conv2d_3241
//         bit 31~0 - Conv2d_3241_conv2d_3241[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_3244_conv2d_3244
//         bit 31~0 - Conv2d_3244_conv2d_3244[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_2730_max_pooling2d_2730
//         bit 31~0 - Max_pooling2d_2730_max_pooling2d_2730[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_2732_max_pooling2d_2732
//         bit 31~0 - Max_pooling2d_2732_max_pooling2d_2732[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_2613_dense_2613
//         bit 31~0 - Dense_2613_dense_2613[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_2615_dense_2615
//         bit 31~0 - Dense_2615_dense_2615[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_3242_conv2d_3242
//         bit 31~0 - Conv2d_3242_conv2d_3242[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_3245_conv2d_3245
//         bit 31~0 - Conv2d_3245_conv2d_3245[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Concatenate_570_concatenate_570
//         bit 31~0 - Concatenate_570_concatenate_570[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_3246_conv2d_3246
//         bit 31~0 - Conv2d_3246_conv2d_3246[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_2733_max_pooling2d_2733
//         bit 31~0 - Max_pooling2d_2733_max_pooling2d_2733[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_2616_dense_2616
//         bit 31~0 - Dense_2616_dense_2616[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_2617_dense_2617
//         bit 31~0 - Dense_2617_dense_2617[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Flatten_290_flatten_290
//         bit 31~0 - Flatten_290_flatten_290[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_2618_dense_2618
//         bit 31~0 - Dense_2618_dense_2618[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_2619_dense_2619
//         bit 31~0 - Dense_2619_dense_2619[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_3240_weight_conv2d_3240_weight
//         bit 31~0 - Conv2d_3240_weight_conv2d_3240_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_3240_bias_conv2d_3240_bias
//         bit 31~0 - Conv2d_3240_bias_conv2d_3240_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_3243_weight_conv2d_3243_weight
//         bit 31~0 - Conv2d_3243_weight_conv2d_3243_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_3243_bias_conv2d_3243_bias
//         bit 31~0 - Conv2d_3243_bias_conv2d_3243_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_2612_weight_dense_2612_weight
//         bit 31~0 - Dense_2612_weight_dense_2612_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_2612_bias_dense_2612_bias
//         bit 31~0 - Dense_2612_bias_dense_2612_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_2614_weight_dense_2614_weight
//         bit 31~0 - Dense_2614_weight_dense_2614_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_2614_bias_dense_2614_bias
//         bit 31~0 - Dense_2614_bias_dense_2614_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_3241_weight_conv2d_3241_weight
//         bit 31~0 - Conv2d_3241_weight_conv2d_3241_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_3241_bias_conv2d_3241_bias
//         bit 31~0 - Conv2d_3241_bias_conv2d_3241_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_3244_weight_conv2d_3244_weight
//         bit 31~0 - Conv2d_3244_weight_conv2d_3244_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_3244_bias_conv2d_3244_bias
//         bit 31~0 - Conv2d_3244_bias_conv2d_3244_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_2613_weight_dense_2613_weight
//         bit 31~0 - Dense_2613_weight_dense_2613_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_2613_bias_dense_2613_bias
//         bit 31~0 - Dense_2613_bias_dense_2613_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_2615_weight_dense_2615_weight
//         bit 31~0 - Dense_2615_weight_dense_2615_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_2615_bias_dense_2615_bias
//         bit 31~0 - Dense_2615_bias_dense_2615_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_3242_weight_conv2d_3242_weight
//         bit 31~0 - Conv2d_3242_weight_conv2d_3242_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_3242_bias_conv2d_3242_bias
//         bit 31~0 - Conv2d_3242_bias_conv2d_3242_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_3245_weight_conv2d_3245_weight
//         bit 31~0 - Conv2d_3245_weight_conv2d_3245_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_3245_bias_conv2d_3245_bias
//         bit 31~0 - Conv2d_3245_bias_conv2d_3245_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_3246_weight_conv2d_3246_weight
//         bit 31~0 - Conv2d_3246_weight_conv2d_3246_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_3246_bias_conv2d_3246_bias
//         bit 31~0 - Conv2d_3246_bias_conv2d_3246_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_2616_weight_dense_2616_weight
//         bit 31~0 - Dense_2616_weight_dense_2616_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_2616_bias_dense_2616_bias
//         bit 31~0 - Dense_2616_bias_dense_2616_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_2617_weight_dense_2617_weight
//         bit 31~0 - Dense_2617_weight_dense_2617_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_2617_bias_dense_2617_bias
//         bit 31~0 - Dense_2617_bias_dense_2617_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_2618_weight_dense_2618_weight
//         bit 31~0 - Dense_2618_weight_dense_2618_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_2618_bias_dense_2618_bias
//         bit 31~0 - Dense_2618_bias_dense_2618_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_2619_weight_dense_2619_weight
//         bit 31~0 - Dense_2619_weight_dense_2619_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_2619_bias_dense_2619_bias
//         bit 31~0 - Dense_2619_bias_dense_2619_bias[31:0] (Read/Write)
// 0x1c4 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3240_CONV2D_3240_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3240_CONV2D_3240_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3243_CONV2D_3243_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3243_CONV2D_3243_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2729_MAX_POOLING2D_2729_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2729_MAX_POOLING2D_2729_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2731_MAX_POOLING2D_2731_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2731_MAX_POOLING2D_2731_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2612_DENSE_2612_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2612_DENSE_2612_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2614_DENSE_2614_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2614_DENSE_2614_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3241_CONV2D_3241_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3241_CONV2D_3241_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3244_CONV2D_3244_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3244_CONV2D_3244_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2730_MAX_POOLING2D_2730_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2730_MAX_POOLING2D_2730_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2732_MAX_POOLING2D_2732_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2732_MAX_POOLING2D_2732_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2613_DENSE_2613_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2613_DENSE_2613_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2615_DENSE_2615_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2615_DENSE_2615_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3242_CONV2D_3242_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3242_CONV2D_3242_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3245_CONV2D_3245_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3245_CONV2D_3245_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_570_CONCATENATE_570_DATA       0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_570_CONCATENATE_570_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3246_CONV2D_3246_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3246_CONV2D_3246_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2733_MAX_POOLING2D_2733_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2733_MAX_POOLING2D_2733_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2616_DENSE_2616_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2616_DENSE_2616_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2617_DENSE_2617_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2617_DENSE_2617_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_290_FLATTEN_290_DATA               0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_290_FLATTEN_290_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2618_DENSE_2618_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2618_DENSE_2618_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2619_DENSE_2619_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2619_DENSE_2619_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3240_WEIGHT_CONV2D_3240_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3240_WEIGHT_CONV2D_3240_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3240_BIAS_CONV2D_3240_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3240_BIAS_CONV2D_3240_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3243_WEIGHT_CONV2D_3243_WEIGHT_DATA 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3243_WEIGHT_CONV2D_3243_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3243_BIAS_CONV2D_3243_BIAS_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3243_BIAS_CONV2D_3243_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2612_WEIGHT_DENSE_2612_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2612_WEIGHT_DENSE_2612_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2612_BIAS_DENSE_2612_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2612_BIAS_DENSE_2612_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2614_WEIGHT_DENSE_2614_WEIGHT_DATA   0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2614_WEIGHT_DENSE_2614_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2614_BIAS_DENSE_2614_BIAS_DATA       0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2614_BIAS_DENSE_2614_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3241_WEIGHT_CONV2D_3241_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3241_WEIGHT_CONV2D_3241_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3241_BIAS_CONV2D_3241_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3241_BIAS_CONV2D_3241_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3244_WEIGHT_CONV2D_3244_WEIGHT_DATA 0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3244_WEIGHT_CONV2D_3244_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3244_BIAS_CONV2D_3244_BIAS_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3244_BIAS_CONV2D_3244_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2613_WEIGHT_DENSE_2613_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2613_WEIGHT_DENSE_2613_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2613_BIAS_DENSE_2613_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2613_BIAS_DENSE_2613_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2615_WEIGHT_DENSE_2615_WEIGHT_DATA   0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2615_WEIGHT_DENSE_2615_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2615_BIAS_DENSE_2615_BIAS_DATA       0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2615_BIAS_DENSE_2615_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3242_WEIGHT_CONV2D_3242_WEIGHT_DATA 0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3242_WEIGHT_CONV2D_3242_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3242_BIAS_CONV2D_3242_BIAS_DATA     0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3242_BIAS_CONV2D_3242_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3245_WEIGHT_CONV2D_3245_WEIGHT_DATA 0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3245_WEIGHT_CONV2D_3245_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3245_BIAS_CONV2D_3245_BIAS_DATA     0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3245_BIAS_CONV2D_3245_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3246_WEIGHT_CONV2D_3246_WEIGHT_DATA 0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3246_WEIGHT_CONV2D_3246_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3246_BIAS_CONV2D_3246_BIAS_DATA     0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3246_BIAS_CONV2D_3246_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2616_WEIGHT_DENSE_2616_WEIGHT_DATA   0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2616_WEIGHT_DENSE_2616_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2616_BIAS_DENSE_2616_BIAS_DATA       0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2616_BIAS_DENSE_2616_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2617_WEIGHT_DENSE_2617_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2617_WEIGHT_DENSE_2617_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2617_BIAS_DENSE_2617_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2617_BIAS_DENSE_2617_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2618_WEIGHT_DENSE_2618_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2618_WEIGHT_DENSE_2618_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2618_BIAS_DENSE_2618_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2618_BIAS_DENSE_2618_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2619_WEIGHT_DENSE_2619_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2619_WEIGHT_DENSE_2619_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2619_BIAS_DENSE_2619_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2619_BIAS_DENSE_2619_BIAS_DATA       32

