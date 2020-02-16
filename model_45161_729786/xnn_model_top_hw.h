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
// 0x028 : Data signal of Conv2d_2318_conv2d_2318
//         bit 31~0 - Conv2d_2318_conv2d_2318[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2319_conv2d_2319
//         bit 31~0 - Conv2d_2319_conv2d_2319[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_1950_max_pooling2d_1950
//         bit 31~0 - Max_pooling2d_1950_max_pooling2d_1950[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_1951_max_pooling2d_1951
//         bit 31~0 - Max_pooling2d_1951_max_pooling2d_1951[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_1886_dense_1886
//         bit 31~0 - Dense_1886_dense_1886[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_1887_dense_1887
//         bit 31~0 - Dense_1887_dense_1887[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_406_concatenate_406
//         bit 31~0 - Concatenate_406_concatenate_406[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_2320_conv2d_2320
//         bit 31~0 - Conv2d_2320_conv2d_2320[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_1952_max_pooling2d_1952
//         bit 31~0 - Max_pooling2d_1952_max_pooling2d_1952[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_1953_max_pooling2d_1953
//         bit 31~0 - Max_pooling2d_1953_max_pooling2d_1953[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_1954_max_pooling2d_1954
//         bit 31~0 - Max_pooling2d_1954_max_pooling2d_1954[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Flatten_208_flatten_208
//         bit 31~0 - Flatten_208_flatten_208[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_1888_dense_1888
//         bit 31~0 - Dense_1888_dense_1888[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_1889_dense_1889
//         bit 31~0 - Dense_1889_dense_1889[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_1890_dense_1890
//         bit 31~0 - Dense_1890_dense_1890[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_2318_weight_conv2d_2318_weight
//         bit 31~0 - Conv2d_2318_weight_conv2d_2318_weight[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_2318_bias_conv2d_2318_bias
//         bit 31~0 - Conv2d_2318_bias_conv2d_2318_bias[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_2319_weight_conv2d_2319_weight
//         bit 31~0 - Conv2d_2319_weight_conv2d_2319_weight[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_2319_bias_conv2d_2319_bias
//         bit 31~0 - Conv2d_2319_bias_conv2d_2319_bias[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_1886_weight_dense_1886_weight
//         bit 31~0 - Dense_1886_weight_dense_1886_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_1886_bias_dense_1886_bias
//         bit 31~0 - Dense_1886_bias_dense_1886_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_1887_weight_dense_1887_weight
//         bit 31~0 - Dense_1887_weight_dense_1887_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_1887_bias_dense_1887_bias
//         bit 31~0 - Dense_1887_bias_dense_1887_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_2320_weight_conv2d_2320_weight
//         bit 31~0 - Conv2d_2320_weight_conv2d_2320_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_2320_bias_conv2d_2320_bias
//         bit 31~0 - Conv2d_2320_bias_conv2d_2320_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_1888_weight_dense_1888_weight
//         bit 31~0 - Dense_1888_weight_dense_1888_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_1888_bias_dense_1888_bias
//         bit 31~0 - Dense_1888_bias_dense_1888_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_1889_weight_dense_1889_weight
//         bit 31~0 - Dense_1889_weight_dense_1889_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_1889_bias_dense_1889_bias
//         bit 31~0 - Dense_1889_bias_dense_1889_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_1890_weight_dense_1890_weight
//         bit 31~0 - Dense_1890_weight_dense_1890_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_1890_bias_dense_1890_bias
//         bit 31~0 - Dense_1890_bias_dense_1890_bias[31:0] (Read/Write)
// 0x11c : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2318_CONV2D_2318_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2318_CONV2D_2318_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2319_CONV2D_2319_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2319_CONV2D_2319_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1950_MAX_POOLING2D_1950_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1950_MAX_POOLING2D_1950_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1951_MAX_POOLING2D_1951_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1951_MAX_POOLING2D_1951_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1886_DENSE_1886_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1886_DENSE_1886_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1887_DENSE_1887_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1887_DENSE_1887_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_406_CONCATENATE_406_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_406_CONCATENATE_406_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2320_CONV2D_2320_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2320_CONV2D_2320_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1952_MAX_POOLING2D_1952_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1952_MAX_POOLING2D_1952_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1953_MAX_POOLING2D_1953_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1953_MAX_POOLING2D_1953_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1954_MAX_POOLING2D_1954_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1954_MAX_POOLING2D_1954_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_208_FLATTEN_208_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_208_FLATTEN_208_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1888_DENSE_1888_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1888_DENSE_1888_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1889_DENSE_1889_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1889_DENSE_1889_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1890_DENSE_1890_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1890_DENSE_1890_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2318_WEIGHT_CONV2D_2318_WEIGHT_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2318_WEIGHT_CONV2D_2318_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2318_BIAS_CONV2D_2318_BIAS_DATA     0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2318_BIAS_CONV2D_2318_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2319_WEIGHT_CONV2D_2319_WEIGHT_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2319_WEIGHT_CONV2D_2319_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2319_BIAS_CONV2D_2319_BIAS_DATA     0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2319_BIAS_CONV2D_2319_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1886_WEIGHT_DENSE_1886_WEIGHT_DATA   0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1886_WEIGHT_DENSE_1886_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1886_BIAS_DENSE_1886_BIAS_DATA       0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1886_BIAS_DENSE_1886_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1887_WEIGHT_DENSE_1887_WEIGHT_DATA   0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1887_WEIGHT_DENSE_1887_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1887_BIAS_DENSE_1887_BIAS_DATA       0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1887_BIAS_DENSE_1887_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2320_WEIGHT_CONV2D_2320_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2320_WEIGHT_CONV2D_2320_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2320_BIAS_CONV2D_2320_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2320_BIAS_CONV2D_2320_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1888_WEIGHT_DENSE_1888_WEIGHT_DATA   0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1888_WEIGHT_DENSE_1888_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1888_BIAS_DENSE_1888_BIAS_DATA       0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1888_BIAS_DENSE_1888_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1889_WEIGHT_DENSE_1889_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1889_WEIGHT_DENSE_1889_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1889_BIAS_DENSE_1889_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1889_BIAS_DENSE_1889_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1890_WEIGHT_DENSE_1890_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1890_WEIGHT_DENSE_1890_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1890_BIAS_DENSE_1890_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1890_BIAS_DENSE_1890_BIAS_DATA       32

