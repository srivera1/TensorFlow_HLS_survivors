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
// 0x028 : Data signal of Conv2d_3738_conv2d_3738
//         bit 31~0 - Conv2d_3738_conv2d_3738[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_3741_conv2d_3741
//         bit 31~0 - Conv2d_3741_conv2d_3741[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_3180_max_pooling2d_3180
//         bit 31~0 - Max_pooling2d_3180_max_pooling2d_3180[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_3182_max_pooling2d_3182
//         bit 31~0 - Max_pooling2d_3182_max_pooling2d_3182[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_3022_dense_3022
//         bit 31~0 - Dense_3022_dense_3022[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_3024_dense_3024
//         bit 31~0 - Dense_3024_dense_3024[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_3739_conv2d_3739
//         bit 31~0 - Conv2d_3739_conv2d_3739[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_3742_conv2d_3742
//         bit 31~0 - Conv2d_3742_conv2d_3742[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_3181_max_pooling2d_3181
//         bit 31~0 - Max_pooling2d_3181_max_pooling2d_3181[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_3183_max_pooling2d_3183
//         bit 31~0 - Max_pooling2d_3183_max_pooling2d_3183[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_3023_dense_3023
//         bit 31~0 - Dense_3023_dense_3023[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_3025_dense_3025
//         bit 31~0 - Dense_3025_dense_3025[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_3740_conv2d_3740
//         bit 31~0 - Conv2d_3740_conv2d_3740[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_3743_conv2d_3743
//         bit 31~0 - Conv2d_3743_conv2d_3743[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Concatenate_653_concatenate_653
//         bit 31~0 - Concatenate_653_concatenate_653[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_3744_conv2d_3744
//         bit 31~0 - Conv2d_3744_conv2d_3744[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_3184_max_pooling2d_3184
//         bit 31~0 - Max_pooling2d_3184_max_pooling2d_3184[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_3026_dense_3026
//         bit 31~0 - Dense_3026_dense_3026[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_3027_dense_3027
//         bit 31~0 - Dense_3027_dense_3027[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_3028_dense_3028
//         bit 31~0 - Dense_3028_dense_3028[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Concatenate_654_concatenate_654
//         bit 31~0 - Concatenate_654_concatenate_654[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Flatten_339_flatten_339
//         bit 31~0 - Flatten_339_flatten_339[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_3029_dense_3029
//         bit 31~0 - Dense_3029_dense_3029[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_3030_dense_3030
//         bit 31~0 - Dense_3030_dense_3030[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_3031_dense_3031
//         bit 31~0 - Dense_3031_dense_3031[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_3738_weight_conv2d_3738_weight
//         bit 31~0 - Conv2d_3738_weight_conv2d_3738_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_3738_bias_conv2d_3738_bias
//         bit 31~0 - Conv2d_3738_bias_conv2d_3738_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_3741_weight_conv2d_3741_weight
//         bit 31~0 - Conv2d_3741_weight_conv2d_3741_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_3741_bias_conv2d_3741_bias
//         bit 31~0 - Conv2d_3741_bias_conv2d_3741_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_3022_weight_dense_3022_weight
//         bit 31~0 - Dense_3022_weight_dense_3022_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_3022_bias_dense_3022_bias
//         bit 31~0 - Dense_3022_bias_dense_3022_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_3024_weight_dense_3024_weight
//         bit 31~0 - Dense_3024_weight_dense_3024_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_3024_bias_dense_3024_bias
//         bit 31~0 - Dense_3024_bias_dense_3024_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_3739_weight_conv2d_3739_weight
//         bit 31~0 - Conv2d_3739_weight_conv2d_3739_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_3739_bias_conv2d_3739_bias
//         bit 31~0 - Conv2d_3739_bias_conv2d_3739_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_3742_weight_conv2d_3742_weight
//         bit 31~0 - Conv2d_3742_weight_conv2d_3742_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_3742_bias_conv2d_3742_bias
//         bit 31~0 - Conv2d_3742_bias_conv2d_3742_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_3023_weight_dense_3023_weight
//         bit 31~0 - Dense_3023_weight_dense_3023_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_3023_bias_dense_3023_bias
//         bit 31~0 - Dense_3023_bias_dense_3023_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_3025_weight_dense_3025_weight
//         bit 31~0 - Dense_3025_weight_dense_3025_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_3025_bias_dense_3025_bias
//         bit 31~0 - Dense_3025_bias_dense_3025_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_3740_weight_conv2d_3740_weight
//         bit 31~0 - Conv2d_3740_weight_conv2d_3740_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_3740_bias_conv2d_3740_bias
//         bit 31~0 - Conv2d_3740_bias_conv2d_3740_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_3743_weight_conv2d_3743_weight
//         bit 31~0 - Conv2d_3743_weight_conv2d_3743_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_3743_bias_conv2d_3743_bias
//         bit 31~0 - Conv2d_3743_bias_conv2d_3743_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_3744_weight_conv2d_3744_weight
//         bit 31~0 - Conv2d_3744_weight_conv2d_3744_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Conv2d_3744_bias_conv2d_3744_bias
//         bit 31~0 - Conv2d_3744_bias_conv2d_3744_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_3026_weight_dense_3026_weight
//         bit 31~0 - Dense_3026_weight_dense_3026_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_3026_bias_dense_3026_bias
//         bit 31~0 - Dense_3026_bias_dense_3026_bias[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_3027_weight_dense_3027_weight
//         bit 31~0 - Dense_3027_weight_dense_3027_weight[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_3027_bias_dense_3027_bias
//         bit 31~0 - Dense_3027_bias_dense_3027_bias[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_3028_weight_dense_3028_weight
//         bit 31~0 - Dense_3028_weight_dense_3028_weight[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_3028_bias_dense_3028_bias
//         bit 31~0 - Dense_3028_bias_dense_3028_bias[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_3029_weight_dense_3029_weight
//         bit 31~0 - Dense_3029_weight_dense_3029_weight[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_3029_bias_dense_3029_bias
//         bit 31~0 - Dense_3029_bias_dense_3029_bias[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_3030_weight_dense_3030_weight
//         bit 31~0 - Dense_3030_weight_dense_3030_weight[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_3030_bias_dense_3030_bias
//         bit 31~0 - Dense_3030_bias_dense_3030_bias[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_3031_weight_dense_3031_weight
//         bit 31~0 - Dense_3031_weight_dense_3031_weight[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of Dense_3031_bias_dense_3031_bias
//         bit 31~0 - Dense_3031_bias_dense_3031_bias[31:0] (Read/Write)
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3738_CONV2D_3738_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3738_CONV2D_3738_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3741_CONV2D_3741_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3741_CONV2D_3741_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3180_MAX_POOLING2D_3180_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3180_MAX_POOLING2D_3180_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3182_MAX_POOLING2D_3182_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3182_MAX_POOLING2D_3182_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3022_DENSE_3022_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3022_DENSE_3022_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3024_DENSE_3024_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3024_DENSE_3024_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3739_CONV2D_3739_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3739_CONV2D_3739_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3742_CONV2D_3742_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3742_CONV2D_3742_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3181_MAX_POOLING2D_3181_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3181_MAX_POOLING2D_3181_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3183_MAX_POOLING2D_3183_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3183_MAX_POOLING2D_3183_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3023_DENSE_3023_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3023_DENSE_3023_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3025_DENSE_3025_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3025_DENSE_3025_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3740_CONV2D_3740_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3740_CONV2D_3740_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3743_CONV2D_3743_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3743_CONV2D_3743_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_653_CONCATENATE_653_DATA       0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_653_CONCATENATE_653_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3744_CONV2D_3744_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3744_CONV2D_3744_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3184_MAX_POOLING2D_3184_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3184_MAX_POOLING2D_3184_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3026_DENSE_3026_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3026_DENSE_3026_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3027_DENSE_3027_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3027_DENSE_3027_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3028_DENSE_3028_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3028_DENSE_3028_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_654_CONCATENATE_654_DATA       0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_654_CONCATENATE_654_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_339_FLATTEN_339_DATA               0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_339_FLATTEN_339_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3029_DENSE_3029_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3029_DENSE_3029_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3030_DENSE_3030_DATA                 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3030_DENSE_3030_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3031_DENSE_3031_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3031_DENSE_3031_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3738_WEIGHT_CONV2D_3738_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3738_WEIGHT_CONV2D_3738_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3738_BIAS_CONV2D_3738_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3738_BIAS_CONV2D_3738_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3741_WEIGHT_CONV2D_3741_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3741_WEIGHT_CONV2D_3741_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3741_BIAS_CONV2D_3741_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3741_BIAS_CONV2D_3741_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3022_WEIGHT_DENSE_3022_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3022_WEIGHT_DENSE_3022_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3022_BIAS_DENSE_3022_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3022_BIAS_DENSE_3022_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3024_WEIGHT_DENSE_3024_WEIGHT_DATA   0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3024_WEIGHT_DENSE_3024_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3024_BIAS_DENSE_3024_BIAS_DATA       0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3024_BIAS_DENSE_3024_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3739_WEIGHT_CONV2D_3739_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3739_WEIGHT_CONV2D_3739_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3739_BIAS_CONV2D_3739_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3739_BIAS_CONV2D_3739_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3742_WEIGHT_CONV2D_3742_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3742_WEIGHT_CONV2D_3742_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3742_BIAS_CONV2D_3742_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3742_BIAS_CONV2D_3742_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3023_WEIGHT_DENSE_3023_WEIGHT_DATA   0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3023_WEIGHT_DENSE_3023_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3023_BIAS_DENSE_3023_BIAS_DATA       0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3023_BIAS_DENSE_3023_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3025_WEIGHT_DENSE_3025_WEIGHT_DATA   0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3025_WEIGHT_DENSE_3025_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3025_BIAS_DENSE_3025_BIAS_DATA       0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3025_BIAS_DENSE_3025_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3740_WEIGHT_CONV2D_3740_WEIGHT_DATA 0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3740_WEIGHT_CONV2D_3740_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3740_BIAS_CONV2D_3740_BIAS_DATA     0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3740_BIAS_CONV2D_3740_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3743_WEIGHT_CONV2D_3743_WEIGHT_DATA 0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3743_WEIGHT_CONV2D_3743_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3743_BIAS_CONV2D_3743_BIAS_DATA     0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3743_BIAS_CONV2D_3743_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3744_WEIGHT_CONV2D_3744_WEIGHT_DATA 0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3744_WEIGHT_CONV2D_3744_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3744_BIAS_CONV2D_3744_BIAS_DATA     0x198
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3744_BIAS_CONV2D_3744_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3026_WEIGHT_DENSE_3026_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3026_WEIGHT_DENSE_3026_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3026_BIAS_DENSE_3026_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3026_BIAS_DENSE_3026_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3027_WEIGHT_DENSE_3027_WEIGHT_DATA   0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3027_WEIGHT_DENSE_3027_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3027_BIAS_DENSE_3027_BIAS_DATA       0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3027_BIAS_DENSE_3027_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3028_WEIGHT_DENSE_3028_WEIGHT_DATA   0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3028_WEIGHT_DENSE_3028_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3028_BIAS_DENSE_3028_BIAS_DATA       0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3028_BIAS_DENSE_3028_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3029_WEIGHT_DENSE_3029_WEIGHT_DATA   0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3029_WEIGHT_DENSE_3029_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3029_BIAS_DENSE_3029_BIAS_DATA       0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3029_BIAS_DENSE_3029_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3030_WEIGHT_DENSE_3030_WEIGHT_DATA   0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3030_WEIGHT_DENSE_3030_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3030_BIAS_DENSE_3030_BIAS_DATA       0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3030_BIAS_DENSE_3030_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3031_WEIGHT_DENSE_3031_WEIGHT_DATA   0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3031_WEIGHT_DENSE_3031_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3031_BIAS_DENSE_3031_BIAS_DATA       0x1f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3031_BIAS_DENSE_3031_BIAS_DATA       32

