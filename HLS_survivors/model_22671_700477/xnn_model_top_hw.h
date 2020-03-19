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
// 0x028 : Data signal of Conv2d_2638_conv2d_2638
//         bit 31~0 - Conv2d_2638_conv2d_2638[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2639_conv2d_2639
//         bit 31~0 - Conv2d_2639_conv2d_2639[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2220_max_pooling2d_2220
//         bit 31~0 - Max_pooling2d_2220_max_pooling2d_2220[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2221_max_pooling2d_2221
//         bit 31~0 - Max_pooling2d_2221_max_pooling2d_2221[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2137_dense_2137
//         bit 31~0 - Dense_2137_dense_2137[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2138_dense_2138
//         bit 31~0 - Dense_2138_dense_2138[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_464_concatenate_464
//         bit 31~0 - Concatenate_464_concatenate_464[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_2640_conv2d_2640
//         bit 31~0 - Conv2d_2640_conv2d_2640[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_2222_max_pooling2d_2222
//         bit 31~0 - Max_pooling2d_2222_max_pooling2d_2222[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_2223_max_pooling2d_2223
//         bit 31~0 - Max_pooling2d_2223_max_pooling2d_2223[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_2224_max_pooling2d_2224
//         bit 31~0 - Max_pooling2d_2224_max_pooling2d_2224[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Flatten_238_flatten_238
//         bit 31~0 - Flatten_238_flatten_238[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_2139_dense_2139
//         bit 31~0 - Dense_2139_dense_2139[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_2140_dense_2140
//         bit 31~0 - Dense_2140_dense_2140[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_2638_weight_conv2d_2638_weight
//         bit 31~0 - Conv2d_2638_weight_conv2d_2638_weight[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_2638_bias_conv2d_2638_bias
//         bit 31~0 - Conv2d_2638_bias_conv2d_2638_bias[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_2639_weight_conv2d_2639_weight
//         bit 31~0 - Conv2d_2639_weight_conv2d_2639_weight[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_2639_bias_conv2d_2639_bias
//         bit 31~0 - Conv2d_2639_bias_conv2d_2639_bias[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_2137_weight_dense_2137_weight
//         bit 31~0 - Dense_2137_weight_dense_2137_weight[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_2137_bias_dense_2137_bias
//         bit 31~0 - Dense_2137_bias_dense_2137_bias[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_2138_weight_dense_2138_weight
//         bit 31~0 - Dense_2138_weight_dense_2138_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_2138_bias_dense_2138_bias
//         bit 31~0 - Dense_2138_bias_dense_2138_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_2640_weight_conv2d_2640_weight
//         bit 31~0 - Conv2d_2640_weight_conv2d_2640_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_2640_bias_conv2d_2640_bias
//         bit 31~0 - Conv2d_2640_bias_conv2d_2640_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_2139_weight_dense_2139_weight
//         bit 31~0 - Dense_2139_weight_dense_2139_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_2139_bias_dense_2139_bias
//         bit 31~0 - Dense_2139_bias_dense_2139_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_2140_weight_dense_2140_weight
//         bit 31~0 - Dense_2140_weight_dense_2140_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_2140_bias_dense_2140_bias
//         bit 31~0 - Dense_2140_bias_dense_2140_bias[31:0] (Read/Write)
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2638_CONV2D_2638_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2638_CONV2D_2638_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2639_CONV2D_2639_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2639_CONV2D_2639_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2220_MAX_POOLING2D_2220_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2220_MAX_POOLING2D_2220_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2221_MAX_POOLING2D_2221_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2221_MAX_POOLING2D_2221_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2137_DENSE_2137_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2137_DENSE_2137_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2138_DENSE_2138_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2138_DENSE_2138_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_464_CONCATENATE_464_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_464_CONCATENATE_464_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2640_CONV2D_2640_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2640_CONV2D_2640_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2222_MAX_POOLING2D_2222_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2222_MAX_POOLING2D_2222_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2223_MAX_POOLING2D_2223_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2223_MAX_POOLING2D_2223_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2224_MAX_POOLING2D_2224_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2224_MAX_POOLING2D_2224_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_238_FLATTEN_238_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_238_FLATTEN_238_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2139_DENSE_2139_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2139_DENSE_2139_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2140_DENSE_2140_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2140_DENSE_2140_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2638_WEIGHT_CONV2D_2638_WEIGHT_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2638_WEIGHT_CONV2D_2638_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2638_BIAS_CONV2D_2638_BIAS_DATA     0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2638_BIAS_CONV2D_2638_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2639_WEIGHT_CONV2D_2639_WEIGHT_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2639_WEIGHT_CONV2D_2639_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2639_BIAS_CONV2D_2639_BIAS_DATA     0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2639_BIAS_CONV2D_2639_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2137_WEIGHT_DENSE_2137_WEIGHT_DATA   0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2137_WEIGHT_DENSE_2137_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2137_BIAS_DENSE_2137_BIAS_DATA       0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2137_BIAS_DENSE_2137_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2138_WEIGHT_DENSE_2138_WEIGHT_DATA   0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2138_WEIGHT_DENSE_2138_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2138_BIAS_DENSE_2138_BIAS_DATA       0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2138_BIAS_DENSE_2138_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2640_WEIGHT_CONV2D_2640_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2640_WEIGHT_CONV2D_2640_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2640_BIAS_CONV2D_2640_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2640_BIAS_CONV2D_2640_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2139_WEIGHT_DENSE_2139_WEIGHT_DATA   0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2139_WEIGHT_DENSE_2139_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2139_BIAS_DENSE_2139_BIAS_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2139_BIAS_DENSE_2139_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2140_WEIGHT_DENSE_2140_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2140_WEIGHT_DENSE_2140_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2140_BIAS_DENSE_2140_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2140_BIAS_DENSE_2140_BIAS_DATA       32

