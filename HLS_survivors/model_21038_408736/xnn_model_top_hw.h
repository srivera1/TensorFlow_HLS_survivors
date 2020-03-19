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
// 0x028 : Data signal of Conv2d_2871_conv2d_2871
//         bit 31~0 - Conv2d_2871_conv2d_2871[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2873_conv2d_2873
//         bit 31~0 - Conv2d_2873_conv2d_2873[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2426_max_pooling2d_2426
//         bit 31~0 - Max_pooling2d_2426_max_pooling2d_2426[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2427_max_pooling2d_2427
//         bit 31~0 - Max_pooling2d_2427_max_pooling2d_2427[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2323_dense_2323
//         bit 31~0 - Dense_2323_dense_2323[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2324_dense_2324
//         bit 31~0 - Dense_2324_dense_2324[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_2872_conv2d_2872
//         bit 31~0 - Conv2d_2872_conv2d_2872[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_2874_conv2d_2874
//         bit 31~0 - Conv2d_2874_conv2d_2874[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Concatenate_507_concatenate_507
//         bit 31~0 - Concatenate_507_concatenate_507[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_2875_conv2d_2875
//         bit 31~0 - Conv2d_2875_conv2d_2875[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_2428_max_pooling2d_2428
//         bit 31~0 - Max_pooling2d_2428_max_pooling2d_2428[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_2429_max_pooling2d_2429
//         bit 31~0 - Max_pooling2d_2429_max_pooling2d_2429[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_2430_max_pooling2d_2430
//         bit 31~0 - Max_pooling2d_2430_max_pooling2d_2430[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Flatten_259_flatten_259
//         bit 31~0 - Flatten_259_flatten_259[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_2325_dense_2325
//         bit 31~0 - Dense_2325_dense_2325[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_2326_dense_2326
//         bit 31~0 - Dense_2326_dense_2326[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_2327_dense_2327
//         bit 31~0 - Dense_2327_dense_2327[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_2871_weight_conv2d_2871_weight
//         bit 31~0 - Conv2d_2871_weight_conv2d_2871_weight[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_2871_bias_conv2d_2871_bias
//         bit 31~0 - Conv2d_2871_bias_conv2d_2871_bias[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Conv2d_2873_weight_conv2d_2873_weight
//         bit 31~0 - Conv2d_2873_weight_conv2d_2873_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_2873_bias_conv2d_2873_bias
//         bit 31~0 - Conv2d_2873_bias_conv2d_2873_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_2323_weight_dense_2323_weight
//         bit 31~0 - Dense_2323_weight_dense_2323_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_2323_bias_dense_2323_bias
//         bit 31~0 - Dense_2323_bias_dense_2323_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_2324_weight_dense_2324_weight
//         bit 31~0 - Dense_2324_weight_dense_2324_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_2324_bias_dense_2324_bias
//         bit 31~0 - Dense_2324_bias_dense_2324_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_2872_weight_conv2d_2872_weight
//         bit 31~0 - Conv2d_2872_weight_conv2d_2872_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_2872_bias_conv2d_2872_bias
//         bit 31~0 - Conv2d_2872_bias_conv2d_2872_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_2874_weight_conv2d_2874_weight
//         bit 31~0 - Conv2d_2874_weight_conv2d_2874_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_2874_bias_conv2d_2874_bias
//         bit 31~0 - Conv2d_2874_bias_conv2d_2874_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_2875_weight_conv2d_2875_weight
//         bit 31~0 - Conv2d_2875_weight_conv2d_2875_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_2875_bias_conv2d_2875_bias
//         bit 31~0 - Conv2d_2875_bias_conv2d_2875_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_2325_weight_dense_2325_weight
//         bit 31~0 - Dense_2325_weight_dense_2325_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_2325_bias_dense_2325_bias
//         bit 31~0 - Dense_2325_bias_dense_2325_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_2326_weight_dense_2326_weight
//         bit 31~0 - Dense_2326_weight_dense_2326_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_2326_bias_dense_2326_bias
//         bit 31~0 - Dense_2326_bias_dense_2326_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_2327_weight_dense_2327_weight
//         bit 31~0 - Dense_2327_weight_dense_2327_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_2327_bias_dense_2327_bias
//         bit 31~0 - Dense_2327_bias_dense_2327_bias[31:0] (Read/Write)
// 0x14c : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2871_CONV2D_2871_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2871_CONV2D_2871_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2873_CONV2D_2873_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2873_CONV2D_2873_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2426_MAX_POOLING2D_2426_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2426_MAX_POOLING2D_2426_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2427_MAX_POOLING2D_2427_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2427_MAX_POOLING2D_2427_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2323_DENSE_2323_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2323_DENSE_2323_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2324_DENSE_2324_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2324_DENSE_2324_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2872_CONV2D_2872_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2872_CONV2D_2872_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2874_CONV2D_2874_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2874_CONV2D_2874_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_507_CONCATENATE_507_DATA       0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_507_CONCATENATE_507_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2875_CONV2D_2875_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2875_CONV2D_2875_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2428_MAX_POOLING2D_2428_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2428_MAX_POOLING2D_2428_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2429_MAX_POOLING2D_2429_DATA 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2429_MAX_POOLING2D_2429_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2430_MAX_POOLING2D_2430_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2430_MAX_POOLING2D_2430_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_259_FLATTEN_259_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_259_FLATTEN_259_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2325_DENSE_2325_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2325_DENSE_2325_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2326_DENSE_2326_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2326_DENSE_2326_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2327_DENSE_2327_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2327_DENSE_2327_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2871_WEIGHT_CONV2D_2871_WEIGHT_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2871_WEIGHT_CONV2D_2871_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2871_BIAS_CONV2D_2871_BIAS_DATA     0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2871_BIAS_CONV2D_2871_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2873_WEIGHT_CONV2D_2873_WEIGHT_DATA 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2873_WEIGHT_CONV2D_2873_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2873_BIAS_CONV2D_2873_BIAS_DATA     0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2873_BIAS_CONV2D_2873_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2323_WEIGHT_DENSE_2323_WEIGHT_DATA   0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2323_WEIGHT_DENSE_2323_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2323_BIAS_DENSE_2323_BIAS_DATA       0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2323_BIAS_DENSE_2323_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2324_WEIGHT_DENSE_2324_WEIGHT_DATA   0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2324_WEIGHT_DENSE_2324_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2324_BIAS_DENSE_2324_BIAS_DATA       0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2324_BIAS_DENSE_2324_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2872_WEIGHT_CONV2D_2872_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2872_WEIGHT_CONV2D_2872_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2872_BIAS_CONV2D_2872_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2872_BIAS_CONV2D_2872_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2874_WEIGHT_CONV2D_2874_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2874_WEIGHT_CONV2D_2874_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2874_BIAS_CONV2D_2874_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2874_BIAS_CONV2D_2874_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2875_WEIGHT_CONV2D_2875_WEIGHT_DATA 0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2875_WEIGHT_CONV2D_2875_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2875_BIAS_CONV2D_2875_BIAS_DATA     0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2875_BIAS_CONV2D_2875_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2325_WEIGHT_DENSE_2325_WEIGHT_DATA   0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2325_WEIGHT_DENSE_2325_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2325_BIAS_DENSE_2325_BIAS_DATA       0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2325_BIAS_DENSE_2325_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2326_WEIGHT_DENSE_2326_WEIGHT_DATA   0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2326_WEIGHT_DENSE_2326_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2326_BIAS_DENSE_2326_BIAS_DATA       0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2326_BIAS_DENSE_2326_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2327_WEIGHT_DENSE_2327_WEIGHT_DATA   0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2327_WEIGHT_DENSE_2327_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2327_BIAS_DENSE_2327_BIAS_DATA       0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2327_BIAS_DENSE_2327_BIAS_DATA       32

