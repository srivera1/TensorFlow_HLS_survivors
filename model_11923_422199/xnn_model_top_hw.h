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
// 0x028 : Data signal of Conv2d_2509_conv2d_2509
//         bit 31~0 - Conv2d_2509_conv2d_2509[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2506_conv2d_2506
//         bit 31~0 - Conv2d_2506_conv2d_2506[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2119_max_pooling2d_2119
//         bit 31~0 - Max_pooling2d_2119_max_pooling2d_2119[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2117_max_pooling2d_2117
//         bit 31~0 - Max_pooling2d_2117_max_pooling2d_2117[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2041_dense_2041
//         bit 31~0 - Dense_2041_dense_2041[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_2507_conv2d_2507
//         bit 31~0 - Conv2d_2507_conv2d_2507[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_2510_conv2d_2510
//         bit 31~0 - Conv2d_2510_conv2d_2510[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Max_pooling2d_2118_max_pooling2d_2118
//         bit 31~0 - Max_pooling2d_2118_max_pooling2d_2118[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_2120_max_pooling2d_2120
//         bit 31~0 - Max_pooling2d_2120_max_pooling2d_2120[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_2040_dense_2040
//         bit 31~0 - Dense_2040_dense_2040[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_2042_dense_2042
//         bit 31~0 - Dense_2042_dense_2042[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_2508_conv2d_2508
//         bit 31~0 - Conv2d_2508_conv2d_2508[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_2511_conv2d_2511
//         bit 31~0 - Conv2d_2511_conv2d_2511[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Concatenate_440_concatenate_440
//         bit 31~0 - Concatenate_440_concatenate_440[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_2512_conv2d_2512
//         bit 31~0 - Conv2d_2512_conv2d_2512[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_2515_conv2d_2515
//         bit 31~0 - Conv2d_2515_conv2d_2515[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_2121_max_pooling2d_2121
//         bit 31~0 - Max_pooling2d_2121_max_pooling2d_2121[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Max_pooling2d_2123_max_pooling2d_2123
//         bit 31~0 - Max_pooling2d_2123_max_pooling2d_2123[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_2043_dense_2043
//         bit 31~0 - Dense_2043_dense_2043[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_2045_dense_2045
//         bit 31~0 - Dense_2045_dense_2045[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_2044_dense_2044
//         bit 31~0 - Dense_2044_dense_2044[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_2046_dense_2046
//         bit 31~0 - Dense_2046_dense_2046[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Concatenate_441_concatenate_441
//         bit 31~0 - Concatenate_441_concatenate_441[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Flatten_227_flatten_227
//         bit 31~0 - Flatten_227_flatten_227[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_2047_dense_2047
//         bit 31~0 - Dense_2047_dense_2047[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_2048_dense_2048
//         bit 31~0 - Dense_2048_dense_2048[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_2509_weight_conv2d_2509_weight
//         bit 31~0 - Conv2d_2509_weight_conv2d_2509_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_2509_bias_conv2d_2509_bias
//         bit 31~0 - Conv2d_2509_bias_conv2d_2509_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_2506_weight_conv2d_2506_weight
//         bit 31~0 - Conv2d_2506_weight_conv2d_2506_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_2506_bias_conv2d_2506_bias
//         bit 31~0 - Conv2d_2506_bias_conv2d_2506_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_2041_weight_dense_2041_weight
//         bit 31~0 - Dense_2041_weight_dense_2041_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_2041_bias_dense_2041_bias
//         bit 31~0 - Dense_2041_bias_dense_2041_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_2507_weight_conv2d_2507_weight
//         bit 31~0 - Conv2d_2507_weight_conv2d_2507_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_2507_bias_conv2d_2507_bias
//         bit 31~0 - Conv2d_2507_bias_conv2d_2507_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_2510_weight_conv2d_2510_weight
//         bit 31~0 - Conv2d_2510_weight_conv2d_2510_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_2510_bias_conv2d_2510_bias
//         bit 31~0 - Conv2d_2510_bias_conv2d_2510_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_2040_weight_dense_2040_weight
//         bit 31~0 - Dense_2040_weight_dense_2040_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_2040_bias_dense_2040_bias
//         bit 31~0 - Dense_2040_bias_dense_2040_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_2042_weight_dense_2042_weight
//         bit 31~0 - Dense_2042_weight_dense_2042_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_2042_bias_dense_2042_bias
//         bit 31~0 - Dense_2042_bias_dense_2042_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_2508_weight_conv2d_2508_weight
//         bit 31~0 - Conv2d_2508_weight_conv2d_2508_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_2508_bias_conv2d_2508_bias
//         bit 31~0 - Conv2d_2508_bias_conv2d_2508_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_2511_weight_conv2d_2511_weight
//         bit 31~0 - Conv2d_2511_weight_conv2d_2511_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_2511_bias_conv2d_2511_bias
//         bit 31~0 - Conv2d_2511_bias_conv2d_2511_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_2512_weight_conv2d_2512_weight
//         bit 31~0 - Conv2d_2512_weight_conv2d_2512_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_2512_bias_conv2d_2512_bias
//         bit 31~0 - Conv2d_2512_bias_conv2d_2512_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Conv2d_2515_weight_conv2d_2515_weight
//         bit 31~0 - Conv2d_2515_weight_conv2d_2515_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Conv2d_2515_bias_conv2d_2515_bias
//         bit 31~0 - Conv2d_2515_bias_conv2d_2515_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_2043_weight_dense_2043_weight
//         bit 31~0 - Dense_2043_weight_dense_2043_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_2043_bias_dense_2043_bias
//         bit 31~0 - Dense_2043_bias_dense_2043_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_2045_weight_dense_2045_weight
//         bit 31~0 - Dense_2045_weight_dense_2045_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_2045_bias_dense_2045_bias
//         bit 31~0 - Dense_2045_bias_dense_2045_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_2044_weight_dense_2044_weight
//         bit 31~0 - Dense_2044_weight_dense_2044_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_2044_bias_dense_2044_bias
//         bit 31~0 - Dense_2044_bias_dense_2044_bias[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_2046_weight_dense_2046_weight
//         bit 31~0 - Dense_2046_weight_dense_2046_weight[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_2046_bias_dense_2046_bias
//         bit 31~0 - Dense_2046_bias_dense_2046_bias[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_2047_weight_dense_2047_weight
//         bit 31~0 - Dense_2047_weight_dense_2047_weight[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_2047_bias_dense_2047_bias
//         bit 31~0 - Dense_2047_bias_dense_2047_bias[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of Dense_2048_weight_dense_2048_weight
//         bit 31~0 - Dense_2048_weight_dense_2048_weight[31:0] (Read/Write)
// 0x1fc : reserved
// 0x200 : Data signal of Dense_2048_bias_dense_2048_bias
//         bit 31~0 - Dense_2048_bias_dense_2048_bias[31:0] (Read/Write)
// 0x204 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2509_CONV2D_2509_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2509_CONV2D_2509_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2506_CONV2D_2506_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2506_CONV2D_2506_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2119_MAX_POOLING2D_2119_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2119_MAX_POOLING2D_2119_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2117_MAX_POOLING2D_2117_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2117_MAX_POOLING2D_2117_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2041_DENSE_2041_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2041_DENSE_2041_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2507_CONV2D_2507_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2507_CONV2D_2507_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2510_CONV2D_2510_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2510_CONV2D_2510_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2118_MAX_POOLING2D_2118_DATA 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2118_MAX_POOLING2D_2118_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2120_MAX_POOLING2D_2120_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2120_MAX_POOLING2D_2120_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2040_DENSE_2040_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2040_DENSE_2040_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2042_DENSE_2042_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2042_DENSE_2042_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2508_CONV2D_2508_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2508_CONV2D_2508_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2511_CONV2D_2511_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2511_CONV2D_2511_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_440_CONCATENATE_440_DATA       0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_440_CONCATENATE_440_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2512_CONV2D_2512_DATA               0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2512_CONV2D_2512_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2515_CONV2D_2515_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2515_CONV2D_2515_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2121_MAX_POOLING2D_2121_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2121_MAX_POOLING2D_2121_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2123_MAX_POOLING2D_2123_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2123_MAX_POOLING2D_2123_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2043_DENSE_2043_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2043_DENSE_2043_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2045_DENSE_2045_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2045_DENSE_2045_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2044_DENSE_2044_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2044_DENSE_2044_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2046_DENSE_2046_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2046_DENSE_2046_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_441_CONCATENATE_441_DATA       0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_441_CONCATENATE_441_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_227_FLATTEN_227_DATA               0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_227_FLATTEN_227_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2047_DENSE_2047_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2047_DENSE_2047_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2048_DENSE_2048_DATA                 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2048_DENSE_2048_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2509_WEIGHT_CONV2D_2509_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2509_WEIGHT_CONV2D_2509_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2509_BIAS_CONV2D_2509_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2509_BIAS_CONV2D_2509_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2506_WEIGHT_CONV2D_2506_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2506_WEIGHT_CONV2D_2506_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2506_BIAS_CONV2D_2506_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2506_BIAS_CONV2D_2506_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2041_WEIGHT_DENSE_2041_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2041_WEIGHT_DENSE_2041_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2041_BIAS_DENSE_2041_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2041_BIAS_DENSE_2041_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2507_WEIGHT_CONV2D_2507_WEIGHT_DATA 0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2507_WEIGHT_CONV2D_2507_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2507_BIAS_CONV2D_2507_BIAS_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2507_BIAS_CONV2D_2507_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2510_WEIGHT_CONV2D_2510_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2510_WEIGHT_CONV2D_2510_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2510_BIAS_CONV2D_2510_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2510_BIAS_CONV2D_2510_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2040_WEIGHT_DENSE_2040_WEIGHT_DATA   0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2040_WEIGHT_DENSE_2040_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2040_BIAS_DENSE_2040_BIAS_DATA       0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2040_BIAS_DENSE_2040_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2042_WEIGHT_DENSE_2042_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2042_WEIGHT_DENSE_2042_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2042_BIAS_DENSE_2042_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2042_BIAS_DENSE_2042_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2508_WEIGHT_CONV2D_2508_WEIGHT_DATA 0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2508_WEIGHT_CONV2D_2508_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2508_BIAS_CONV2D_2508_BIAS_DATA     0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2508_BIAS_CONV2D_2508_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2511_WEIGHT_CONV2D_2511_WEIGHT_DATA 0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2511_WEIGHT_CONV2D_2511_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2511_BIAS_CONV2D_2511_BIAS_DATA     0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2511_BIAS_CONV2D_2511_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2512_WEIGHT_CONV2D_2512_WEIGHT_DATA 0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2512_WEIGHT_CONV2D_2512_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2512_BIAS_CONV2D_2512_BIAS_DATA     0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2512_BIAS_CONV2D_2512_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2515_WEIGHT_CONV2D_2515_WEIGHT_DATA 0x198
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2515_WEIGHT_CONV2D_2515_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2515_BIAS_CONV2D_2515_BIAS_DATA     0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2515_BIAS_CONV2D_2515_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2043_WEIGHT_DENSE_2043_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2043_WEIGHT_DENSE_2043_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2043_BIAS_DENSE_2043_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2043_BIAS_DENSE_2043_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2045_WEIGHT_DENSE_2045_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2045_WEIGHT_DENSE_2045_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2045_BIAS_DENSE_2045_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2045_BIAS_DENSE_2045_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2044_WEIGHT_DENSE_2044_WEIGHT_DATA   0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2044_WEIGHT_DENSE_2044_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2044_BIAS_DENSE_2044_BIAS_DATA       0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2044_BIAS_DENSE_2044_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2046_WEIGHT_DENSE_2046_WEIGHT_DATA   0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2046_WEIGHT_DENSE_2046_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2046_BIAS_DENSE_2046_BIAS_DATA       0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2046_BIAS_DENSE_2046_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2047_WEIGHT_DENSE_2047_WEIGHT_DATA   0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2047_WEIGHT_DENSE_2047_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2047_BIAS_DENSE_2047_BIAS_DATA       0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2047_BIAS_DENSE_2047_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2048_WEIGHT_DENSE_2048_WEIGHT_DATA   0x1f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2048_WEIGHT_DENSE_2048_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2048_BIAS_DENSE_2048_BIAS_DATA       0x200
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2048_BIAS_DENSE_2048_BIAS_DATA       32

