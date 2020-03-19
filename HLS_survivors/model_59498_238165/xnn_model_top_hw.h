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
// 0x020 : Data signal of Conv2d_2554_conv2d_2554
//         bit 31~0 - Conv2d_2554_conv2d_2554[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Conv2d_2559_conv2d_2559
//         bit 31~0 - Conv2d_2559_conv2d_2559[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Max_pooling2d_2076_max_pooling2d_2076
//         bit 31~0 - Max_pooling2d_2076_max_pooling2d_2076[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2080_max_pooling2d_2080
//         bit 31~0 - Max_pooling2d_2080_max_pooling2d_2080[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Dense_1942_dense_1942
//         bit 31~0 - Dense_1942_dense_1942[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Conv2d_2560_conv2d_2560
//         bit 31~0 - Conv2d_2560_conv2d_2560[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_2555_conv2d_2555
//         bit 31~0 - Conv2d_2555_conv2d_2555[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Max_pooling2d_2081_max_pooling2d_2081
//         bit 31~0 - Max_pooling2d_2081_max_pooling2d_2081[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Max_pooling2d_2077_max_pooling2d_2077
//         bit 31~0 - Max_pooling2d_2077_max_pooling2d_2077[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Dense_1945_dense_1945
//         bit 31~0 - Dense_1945_dense_1945[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_1943_dense_1943
//         bit 31~0 - Dense_1943_dense_1943[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_2561_conv2d_2561
//         bit 31~0 - Conv2d_2561_conv2d_2561[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_2556_conv2d_2556
//         bit 31~0 - Conv2d_2556_conv2d_2556[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_2082_max_pooling2d_2082
//         bit 31~0 - Max_pooling2d_2082_max_pooling2d_2082[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Max_pooling2d_2078_max_pooling2d_2078
//         bit 31~0 - Max_pooling2d_2078_max_pooling2d_2078[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_1946_dense_1946
//         bit 31~0 - Dense_1946_dense_1946[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_1944_dense_1944
//         bit 31~0 - Dense_1944_dense_1944[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_2083_max_pooling2d_2083
//         bit 31~0 - Max_pooling2d_2083_max_pooling2d_2083[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Max_pooling2d_2079_max_pooling2d_2079
//         bit 31~0 - Max_pooling2d_2079_max_pooling2d_2079[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_1947_dense_1947
//         bit 31~0 - Dense_1947_dense_1947[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Concatenate_168_concatenate_168
//         bit 31~0 - Concatenate_168_concatenate_168[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Flatten_56_flatten_56
//         bit 31~0 - Flatten_56_flatten_56[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_1948_dense_1948
//         bit 31~0 - Dense_1948_dense_1948[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_1949_dense_1949
//         bit 31~0 - Dense_1949_dense_1949[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_2554_weight_conv2d_2554_weight
//         bit 31~0 - Conv2d_2554_weight_conv2d_2554_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_2554_bias_conv2d_2554_bias
//         bit 31~0 - Conv2d_2554_bias_conv2d_2554_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_2559_weight_conv2d_2559_weight
//         bit 31~0 - Conv2d_2559_weight_conv2d_2559_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_2559_bias_conv2d_2559_bias
//         bit 31~0 - Conv2d_2559_bias_conv2d_2559_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_1942_weight_dense_1942_weight
//         bit 31~0 - Dense_1942_weight_dense_1942_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_1942_bias_dense_1942_bias
//         bit 31~0 - Dense_1942_bias_dense_1942_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_2560_weight_conv2d_2560_weight
//         bit 31~0 - Conv2d_2560_weight_conv2d_2560_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_2560_bias_conv2d_2560_bias
//         bit 31~0 - Conv2d_2560_bias_conv2d_2560_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_2555_weight_conv2d_2555_weight
//         bit 31~0 - Conv2d_2555_weight_conv2d_2555_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_2555_bias_conv2d_2555_bias
//         bit 31~0 - Conv2d_2555_bias_conv2d_2555_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_1945_weight_dense_1945_weight
//         bit 31~0 - Dense_1945_weight_dense_1945_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_1945_bias_dense_1945_bias
//         bit 31~0 - Dense_1945_bias_dense_1945_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_1943_weight_dense_1943_weight
//         bit 31~0 - Dense_1943_weight_dense_1943_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_1943_bias_dense_1943_bias
//         bit 31~0 - Dense_1943_bias_dense_1943_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_2561_weight_conv2d_2561_weight
//         bit 31~0 - Conv2d_2561_weight_conv2d_2561_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_2561_bias_conv2d_2561_bias
//         bit 31~0 - Conv2d_2561_bias_conv2d_2561_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_2556_weight_conv2d_2556_weight
//         bit 31~0 - Conv2d_2556_weight_conv2d_2556_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_2556_bias_conv2d_2556_bias
//         bit 31~0 - Conv2d_2556_bias_conv2d_2556_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_1946_weight_dense_1946_weight
//         bit 31~0 - Dense_1946_weight_dense_1946_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_1946_bias_dense_1946_bias
//         bit 31~0 - Dense_1946_bias_dense_1946_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_1944_weight_dense_1944_weight
//         bit 31~0 - Dense_1944_weight_dense_1944_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_1944_bias_dense_1944_bias
//         bit 31~0 - Dense_1944_bias_dense_1944_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_1947_weight_dense_1947_weight
//         bit 31~0 - Dense_1947_weight_dense_1947_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_1947_bias_dense_1947_bias
//         bit 31~0 - Dense_1947_bias_dense_1947_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_1948_weight_dense_1948_weight
//         bit 31~0 - Dense_1948_weight_dense_1948_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_1948_bias_dense_1948_bias
//         bit 31~0 - Dense_1948_bias_dense_1948_bias[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_1949_weight_dense_1949_weight
//         bit 31~0 - Dense_1949_weight_dense_1949_weight[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_1949_bias_dense_1949_bias
//         bit 31~0 - Dense_1949_bias_dense_1949_bias[31:0] (Read/Write)
// 0x1bc : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                           0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                           32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2554_CONV2D_2554_DATA               0x020
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2554_CONV2D_2554_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2559_CONV2D_2559_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2559_CONV2D_2559_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2076_MAX_POOLING2D_2076_DATA 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2076_MAX_POOLING2D_2076_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2080_MAX_POOLING2D_2080_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2080_MAX_POOLING2D_2080_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1942_DENSE_1942_DATA                 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1942_DENSE_1942_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2560_CONV2D_2560_DATA               0x048
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2560_CONV2D_2560_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2555_CONV2D_2555_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2555_CONV2D_2555_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2081_MAX_POOLING2D_2081_DATA 0x058
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2081_MAX_POOLING2D_2081_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2077_MAX_POOLING2D_2077_DATA 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2077_MAX_POOLING2D_2077_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1945_DENSE_1945_DATA                 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1945_DENSE_1945_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1943_DENSE_1943_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1943_DENSE_1943_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2561_CONV2D_2561_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2561_CONV2D_2561_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2556_CONV2D_2556_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2556_CONV2D_2556_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2082_MAX_POOLING2D_2082_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2082_MAX_POOLING2D_2082_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2078_MAX_POOLING2D_2078_DATA 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2078_MAX_POOLING2D_2078_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1946_DENSE_1946_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1946_DENSE_1946_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1944_DENSE_1944_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1944_DENSE_1944_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2083_MAX_POOLING2D_2083_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2083_MAX_POOLING2D_2083_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2079_MAX_POOLING2D_2079_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2079_MAX_POOLING2D_2079_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1947_DENSE_1947_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1947_DENSE_1947_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_168_CONCATENATE_168_DATA       0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_168_CONCATENATE_168_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_56_FLATTEN_56_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_56_FLATTEN_56_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1948_DENSE_1948_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1948_DENSE_1948_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1949_DENSE_1949_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1949_DENSE_1949_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2554_WEIGHT_CONV2D_2554_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2554_WEIGHT_CONV2D_2554_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2554_BIAS_CONV2D_2554_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2554_BIAS_CONV2D_2554_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2559_WEIGHT_CONV2D_2559_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2559_WEIGHT_CONV2D_2559_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2559_BIAS_CONV2D_2559_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2559_BIAS_CONV2D_2559_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1942_WEIGHT_DENSE_1942_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1942_WEIGHT_DENSE_1942_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1942_BIAS_DENSE_1942_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1942_BIAS_DENSE_1942_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2560_WEIGHT_CONV2D_2560_WEIGHT_DATA 0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2560_WEIGHT_CONV2D_2560_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2560_BIAS_CONV2D_2560_BIAS_DATA     0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2560_BIAS_CONV2D_2560_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2555_WEIGHT_CONV2D_2555_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2555_WEIGHT_CONV2D_2555_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2555_BIAS_CONV2D_2555_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2555_BIAS_CONV2D_2555_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1945_WEIGHT_DENSE_1945_WEIGHT_DATA   0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1945_WEIGHT_DENSE_1945_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1945_BIAS_DENSE_1945_BIAS_DATA       0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1945_BIAS_DENSE_1945_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1943_WEIGHT_DENSE_1943_WEIGHT_DATA   0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1943_WEIGHT_DENSE_1943_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1943_BIAS_DENSE_1943_BIAS_DATA       0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1943_BIAS_DENSE_1943_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2561_WEIGHT_CONV2D_2561_WEIGHT_DATA 0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2561_WEIGHT_CONV2D_2561_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2561_BIAS_CONV2D_2561_BIAS_DATA     0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2561_BIAS_CONV2D_2561_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2556_WEIGHT_CONV2D_2556_WEIGHT_DATA 0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2556_WEIGHT_CONV2D_2556_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2556_BIAS_CONV2D_2556_BIAS_DATA     0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2556_BIAS_CONV2D_2556_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1946_WEIGHT_DENSE_1946_WEIGHT_DATA   0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1946_WEIGHT_DENSE_1946_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1946_BIAS_DENSE_1946_BIAS_DATA       0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1946_BIAS_DENSE_1946_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1944_WEIGHT_DENSE_1944_WEIGHT_DATA   0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1944_WEIGHT_DENSE_1944_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1944_BIAS_DENSE_1944_BIAS_DATA       0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1944_BIAS_DENSE_1944_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1947_WEIGHT_DENSE_1947_WEIGHT_DATA   0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1947_WEIGHT_DENSE_1947_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1947_BIAS_DENSE_1947_BIAS_DATA       0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1947_BIAS_DENSE_1947_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1948_WEIGHT_DENSE_1948_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1948_WEIGHT_DENSE_1948_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1948_BIAS_DENSE_1948_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1948_BIAS_DENSE_1948_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1949_WEIGHT_DENSE_1949_WEIGHT_DATA   0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1949_WEIGHT_DENSE_1949_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1949_BIAS_DENSE_1949_BIAS_DATA       0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1949_BIAS_DENSE_1949_BIAS_DATA       32

