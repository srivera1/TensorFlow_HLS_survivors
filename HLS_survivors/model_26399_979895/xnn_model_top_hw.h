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
// 0x028 : Data signal of Dense_2031_dense_2031
//         bit 31~0 - Dense_2031_dense_2031[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Dense_2034_dense_2034
//         bit 31~0 - Dense_2034_dense_2034[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Dense_2032_dense_2032
//         bit 31~0 - Dense_2032_dense_2032[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Dense_2035_dense_2035
//         bit 31~0 - Dense_2035_dense_2035[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2033_dense_2033
//         bit 31~0 - Dense_2033_dense_2033[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2036_dense_2036
//         bit 31~0 - Dense_2036_dense_2036[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_1628_concatenate_1628
//         bit 31~0 - Concatenate_1628_concatenate_1628[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_640_conv2d_640
//         bit 31~0 - Conv2d_640_conv2d_640[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Conv2d_641_conv2d_641
//         bit 31~0 - Conv2d_641_conv2d_641[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_281_max_pooling2d_281
//         bit 31~0 - Max_pooling2d_281_max_pooling2d_281[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_642_conv2d_642
//         bit 31~0 - Conv2d_642_conv2d_642[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_643_conv2d_643
//         bit 31~0 - Conv2d_643_conv2d_643[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_282_max_pooling2d_282
//         bit 31~0 - Max_pooling2d_282_max_pooling2d_282[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_644_conv2d_644
//         bit 31~0 - Conv2d_644_conv2d_644[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_645_conv2d_645
//         bit 31~0 - Conv2d_645_conv2d_645[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Flatten_64_flatten_64
//         bit 31~0 - Flatten_64_flatten_64[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_2067_dense_2067
//         bit 31~0 - Dense_2067_dense_2067[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_2068_dense_2068
//         bit 31~0 - Dense_2068_dense_2068[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_2031_weight_dense_2031_weight
//         bit 31~0 - Dense_2031_weight_dense_2031_weight[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_2031_bias_dense_2031_bias
//         bit 31~0 - Dense_2031_bias_dense_2031_bias[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_2034_weight_dense_2034_weight
//         bit 31~0 - Dense_2034_weight_dense_2034_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_2034_bias_dense_2034_bias
//         bit 31~0 - Dense_2034_bias_dense_2034_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_2032_weight_dense_2032_weight
//         bit 31~0 - Dense_2032_weight_dense_2032_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_2032_bias_dense_2032_bias
//         bit 31~0 - Dense_2032_bias_dense_2032_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_2035_weight_dense_2035_weight
//         bit 31~0 - Dense_2035_weight_dense_2035_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_2035_bias_dense_2035_bias
//         bit 31~0 - Dense_2035_bias_dense_2035_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_2033_weight_dense_2033_weight
//         bit 31~0 - Dense_2033_weight_dense_2033_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_2033_bias_dense_2033_bias
//         bit 31~0 - Dense_2033_bias_dense_2033_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_2036_weight_dense_2036_weight
//         bit 31~0 - Dense_2036_weight_dense_2036_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_2036_bias_dense_2036_bias
//         bit 31~0 - Dense_2036_bias_dense_2036_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_640_weight_conv2d_640_weight
//         bit 31~0 - Conv2d_640_weight_conv2d_640_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_640_bias_conv2d_640_bias
//         bit 31~0 - Conv2d_640_bias_conv2d_640_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_641_weight_conv2d_641_weight
//         bit 31~0 - Conv2d_641_weight_conv2d_641_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_641_bias_conv2d_641_bias
//         bit 31~0 - Conv2d_641_bias_conv2d_641_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_642_weight_conv2d_642_weight
//         bit 31~0 - Conv2d_642_weight_conv2d_642_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_642_bias_conv2d_642_bias
//         bit 31~0 - Conv2d_642_bias_conv2d_642_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_643_weight_conv2d_643_weight
//         bit 31~0 - Conv2d_643_weight_conv2d_643_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_643_bias_conv2d_643_bias
//         bit 31~0 - Conv2d_643_bias_conv2d_643_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_644_weight_conv2d_644_weight
//         bit 31~0 - Conv2d_644_weight_conv2d_644_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_644_bias_conv2d_644_bias
//         bit 31~0 - Conv2d_644_bias_conv2d_644_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_645_weight_conv2d_645_weight
//         bit 31~0 - Conv2d_645_weight_conv2d_645_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_645_bias_conv2d_645_bias
//         bit 31~0 - Conv2d_645_bias_conv2d_645_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_2067_weight_dense_2067_weight
//         bit 31~0 - Dense_2067_weight_dense_2067_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_2067_bias_dense_2067_bias
//         bit 31~0 - Dense_2067_bias_dense_2067_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_2068_weight_dense_2068_weight
//         bit 31~0 - Dense_2068_weight_dense_2068_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_2068_bias_dense_2068_bias
//         bit 31~0 - Dense_2068_bias_dense_2068_bias[31:0] (Read/Write)
// 0x194 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                  0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                      0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                      0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                      0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT1_INPUT1_DATA                       0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT1_INPUT1_DATA                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT2_INPUT2_DATA                       0x020
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT2_INPUT2_DATA                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2031_DENSE_2031_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2031_DENSE_2031_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2034_DENSE_2034_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2034_DENSE_2034_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2032_DENSE_2032_DATA               0x038
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2032_DENSE_2032_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2035_DENSE_2035_DATA               0x040
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2035_DENSE_2035_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2033_DENSE_2033_DATA               0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2033_DENSE_2033_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2036_DENSE_2036_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2036_DENSE_2036_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_1628_CONCATENATE_1628_DATA   0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_1628_CONCATENATE_1628_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_640_CONV2D_640_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_640_CONV2D_640_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_641_CONV2D_641_DATA               0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_641_CONV2D_641_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_281_MAX_POOLING2D_281_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_281_MAX_POOLING2D_281_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_642_CONV2D_642_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_642_CONV2D_642_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_643_CONV2D_643_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_643_CONV2D_643_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_282_MAX_POOLING2D_282_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_282_MAX_POOLING2D_282_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_644_CONV2D_644_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_644_CONV2D_644_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_645_CONV2D_645_DATA               0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_645_CONV2D_645_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_64_FLATTEN_64_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_64_FLATTEN_64_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2067_DENSE_2067_DATA               0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2067_DENSE_2067_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2068_DENSE_2068_DATA               0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2068_DENSE_2068_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2031_WEIGHT_DENSE_2031_WEIGHT_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2031_WEIGHT_DENSE_2031_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2031_BIAS_DENSE_2031_BIAS_DATA     0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2031_BIAS_DENSE_2031_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2034_WEIGHT_DENSE_2034_WEIGHT_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2034_WEIGHT_DENSE_2034_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2034_BIAS_DENSE_2034_BIAS_DATA     0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2034_BIAS_DENSE_2034_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2032_WEIGHT_DENSE_2032_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2032_WEIGHT_DENSE_2032_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2032_BIAS_DENSE_2032_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2032_BIAS_DENSE_2032_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2035_WEIGHT_DENSE_2035_WEIGHT_DATA 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2035_WEIGHT_DENSE_2035_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2035_BIAS_DENSE_2035_BIAS_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2035_BIAS_DENSE_2035_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2033_WEIGHT_DENSE_2033_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2033_WEIGHT_DENSE_2033_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2033_BIAS_DENSE_2033_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2033_BIAS_DENSE_2033_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2036_WEIGHT_DENSE_2036_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2036_WEIGHT_DENSE_2036_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2036_BIAS_DENSE_2036_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2036_BIAS_DENSE_2036_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_640_WEIGHT_CONV2D_640_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_640_WEIGHT_CONV2D_640_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_640_BIAS_CONV2D_640_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_640_BIAS_CONV2D_640_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_641_WEIGHT_CONV2D_641_WEIGHT_DATA 0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_641_WEIGHT_CONV2D_641_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_641_BIAS_CONV2D_641_BIAS_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_641_BIAS_CONV2D_641_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_642_WEIGHT_CONV2D_642_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_642_WEIGHT_CONV2D_642_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_642_BIAS_CONV2D_642_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_642_BIAS_CONV2D_642_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_643_WEIGHT_CONV2D_643_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_643_WEIGHT_CONV2D_643_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_643_BIAS_CONV2D_643_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_643_BIAS_CONV2D_643_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_644_WEIGHT_CONV2D_644_WEIGHT_DATA 0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_644_WEIGHT_CONV2D_644_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_644_BIAS_CONV2D_644_BIAS_DATA     0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_644_BIAS_CONV2D_644_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_645_WEIGHT_CONV2D_645_WEIGHT_DATA 0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_645_WEIGHT_CONV2D_645_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_645_BIAS_CONV2D_645_BIAS_DATA     0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_645_BIAS_CONV2D_645_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2067_WEIGHT_DENSE_2067_WEIGHT_DATA 0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2067_WEIGHT_DENSE_2067_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2067_BIAS_DENSE_2067_BIAS_DATA     0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2067_BIAS_DENSE_2067_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2068_WEIGHT_DENSE_2068_WEIGHT_DATA 0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2068_WEIGHT_DENSE_2068_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2068_BIAS_DENSE_2068_BIAS_DATA     0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2068_BIAS_DENSE_2068_BIAS_DATA     32

