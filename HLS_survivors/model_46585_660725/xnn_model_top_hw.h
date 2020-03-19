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
// 0x028 : Data signal of Conv2d_3708_conv2d_3708
//         bit 31~0 - Conv2d_3708_conv2d_3708[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_3710_conv2d_3710
//         bit 31~0 - Conv2d_3710_conv2d_3710[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_3157_max_pooling2d_3157
//         bit 31~0 - Max_pooling2d_3157_max_pooling2d_3157[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_3159_max_pooling2d_3159
//         bit 31~0 - Max_pooling2d_3159_max_pooling2d_3159[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2999_dense_2999
//         bit 31~0 - Dense_2999_dense_2999[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_3001_dense_3001
//         bit 31~0 - Dense_3001_dense_3001[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_3709_conv2d_3709
//         bit 31~0 - Conv2d_3709_conv2d_3709[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_3711_conv2d_3711
//         bit 31~0 - Conv2d_3711_conv2d_3711[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_3158_max_pooling2d_3158
//         bit 31~0 - Max_pooling2d_3158_max_pooling2d_3158[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_3160_max_pooling2d_3160
//         bit 31~0 - Max_pooling2d_3160_max_pooling2d_3160[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_3000_dense_3000
//         bit 31~0 - Dense_3000_dense_3000[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_3002_dense_3002
//         bit 31~0 - Dense_3002_dense_3002[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Concatenate_647_concatenate_647
//         bit 31~0 - Concatenate_647_concatenate_647[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_3712_conv2d_3712
//         bit 31~0 - Conv2d_3712_conv2d_3712[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_3161_max_pooling2d_3161
//         bit 31~0 - Max_pooling2d_3161_max_pooling2d_3161[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Max_pooling2d_3162_max_pooling2d_3162
//         bit 31~0 - Max_pooling2d_3162_max_pooling2d_3162[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_3003_dense_3003
//         bit 31~0 - Dense_3003_dense_3003[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Max_pooling2d_3164_max_pooling2d_3164
//         bit 31~0 - Max_pooling2d_3164_max_pooling2d_3164[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_3004_dense_3004
//         bit 31~0 - Dense_3004_dense_3004[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_3005_dense_3005
//         bit 31~0 - Dense_3005_dense_3005[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Concatenate_648_concatenate_648
//         bit 31~0 - Concatenate_648_concatenate_648[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Flatten_337_flatten_337
//         bit 31~0 - Flatten_337_flatten_337[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_3006_dense_3006
//         bit 31~0 - Dense_3006_dense_3006[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_3007_dense_3007
//         bit 31~0 - Dense_3007_dense_3007[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_3008_dense_3008
//         bit 31~0 - Dense_3008_dense_3008[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_3708_weight_conv2d_3708_weight
//         bit 31~0 - Conv2d_3708_weight_conv2d_3708_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_3708_bias_conv2d_3708_bias
//         bit 31~0 - Conv2d_3708_bias_conv2d_3708_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_3710_weight_conv2d_3710_weight
//         bit 31~0 - Conv2d_3710_weight_conv2d_3710_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_3710_bias_conv2d_3710_bias
//         bit 31~0 - Conv2d_3710_bias_conv2d_3710_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_2999_weight_dense_2999_weight
//         bit 31~0 - Dense_2999_weight_dense_2999_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_2999_bias_dense_2999_bias
//         bit 31~0 - Dense_2999_bias_dense_2999_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_3001_weight_dense_3001_weight
//         bit 31~0 - Dense_3001_weight_dense_3001_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_3001_bias_dense_3001_bias
//         bit 31~0 - Dense_3001_bias_dense_3001_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_3709_weight_conv2d_3709_weight
//         bit 31~0 - Conv2d_3709_weight_conv2d_3709_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_3709_bias_conv2d_3709_bias
//         bit 31~0 - Conv2d_3709_bias_conv2d_3709_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_3711_weight_conv2d_3711_weight
//         bit 31~0 - Conv2d_3711_weight_conv2d_3711_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_3711_bias_conv2d_3711_bias
//         bit 31~0 - Conv2d_3711_bias_conv2d_3711_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_3000_weight_dense_3000_weight
//         bit 31~0 - Dense_3000_weight_dense_3000_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_3000_bias_dense_3000_bias
//         bit 31~0 - Dense_3000_bias_dense_3000_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_3002_weight_dense_3002_weight
//         bit 31~0 - Dense_3002_weight_dense_3002_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_3002_bias_dense_3002_bias
//         bit 31~0 - Dense_3002_bias_dense_3002_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_3712_weight_conv2d_3712_weight
//         bit 31~0 - Conv2d_3712_weight_conv2d_3712_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_3712_bias_conv2d_3712_bias
//         bit 31~0 - Conv2d_3712_bias_conv2d_3712_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_3003_weight_dense_3003_weight
//         bit 31~0 - Dense_3003_weight_dense_3003_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_3003_bias_dense_3003_bias
//         bit 31~0 - Dense_3003_bias_dense_3003_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_3004_weight_dense_3004_weight
//         bit 31~0 - Dense_3004_weight_dense_3004_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_3004_bias_dense_3004_bias
//         bit 31~0 - Dense_3004_bias_dense_3004_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_3005_weight_dense_3005_weight
//         bit 31~0 - Dense_3005_weight_dense_3005_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_3005_bias_dense_3005_bias
//         bit 31~0 - Dense_3005_bias_dense_3005_bias[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_3006_weight_dense_3006_weight
//         bit 31~0 - Dense_3006_weight_dense_3006_weight[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_3006_bias_dense_3006_bias
//         bit 31~0 - Dense_3006_bias_dense_3006_bias[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_3007_weight_dense_3007_weight
//         bit 31~0 - Dense_3007_weight_dense_3007_weight[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_3007_bias_dense_3007_bias
//         bit 31~0 - Dense_3007_bias_dense_3007_bias[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_3008_weight_dense_3008_weight
//         bit 31~0 - Dense_3008_weight_dense_3008_weight[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_3008_bias_dense_3008_bias
//         bit 31~0 - Dense_3008_bias_dense_3008_bias[31:0] (Read/Write)
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3708_CONV2D_3708_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3708_CONV2D_3708_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3710_CONV2D_3710_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3710_CONV2D_3710_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3157_MAX_POOLING2D_3157_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3157_MAX_POOLING2D_3157_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3159_MAX_POOLING2D_3159_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3159_MAX_POOLING2D_3159_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2999_DENSE_2999_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2999_DENSE_2999_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3001_DENSE_3001_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3001_DENSE_3001_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3709_CONV2D_3709_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3709_CONV2D_3709_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3711_CONV2D_3711_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3711_CONV2D_3711_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3158_MAX_POOLING2D_3158_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3158_MAX_POOLING2D_3158_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3160_MAX_POOLING2D_3160_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3160_MAX_POOLING2D_3160_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3000_DENSE_3000_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3000_DENSE_3000_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3002_DENSE_3002_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3002_DENSE_3002_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_647_CONCATENATE_647_DATA       0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_647_CONCATENATE_647_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3712_CONV2D_3712_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3712_CONV2D_3712_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3161_MAX_POOLING2D_3161_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3161_MAX_POOLING2D_3161_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3162_MAX_POOLING2D_3162_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3162_MAX_POOLING2D_3162_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3003_DENSE_3003_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3003_DENSE_3003_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3164_MAX_POOLING2D_3164_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3164_MAX_POOLING2D_3164_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3004_DENSE_3004_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3004_DENSE_3004_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3005_DENSE_3005_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3005_DENSE_3005_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_648_CONCATENATE_648_DATA       0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_648_CONCATENATE_648_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_337_FLATTEN_337_DATA               0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_337_FLATTEN_337_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3006_DENSE_3006_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3006_DENSE_3006_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3007_DENSE_3007_DATA                 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3007_DENSE_3007_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3008_DENSE_3008_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3008_DENSE_3008_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3708_WEIGHT_CONV2D_3708_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3708_WEIGHT_CONV2D_3708_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3708_BIAS_CONV2D_3708_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3708_BIAS_CONV2D_3708_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3710_WEIGHT_CONV2D_3710_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3710_WEIGHT_CONV2D_3710_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3710_BIAS_CONV2D_3710_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3710_BIAS_CONV2D_3710_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2999_WEIGHT_DENSE_2999_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2999_WEIGHT_DENSE_2999_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2999_BIAS_DENSE_2999_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2999_BIAS_DENSE_2999_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3001_WEIGHT_DENSE_3001_WEIGHT_DATA   0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3001_WEIGHT_DENSE_3001_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3001_BIAS_DENSE_3001_BIAS_DATA       0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3001_BIAS_DENSE_3001_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3709_WEIGHT_CONV2D_3709_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3709_WEIGHT_CONV2D_3709_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3709_BIAS_CONV2D_3709_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3709_BIAS_CONV2D_3709_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3711_WEIGHT_CONV2D_3711_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3711_WEIGHT_CONV2D_3711_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3711_BIAS_CONV2D_3711_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3711_BIAS_CONV2D_3711_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3000_WEIGHT_DENSE_3000_WEIGHT_DATA   0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3000_WEIGHT_DENSE_3000_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3000_BIAS_DENSE_3000_BIAS_DATA       0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3000_BIAS_DENSE_3000_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3002_WEIGHT_DENSE_3002_WEIGHT_DATA   0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3002_WEIGHT_DENSE_3002_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3002_BIAS_DENSE_3002_BIAS_DATA       0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3002_BIAS_DENSE_3002_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3712_WEIGHT_CONV2D_3712_WEIGHT_DATA 0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3712_WEIGHT_CONV2D_3712_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3712_BIAS_CONV2D_3712_BIAS_DATA     0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3712_BIAS_CONV2D_3712_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3003_WEIGHT_DENSE_3003_WEIGHT_DATA   0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3003_WEIGHT_DENSE_3003_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3003_BIAS_DENSE_3003_BIAS_DATA       0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3003_BIAS_DENSE_3003_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3004_WEIGHT_DENSE_3004_WEIGHT_DATA   0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3004_WEIGHT_DENSE_3004_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3004_BIAS_DENSE_3004_BIAS_DATA       0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3004_BIAS_DENSE_3004_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3005_WEIGHT_DENSE_3005_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3005_WEIGHT_DENSE_3005_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3005_BIAS_DENSE_3005_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3005_BIAS_DENSE_3005_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3006_WEIGHT_DENSE_3006_WEIGHT_DATA   0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3006_WEIGHT_DENSE_3006_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3006_BIAS_DENSE_3006_BIAS_DATA       0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3006_BIAS_DENSE_3006_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3007_WEIGHT_DENSE_3007_WEIGHT_DATA   0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3007_WEIGHT_DENSE_3007_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3007_BIAS_DENSE_3007_BIAS_DATA       0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3007_BIAS_DENSE_3007_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3008_WEIGHT_DENSE_3008_WEIGHT_DATA   0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3008_WEIGHT_DENSE_3008_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3008_BIAS_DENSE_3008_BIAS_DATA       0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3008_BIAS_DENSE_3008_BIAS_DATA       32

