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
// 0x028 : Data signal of Conv2d_2396_conv2d_2396
//         bit 31~0 - Conv2d_2396_conv2d_2396[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2397_conv2d_2397
//         bit 31~0 - Conv2d_2397_conv2d_2397[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2023_max_pooling2d_2023
//         bit 31~0 - Max_pooling2d_2023_max_pooling2d_2023[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2024_max_pooling2d_2024
//         bit 31~0 - Max_pooling2d_2024_max_pooling2d_2024[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_1950_dense_1950
//         bit 31~0 - Dense_1950_dense_1950[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_1951_dense_1951
//         bit 31~0 - Dense_1951_dense_1951[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_419_concatenate_419
//         bit 31~0 - Concatenate_419_concatenate_419[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_2398_conv2d_2398
//         bit 31~0 - Conv2d_2398_conv2d_2398[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_2025_max_pooling2d_2025
//         bit 31~0 - Max_pooling2d_2025_max_pooling2d_2025[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_2026_max_pooling2d_2026
//         bit 31~0 - Max_pooling2d_2026_max_pooling2d_2026[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_2027_max_pooling2d_2027
//         bit 31~0 - Max_pooling2d_2027_max_pooling2d_2027[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Flatten_216_flatten_216
//         bit 31~0 - Flatten_216_flatten_216[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_1952_dense_1952
//         bit 31~0 - Dense_1952_dense_1952[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_1953_dense_1953
//         bit 31~0 - Dense_1953_dense_1953[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_2396_weight_conv2d_2396_weight
//         bit 31~0 - Conv2d_2396_weight_conv2d_2396_weight[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_2396_bias_conv2d_2396_bias
//         bit 31~0 - Conv2d_2396_bias_conv2d_2396_bias[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_2397_weight_conv2d_2397_weight
//         bit 31~0 - Conv2d_2397_weight_conv2d_2397_weight[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_2397_bias_conv2d_2397_bias
//         bit 31~0 - Conv2d_2397_bias_conv2d_2397_bias[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_1950_weight_dense_1950_weight
//         bit 31~0 - Dense_1950_weight_dense_1950_weight[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_1950_bias_dense_1950_bias
//         bit 31~0 - Dense_1950_bias_dense_1950_bias[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_1951_weight_dense_1951_weight
//         bit 31~0 - Dense_1951_weight_dense_1951_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_1951_bias_dense_1951_bias
//         bit 31~0 - Dense_1951_bias_dense_1951_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_2398_weight_conv2d_2398_weight
//         bit 31~0 - Conv2d_2398_weight_conv2d_2398_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_2398_bias_conv2d_2398_bias
//         bit 31~0 - Conv2d_2398_bias_conv2d_2398_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_1952_weight_dense_1952_weight
//         bit 31~0 - Dense_1952_weight_dense_1952_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_1952_bias_dense_1952_bias
//         bit 31~0 - Dense_1952_bias_dense_1952_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_1953_weight_dense_1953_weight
//         bit 31~0 - Dense_1953_weight_dense_1953_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_1953_bias_dense_1953_bias
//         bit 31~0 - Dense_1953_bias_dense_1953_bias[31:0] (Read/Write)
// 0x104 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2396_CONV2D_2396_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2396_CONV2D_2396_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2397_CONV2D_2397_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2397_CONV2D_2397_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2023_MAX_POOLING2D_2023_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2023_MAX_POOLING2D_2023_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2024_MAX_POOLING2D_2024_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2024_MAX_POOLING2D_2024_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1950_DENSE_1950_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1950_DENSE_1950_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1951_DENSE_1951_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1951_DENSE_1951_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_419_CONCATENATE_419_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_419_CONCATENATE_419_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2398_CONV2D_2398_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2398_CONV2D_2398_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2025_MAX_POOLING2D_2025_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2025_MAX_POOLING2D_2025_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2026_MAX_POOLING2D_2026_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2026_MAX_POOLING2D_2026_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2027_MAX_POOLING2D_2027_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2027_MAX_POOLING2D_2027_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_216_FLATTEN_216_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_216_FLATTEN_216_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1952_DENSE_1952_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1952_DENSE_1952_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1953_DENSE_1953_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1953_DENSE_1953_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2396_WEIGHT_CONV2D_2396_WEIGHT_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2396_WEIGHT_CONV2D_2396_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2396_BIAS_CONV2D_2396_BIAS_DATA     0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2396_BIAS_CONV2D_2396_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2397_WEIGHT_CONV2D_2397_WEIGHT_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2397_WEIGHT_CONV2D_2397_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2397_BIAS_CONV2D_2397_BIAS_DATA     0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2397_BIAS_CONV2D_2397_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1950_WEIGHT_DENSE_1950_WEIGHT_DATA   0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1950_WEIGHT_DENSE_1950_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1950_BIAS_DENSE_1950_BIAS_DATA       0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1950_BIAS_DENSE_1950_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1951_WEIGHT_DENSE_1951_WEIGHT_DATA   0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1951_WEIGHT_DENSE_1951_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1951_BIAS_DENSE_1951_BIAS_DATA       0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1951_BIAS_DENSE_1951_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2398_WEIGHT_CONV2D_2398_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2398_WEIGHT_CONV2D_2398_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2398_BIAS_CONV2D_2398_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2398_BIAS_CONV2D_2398_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1952_WEIGHT_DENSE_1952_WEIGHT_DATA   0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1952_WEIGHT_DENSE_1952_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1952_BIAS_DENSE_1952_BIAS_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1952_BIAS_DENSE_1952_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1953_WEIGHT_DENSE_1953_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1953_WEIGHT_DENSE_1953_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1953_BIAS_DENSE_1953_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1953_BIAS_DENSE_1953_BIAS_DATA       32

