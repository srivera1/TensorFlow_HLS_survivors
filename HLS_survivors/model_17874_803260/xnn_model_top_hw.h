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
// 0x028 : Data signal of Conv2d_2797_conv2d_2797
//         bit 31~0 - Conv2d_2797_conv2d_2797[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2799_conv2d_2799
//         bit 31~0 - Conv2d_2799_conv2d_2799[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2361_max_pooling2d_2361
//         bit 31~0 - Max_pooling2d_2361_max_pooling2d_2361[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2362_max_pooling2d_2362
//         bit 31~0 - Max_pooling2d_2362_max_pooling2d_2362[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2269_dense_2269
//         bit 31~0 - Dense_2269_dense_2269[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2270_dense_2270
//         bit 31~0 - Dense_2270_dense_2270[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_2798_conv2d_2798
//         bit 31~0 - Conv2d_2798_conv2d_2798[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_2800_conv2d_2800
//         bit 31~0 - Conv2d_2800_conv2d_2800[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Concatenate_494_concatenate_494
//         bit 31~0 - Concatenate_494_concatenate_494[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_2801_conv2d_2801
//         bit 31~0 - Conv2d_2801_conv2d_2801[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_2363_max_pooling2d_2363
//         bit 31~0 - Max_pooling2d_2363_max_pooling2d_2363[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_2271_dense_2271
//         bit 31~0 - Dense_2271_dense_2271[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_2802_conv2d_2802
//         bit 31~0 - Conv2d_2802_conv2d_2802[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_2803_conv2d_2803
//         bit 31~0 - Conv2d_2803_conv2d_2803[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_2272_dense_2272
//         bit 31~0 - Dense_2272_dense_2272[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_2273_dense_2273
//         bit 31~0 - Dense_2273_dense_2273[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_2274_dense_2274
//         bit 31~0 - Dense_2274_dense_2274[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Flatten_252_flatten_252
//         bit 31~0 - Flatten_252_flatten_252[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_2275_dense_2275
//         bit 31~0 - Dense_2275_dense_2275[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_2276_dense_2276
//         bit 31~0 - Dense_2276_dense_2276[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_2797_weight_conv2d_2797_weight
//         bit 31~0 - Conv2d_2797_weight_conv2d_2797_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_2797_bias_conv2d_2797_bias
//         bit 31~0 - Conv2d_2797_bias_conv2d_2797_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_2799_weight_conv2d_2799_weight
//         bit 31~0 - Conv2d_2799_weight_conv2d_2799_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_2799_bias_conv2d_2799_bias
//         bit 31~0 - Conv2d_2799_bias_conv2d_2799_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_2269_weight_dense_2269_weight
//         bit 31~0 - Dense_2269_weight_dense_2269_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_2269_bias_dense_2269_bias
//         bit 31~0 - Dense_2269_bias_dense_2269_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_2270_weight_dense_2270_weight
//         bit 31~0 - Dense_2270_weight_dense_2270_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_2270_bias_dense_2270_bias
//         bit 31~0 - Dense_2270_bias_dense_2270_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_2798_weight_conv2d_2798_weight
//         bit 31~0 - Conv2d_2798_weight_conv2d_2798_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_2798_bias_conv2d_2798_bias
//         bit 31~0 - Conv2d_2798_bias_conv2d_2798_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_2800_weight_conv2d_2800_weight
//         bit 31~0 - Conv2d_2800_weight_conv2d_2800_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_2800_bias_conv2d_2800_bias
//         bit 31~0 - Conv2d_2800_bias_conv2d_2800_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_2801_weight_conv2d_2801_weight
//         bit 31~0 - Conv2d_2801_weight_conv2d_2801_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_2801_bias_conv2d_2801_bias
//         bit 31~0 - Conv2d_2801_bias_conv2d_2801_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_2271_weight_dense_2271_weight
//         bit 31~0 - Dense_2271_weight_dense_2271_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_2271_bias_dense_2271_bias
//         bit 31~0 - Dense_2271_bias_dense_2271_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_2802_weight_conv2d_2802_weight
//         bit 31~0 - Conv2d_2802_weight_conv2d_2802_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_2802_bias_conv2d_2802_bias
//         bit 31~0 - Conv2d_2802_bias_conv2d_2802_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_2803_weight_conv2d_2803_weight
//         bit 31~0 - Conv2d_2803_weight_conv2d_2803_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_2803_bias_conv2d_2803_bias
//         bit 31~0 - Conv2d_2803_bias_conv2d_2803_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_2272_weight_dense_2272_weight
//         bit 31~0 - Dense_2272_weight_dense_2272_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_2272_bias_dense_2272_bias
//         bit 31~0 - Dense_2272_bias_dense_2272_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_2273_weight_dense_2273_weight
//         bit 31~0 - Dense_2273_weight_dense_2273_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_2273_bias_dense_2273_bias
//         bit 31~0 - Dense_2273_bias_dense_2273_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_2274_weight_dense_2274_weight
//         bit 31~0 - Dense_2274_weight_dense_2274_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_2274_bias_dense_2274_bias
//         bit 31~0 - Dense_2274_bias_dense_2274_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_2275_weight_dense_2275_weight
//         bit 31~0 - Dense_2275_weight_dense_2275_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_2275_bias_dense_2275_bias
//         bit 31~0 - Dense_2275_bias_dense_2275_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_2276_weight_dense_2276_weight
//         bit 31~0 - Dense_2276_weight_dense_2276_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_2276_bias_dense_2276_bias
//         bit 31~0 - Dense_2276_bias_dense_2276_bias[31:0] (Read/Write)
// 0x1b4 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2797_CONV2D_2797_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2797_CONV2D_2797_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2799_CONV2D_2799_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2799_CONV2D_2799_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2361_MAX_POOLING2D_2361_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2361_MAX_POOLING2D_2361_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2362_MAX_POOLING2D_2362_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2362_MAX_POOLING2D_2362_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2269_DENSE_2269_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2269_DENSE_2269_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2270_DENSE_2270_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2270_DENSE_2270_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2798_CONV2D_2798_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2798_CONV2D_2798_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2800_CONV2D_2800_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2800_CONV2D_2800_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_494_CONCATENATE_494_DATA       0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_494_CONCATENATE_494_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2801_CONV2D_2801_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2801_CONV2D_2801_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2363_MAX_POOLING2D_2363_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2363_MAX_POOLING2D_2363_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2271_DENSE_2271_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2271_DENSE_2271_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2802_CONV2D_2802_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2802_CONV2D_2802_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2803_CONV2D_2803_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2803_CONV2D_2803_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2272_DENSE_2272_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2272_DENSE_2272_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2273_DENSE_2273_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2273_DENSE_2273_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2274_DENSE_2274_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2274_DENSE_2274_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_252_FLATTEN_252_DATA               0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_252_FLATTEN_252_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2275_DENSE_2275_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2275_DENSE_2275_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2276_DENSE_2276_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2276_DENSE_2276_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2797_WEIGHT_CONV2D_2797_WEIGHT_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2797_WEIGHT_CONV2D_2797_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2797_BIAS_CONV2D_2797_BIAS_DATA     0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2797_BIAS_CONV2D_2797_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2799_WEIGHT_CONV2D_2799_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2799_WEIGHT_CONV2D_2799_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2799_BIAS_CONV2D_2799_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2799_BIAS_CONV2D_2799_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2269_WEIGHT_DENSE_2269_WEIGHT_DATA   0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2269_WEIGHT_DENSE_2269_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2269_BIAS_DENSE_2269_BIAS_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2269_BIAS_DENSE_2269_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2270_WEIGHT_DENSE_2270_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2270_WEIGHT_DENSE_2270_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2270_BIAS_DENSE_2270_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2270_BIAS_DENSE_2270_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2798_WEIGHT_CONV2D_2798_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2798_WEIGHT_CONV2D_2798_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2798_BIAS_CONV2D_2798_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2798_BIAS_CONV2D_2798_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2800_WEIGHT_CONV2D_2800_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2800_WEIGHT_CONV2D_2800_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2800_BIAS_CONV2D_2800_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2800_BIAS_CONV2D_2800_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2801_WEIGHT_CONV2D_2801_WEIGHT_DATA 0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2801_WEIGHT_CONV2D_2801_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2801_BIAS_CONV2D_2801_BIAS_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2801_BIAS_CONV2D_2801_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2271_WEIGHT_DENSE_2271_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2271_WEIGHT_DENSE_2271_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2271_BIAS_DENSE_2271_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2271_BIAS_DENSE_2271_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2802_WEIGHT_CONV2D_2802_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2802_WEIGHT_CONV2D_2802_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2802_BIAS_CONV2D_2802_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2802_BIAS_CONV2D_2802_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2803_WEIGHT_CONV2D_2803_WEIGHT_DATA 0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2803_WEIGHT_CONV2D_2803_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2803_BIAS_CONV2D_2803_BIAS_DATA     0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2803_BIAS_CONV2D_2803_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2272_WEIGHT_DENSE_2272_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2272_WEIGHT_DENSE_2272_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2272_BIAS_DENSE_2272_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2272_BIAS_DENSE_2272_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2273_WEIGHT_DENSE_2273_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2273_WEIGHT_DENSE_2273_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2273_BIAS_DENSE_2273_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2273_BIAS_DENSE_2273_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2274_WEIGHT_DENSE_2274_WEIGHT_DATA   0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2274_WEIGHT_DENSE_2274_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2274_BIAS_DENSE_2274_BIAS_DATA       0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2274_BIAS_DENSE_2274_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2275_WEIGHT_DENSE_2275_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2275_WEIGHT_DENSE_2275_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2275_BIAS_DENSE_2275_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2275_BIAS_DENSE_2275_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2276_WEIGHT_DENSE_2276_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2276_WEIGHT_DENSE_2276_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2276_BIAS_DENSE_2276_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2276_BIAS_DENSE_2276_BIAS_DATA       32

