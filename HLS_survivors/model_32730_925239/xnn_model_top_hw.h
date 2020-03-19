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
// 0x028 : Data signal of Conv2d_4065_conv2d_4065
//         bit 31~0 - Conv2d_4065_conv2d_4065[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_4067_conv2d_4067
//         bit 31~0 - Conv2d_4067_conv2d_4067[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_3442_max_pooling2d_3442
//         bit 31~0 - Max_pooling2d_3442_max_pooling2d_3442[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_3443_max_pooling2d_3443
//         bit 31~0 - Max_pooling2d_3443_max_pooling2d_3443[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_3292_dense_3292
//         bit 31~0 - Dense_3292_dense_3292[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_3293_dense_3293
//         bit 31~0 - Dense_3293_dense_3293[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_4066_conv2d_4066
//         bit 31~0 - Conv2d_4066_conv2d_4066[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_4068_conv2d_4068
//         bit 31~0 - Conv2d_4068_conv2d_4068[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Concatenate_708_concatenate_708
//         bit 31~0 - Concatenate_708_concatenate_708[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_4069_conv2d_4069
//         bit 31~0 - Conv2d_4069_conv2d_4069[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_3444_max_pooling2d_3444
//         bit 31~0 - Max_pooling2d_3444_max_pooling2d_3444[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_3294_dense_3294
//         bit 31~0 - Dense_3294_dense_3294[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_4070_conv2d_4070
//         bit 31~0 - Conv2d_4070_conv2d_4070[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Max_pooling2d_3445_max_pooling2d_3445
//         bit 31~0 - Max_pooling2d_3445_max_pooling2d_3445[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_3295_dense_3295
//         bit 31~0 - Dense_3295_dense_3295[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_3296_dense_3296
//         bit 31~0 - Dense_3296_dense_3296[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_3297_dense_3297
//         bit 31~0 - Dense_3297_dense_3297[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Concatenate_709_concatenate_709
//         bit 31~0 - Concatenate_709_concatenate_709[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_3298_dense_3298
//         bit 31~0 - Dense_3298_dense_3298[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_3299_dense_3299
//         bit 31~0 - Dense_3299_dense_3299[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_3300_dense_3300
//         bit 31~0 - Dense_3300_dense_3300[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_3301_dense_3301
//         bit 31~0 - Dense_3301_dense_3301[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Concatenate_710_concatenate_710
//         bit 31~0 - Concatenate_710_concatenate_710[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Flatten_367_flatten_367
//         bit 31~0 - Flatten_367_flatten_367[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_3302_dense_3302
//         bit 31~0 - Dense_3302_dense_3302[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_3303_dense_3303
//         bit 31~0 - Dense_3303_dense_3303[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_4065_weight_conv2d_4065_weight
//         bit 31~0 - Conv2d_4065_weight_conv2d_4065_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_4065_bias_conv2d_4065_bias
//         bit 31~0 - Conv2d_4065_bias_conv2d_4065_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_4067_weight_conv2d_4067_weight
//         bit 31~0 - Conv2d_4067_weight_conv2d_4067_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_4067_bias_conv2d_4067_bias
//         bit 31~0 - Conv2d_4067_bias_conv2d_4067_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_3292_weight_dense_3292_weight
//         bit 31~0 - Dense_3292_weight_dense_3292_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_3292_bias_dense_3292_bias
//         bit 31~0 - Dense_3292_bias_dense_3292_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_3293_weight_dense_3293_weight
//         bit 31~0 - Dense_3293_weight_dense_3293_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_3293_bias_dense_3293_bias
//         bit 31~0 - Dense_3293_bias_dense_3293_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_4066_weight_conv2d_4066_weight
//         bit 31~0 - Conv2d_4066_weight_conv2d_4066_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_4066_bias_conv2d_4066_bias
//         bit 31~0 - Conv2d_4066_bias_conv2d_4066_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_4068_weight_conv2d_4068_weight
//         bit 31~0 - Conv2d_4068_weight_conv2d_4068_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_4068_bias_conv2d_4068_bias
//         bit 31~0 - Conv2d_4068_bias_conv2d_4068_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_4069_weight_conv2d_4069_weight
//         bit 31~0 - Conv2d_4069_weight_conv2d_4069_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_4069_bias_conv2d_4069_bias
//         bit 31~0 - Conv2d_4069_bias_conv2d_4069_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_3294_weight_dense_3294_weight
//         bit 31~0 - Dense_3294_weight_dense_3294_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_3294_bias_dense_3294_bias
//         bit 31~0 - Dense_3294_bias_dense_3294_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_4070_weight_conv2d_4070_weight
//         bit 31~0 - Conv2d_4070_weight_conv2d_4070_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_4070_bias_conv2d_4070_bias
//         bit 31~0 - Conv2d_4070_bias_conv2d_4070_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_3295_weight_dense_3295_weight
//         bit 31~0 - Dense_3295_weight_dense_3295_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_3295_bias_dense_3295_bias
//         bit 31~0 - Dense_3295_bias_dense_3295_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_3296_weight_dense_3296_weight
//         bit 31~0 - Dense_3296_weight_dense_3296_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_3296_bias_dense_3296_bias
//         bit 31~0 - Dense_3296_bias_dense_3296_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_3297_weight_dense_3297_weight
//         bit 31~0 - Dense_3297_weight_dense_3297_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_3297_bias_dense_3297_bias
//         bit 31~0 - Dense_3297_bias_dense_3297_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_3298_weight_dense_3298_weight
//         bit 31~0 - Dense_3298_weight_dense_3298_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_3298_bias_dense_3298_bias
//         bit 31~0 - Dense_3298_bias_dense_3298_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_3299_weight_dense_3299_weight
//         bit 31~0 - Dense_3299_weight_dense_3299_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_3299_bias_dense_3299_bias
//         bit 31~0 - Dense_3299_bias_dense_3299_bias[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_3300_weight_dense_3300_weight
//         bit 31~0 - Dense_3300_weight_dense_3300_weight[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_3300_bias_dense_3300_bias
//         bit 31~0 - Dense_3300_bias_dense_3300_bias[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_3301_weight_dense_3301_weight
//         bit 31~0 - Dense_3301_weight_dense_3301_weight[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_3301_bias_dense_3301_bias
//         bit 31~0 - Dense_3301_bias_dense_3301_bias[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of Dense_3302_weight_dense_3302_weight
//         bit 31~0 - Dense_3302_weight_dense_3302_weight[31:0] (Read/Write)
// 0x1fc : reserved
// 0x200 : Data signal of Dense_3302_bias_dense_3302_bias
//         bit 31~0 - Dense_3302_bias_dense_3302_bias[31:0] (Read/Write)
// 0x204 : reserved
// 0x208 : Data signal of Dense_3303_weight_dense_3303_weight
//         bit 31~0 - Dense_3303_weight_dense_3303_weight[31:0] (Read/Write)
// 0x20c : reserved
// 0x210 : Data signal of Dense_3303_bias_dense_3303_bias
//         bit 31~0 - Dense_3303_bias_dense_3303_bias[31:0] (Read/Write)
// 0x214 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4065_CONV2D_4065_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4065_CONV2D_4065_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4067_CONV2D_4067_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4067_CONV2D_4067_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3442_MAX_POOLING2D_3442_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3442_MAX_POOLING2D_3442_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3443_MAX_POOLING2D_3443_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3443_MAX_POOLING2D_3443_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3292_DENSE_3292_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3292_DENSE_3292_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3293_DENSE_3293_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3293_DENSE_3293_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4066_CONV2D_4066_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4066_CONV2D_4066_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4068_CONV2D_4068_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4068_CONV2D_4068_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_708_CONCATENATE_708_DATA       0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_708_CONCATENATE_708_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4069_CONV2D_4069_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4069_CONV2D_4069_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3444_MAX_POOLING2D_3444_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3444_MAX_POOLING2D_3444_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3294_DENSE_3294_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3294_DENSE_3294_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4070_CONV2D_4070_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4070_CONV2D_4070_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3445_MAX_POOLING2D_3445_DATA 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3445_MAX_POOLING2D_3445_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3295_DENSE_3295_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3295_DENSE_3295_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3296_DENSE_3296_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3296_DENSE_3296_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3297_DENSE_3297_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3297_DENSE_3297_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_709_CONCATENATE_709_DATA       0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_709_CONCATENATE_709_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3298_DENSE_3298_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3298_DENSE_3298_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3299_DENSE_3299_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3299_DENSE_3299_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3300_DENSE_3300_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3300_DENSE_3300_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3301_DENSE_3301_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3301_DENSE_3301_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_710_CONCATENATE_710_DATA       0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_710_CONCATENATE_710_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_367_FLATTEN_367_DATA               0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_367_FLATTEN_367_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3302_DENSE_3302_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3302_DENSE_3302_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3303_DENSE_3303_DATA                 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3303_DENSE_3303_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4065_WEIGHT_CONV2D_4065_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4065_WEIGHT_CONV2D_4065_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4065_BIAS_CONV2D_4065_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4065_BIAS_CONV2D_4065_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4067_WEIGHT_CONV2D_4067_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4067_WEIGHT_CONV2D_4067_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4067_BIAS_CONV2D_4067_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4067_BIAS_CONV2D_4067_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3292_WEIGHT_DENSE_3292_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3292_WEIGHT_DENSE_3292_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3292_BIAS_DENSE_3292_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3292_BIAS_DENSE_3292_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3293_WEIGHT_DENSE_3293_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3293_WEIGHT_DENSE_3293_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3293_BIAS_DENSE_3293_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3293_BIAS_DENSE_3293_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4066_WEIGHT_CONV2D_4066_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4066_WEIGHT_CONV2D_4066_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4066_BIAS_CONV2D_4066_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4066_BIAS_CONV2D_4066_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4068_WEIGHT_CONV2D_4068_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4068_WEIGHT_CONV2D_4068_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4068_BIAS_CONV2D_4068_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4068_BIAS_CONV2D_4068_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4069_WEIGHT_CONV2D_4069_WEIGHT_DATA 0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4069_WEIGHT_CONV2D_4069_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4069_BIAS_CONV2D_4069_BIAS_DATA     0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4069_BIAS_CONV2D_4069_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3294_WEIGHT_DENSE_3294_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3294_WEIGHT_DENSE_3294_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3294_BIAS_DENSE_3294_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3294_BIAS_DENSE_3294_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4070_WEIGHT_CONV2D_4070_WEIGHT_DATA 0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4070_WEIGHT_CONV2D_4070_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4070_BIAS_CONV2D_4070_BIAS_DATA     0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4070_BIAS_CONV2D_4070_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3295_WEIGHT_DENSE_3295_WEIGHT_DATA   0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3295_WEIGHT_DENSE_3295_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3295_BIAS_DENSE_3295_BIAS_DATA       0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3295_BIAS_DENSE_3295_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3296_WEIGHT_DENSE_3296_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3296_WEIGHT_DENSE_3296_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3296_BIAS_DENSE_3296_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3296_BIAS_DENSE_3296_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3297_WEIGHT_DENSE_3297_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3297_WEIGHT_DENSE_3297_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3297_BIAS_DENSE_3297_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3297_BIAS_DENSE_3297_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3298_WEIGHT_DENSE_3298_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3298_WEIGHT_DENSE_3298_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3298_BIAS_DENSE_3298_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3298_BIAS_DENSE_3298_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3299_WEIGHT_DENSE_3299_WEIGHT_DATA   0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3299_WEIGHT_DENSE_3299_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3299_BIAS_DENSE_3299_BIAS_DATA       0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3299_BIAS_DENSE_3299_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3300_WEIGHT_DENSE_3300_WEIGHT_DATA   0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3300_WEIGHT_DENSE_3300_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3300_BIAS_DENSE_3300_BIAS_DATA       0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3300_BIAS_DENSE_3300_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3301_WEIGHT_DENSE_3301_WEIGHT_DATA   0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3301_WEIGHT_DENSE_3301_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3301_BIAS_DENSE_3301_BIAS_DATA       0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3301_BIAS_DENSE_3301_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3302_WEIGHT_DENSE_3302_WEIGHT_DATA   0x1f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3302_WEIGHT_DENSE_3302_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3302_BIAS_DENSE_3302_BIAS_DATA       0x200
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3302_BIAS_DENSE_3302_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3303_WEIGHT_DENSE_3303_WEIGHT_DATA   0x208
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3303_WEIGHT_DENSE_3303_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3303_BIAS_DENSE_3303_BIAS_DATA       0x210
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3303_BIAS_DENSE_3303_BIAS_DATA       32

