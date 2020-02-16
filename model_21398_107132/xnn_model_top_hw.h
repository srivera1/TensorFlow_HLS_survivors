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
// 0x028 : Data signal of Conv2d_2064_conv2d_2064
//         bit 31~0 - Conv2d_2064_conv2d_2064[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2066_conv2d_2066
//         bit 31~0 - Conv2d_2066_conv2d_2066[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_1642_max_pooling2d_1642
//         bit 31~0 - Max_pooling2d_1642_max_pooling2d_1642[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_1643_max_pooling2d_1643
//         bit 31~0 - Max_pooling2d_1643_max_pooling2d_1643[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_1533_dense_1533
//         bit 31~0 - Dense_1533_dense_1533[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_1534_dense_1534
//         bit 31~0 - Dense_1534_dense_1534[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_2065_conv2d_2065
//         bit 31~0 - Conv2d_2065_conv2d_2065[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_2067_conv2d_2067
//         bit 31~0 - Conv2d_2067_conv2d_2067[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Concatenate_159_concatenate_159
//         bit 31~0 - Concatenate_159_concatenate_159[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_2068_conv2d_2068
//         bit 31~0 - Conv2d_2068_conv2d_2068[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_2069_conv2d_2069
//         bit 31~0 - Conv2d_2069_conv2d_2069[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_1644_max_pooling2d_1644
//         bit 31~0 - Max_pooling2d_1644_max_pooling2d_1644[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_1645_max_pooling2d_1645
//         bit 31~0 - Max_pooling2d_1645_max_pooling2d_1645[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Max_pooling2d_1646_max_pooling2d_1646
//         bit 31~0 - Max_pooling2d_1646_max_pooling2d_1646[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Flatten_53_flatten_53
//         bit 31~0 - Flatten_53_flatten_53[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_1535_dense_1535
//         bit 31~0 - Dense_1535_dense_1535[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_1536_dense_1536
//         bit 31~0 - Dense_1536_dense_1536[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_2064_weight_conv2d_2064_weight
//         bit 31~0 - Conv2d_2064_weight_conv2d_2064_weight[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_2064_bias_conv2d_2064_bias
//         bit 31~0 - Conv2d_2064_bias_conv2d_2064_bias[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Conv2d_2066_weight_conv2d_2066_weight
//         bit 31~0 - Conv2d_2066_weight_conv2d_2066_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_2066_bias_conv2d_2066_bias
//         bit 31~0 - Conv2d_2066_bias_conv2d_2066_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_1533_weight_dense_1533_weight
//         bit 31~0 - Dense_1533_weight_dense_1533_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_1533_bias_dense_1533_bias
//         bit 31~0 - Dense_1533_bias_dense_1533_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_1534_weight_dense_1534_weight
//         bit 31~0 - Dense_1534_weight_dense_1534_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_1534_bias_dense_1534_bias
//         bit 31~0 - Dense_1534_bias_dense_1534_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_2065_weight_conv2d_2065_weight
//         bit 31~0 - Conv2d_2065_weight_conv2d_2065_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_2065_bias_conv2d_2065_bias
//         bit 31~0 - Conv2d_2065_bias_conv2d_2065_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_2067_weight_conv2d_2067_weight
//         bit 31~0 - Conv2d_2067_weight_conv2d_2067_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_2067_bias_conv2d_2067_bias
//         bit 31~0 - Conv2d_2067_bias_conv2d_2067_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_2068_weight_conv2d_2068_weight
//         bit 31~0 - Conv2d_2068_weight_conv2d_2068_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_2068_bias_conv2d_2068_bias
//         bit 31~0 - Conv2d_2068_bias_conv2d_2068_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_2069_weight_conv2d_2069_weight
//         bit 31~0 - Conv2d_2069_weight_conv2d_2069_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_2069_bias_conv2d_2069_bias
//         bit 31~0 - Conv2d_2069_bias_conv2d_2069_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_1535_weight_dense_1535_weight
//         bit 31~0 - Dense_1535_weight_dense_1535_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_1535_bias_dense_1535_bias
//         bit 31~0 - Dense_1535_bias_dense_1535_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_1536_weight_dense_1536_weight
//         bit 31~0 - Dense_1536_weight_dense_1536_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_1536_bias_dense_1536_bias
//         bit 31~0 - Dense_1536_bias_dense_1536_bias[31:0] (Read/Write)
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2064_CONV2D_2064_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2064_CONV2D_2064_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2066_CONV2D_2066_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2066_CONV2D_2066_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1642_MAX_POOLING2D_1642_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1642_MAX_POOLING2D_1642_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1643_MAX_POOLING2D_1643_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1643_MAX_POOLING2D_1643_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1533_DENSE_1533_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1533_DENSE_1533_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1534_DENSE_1534_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1534_DENSE_1534_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2065_CONV2D_2065_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2065_CONV2D_2065_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2067_CONV2D_2067_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2067_CONV2D_2067_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_159_CONCATENATE_159_DATA       0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_159_CONCATENATE_159_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2068_CONV2D_2068_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2068_CONV2D_2068_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2069_CONV2D_2069_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2069_CONV2D_2069_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1644_MAX_POOLING2D_1644_DATA 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1644_MAX_POOLING2D_1644_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1645_MAX_POOLING2D_1645_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1645_MAX_POOLING2D_1645_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1646_MAX_POOLING2D_1646_DATA 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1646_MAX_POOLING2D_1646_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_53_FLATTEN_53_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_53_FLATTEN_53_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1535_DENSE_1535_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1535_DENSE_1535_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1536_DENSE_1536_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1536_DENSE_1536_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2064_WEIGHT_CONV2D_2064_WEIGHT_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2064_WEIGHT_CONV2D_2064_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2064_BIAS_CONV2D_2064_BIAS_DATA     0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2064_BIAS_CONV2D_2064_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2066_WEIGHT_CONV2D_2066_WEIGHT_DATA 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2066_WEIGHT_CONV2D_2066_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2066_BIAS_CONV2D_2066_BIAS_DATA     0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2066_BIAS_CONV2D_2066_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1533_WEIGHT_DENSE_1533_WEIGHT_DATA   0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1533_WEIGHT_DENSE_1533_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1533_BIAS_DENSE_1533_BIAS_DATA       0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1533_BIAS_DENSE_1533_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1534_WEIGHT_DENSE_1534_WEIGHT_DATA   0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1534_WEIGHT_DENSE_1534_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1534_BIAS_DENSE_1534_BIAS_DATA       0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1534_BIAS_DENSE_1534_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2065_WEIGHT_CONV2D_2065_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2065_WEIGHT_CONV2D_2065_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2065_BIAS_CONV2D_2065_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2065_BIAS_CONV2D_2065_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2067_WEIGHT_CONV2D_2067_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2067_WEIGHT_CONV2D_2067_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2067_BIAS_CONV2D_2067_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2067_BIAS_CONV2D_2067_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2068_WEIGHT_CONV2D_2068_WEIGHT_DATA 0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2068_WEIGHT_CONV2D_2068_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2068_BIAS_CONV2D_2068_BIAS_DATA     0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2068_BIAS_CONV2D_2068_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2069_WEIGHT_CONV2D_2069_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2069_WEIGHT_CONV2D_2069_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2069_BIAS_CONV2D_2069_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2069_BIAS_CONV2D_2069_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1535_WEIGHT_DENSE_1535_WEIGHT_DATA   0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1535_WEIGHT_DENSE_1535_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1535_BIAS_DENSE_1535_BIAS_DATA       0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1535_BIAS_DENSE_1535_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1536_WEIGHT_DENSE_1536_WEIGHT_DATA   0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1536_WEIGHT_DENSE_1536_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1536_BIAS_DENSE_1536_BIAS_DATA       0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1536_BIAS_DENSE_1536_BIAS_DATA       32

