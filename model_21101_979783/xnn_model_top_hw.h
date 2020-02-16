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
// 0x028 : Data signal of Conv2d_2709_conv2d_2709
//         bit 31~0 - Conv2d_2709_conv2d_2709[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2706_conv2d_2706
//         bit 31~0 - Conv2d_2706_conv2d_2706[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2277_max_pooling2d_2277
//         bit 31~0 - Max_pooling2d_2277_max_pooling2d_2277[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2275_max_pooling2d_2275
//         bit 31~0 - Max_pooling2d_2275_max_pooling2d_2275[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2194_dense_2194
//         bit 31~0 - Dense_2194_dense_2194[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2193_dense_2193
//         bit 31~0 - Dense_2193_dense_2193[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_2710_conv2d_2710
//         bit 31~0 - Conv2d_2710_conv2d_2710[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_2707_conv2d_2707
//         bit 31~0 - Conv2d_2707_conv2d_2707[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_2278_max_pooling2d_2278
//         bit 31~0 - Max_pooling2d_2278_max_pooling2d_2278[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_2276_max_pooling2d_2276
//         bit 31~0 - Max_pooling2d_2276_max_pooling2d_2276[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_2195_dense_2195
//         bit 31~0 - Dense_2195_dense_2195[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_2708_conv2d_2708
//         bit 31~0 - Conv2d_2708_conv2d_2708[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_2711_conv2d_2711
//         bit 31~0 - Conv2d_2711_conv2d_2711[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Concatenate_478_concatenate_478
//         bit 31~0 - Concatenate_478_concatenate_478[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_2712_conv2d_2712
//         bit 31~0 - Conv2d_2712_conv2d_2712[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Max_pooling2d_2279_max_pooling2d_2279
//         bit 31~0 - Max_pooling2d_2279_max_pooling2d_2279[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_2196_dense_2196
//         bit 31~0 - Dense_2196_dense_2196[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_2197_dense_2197
//         bit 31~0 - Dense_2197_dense_2197[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Flatten_244_flatten_244
//         bit 31~0 - Flatten_244_flatten_244[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_2198_dense_2198
//         bit 31~0 - Dense_2198_dense_2198[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_2199_dense_2199
//         bit 31~0 - Dense_2199_dense_2199[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_2200_dense_2200
//         bit 31~0 - Dense_2200_dense_2200[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_2709_weight_conv2d_2709_weight
//         bit 31~0 - Conv2d_2709_weight_conv2d_2709_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_2709_bias_conv2d_2709_bias
//         bit 31~0 - Conv2d_2709_bias_conv2d_2709_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_2706_weight_conv2d_2706_weight
//         bit 31~0 - Conv2d_2706_weight_conv2d_2706_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_2706_bias_conv2d_2706_bias
//         bit 31~0 - Conv2d_2706_bias_conv2d_2706_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_2194_weight_dense_2194_weight
//         bit 31~0 - Dense_2194_weight_dense_2194_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_2194_bias_dense_2194_bias
//         bit 31~0 - Dense_2194_bias_dense_2194_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_2193_weight_dense_2193_weight
//         bit 31~0 - Dense_2193_weight_dense_2193_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_2193_bias_dense_2193_bias
//         bit 31~0 - Dense_2193_bias_dense_2193_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_2710_weight_conv2d_2710_weight
//         bit 31~0 - Conv2d_2710_weight_conv2d_2710_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_2710_bias_conv2d_2710_bias
//         bit 31~0 - Conv2d_2710_bias_conv2d_2710_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_2707_weight_conv2d_2707_weight
//         bit 31~0 - Conv2d_2707_weight_conv2d_2707_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_2707_bias_conv2d_2707_bias
//         bit 31~0 - Conv2d_2707_bias_conv2d_2707_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_2195_weight_dense_2195_weight
//         bit 31~0 - Dense_2195_weight_dense_2195_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_2195_bias_dense_2195_bias
//         bit 31~0 - Dense_2195_bias_dense_2195_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_2708_weight_conv2d_2708_weight
//         bit 31~0 - Conv2d_2708_weight_conv2d_2708_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_2708_bias_conv2d_2708_bias
//         bit 31~0 - Conv2d_2708_bias_conv2d_2708_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_2711_weight_conv2d_2711_weight
//         bit 31~0 - Conv2d_2711_weight_conv2d_2711_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_2711_bias_conv2d_2711_bias
//         bit 31~0 - Conv2d_2711_bias_conv2d_2711_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_2712_weight_conv2d_2712_weight
//         bit 31~0 - Conv2d_2712_weight_conv2d_2712_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_2712_bias_conv2d_2712_bias
//         bit 31~0 - Conv2d_2712_bias_conv2d_2712_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_2196_weight_dense_2196_weight
//         bit 31~0 - Dense_2196_weight_dense_2196_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_2196_bias_dense_2196_bias
//         bit 31~0 - Dense_2196_bias_dense_2196_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_2197_weight_dense_2197_weight
//         bit 31~0 - Dense_2197_weight_dense_2197_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_2197_bias_dense_2197_bias
//         bit 31~0 - Dense_2197_bias_dense_2197_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_2198_weight_dense_2198_weight
//         bit 31~0 - Dense_2198_weight_dense_2198_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_2198_bias_dense_2198_bias
//         bit 31~0 - Dense_2198_bias_dense_2198_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_2199_weight_dense_2199_weight
//         bit 31~0 - Dense_2199_weight_dense_2199_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_2199_bias_dense_2199_bias
//         bit 31~0 - Dense_2199_bias_dense_2199_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_2200_weight_dense_2200_weight
//         bit 31~0 - Dense_2200_weight_dense_2200_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_2200_bias_dense_2200_bias
//         bit 31~0 - Dense_2200_bias_dense_2200_bias[31:0] (Read/Write)
// 0x1c4 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2709_CONV2D_2709_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2709_CONV2D_2709_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2706_CONV2D_2706_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2706_CONV2D_2706_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2277_MAX_POOLING2D_2277_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2277_MAX_POOLING2D_2277_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2275_MAX_POOLING2D_2275_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2275_MAX_POOLING2D_2275_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2194_DENSE_2194_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2194_DENSE_2194_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2193_DENSE_2193_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2193_DENSE_2193_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2710_CONV2D_2710_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2710_CONV2D_2710_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2707_CONV2D_2707_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2707_CONV2D_2707_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2278_MAX_POOLING2D_2278_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2278_MAX_POOLING2D_2278_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2276_MAX_POOLING2D_2276_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2276_MAX_POOLING2D_2276_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2195_DENSE_2195_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2195_DENSE_2195_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2708_CONV2D_2708_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2708_CONV2D_2708_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2711_CONV2D_2711_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2711_CONV2D_2711_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_478_CONCATENATE_478_DATA       0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_478_CONCATENATE_478_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2712_CONV2D_2712_DATA               0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2712_CONV2D_2712_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2279_MAX_POOLING2D_2279_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2279_MAX_POOLING2D_2279_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2196_DENSE_2196_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2196_DENSE_2196_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2197_DENSE_2197_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2197_DENSE_2197_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_244_FLATTEN_244_DATA               0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_244_FLATTEN_244_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2198_DENSE_2198_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2198_DENSE_2198_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2199_DENSE_2199_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2199_DENSE_2199_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2200_DENSE_2200_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2200_DENSE_2200_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2709_WEIGHT_CONV2D_2709_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2709_WEIGHT_CONV2D_2709_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2709_BIAS_CONV2D_2709_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2709_BIAS_CONV2D_2709_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2706_WEIGHT_CONV2D_2706_WEIGHT_DATA 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2706_WEIGHT_CONV2D_2706_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2706_BIAS_CONV2D_2706_BIAS_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2706_BIAS_CONV2D_2706_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2194_WEIGHT_DENSE_2194_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2194_WEIGHT_DENSE_2194_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2194_BIAS_DENSE_2194_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2194_BIAS_DENSE_2194_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2193_WEIGHT_DENSE_2193_WEIGHT_DATA   0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2193_WEIGHT_DENSE_2193_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2193_BIAS_DENSE_2193_BIAS_DATA       0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2193_BIAS_DENSE_2193_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2710_WEIGHT_CONV2D_2710_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2710_WEIGHT_CONV2D_2710_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2710_BIAS_CONV2D_2710_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2710_BIAS_CONV2D_2710_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2707_WEIGHT_CONV2D_2707_WEIGHT_DATA 0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2707_WEIGHT_CONV2D_2707_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2707_BIAS_CONV2D_2707_BIAS_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2707_BIAS_CONV2D_2707_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2195_WEIGHT_DENSE_2195_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2195_WEIGHT_DENSE_2195_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2195_BIAS_DENSE_2195_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2195_BIAS_DENSE_2195_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2708_WEIGHT_CONV2D_2708_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2708_WEIGHT_CONV2D_2708_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2708_BIAS_CONV2D_2708_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2708_BIAS_CONV2D_2708_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2711_WEIGHT_CONV2D_2711_WEIGHT_DATA 0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2711_WEIGHT_CONV2D_2711_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2711_BIAS_CONV2D_2711_BIAS_DATA     0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2711_BIAS_CONV2D_2711_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2712_WEIGHT_CONV2D_2712_WEIGHT_DATA 0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2712_WEIGHT_CONV2D_2712_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2712_BIAS_CONV2D_2712_BIAS_DATA     0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2712_BIAS_CONV2D_2712_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2196_WEIGHT_DENSE_2196_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2196_WEIGHT_DENSE_2196_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2196_BIAS_DENSE_2196_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2196_BIAS_DENSE_2196_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2197_WEIGHT_DENSE_2197_WEIGHT_DATA   0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2197_WEIGHT_DENSE_2197_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2197_BIAS_DENSE_2197_BIAS_DATA       0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2197_BIAS_DENSE_2197_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2198_WEIGHT_DENSE_2198_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2198_WEIGHT_DENSE_2198_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2198_BIAS_DENSE_2198_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2198_BIAS_DENSE_2198_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2199_WEIGHT_DENSE_2199_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2199_WEIGHT_DENSE_2199_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2199_BIAS_DENSE_2199_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2199_BIAS_DENSE_2199_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2200_WEIGHT_DENSE_2200_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2200_WEIGHT_DENSE_2200_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2200_BIAS_DENSE_2200_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2200_BIAS_DENSE_2200_BIAS_DATA       32

