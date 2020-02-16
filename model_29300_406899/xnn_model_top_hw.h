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
// 0x028 : Data signal of Conv2d_6797_conv2d_6797
//         bit 31~0 - Conv2d_6797_conv2d_6797[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_6799_conv2d_6799
//         bit 31~0 - Conv2d_6799_conv2d_6799[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_5363_max_pooling2d_5363
//         bit 31~0 - Max_pooling2d_5363_max_pooling2d_5363[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_5365_max_pooling2d_5365
//         bit 31~0 - Max_pooling2d_5365_max_pooling2d_5365[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_5051_dense_5051
//         bit 31~0 - Dense_5051_dense_5051[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_5053_dense_5053
//         bit 31~0 - Dense_5053_dense_5053[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_6798_conv2d_6798
//         bit 31~0 - Conv2d_6798_conv2d_6798[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_6800_conv2d_6800
//         bit 31~0 - Conv2d_6800_conv2d_6800[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_5364_max_pooling2d_5364
//         bit 31~0 - Max_pooling2d_5364_max_pooling2d_5364[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_5366_max_pooling2d_5366
//         bit 31~0 - Max_pooling2d_5366_max_pooling2d_5366[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_5052_dense_5052
//         bit 31~0 - Dense_5052_dense_5052[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_5054_dense_5054
//         bit 31~0 - Dense_5054_dense_5054[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Concatenate_520_concatenate_520
//         bit 31~0 - Concatenate_520_concatenate_520[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_6801_conv2d_6801
//         bit 31~0 - Conv2d_6801_conv2d_6801[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_5367_max_pooling2d_5367
//         bit 31~0 - Max_pooling2d_5367_max_pooling2d_5367[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_5055_dense_5055
//         bit 31~0 - Dense_5055_dense_5055[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_5368_max_pooling2d_5368
//         bit 31~0 - Max_pooling2d_5368_max_pooling2d_5368[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_5056_dense_5056
//         bit 31~0 - Dense_5056_dense_5056[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_5057_dense_5057
//         bit 31~0 - Dense_5057_dense_5057[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_5058_dense_5058
//         bit 31~0 - Dense_5058_dense_5058[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Flatten_193_flatten_193
//         bit 31~0 - Flatten_193_flatten_193[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_5059_dense_5059
//         bit 31~0 - Dense_5059_dense_5059[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_5060_dense_5060
//         bit 31~0 - Dense_5060_dense_5060[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_6797_weight_conv2d_6797_weight
//         bit 31~0 - Conv2d_6797_weight_conv2d_6797_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_6797_bias_conv2d_6797_bias
//         bit 31~0 - Conv2d_6797_bias_conv2d_6797_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_6799_weight_conv2d_6799_weight
//         bit 31~0 - Conv2d_6799_weight_conv2d_6799_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_6799_bias_conv2d_6799_bias
//         bit 31~0 - Conv2d_6799_bias_conv2d_6799_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_5051_weight_dense_5051_weight
//         bit 31~0 - Dense_5051_weight_dense_5051_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_5051_bias_dense_5051_bias
//         bit 31~0 - Dense_5051_bias_dense_5051_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_5053_weight_dense_5053_weight
//         bit 31~0 - Dense_5053_weight_dense_5053_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_5053_bias_dense_5053_bias
//         bit 31~0 - Dense_5053_bias_dense_5053_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_6798_weight_conv2d_6798_weight
//         bit 31~0 - Conv2d_6798_weight_conv2d_6798_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_6798_bias_conv2d_6798_bias
//         bit 31~0 - Conv2d_6798_bias_conv2d_6798_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_6800_weight_conv2d_6800_weight
//         bit 31~0 - Conv2d_6800_weight_conv2d_6800_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_6800_bias_conv2d_6800_bias
//         bit 31~0 - Conv2d_6800_bias_conv2d_6800_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_5052_weight_dense_5052_weight
//         bit 31~0 - Dense_5052_weight_dense_5052_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_5052_bias_dense_5052_bias
//         bit 31~0 - Dense_5052_bias_dense_5052_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_5054_weight_dense_5054_weight
//         bit 31~0 - Dense_5054_weight_dense_5054_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_5054_bias_dense_5054_bias
//         bit 31~0 - Dense_5054_bias_dense_5054_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_6801_weight_conv2d_6801_weight
//         bit 31~0 - Conv2d_6801_weight_conv2d_6801_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_6801_bias_conv2d_6801_bias
//         bit 31~0 - Conv2d_6801_bias_conv2d_6801_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_5055_weight_dense_5055_weight
//         bit 31~0 - Dense_5055_weight_dense_5055_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_5055_bias_dense_5055_bias
//         bit 31~0 - Dense_5055_bias_dense_5055_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_5056_weight_dense_5056_weight
//         bit 31~0 - Dense_5056_weight_dense_5056_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_5056_bias_dense_5056_bias
//         bit 31~0 - Dense_5056_bias_dense_5056_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_5057_weight_dense_5057_weight
//         bit 31~0 - Dense_5057_weight_dense_5057_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_5057_bias_dense_5057_bias
//         bit 31~0 - Dense_5057_bias_dense_5057_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_5058_weight_dense_5058_weight
//         bit 31~0 - Dense_5058_weight_dense_5058_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_5058_bias_dense_5058_bias
//         bit 31~0 - Dense_5058_bias_dense_5058_bias[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_5059_weight_dense_5059_weight
//         bit 31~0 - Dense_5059_weight_dense_5059_weight[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_5059_bias_dense_5059_bias
//         bit 31~0 - Dense_5059_bias_dense_5059_bias[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_5060_weight_dense_5060_weight
//         bit 31~0 - Dense_5060_weight_dense_5060_weight[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_5060_bias_dense_5060_bias
//         bit 31~0 - Dense_5060_bias_dense_5060_bias[31:0] (Read/Write)
// 0x1cc : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6797_CONV2D_6797_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6797_CONV2D_6797_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6799_CONV2D_6799_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6799_CONV2D_6799_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5363_MAX_POOLING2D_5363_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5363_MAX_POOLING2D_5363_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5365_MAX_POOLING2D_5365_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5365_MAX_POOLING2D_5365_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5051_DENSE_5051_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5051_DENSE_5051_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5053_DENSE_5053_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5053_DENSE_5053_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6798_CONV2D_6798_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6798_CONV2D_6798_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6800_CONV2D_6800_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6800_CONV2D_6800_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5364_MAX_POOLING2D_5364_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5364_MAX_POOLING2D_5364_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5366_MAX_POOLING2D_5366_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5366_MAX_POOLING2D_5366_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5052_DENSE_5052_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5052_DENSE_5052_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5054_DENSE_5054_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5054_DENSE_5054_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_520_CONCATENATE_520_DATA       0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_520_CONCATENATE_520_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6801_CONV2D_6801_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6801_CONV2D_6801_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5367_MAX_POOLING2D_5367_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5367_MAX_POOLING2D_5367_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5055_DENSE_5055_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5055_DENSE_5055_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5368_MAX_POOLING2D_5368_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5368_MAX_POOLING2D_5368_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5056_DENSE_5056_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5056_DENSE_5056_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5057_DENSE_5057_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5057_DENSE_5057_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5058_DENSE_5058_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5058_DENSE_5058_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_193_FLATTEN_193_DATA               0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_193_FLATTEN_193_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5059_DENSE_5059_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5059_DENSE_5059_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5060_DENSE_5060_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5060_DENSE_5060_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6797_WEIGHT_CONV2D_6797_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6797_WEIGHT_CONV2D_6797_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6797_BIAS_CONV2D_6797_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6797_BIAS_CONV2D_6797_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6799_WEIGHT_CONV2D_6799_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6799_WEIGHT_CONV2D_6799_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6799_BIAS_CONV2D_6799_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6799_BIAS_CONV2D_6799_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5051_WEIGHT_DENSE_5051_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5051_WEIGHT_DENSE_5051_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5051_BIAS_DENSE_5051_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5051_BIAS_DENSE_5051_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5053_WEIGHT_DENSE_5053_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5053_WEIGHT_DENSE_5053_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5053_BIAS_DENSE_5053_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5053_BIAS_DENSE_5053_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6798_WEIGHT_CONV2D_6798_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6798_WEIGHT_CONV2D_6798_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6798_BIAS_CONV2D_6798_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6798_BIAS_CONV2D_6798_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6800_WEIGHT_CONV2D_6800_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6800_WEIGHT_CONV2D_6800_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6800_BIAS_CONV2D_6800_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6800_BIAS_CONV2D_6800_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5052_WEIGHT_DENSE_5052_WEIGHT_DATA   0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5052_WEIGHT_DENSE_5052_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5052_BIAS_DENSE_5052_BIAS_DATA       0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5052_BIAS_DENSE_5052_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5054_WEIGHT_DENSE_5054_WEIGHT_DATA   0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5054_WEIGHT_DENSE_5054_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5054_BIAS_DENSE_5054_BIAS_DATA       0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5054_BIAS_DENSE_5054_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6801_WEIGHT_CONV2D_6801_WEIGHT_DATA 0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6801_WEIGHT_CONV2D_6801_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6801_BIAS_CONV2D_6801_BIAS_DATA     0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6801_BIAS_CONV2D_6801_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5055_WEIGHT_DENSE_5055_WEIGHT_DATA   0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5055_WEIGHT_DENSE_5055_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5055_BIAS_DENSE_5055_BIAS_DATA       0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5055_BIAS_DENSE_5055_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5056_WEIGHT_DENSE_5056_WEIGHT_DATA   0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5056_WEIGHT_DENSE_5056_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5056_BIAS_DENSE_5056_BIAS_DATA       0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5056_BIAS_DENSE_5056_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5057_WEIGHT_DENSE_5057_WEIGHT_DATA   0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5057_WEIGHT_DENSE_5057_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5057_BIAS_DENSE_5057_BIAS_DATA       0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5057_BIAS_DENSE_5057_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5058_WEIGHT_DENSE_5058_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5058_WEIGHT_DENSE_5058_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5058_BIAS_DENSE_5058_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5058_BIAS_DENSE_5058_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5059_WEIGHT_DENSE_5059_WEIGHT_DATA   0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5059_WEIGHT_DENSE_5059_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5059_BIAS_DENSE_5059_BIAS_DATA       0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5059_BIAS_DENSE_5059_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5060_WEIGHT_DENSE_5060_WEIGHT_DATA   0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5060_WEIGHT_DENSE_5060_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5060_BIAS_DENSE_5060_BIAS_DATA       0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5060_BIAS_DENSE_5060_BIAS_DATA       32

