// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
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
// 0x020 : Data signal of Conv2d_231_conv2d_231
//         bit 31~0 - Conv2d_231_conv2d_231[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Max_pooling2d_155_max_pooling2d_155
//         bit 31~0 - Max_pooling2d_155_max_pooling2d_155[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Dense_175_dense_175
//         bit 31~0 - Dense_175_dense_175[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Conv2d_232_conv2d_232
//         bit 31~0 - Conv2d_232_conv2d_232[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Conv2d_233_conv2d_233
//         bit 31~0 - Conv2d_233_conv2d_233[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Conv2d_234_conv2d_234
//         bit 31~0 - Conv2d_234_conv2d_234[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Max_pooling2d_156_max_pooling2d_156
//         bit 31~0 - Max_pooling2d_156_max_pooling2d_156[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Max_pooling2d_157_max_pooling2d_157
//         bit 31~0 - Max_pooling2d_157_max_pooling2d_157[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Max_pooling2d_158_max_pooling2d_158
//         bit 31~0 - Max_pooling2d_158_max_pooling2d_158[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Flatten_13_flatten_13
//         bit 31~0 - Flatten_13_flatten_13[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_176_dense_176
//         bit 31~0 - Dense_176_dense_176[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_177_dense_177
//         bit 31~0 - Dense_177_dense_177[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_178_dense_178
//         bit 31~0 - Dense_178_dense_178[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_231_weight_conv2d_231_weight
//         bit 31~0 - Conv2d_231_weight_conv2d_231_weight[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_231_bias_conv2d_231_bias
//         bit 31~0 - Conv2d_231_bias_conv2d_231_bias[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_175_weight_dense_175_weight
//         bit 31~0 - Dense_175_weight_dense_175_weight[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_175_bias_dense_175_bias
//         bit 31~0 - Dense_175_bias_dense_175_bias[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_232_weight_conv2d_232_weight
//         bit 31~0 - Conv2d_232_weight_conv2d_232_weight[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_232_bias_conv2d_232_bias
//         bit 31~0 - Conv2d_232_bias_conv2d_232_bias[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_233_weight_conv2d_233_weight
//         bit 31~0 - Conv2d_233_weight_conv2d_233_weight[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Conv2d_233_bias_conv2d_233_bias
//         bit 31~0 - Conv2d_233_bias_conv2d_233_bias[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_234_weight_conv2d_234_weight
//         bit 31~0 - Conv2d_234_weight_conv2d_234_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_234_bias_conv2d_234_bias
//         bit 31~0 - Conv2d_234_bias_conv2d_234_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_176_weight_dense_176_weight
//         bit 31~0 - Dense_176_weight_dense_176_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_176_bias_dense_176_bias
//         bit 31~0 - Dense_176_bias_dense_176_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_177_weight_dense_177_weight
//         bit 31~0 - Dense_177_weight_dense_177_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_177_bias_dense_177_bias
//         bit 31~0 - Dense_177_bias_dense_177_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_178_weight_dense_178_weight
//         bit 31~0 - Dense_178_weight_dense_178_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_178_bias_dense_178_bias
//         bit 31~0 - Dense_178_bias_dense_178_bias[31:0] (Read/Write)
// 0x104 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                  0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                      0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                      0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                      0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                         0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_231_CONV2D_231_DATA               0x020
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_231_CONV2D_231_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_155_MAX_POOLING2D_155_DATA 0x028
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_155_MAX_POOLING2D_155_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_175_DENSE_175_DATA                 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_175_DENSE_175_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_232_CONV2D_232_DATA               0x038
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_232_CONV2D_232_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_233_CONV2D_233_DATA               0x040
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_233_CONV2D_233_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_234_CONV2D_234_DATA               0x048
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_234_CONV2D_234_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_156_MAX_POOLING2D_156_DATA 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_156_MAX_POOLING2D_156_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_157_MAX_POOLING2D_157_DATA 0x058
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_157_MAX_POOLING2D_157_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_158_MAX_POOLING2D_158_DATA 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_158_MAX_POOLING2D_158_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_13_FLATTEN_13_DATA               0x068
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_13_FLATTEN_13_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_176_DENSE_176_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_176_DENSE_176_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_177_DENSE_177_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_177_DENSE_177_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_178_DENSE_178_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_178_DENSE_178_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_231_WEIGHT_CONV2D_231_WEIGHT_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_231_WEIGHT_CONV2D_231_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_231_BIAS_CONV2D_231_BIAS_DATA     0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_231_BIAS_CONV2D_231_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_175_WEIGHT_DENSE_175_WEIGHT_DATA   0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_175_WEIGHT_DENSE_175_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_175_BIAS_DENSE_175_BIAS_DATA       0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_175_BIAS_DENSE_175_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_232_WEIGHT_CONV2D_232_WEIGHT_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_232_WEIGHT_CONV2D_232_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_232_BIAS_CONV2D_232_BIAS_DATA     0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_232_BIAS_CONV2D_232_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_233_WEIGHT_CONV2D_233_WEIGHT_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_233_WEIGHT_CONV2D_233_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_233_BIAS_CONV2D_233_BIAS_DATA     0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_233_BIAS_CONV2D_233_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_234_WEIGHT_CONV2D_234_WEIGHT_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_234_WEIGHT_CONV2D_234_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_234_BIAS_CONV2D_234_BIAS_DATA     0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_234_BIAS_CONV2D_234_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_176_WEIGHT_DENSE_176_WEIGHT_DATA   0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_176_WEIGHT_DENSE_176_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_176_BIAS_DENSE_176_BIAS_DATA       0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_176_BIAS_DENSE_176_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_177_WEIGHT_DENSE_177_WEIGHT_DATA   0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_177_WEIGHT_DENSE_177_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_177_BIAS_DENSE_177_BIAS_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_177_BIAS_DENSE_177_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_178_WEIGHT_DENSE_178_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_178_WEIGHT_DENSE_178_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_178_BIAS_DENSE_178_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_178_BIAS_DENSE_178_BIAS_DATA       32

