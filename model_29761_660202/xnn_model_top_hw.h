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
// 0x028 : Data signal of Conv2d_3473_conv2d_3473
//         bit 31~0 - Conv2d_3473_conv2d_3473[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_3474_conv2d_3474
//         bit 31~0 - Conv2d_3474_conv2d_3474[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2933_max_pooling2d_2933
//         bit 31~0 - Max_pooling2d_2933_max_pooling2d_2933[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2934_max_pooling2d_2934
//         bit 31~0 - Max_pooling2d_2934_max_pooling2d_2934[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2802_dense_2802
//         bit 31~0 - Dense_2802_dense_2802[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2803_dense_2803
//         bit 31~0 - Dense_2803_dense_2803[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_604_concatenate_604
//         bit 31~0 - Concatenate_604_concatenate_604[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_3478_conv2d_3478
//         bit 31~0 - Conv2d_3478_conv2d_3478[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_2937_max_pooling2d_2937
//         bit 31~0 - Max_pooling2d_2937_max_pooling2d_2937[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_2938_max_pooling2d_2938
//         bit 31~0 - Max_pooling2d_2938_max_pooling2d_2938[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_2939_max_pooling2d_2939
//         bit 31~0 - Max_pooling2d_2939_max_pooling2d_2939[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Flatten_311_flatten_311
//         bit 31~0 - Flatten_311_flatten_311[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_2806_dense_2806
//         bit 31~0 - Dense_2806_dense_2806[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_2807_dense_2807
//         bit 31~0 - Dense_2807_dense_2807[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_3473_weight_conv2d_3473_weight
//         bit 31~0 - Conv2d_3473_weight_conv2d_3473_weight[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_3473_bias_conv2d_3473_bias
//         bit 31~0 - Conv2d_3473_bias_conv2d_3473_bias[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_3474_weight_conv2d_3474_weight
//         bit 31~0 - Conv2d_3474_weight_conv2d_3474_weight[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_3474_bias_conv2d_3474_bias
//         bit 31~0 - Conv2d_3474_bias_conv2d_3474_bias[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_2802_weight_dense_2802_weight
//         bit 31~0 - Dense_2802_weight_dense_2802_weight[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_2802_bias_dense_2802_bias
//         bit 31~0 - Dense_2802_bias_dense_2802_bias[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_2803_weight_dense_2803_weight
//         bit 31~0 - Dense_2803_weight_dense_2803_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_2803_bias_dense_2803_bias
//         bit 31~0 - Dense_2803_bias_dense_2803_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_3478_weight_conv2d_3478_weight
//         bit 31~0 - Conv2d_3478_weight_conv2d_3478_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_3478_bias_conv2d_3478_bias
//         bit 31~0 - Conv2d_3478_bias_conv2d_3478_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_2806_weight_dense_2806_weight
//         bit 31~0 - Dense_2806_weight_dense_2806_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_2806_bias_dense_2806_bias
//         bit 31~0 - Dense_2806_bias_dense_2806_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_2807_weight_dense_2807_weight
//         bit 31~0 - Dense_2807_weight_dense_2807_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_2807_bias_dense_2807_bias
//         bit 31~0 - Dense_2807_bias_dense_2807_bias[31:0] (Read/Write)
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3473_CONV2D_3473_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3473_CONV2D_3473_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3474_CONV2D_3474_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3474_CONV2D_3474_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2933_MAX_POOLING2D_2933_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2933_MAX_POOLING2D_2933_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2934_MAX_POOLING2D_2934_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2934_MAX_POOLING2D_2934_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2802_DENSE_2802_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2802_DENSE_2802_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2803_DENSE_2803_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2803_DENSE_2803_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_604_CONCATENATE_604_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_604_CONCATENATE_604_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3478_CONV2D_3478_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3478_CONV2D_3478_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2937_MAX_POOLING2D_2937_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2937_MAX_POOLING2D_2937_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2938_MAX_POOLING2D_2938_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2938_MAX_POOLING2D_2938_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2939_MAX_POOLING2D_2939_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2939_MAX_POOLING2D_2939_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_311_FLATTEN_311_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_311_FLATTEN_311_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2806_DENSE_2806_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2806_DENSE_2806_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2807_DENSE_2807_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2807_DENSE_2807_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3473_WEIGHT_CONV2D_3473_WEIGHT_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3473_WEIGHT_CONV2D_3473_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3473_BIAS_CONV2D_3473_BIAS_DATA     0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3473_BIAS_CONV2D_3473_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3474_WEIGHT_CONV2D_3474_WEIGHT_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3474_WEIGHT_CONV2D_3474_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3474_BIAS_CONV2D_3474_BIAS_DATA     0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3474_BIAS_CONV2D_3474_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2802_WEIGHT_DENSE_2802_WEIGHT_DATA   0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2802_WEIGHT_DENSE_2802_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2802_BIAS_DENSE_2802_BIAS_DATA       0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2802_BIAS_DENSE_2802_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2803_WEIGHT_DENSE_2803_WEIGHT_DATA   0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2803_WEIGHT_DENSE_2803_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2803_BIAS_DENSE_2803_BIAS_DATA       0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2803_BIAS_DENSE_2803_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3478_WEIGHT_CONV2D_3478_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3478_WEIGHT_CONV2D_3478_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3478_BIAS_CONV2D_3478_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3478_BIAS_CONV2D_3478_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2806_WEIGHT_DENSE_2806_WEIGHT_DATA   0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2806_WEIGHT_DENSE_2806_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2806_BIAS_DENSE_2806_BIAS_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2806_BIAS_DENSE_2806_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2807_WEIGHT_DENSE_2807_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2807_WEIGHT_DENSE_2807_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2807_BIAS_DENSE_2807_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2807_BIAS_DENSE_2807_BIAS_DATA       32

