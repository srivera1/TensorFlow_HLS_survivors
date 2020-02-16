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
// 0x028 : Data signal of Conv2d_2568_conv2d_2568
//         bit 31~0 - Conv2d_2568_conv2d_2568[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2570_conv2d_2570
//         bit 31~0 - Conv2d_2570_conv2d_2570[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2168_max_pooling2d_2168
//         bit 31~0 - Max_pooling2d_2168_max_pooling2d_2168[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2169_max_pooling2d_2169
//         bit 31~0 - Max_pooling2d_2169_max_pooling2d_2169[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Conv2d_2569_conv2d_2569
//         bit 31~0 - Conv2d_2569_conv2d_2569[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_2571_conv2d_2571
//         bit 31~0 - Conv2d_2571_conv2d_2571[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_452_concatenate_452
//         bit 31~0 - Concatenate_452_concatenate_452[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_2572_conv2d_2572
//         bit 31~0 - Conv2d_2572_conv2d_2572[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_2170_max_pooling2d_2170
//         bit 31~0 - Max_pooling2d_2170_max_pooling2d_2170[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_2084_dense_2084
//         bit 31~0 - Dense_2084_dense_2084[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_2573_conv2d_2573
//         bit 31~0 - Conv2d_2573_conv2d_2573[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_2574_conv2d_2574
//         bit 31~0 - Conv2d_2574_conv2d_2574[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_2085_dense_2085
//         bit 31~0 - Dense_2085_dense_2085[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_2086_dense_2086
//         bit 31~0 - Dense_2086_dense_2086[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Concatenate_453_concatenate_453
//         bit 31~0 - Concatenate_453_concatenate_453[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_2087_dense_2087
//         bit 31~0 - Dense_2087_dense_2087[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Flatten_233_flatten_233
//         bit 31~0 - Flatten_233_flatten_233[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_2088_dense_2088
//         bit 31~0 - Dense_2088_dense_2088[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_2089_dense_2089
//         bit 31~0 - Dense_2089_dense_2089[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_2090_dense_2090
//         bit 31~0 - Dense_2090_dense_2090[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_2568_weight_conv2d_2568_weight
//         bit 31~0 - Conv2d_2568_weight_conv2d_2568_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_2568_bias_conv2d_2568_bias
//         bit 31~0 - Conv2d_2568_bias_conv2d_2568_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_2570_weight_conv2d_2570_weight
//         bit 31~0 - Conv2d_2570_weight_conv2d_2570_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_2570_bias_conv2d_2570_bias
//         bit 31~0 - Conv2d_2570_bias_conv2d_2570_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_2569_weight_conv2d_2569_weight
//         bit 31~0 - Conv2d_2569_weight_conv2d_2569_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_2569_bias_conv2d_2569_bias
//         bit 31~0 - Conv2d_2569_bias_conv2d_2569_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_2571_weight_conv2d_2571_weight
//         bit 31~0 - Conv2d_2571_weight_conv2d_2571_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_2571_bias_conv2d_2571_bias
//         bit 31~0 - Conv2d_2571_bias_conv2d_2571_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_2572_weight_conv2d_2572_weight
//         bit 31~0 - Conv2d_2572_weight_conv2d_2572_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_2572_bias_conv2d_2572_bias
//         bit 31~0 - Conv2d_2572_bias_conv2d_2572_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_2084_weight_dense_2084_weight
//         bit 31~0 - Dense_2084_weight_dense_2084_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_2084_bias_dense_2084_bias
//         bit 31~0 - Dense_2084_bias_dense_2084_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_2573_weight_conv2d_2573_weight
//         bit 31~0 - Conv2d_2573_weight_conv2d_2573_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_2573_bias_conv2d_2573_bias
//         bit 31~0 - Conv2d_2573_bias_conv2d_2573_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_2574_weight_conv2d_2574_weight
//         bit 31~0 - Conv2d_2574_weight_conv2d_2574_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_2574_bias_conv2d_2574_bias
//         bit 31~0 - Conv2d_2574_bias_conv2d_2574_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_2085_weight_dense_2085_weight
//         bit 31~0 - Dense_2085_weight_dense_2085_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_2085_bias_dense_2085_bias
//         bit 31~0 - Dense_2085_bias_dense_2085_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_2086_weight_dense_2086_weight
//         bit 31~0 - Dense_2086_weight_dense_2086_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_2086_bias_dense_2086_bias
//         bit 31~0 - Dense_2086_bias_dense_2086_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_2087_weight_dense_2087_weight
//         bit 31~0 - Dense_2087_weight_dense_2087_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_2087_bias_dense_2087_bias
//         bit 31~0 - Dense_2087_bias_dense_2087_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_2088_weight_dense_2088_weight
//         bit 31~0 - Dense_2088_weight_dense_2088_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_2088_bias_dense_2088_bias
//         bit 31~0 - Dense_2088_bias_dense_2088_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_2089_weight_dense_2089_weight
//         bit 31~0 - Dense_2089_weight_dense_2089_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_2089_bias_dense_2089_bias
//         bit 31~0 - Dense_2089_bias_dense_2089_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_2090_weight_dense_2090_weight
//         bit 31~0 - Dense_2090_weight_dense_2090_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_2090_bias_dense_2090_bias
//         bit 31~0 - Dense_2090_bias_dense_2090_bias[31:0] (Read/Write)
// 0x1a4 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2568_CONV2D_2568_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2568_CONV2D_2568_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2570_CONV2D_2570_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2570_CONV2D_2570_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2168_MAX_POOLING2D_2168_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2168_MAX_POOLING2D_2168_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2169_MAX_POOLING2D_2169_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2169_MAX_POOLING2D_2169_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2569_CONV2D_2569_DATA               0x048
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2569_CONV2D_2569_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2571_CONV2D_2571_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2571_CONV2D_2571_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_452_CONCATENATE_452_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_452_CONCATENATE_452_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2572_CONV2D_2572_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2572_CONV2D_2572_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2170_MAX_POOLING2D_2170_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2170_MAX_POOLING2D_2170_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2084_DENSE_2084_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2084_DENSE_2084_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2573_CONV2D_2573_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2573_CONV2D_2573_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2574_CONV2D_2574_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2574_CONV2D_2574_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2085_DENSE_2085_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2085_DENSE_2085_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2086_DENSE_2086_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2086_DENSE_2086_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_453_CONCATENATE_453_DATA       0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_453_CONCATENATE_453_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2087_DENSE_2087_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2087_DENSE_2087_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_233_FLATTEN_233_DATA               0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_233_FLATTEN_233_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2088_DENSE_2088_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2088_DENSE_2088_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2089_DENSE_2089_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2089_DENSE_2089_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2090_DENSE_2090_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2090_DENSE_2090_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2568_WEIGHT_CONV2D_2568_WEIGHT_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2568_WEIGHT_CONV2D_2568_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2568_BIAS_CONV2D_2568_BIAS_DATA     0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2568_BIAS_CONV2D_2568_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2570_WEIGHT_CONV2D_2570_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2570_WEIGHT_CONV2D_2570_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2570_BIAS_CONV2D_2570_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2570_BIAS_CONV2D_2570_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2569_WEIGHT_CONV2D_2569_WEIGHT_DATA 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2569_WEIGHT_CONV2D_2569_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2569_BIAS_CONV2D_2569_BIAS_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2569_BIAS_CONV2D_2569_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2571_WEIGHT_CONV2D_2571_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2571_WEIGHT_CONV2D_2571_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2571_BIAS_CONV2D_2571_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2571_BIAS_CONV2D_2571_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2572_WEIGHT_CONV2D_2572_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2572_WEIGHT_CONV2D_2572_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2572_BIAS_CONV2D_2572_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2572_BIAS_CONV2D_2572_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2084_WEIGHT_DENSE_2084_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2084_WEIGHT_DENSE_2084_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2084_BIAS_DENSE_2084_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2084_BIAS_DENSE_2084_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2573_WEIGHT_CONV2D_2573_WEIGHT_DATA 0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2573_WEIGHT_CONV2D_2573_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2573_BIAS_CONV2D_2573_BIAS_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2573_BIAS_CONV2D_2573_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2574_WEIGHT_CONV2D_2574_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2574_WEIGHT_CONV2D_2574_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2574_BIAS_CONV2D_2574_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2574_BIAS_CONV2D_2574_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2085_WEIGHT_DENSE_2085_WEIGHT_DATA   0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2085_WEIGHT_DENSE_2085_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2085_BIAS_DENSE_2085_BIAS_DATA       0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2085_BIAS_DENSE_2085_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2086_WEIGHT_DENSE_2086_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2086_WEIGHT_DENSE_2086_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2086_BIAS_DENSE_2086_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2086_BIAS_DENSE_2086_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2087_WEIGHT_DENSE_2087_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2087_WEIGHT_DENSE_2087_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2087_BIAS_DENSE_2087_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2087_BIAS_DENSE_2087_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2088_WEIGHT_DENSE_2088_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2088_WEIGHT_DENSE_2088_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2088_BIAS_DENSE_2088_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2088_BIAS_DENSE_2088_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2089_WEIGHT_DENSE_2089_WEIGHT_DATA   0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2089_WEIGHT_DENSE_2089_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2089_BIAS_DENSE_2089_BIAS_DATA       0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2089_BIAS_DENSE_2089_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2090_WEIGHT_DENSE_2090_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2090_WEIGHT_DENSE_2090_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2090_BIAS_DENSE_2090_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2090_BIAS_DENSE_2090_BIAS_DATA       32

