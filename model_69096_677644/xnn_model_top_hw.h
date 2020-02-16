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
// 0x018 : Data signal of Input_input
//         bit 31~0 - Input_input[31:0] (Read/Write)
// 0x01c : reserved
// 0x020 : Data signal of Conv2d_2949_conv2d_2949
//         bit 31~0 - Conv2d_2949_conv2d_2949[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Max_pooling2d_2042_max_pooling2d_2042
//         bit 31~0 - Max_pooling2d_2042_max_pooling2d_2042[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Dense_2304_dense_2304
//         bit 31~0 - Dense_2304_dense_2304[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Conv2d_2950_conv2d_2950
//         bit 31~0 - Conv2d_2950_conv2d_2950[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2043_max_pooling2d_2043
//         bit 31~0 - Max_pooling2d_2043_max_pooling2d_2043[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2305_dense_2305
//         bit 31~0 - Dense_2305_dense_2305[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_2951_conv2d_2951
//         bit 31~0 - Conv2d_2951_conv2d_2951[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_2952_conv2d_2952
//         bit 31~0 - Conv2d_2952_conv2d_2952[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Max_pooling2d_2044_max_pooling2d_2044
//         bit 31~0 - Max_pooling2d_2044_max_pooling2d_2044[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Flatten_143_flatten_143
//         bit 31~0 - Flatten_143_flatten_143[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_2306_dense_2306
//         bit 31~0 - Dense_2306_dense_2306[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_2307_dense_2307
//         bit 31~0 - Dense_2307_dense_2307[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_2308_dense_2308
//         bit 31~0 - Dense_2308_dense_2308[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_2949_weight_conv2d_2949_weight
//         bit 31~0 - Conv2d_2949_weight_conv2d_2949_weight[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_2949_bias_conv2d_2949_bias
//         bit 31~0 - Conv2d_2949_bias_conv2d_2949_bias[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_2304_weight_dense_2304_weight
//         bit 31~0 - Dense_2304_weight_dense_2304_weight[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_2304_bias_dense_2304_bias
//         bit 31~0 - Dense_2304_bias_dense_2304_bias[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_2950_weight_conv2d_2950_weight
//         bit 31~0 - Conv2d_2950_weight_conv2d_2950_weight[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_2950_bias_conv2d_2950_bias
//         bit 31~0 - Conv2d_2950_bias_conv2d_2950_bias[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_2305_weight_dense_2305_weight
//         bit 31~0 - Dense_2305_weight_dense_2305_weight[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_2305_bias_dense_2305_bias
//         bit 31~0 - Dense_2305_bias_dense_2305_bias[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_2951_weight_conv2d_2951_weight
//         bit 31~0 - Conv2d_2951_weight_conv2d_2951_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_2951_bias_conv2d_2951_bias
//         bit 31~0 - Conv2d_2951_bias_conv2d_2951_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_2952_weight_conv2d_2952_weight
//         bit 31~0 - Conv2d_2952_weight_conv2d_2952_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_2952_bias_conv2d_2952_bias
//         bit 31~0 - Conv2d_2952_bias_conv2d_2952_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_2306_weight_dense_2306_weight
//         bit 31~0 - Dense_2306_weight_dense_2306_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_2306_bias_dense_2306_bias
//         bit 31~0 - Dense_2306_bias_dense_2306_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_2307_weight_dense_2307_weight
//         bit 31~0 - Dense_2307_weight_dense_2307_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_2307_bias_dense_2307_bias
//         bit 31~0 - Dense_2307_bias_dense_2307_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_2308_weight_dense_2308_weight
//         bit 31~0 - Dense_2308_weight_dense_2308_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_2308_bias_dense_2308_bias
//         bit 31~0 - Dense_2308_bias_dense_2308_bias[31:0] (Read/Write)
// 0x114 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                           0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                           32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2949_CONV2D_2949_DATA               0x020
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2949_CONV2D_2949_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2042_MAX_POOLING2D_2042_DATA 0x028
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2042_MAX_POOLING2D_2042_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2304_DENSE_2304_DATA                 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2304_DENSE_2304_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2950_CONV2D_2950_DATA               0x038
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2950_CONV2D_2950_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2043_MAX_POOLING2D_2043_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2043_MAX_POOLING2D_2043_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2305_DENSE_2305_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2305_DENSE_2305_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2951_CONV2D_2951_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2951_CONV2D_2951_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2952_CONV2D_2952_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2952_CONV2D_2952_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2044_MAX_POOLING2D_2044_DATA 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2044_MAX_POOLING2D_2044_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_143_FLATTEN_143_DATA               0x068
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_143_FLATTEN_143_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2306_DENSE_2306_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2306_DENSE_2306_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2307_DENSE_2307_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2307_DENSE_2307_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2308_DENSE_2308_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2308_DENSE_2308_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2949_WEIGHT_CONV2D_2949_WEIGHT_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2949_WEIGHT_CONV2D_2949_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2949_BIAS_CONV2D_2949_BIAS_DATA     0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2949_BIAS_CONV2D_2949_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2304_WEIGHT_DENSE_2304_WEIGHT_DATA   0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2304_WEIGHT_DENSE_2304_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2304_BIAS_DENSE_2304_BIAS_DATA       0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2304_BIAS_DENSE_2304_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2950_WEIGHT_CONV2D_2950_WEIGHT_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2950_WEIGHT_CONV2D_2950_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2950_BIAS_CONV2D_2950_BIAS_DATA     0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2950_BIAS_CONV2D_2950_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2305_WEIGHT_DENSE_2305_WEIGHT_DATA   0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2305_WEIGHT_DENSE_2305_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2305_BIAS_DENSE_2305_BIAS_DATA       0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2305_BIAS_DENSE_2305_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2951_WEIGHT_CONV2D_2951_WEIGHT_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2951_WEIGHT_CONV2D_2951_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2951_BIAS_CONV2D_2951_BIAS_DATA     0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2951_BIAS_CONV2D_2951_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2952_WEIGHT_CONV2D_2952_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2952_WEIGHT_CONV2D_2952_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2952_BIAS_CONV2D_2952_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2952_BIAS_CONV2D_2952_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2306_WEIGHT_DENSE_2306_WEIGHT_DATA   0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2306_WEIGHT_DENSE_2306_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2306_BIAS_DENSE_2306_BIAS_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2306_BIAS_DENSE_2306_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2307_WEIGHT_DENSE_2307_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2307_WEIGHT_DENSE_2307_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2307_BIAS_DENSE_2307_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2307_BIAS_DENSE_2307_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2308_WEIGHT_DENSE_2308_WEIGHT_DATA   0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2308_WEIGHT_DENSE_2308_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2308_BIAS_DENSE_2308_BIAS_DATA       0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2308_BIAS_DENSE_2308_BIAS_DATA       32

