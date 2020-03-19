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
// 0x028 : Data signal of Conv2d_3837_conv2d_3837
//         bit 31~0 - Conv2d_3837_conv2d_3837[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_3839_conv2d_3839
//         bit 31~0 - Conv2d_3839_conv2d_3839[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_3257_max_pooling2d_3257
//         bit 31~0 - Max_pooling2d_3257_max_pooling2d_3257[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_3259_max_pooling2d_3259
//         bit 31~0 - Max_pooling2d_3259_max_pooling2d_3259[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_3102_dense_3102
//         bit 31~0 - Dense_3102_dense_3102[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_3104_dense_3104
//         bit 31~0 - Dense_3104_dense_3104[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_3838_conv2d_3838
//         bit 31~0 - Conv2d_3838_conv2d_3838[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_3840_conv2d_3840
//         bit 31~0 - Conv2d_3840_conv2d_3840[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_3258_max_pooling2d_3258
//         bit 31~0 - Max_pooling2d_3258_max_pooling2d_3258[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_3260_max_pooling2d_3260
//         bit 31~0 - Max_pooling2d_3260_max_pooling2d_3260[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_3103_dense_3103
//         bit 31~0 - Dense_3103_dense_3103[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_3105_dense_3105
//         bit 31~0 - Dense_3105_dense_3105[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Concatenate_672_concatenate_672
//         bit 31~0 - Concatenate_672_concatenate_672[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_3841_conv2d_3841
//         bit 31~0 - Conv2d_3841_conv2d_3841[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_3261_max_pooling2d_3261
//         bit 31~0 - Max_pooling2d_3261_max_pooling2d_3261[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_3106_dense_3106
//         bit 31~0 - Dense_3106_dense_3106[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_3262_max_pooling2d_3262
//         bit 31~0 - Max_pooling2d_3262_max_pooling2d_3262[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Flatten_346_flatten_346
//         bit 31~0 - Flatten_346_flatten_346[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_3107_dense_3107
//         bit 31~0 - Dense_3107_dense_3107[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_3108_dense_3108
//         bit 31~0 - Dense_3108_dense_3108[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_3837_weight_conv2d_3837_weight
//         bit 31~0 - Conv2d_3837_weight_conv2d_3837_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_3837_bias_conv2d_3837_bias
//         bit 31~0 - Conv2d_3837_bias_conv2d_3837_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_3839_weight_conv2d_3839_weight
//         bit 31~0 - Conv2d_3839_weight_conv2d_3839_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_3839_bias_conv2d_3839_bias
//         bit 31~0 - Conv2d_3839_bias_conv2d_3839_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_3102_weight_dense_3102_weight
//         bit 31~0 - Dense_3102_weight_dense_3102_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_3102_bias_dense_3102_bias
//         bit 31~0 - Dense_3102_bias_dense_3102_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_3104_weight_dense_3104_weight
//         bit 31~0 - Dense_3104_weight_dense_3104_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_3104_bias_dense_3104_bias
//         bit 31~0 - Dense_3104_bias_dense_3104_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_3838_weight_conv2d_3838_weight
//         bit 31~0 - Conv2d_3838_weight_conv2d_3838_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_3838_bias_conv2d_3838_bias
//         bit 31~0 - Conv2d_3838_bias_conv2d_3838_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_3840_weight_conv2d_3840_weight
//         bit 31~0 - Conv2d_3840_weight_conv2d_3840_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_3840_bias_conv2d_3840_bias
//         bit 31~0 - Conv2d_3840_bias_conv2d_3840_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_3103_weight_dense_3103_weight
//         bit 31~0 - Dense_3103_weight_dense_3103_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_3103_bias_dense_3103_bias
//         bit 31~0 - Dense_3103_bias_dense_3103_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_3105_weight_dense_3105_weight
//         bit 31~0 - Dense_3105_weight_dense_3105_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_3105_bias_dense_3105_bias
//         bit 31~0 - Dense_3105_bias_dense_3105_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_3841_weight_conv2d_3841_weight
//         bit 31~0 - Conv2d_3841_weight_conv2d_3841_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_3841_bias_conv2d_3841_bias
//         bit 31~0 - Conv2d_3841_bias_conv2d_3841_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_3106_weight_dense_3106_weight
//         bit 31~0 - Dense_3106_weight_dense_3106_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_3106_bias_dense_3106_bias
//         bit 31~0 - Dense_3106_bias_dense_3106_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_3107_weight_dense_3107_weight
//         bit 31~0 - Dense_3107_weight_dense_3107_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_3107_bias_dense_3107_bias
//         bit 31~0 - Dense_3107_bias_dense_3107_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_3108_weight_dense_3108_weight
//         bit 31~0 - Dense_3108_weight_dense_3108_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_3108_bias_dense_3108_bias
//         bit 31~0 - Dense_3108_bias_dense_3108_bias[31:0] (Read/Write)
// 0x184 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3837_CONV2D_3837_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3837_CONV2D_3837_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3839_CONV2D_3839_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3839_CONV2D_3839_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3257_MAX_POOLING2D_3257_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3257_MAX_POOLING2D_3257_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3259_MAX_POOLING2D_3259_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3259_MAX_POOLING2D_3259_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3102_DENSE_3102_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3102_DENSE_3102_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3104_DENSE_3104_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3104_DENSE_3104_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3838_CONV2D_3838_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3838_CONV2D_3838_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3840_CONV2D_3840_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3840_CONV2D_3840_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3258_MAX_POOLING2D_3258_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3258_MAX_POOLING2D_3258_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3260_MAX_POOLING2D_3260_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3260_MAX_POOLING2D_3260_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3103_DENSE_3103_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3103_DENSE_3103_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3105_DENSE_3105_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3105_DENSE_3105_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_672_CONCATENATE_672_DATA       0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_672_CONCATENATE_672_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3841_CONV2D_3841_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3841_CONV2D_3841_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3261_MAX_POOLING2D_3261_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3261_MAX_POOLING2D_3261_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3106_DENSE_3106_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3106_DENSE_3106_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3262_MAX_POOLING2D_3262_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3262_MAX_POOLING2D_3262_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_346_FLATTEN_346_DATA               0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_346_FLATTEN_346_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3107_DENSE_3107_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3107_DENSE_3107_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3108_DENSE_3108_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3108_DENSE_3108_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3837_WEIGHT_CONV2D_3837_WEIGHT_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3837_WEIGHT_CONV2D_3837_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3837_BIAS_CONV2D_3837_BIAS_DATA     0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3837_BIAS_CONV2D_3837_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3839_WEIGHT_CONV2D_3839_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3839_WEIGHT_CONV2D_3839_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3839_BIAS_CONV2D_3839_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3839_BIAS_CONV2D_3839_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3102_WEIGHT_DENSE_3102_WEIGHT_DATA   0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3102_WEIGHT_DENSE_3102_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3102_BIAS_DENSE_3102_BIAS_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3102_BIAS_DENSE_3102_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3104_WEIGHT_DENSE_3104_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3104_WEIGHT_DENSE_3104_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3104_BIAS_DENSE_3104_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3104_BIAS_DENSE_3104_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3838_WEIGHT_CONV2D_3838_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3838_WEIGHT_CONV2D_3838_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3838_BIAS_CONV2D_3838_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3838_BIAS_CONV2D_3838_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3840_WEIGHT_CONV2D_3840_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3840_WEIGHT_CONV2D_3840_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3840_BIAS_CONV2D_3840_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3840_BIAS_CONV2D_3840_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3103_WEIGHT_DENSE_3103_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3103_WEIGHT_DENSE_3103_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3103_BIAS_DENSE_3103_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3103_BIAS_DENSE_3103_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3105_WEIGHT_DENSE_3105_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3105_WEIGHT_DENSE_3105_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3105_BIAS_DENSE_3105_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3105_BIAS_DENSE_3105_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3841_WEIGHT_CONV2D_3841_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3841_WEIGHT_CONV2D_3841_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3841_BIAS_CONV2D_3841_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3841_BIAS_CONV2D_3841_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3106_WEIGHT_DENSE_3106_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3106_WEIGHT_DENSE_3106_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3106_BIAS_DENSE_3106_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3106_BIAS_DENSE_3106_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3107_WEIGHT_DENSE_3107_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3107_WEIGHT_DENSE_3107_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3107_BIAS_DENSE_3107_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3107_BIAS_DENSE_3107_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3108_WEIGHT_DENSE_3108_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3108_WEIGHT_DENSE_3108_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3108_BIAS_DENSE_3108_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3108_BIAS_DENSE_3108_BIAS_DATA       32

