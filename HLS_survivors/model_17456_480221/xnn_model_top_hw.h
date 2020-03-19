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
// 0x028 : Data signal of Conv2d_2335_conv2d_2335
//         bit 31~0 - Conv2d_2335_conv2d_2335[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2337_conv2d_2337
//         bit 31~0 - Conv2d_2337_conv2d_2337[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_1967_max_pooling2d_1967
//         bit 31~0 - Max_pooling2d_1967_max_pooling2d_1967[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_1968_max_pooling2d_1968
//         bit 31~0 - Max_pooling2d_1968_max_pooling2d_1968[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_1904_dense_1904
//         bit 31~0 - Dense_1904_dense_1904[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_1905_dense_1905
//         bit 31~0 - Dense_1905_dense_1905[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_2336_conv2d_2336
//         bit 31~0 - Conv2d_2336_conv2d_2336[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_2338_conv2d_2338
//         bit 31~0 - Conv2d_2338_conv2d_2338[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Concatenate_409_concatenate_409
//         bit 31~0 - Concatenate_409_concatenate_409[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_2339_conv2d_2339
//         bit 31~0 - Conv2d_2339_conv2d_2339[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_1969_max_pooling2d_1969
//         bit 31~0 - Max_pooling2d_1969_max_pooling2d_1969[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_2340_conv2d_2340
//         bit 31~0 - Conv2d_2340_conv2d_2340[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_1970_max_pooling2d_1970
//         bit 31~0 - Max_pooling2d_1970_max_pooling2d_1970[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Flatten_210_flatten_210
//         bit 31~0 - Flatten_210_flatten_210[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_1906_dense_1906
//         bit 31~0 - Dense_1906_dense_1906[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_1907_dense_1907
//         bit 31~0 - Dense_1907_dense_1907[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_2335_weight_conv2d_2335_weight
//         bit 31~0 - Conv2d_2335_weight_conv2d_2335_weight[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_2335_bias_conv2d_2335_bias
//         bit 31~0 - Conv2d_2335_bias_conv2d_2335_bias[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_2337_weight_conv2d_2337_weight
//         bit 31~0 - Conv2d_2337_weight_conv2d_2337_weight[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Conv2d_2337_bias_conv2d_2337_bias
//         bit 31~0 - Conv2d_2337_bias_conv2d_2337_bias[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_1904_weight_dense_1904_weight
//         bit 31~0 - Dense_1904_weight_dense_1904_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_1904_bias_dense_1904_bias
//         bit 31~0 - Dense_1904_bias_dense_1904_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_1905_weight_dense_1905_weight
//         bit 31~0 - Dense_1905_weight_dense_1905_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_1905_bias_dense_1905_bias
//         bit 31~0 - Dense_1905_bias_dense_1905_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_2336_weight_conv2d_2336_weight
//         bit 31~0 - Conv2d_2336_weight_conv2d_2336_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_2336_bias_conv2d_2336_bias
//         bit 31~0 - Conv2d_2336_bias_conv2d_2336_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_2338_weight_conv2d_2338_weight
//         bit 31~0 - Conv2d_2338_weight_conv2d_2338_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_2338_bias_conv2d_2338_bias
//         bit 31~0 - Conv2d_2338_bias_conv2d_2338_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_2339_weight_conv2d_2339_weight
//         bit 31~0 - Conv2d_2339_weight_conv2d_2339_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_2339_bias_conv2d_2339_bias
//         bit 31~0 - Conv2d_2339_bias_conv2d_2339_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_2340_weight_conv2d_2340_weight
//         bit 31~0 - Conv2d_2340_weight_conv2d_2340_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_2340_bias_conv2d_2340_bias
//         bit 31~0 - Conv2d_2340_bias_conv2d_2340_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_1906_weight_dense_1906_weight
//         bit 31~0 - Dense_1906_weight_dense_1906_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_1906_bias_dense_1906_bias
//         bit 31~0 - Dense_1906_bias_dense_1906_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_1907_weight_dense_1907_weight
//         bit 31~0 - Dense_1907_weight_dense_1907_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_1907_bias_dense_1907_bias
//         bit 31~0 - Dense_1907_bias_dense_1907_bias[31:0] (Read/Write)
// 0x144 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2335_CONV2D_2335_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2335_CONV2D_2335_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2337_CONV2D_2337_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2337_CONV2D_2337_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1967_MAX_POOLING2D_1967_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1967_MAX_POOLING2D_1967_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1968_MAX_POOLING2D_1968_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1968_MAX_POOLING2D_1968_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1904_DENSE_1904_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1904_DENSE_1904_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1905_DENSE_1905_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1905_DENSE_1905_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2336_CONV2D_2336_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2336_CONV2D_2336_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2338_CONV2D_2338_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2338_CONV2D_2338_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_409_CONCATENATE_409_DATA       0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_409_CONCATENATE_409_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2339_CONV2D_2339_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2339_CONV2D_2339_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1969_MAX_POOLING2D_1969_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1969_MAX_POOLING2D_1969_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2340_CONV2D_2340_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2340_CONV2D_2340_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1970_MAX_POOLING2D_1970_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1970_MAX_POOLING2D_1970_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_210_FLATTEN_210_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_210_FLATTEN_210_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1906_DENSE_1906_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1906_DENSE_1906_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1907_DENSE_1907_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1907_DENSE_1907_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2335_WEIGHT_CONV2D_2335_WEIGHT_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2335_WEIGHT_CONV2D_2335_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2335_BIAS_CONV2D_2335_BIAS_DATA     0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2335_BIAS_CONV2D_2335_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2337_WEIGHT_CONV2D_2337_WEIGHT_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2337_WEIGHT_CONV2D_2337_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2337_BIAS_CONV2D_2337_BIAS_DATA     0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2337_BIAS_CONV2D_2337_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1904_WEIGHT_DENSE_1904_WEIGHT_DATA   0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1904_WEIGHT_DENSE_1904_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1904_BIAS_DENSE_1904_BIAS_DATA       0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1904_BIAS_DENSE_1904_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1905_WEIGHT_DENSE_1905_WEIGHT_DATA   0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1905_WEIGHT_DENSE_1905_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1905_BIAS_DENSE_1905_BIAS_DATA       0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1905_BIAS_DENSE_1905_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2336_WEIGHT_CONV2D_2336_WEIGHT_DATA 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2336_WEIGHT_CONV2D_2336_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2336_BIAS_CONV2D_2336_BIAS_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2336_BIAS_CONV2D_2336_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2338_WEIGHT_CONV2D_2338_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2338_WEIGHT_CONV2D_2338_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2338_BIAS_CONV2D_2338_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2338_BIAS_CONV2D_2338_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2339_WEIGHT_CONV2D_2339_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2339_WEIGHT_CONV2D_2339_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2339_BIAS_CONV2D_2339_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2339_BIAS_CONV2D_2339_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2340_WEIGHT_CONV2D_2340_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2340_WEIGHT_CONV2D_2340_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2340_BIAS_CONV2D_2340_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2340_BIAS_CONV2D_2340_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1906_WEIGHT_DENSE_1906_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1906_WEIGHT_DENSE_1906_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1906_BIAS_DENSE_1906_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1906_BIAS_DENSE_1906_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1907_WEIGHT_DENSE_1907_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1907_WEIGHT_DENSE_1907_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1907_BIAS_DENSE_1907_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1907_BIAS_DENSE_1907_BIAS_DATA       32

