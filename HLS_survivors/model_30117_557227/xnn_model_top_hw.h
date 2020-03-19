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
// 0x028 : Data signal of Conv2d_1210_conv2d_1210
//         bit 31~0 - Conv2d_1210_conv2d_1210[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_1211_conv2d_1211
//         bit 31~0 - Conv2d_1211_conv2d_1211[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_1025_max_pooling2d_1025
//         bit 31~0 - Max_pooling2d_1025_max_pooling2d_1025[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_1026_max_pooling2d_1026
//         bit 31~0 - Max_pooling2d_1026_max_pooling2d_1026[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_990_dense_990
//         bit 31~0 - Dense_990_dense_990[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_991_dense_991
//         bit 31~0 - Dense_991_dense_991[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_215_concatenate_215
//         bit 31~0 - Concatenate_215_concatenate_215[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_1212_conv2d_1212
//         bit 31~0 - Conv2d_1212_conv2d_1212[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_1027_max_pooling2d_1027
//         bit 31~0 - Max_pooling2d_1027_max_pooling2d_1027[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_1028_max_pooling2d_1028
//         bit 31~0 - Max_pooling2d_1028_max_pooling2d_1028[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_1029_max_pooling2d_1029
//         bit 31~0 - Max_pooling2d_1029_max_pooling2d_1029[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Flatten_112_flatten_112
//         bit 31~0 - Flatten_112_flatten_112[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_992_dense_992
//         bit 31~0 - Dense_992_dense_992[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_993_dense_993
//         bit 31~0 - Dense_993_dense_993[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_1210_weight_conv2d_1210_weight
//         bit 31~0 - Conv2d_1210_weight_conv2d_1210_weight[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_1210_bias_conv2d_1210_bias
//         bit 31~0 - Conv2d_1210_bias_conv2d_1210_bias[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_1211_weight_conv2d_1211_weight
//         bit 31~0 - Conv2d_1211_weight_conv2d_1211_weight[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_1211_bias_conv2d_1211_bias
//         bit 31~0 - Conv2d_1211_bias_conv2d_1211_bias[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_990_weight_dense_990_weight
//         bit 31~0 - Dense_990_weight_dense_990_weight[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_990_bias_dense_990_bias
//         bit 31~0 - Dense_990_bias_dense_990_bias[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_991_weight_dense_991_weight
//         bit 31~0 - Dense_991_weight_dense_991_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_991_bias_dense_991_bias
//         bit 31~0 - Dense_991_bias_dense_991_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_1212_weight_conv2d_1212_weight
//         bit 31~0 - Conv2d_1212_weight_conv2d_1212_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_1212_bias_conv2d_1212_bias
//         bit 31~0 - Conv2d_1212_bias_conv2d_1212_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_992_weight_dense_992_weight
//         bit 31~0 - Dense_992_weight_dense_992_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_992_bias_dense_992_bias
//         bit 31~0 - Dense_992_bias_dense_992_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_993_weight_dense_993_weight
//         bit 31~0 - Dense_993_weight_dense_993_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_993_bias_dense_993_bias
//         bit 31~0 - Dense_993_bias_dense_993_bias[31:0] (Read/Write)
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1210_CONV2D_1210_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1210_CONV2D_1210_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1211_CONV2D_1211_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1211_CONV2D_1211_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1025_MAX_POOLING2D_1025_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1025_MAX_POOLING2D_1025_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1026_MAX_POOLING2D_1026_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1026_MAX_POOLING2D_1026_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_990_DENSE_990_DATA                   0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_990_DENSE_990_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_991_DENSE_991_DATA                   0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_991_DENSE_991_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_215_CONCATENATE_215_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_215_CONCATENATE_215_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1212_CONV2D_1212_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1212_CONV2D_1212_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1027_MAX_POOLING2D_1027_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1027_MAX_POOLING2D_1027_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1028_MAX_POOLING2D_1028_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1028_MAX_POOLING2D_1028_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1029_MAX_POOLING2D_1029_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1029_MAX_POOLING2D_1029_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_112_FLATTEN_112_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_112_FLATTEN_112_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_992_DENSE_992_DATA                   0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_992_DENSE_992_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_993_DENSE_993_DATA                   0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_993_DENSE_993_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1210_WEIGHT_CONV2D_1210_WEIGHT_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1210_WEIGHT_CONV2D_1210_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1210_BIAS_CONV2D_1210_BIAS_DATA     0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1210_BIAS_CONV2D_1210_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1211_WEIGHT_CONV2D_1211_WEIGHT_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1211_WEIGHT_CONV2D_1211_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1211_BIAS_CONV2D_1211_BIAS_DATA     0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1211_BIAS_CONV2D_1211_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_990_WEIGHT_DENSE_990_WEIGHT_DATA     0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_990_WEIGHT_DENSE_990_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_990_BIAS_DENSE_990_BIAS_DATA         0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_990_BIAS_DENSE_990_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_991_WEIGHT_DENSE_991_WEIGHT_DATA     0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_991_WEIGHT_DENSE_991_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_991_BIAS_DENSE_991_BIAS_DATA         0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_991_BIAS_DENSE_991_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1212_WEIGHT_CONV2D_1212_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1212_WEIGHT_CONV2D_1212_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1212_BIAS_CONV2D_1212_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1212_BIAS_CONV2D_1212_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_992_WEIGHT_DENSE_992_WEIGHT_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_992_WEIGHT_DENSE_992_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_992_BIAS_DENSE_992_BIAS_DATA         0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_992_BIAS_DENSE_992_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_993_WEIGHT_DENSE_993_WEIGHT_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_993_WEIGHT_DENSE_993_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_993_BIAS_DENSE_993_BIAS_DATA         0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_993_BIAS_DENSE_993_BIAS_DATA         32

