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
// 0x028 : Data signal of Conv2d_555_conv2d_555
//         bit 31~0 - Conv2d_555_conv2d_555[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_558_conv2d_558
//         bit 31~0 - Conv2d_558_conv2d_558[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_472_max_pooling2d_472
//         bit 31~0 - Max_pooling2d_472_max_pooling2d_472[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_474_max_pooling2d_474
//         bit 31~0 - Max_pooling2d_474_max_pooling2d_474[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_454_dense_454
//         bit 31~0 - Dense_454_dense_454[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_456_dense_456
//         bit 31~0 - Dense_456_dense_456[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_556_conv2d_556
//         bit 31~0 - Conv2d_556_conv2d_556[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_559_conv2d_559
//         bit 31~0 - Conv2d_559_conv2d_559[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_473_max_pooling2d_473
//         bit 31~0 - Max_pooling2d_473_max_pooling2d_473[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_475_max_pooling2d_475
//         bit 31~0 - Max_pooling2d_475_max_pooling2d_475[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_455_dense_455
//         bit 31~0 - Dense_455_dense_455[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_457_dense_457
//         bit 31~0 - Dense_457_dense_457[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_557_conv2d_557
//         bit 31~0 - Conv2d_557_conv2d_557[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_560_conv2d_560
//         bit 31~0 - Conv2d_560_conv2d_560[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Concatenate_102_concatenate_102
//         bit 31~0 - Concatenate_102_concatenate_102[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_561_conv2d_561
//         bit 31~0 - Conv2d_561_conv2d_561[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_476_max_pooling2d_476
//         bit 31~0 - Max_pooling2d_476_max_pooling2d_476[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Flatten_53_flatten_53
//         bit 31~0 - Flatten_53_flatten_53[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_458_dense_458
//         bit 31~0 - Dense_458_dense_458[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_459_dense_459
//         bit 31~0 - Dense_459_dense_459[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_555_weight_conv2d_555_weight
//         bit 31~0 - Conv2d_555_weight_conv2d_555_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_555_bias_conv2d_555_bias
//         bit 31~0 - Conv2d_555_bias_conv2d_555_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_558_weight_conv2d_558_weight
//         bit 31~0 - Conv2d_558_weight_conv2d_558_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_558_bias_conv2d_558_bias
//         bit 31~0 - Conv2d_558_bias_conv2d_558_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_454_weight_dense_454_weight
//         bit 31~0 - Dense_454_weight_dense_454_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_454_bias_dense_454_bias
//         bit 31~0 - Dense_454_bias_dense_454_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_456_weight_dense_456_weight
//         bit 31~0 - Dense_456_weight_dense_456_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_456_bias_dense_456_bias
//         bit 31~0 - Dense_456_bias_dense_456_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_556_weight_conv2d_556_weight
//         bit 31~0 - Conv2d_556_weight_conv2d_556_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_556_bias_conv2d_556_bias
//         bit 31~0 - Conv2d_556_bias_conv2d_556_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_559_weight_conv2d_559_weight
//         bit 31~0 - Conv2d_559_weight_conv2d_559_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_559_bias_conv2d_559_bias
//         bit 31~0 - Conv2d_559_bias_conv2d_559_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_455_weight_dense_455_weight
//         bit 31~0 - Dense_455_weight_dense_455_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_455_bias_dense_455_bias
//         bit 31~0 - Dense_455_bias_dense_455_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_457_weight_dense_457_weight
//         bit 31~0 - Dense_457_weight_dense_457_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_457_bias_dense_457_bias
//         bit 31~0 - Dense_457_bias_dense_457_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_557_weight_conv2d_557_weight
//         bit 31~0 - Conv2d_557_weight_conv2d_557_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_557_bias_conv2d_557_bias
//         bit 31~0 - Conv2d_557_bias_conv2d_557_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_560_weight_conv2d_560_weight
//         bit 31~0 - Conv2d_560_weight_conv2d_560_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_560_bias_conv2d_560_bias
//         bit 31~0 - Conv2d_560_bias_conv2d_560_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_561_weight_conv2d_561_weight
//         bit 31~0 - Conv2d_561_weight_conv2d_561_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_561_bias_conv2d_561_bias
//         bit 31~0 - Conv2d_561_bias_conv2d_561_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_458_weight_dense_458_weight
//         bit 31~0 - Dense_458_weight_dense_458_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_458_bias_dense_458_bias
//         bit 31~0 - Dense_458_bias_dense_458_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_459_weight_dense_459_weight
//         bit 31~0 - Dense_459_weight_dense_459_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_459_bias_dense_459_bias
//         bit 31~0 - Dense_459_bias_dense_459_bias[31:0] (Read/Write)
// 0x194 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_555_CONV2D_555_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_555_CONV2D_555_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_558_CONV2D_558_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_558_CONV2D_558_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_472_MAX_POOLING2D_472_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_472_MAX_POOLING2D_472_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_474_MAX_POOLING2D_474_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_474_MAX_POOLING2D_474_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_454_DENSE_454_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_454_DENSE_454_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_456_DENSE_456_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_456_DENSE_456_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_556_CONV2D_556_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_556_CONV2D_556_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_559_CONV2D_559_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_559_CONV2D_559_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_473_MAX_POOLING2D_473_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_473_MAX_POOLING2D_473_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_475_MAX_POOLING2D_475_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_475_MAX_POOLING2D_475_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_455_DENSE_455_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_455_DENSE_455_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_457_DENSE_457_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_457_DENSE_457_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_557_CONV2D_557_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_557_CONV2D_557_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_560_CONV2D_560_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_560_CONV2D_560_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_102_CONCATENATE_102_DATA     0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_102_CONCATENATE_102_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_561_CONV2D_561_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_561_CONV2D_561_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_476_MAX_POOLING2D_476_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_476_MAX_POOLING2D_476_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_53_FLATTEN_53_DATA               0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_53_FLATTEN_53_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_458_DENSE_458_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_458_DENSE_458_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_459_DENSE_459_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_459_DENSE_459_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_555_WEIGHT_CONV2D_555_WEIGHT_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_555_WEIGHT_CONV2D_555_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_555_BIAS_CONV2D_555_BIAS_DATA     0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_555_BIAS_CONV2D_555_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_558_WEIGHT_CONV2D_558_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_558_WEIGHT_CONV2D_558_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_558_BIAS_CONV2D_558_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_558_BIAS_CONV2D_558_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_454_WEIGHT_DENSE_454_WEIGHT_DATA   0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_454_WEIGHT_DENSE_454_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_454_BIAS_DENSE_454_BIAS_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_454_BIAS_DENSE_454_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_456_WEIGHT_DENSE_456_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_456_WEIGHT_DENSE_456_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_456_BIAS_DENSE_456_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_456_BIAS_DENSE_456_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_556_WEIGHT_CONV2D_556_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_556_WEIGHT_CONV2D_556_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_556_BIAS_CONV2D_556_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_556_BIAS_CONV2D_556_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_559_WEIGHT_CONV2D_559_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_559_WEIGHT_CONV2D_559_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_559_BIAS_CONV2D_559_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_559_BIAS_CONV2D_559_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_455_WEIGHT_DENSE_455_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_455_WEIGHT_DENSE_455_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_455_BIAS_DENSE_455_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_455_BIAS_DENSE_455_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_457_WEIGHT_DENSE_457_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_457_WEIGHT_DENSE_457_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_457_BIAS_DENSE_457_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_457_BIAS_DENSE_457_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_557_WEIGHT_CONV2D_557_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_557_WEIGHT_CONV2D_557_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_557_BIAS_CONV2D_557_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_557_BIAS_CONV2D_557_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_560_WEIGHT_CONV2D_560_WEIGHT_DATA 0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_560_WEIGHT_CONV2D_560_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_560_BIAS_CONV2D_560_BIAS_DATA     0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_560_BIAS_CONV2D_560_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_561_WEIGHT_CONV2D_561_WEIGHT_DATA 0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_561_WEIGHT_CONV2D_561_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_561_BIAS_CONV2D_561_BIAS_DATA     0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_561_BIAS_CONV2D_561_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_458_WEIGHT_DENSE_458_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_458_WEIGHT_DENSE_458_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_458_BIAS_DENSE_458_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_458_BIAS_DENSE_458_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_459_WEIGHT_DENSE_459_WEIGHT_DATA   0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_459_WEIGHT_DENSE_459_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_459_BIAS_DENSE_459_BIAS_DATA       0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_459_BIAS_DENSE_459_BIAS_DATA       32

