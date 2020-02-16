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
// 0x020 : Data signal of Conv2d_8685_conv2d_8685
//         bit 31~0 - Conv2d_8685_conv2d_8685[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Conv2d_8689_conv2d_8689
//         bit 31~0 - Conv2d_8689_conv2d_8689[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Max_pooling2d_6166_max_pooling2d_6166
//         bit 31~0 - Max_pooling2d_6166_max_pooling2d_6166[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_6170_max_pooling2d_6170
//         bit 31~0 - Max_pooling2d_6170_max_pooling2d_6170[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Dense_6893_dense_6893
//         bit 31~0 - Dense_6893_dense_6893[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_6897_dense_6897
//         bit 31~0 - Dense_6897_dense_6897[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_8686_conv2d_8686
//         bit 31~0 - Conv2d_8686_conv2d_8686[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_8690_conv2d_8690
//         bit 31~0 - Conv2d_8690_conv2d_8690[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Max_pooling2d_6167_max_pooling2d_6167
//         bit 31~0 - Max_pooling2d_6167_max_pooling2d_6167[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_6171_max_pooling2d_6171
//         bit 31~0 - Max_pooling2d_6171_max_pooling2d_6171[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_6894_dense_6894
//         bit 31~0 - Dense_6894_dense_6894[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_6898_dense_6898
//         bit 31~0 - Dense_6898_dense_6898[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_8687_conv2d_8687
//         bit 31~0 - Conv2d_8687_conv2d_8687[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_8691_conv2d_8691
//         bit 31~0 - Conv2d_8691_conv2d_8691[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Max_pooling2d_6168_max_pooling2d_6168
//         bit 31~0 - Max_pooling2d_6168_max_pooling2d_6168[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_6172_max_pooling2d_6172
//         bit 31~0 - Max_pooling2d_6172_max_pooling2d_6172[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_6895_dense_6895
//         bit 31~0 - Dense_6895_dense_6895[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_6899_dense_6899
//         bit 31~0 - Dense_6899_dense_6899[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Max_pooling2d_6169_max_pooling2d_6169
//         bit 31~0 - Max_pooling2d_6169_max_pooling2d_6169[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Max_pooling2d_6173_max_pooling2d_6173
//         bit 31~0 - Max_pooling2d_6173_max_pooling2d_6173[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_6896_dense_6896
//         bit 31~0 - Dense_6896_dense_6896[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_6900_dense_6900
//         bit 31~0 - Dense_6900_dense_6900[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Concatenate_610_concatenate_610
//         bit 31~0 - Concatenate_610_concatenate_610[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Flatten_413_flatten_413
//         bit 31~0 - Flatten_413_flatten_413[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_6901_dense_6901
//         bit 31~0 - Dense_6901_dense_6901[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_6902_dense_6902
//         bit 31~0 - Dense_6902_dense_6902[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_8685_weight_conv2d_8685_weight
//         bit 31~0 - Conv2d_8685_weight_conv2d_8685_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_8685_bias_conv2d_8685_bias
//         bit 31~0 - Conv2d_8685_bias_conv2d_8685_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_8689_weight_conv2d_8689_weight
//         bit 31~0 - Conv2d_8689_weight_conv2d_8689_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_8689_bias_conv2d_8689_bias
//         bit 31~0 - Conv2d_8689_bias_conv2d_8689_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_6893_weight_dense_6893_weight
//         bit 31~0 - Dense_6893_weight_dense_6893_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_6893_bias_dense_6893_bias
//         bit 31~0 - Dense_6893_bias_dense_6893_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_6897_weight_dense_6897_weight
//         bit 31~0 - Dense_6897_weight_dense_6897_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_6897_bias_dense_6897_bias
//         bit 31~0 - Dense_6897_bias_dense_6897_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_8686_weight_conv2d_8686_weight
//         bit 31~0 - Conv2d_8686_weight_conv2d_8686_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_8686_bias_conv2d_8686_bias
//         bit 31~0 - Conv2d_8686_bias_conv2d_8686_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_8690_weight_conv2d_8690_weight
//         bit 31~0 - Conv2d_8690_weight_conv2d_8690_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_8690_bias_conv2d_8690_bias
//         bit 31~0 - Conv2d_8690_bias_conv2d_8690_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_6894_weight_dense_6894_weight
//         bit 31~0 - Dense_6894_weight_dense_6894_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_6894_bias_dense_6894_bias
//         bit 31~0 - Dense_6894_bias_dense_6894_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_6898_weight_dense_6898_weight
//         bit 31~0 - Dense_6898_weight_dense_6898_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_6898_bias_dense_6898_bias
//         bit 31~0 - Dense_6898_bias_dense_6898_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_8687_weight_conv2d_8687_weight
//         bit 31~0 - Conv2d_8687_weight_conv2d_8687_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_8687_bias_conv2d_8687_bias
//         bit 31~0 - Conv2d_8687_bias_conv2d_8687_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_8691_weight_conv2d_8691_weight
//         bit 31~0 - Conv2d_8691_weight_conv2d_8691_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_8691_bias_conv2d_8691_bias
//         bit 31~0 - Conv2d_8691_bias_conv2d_8691_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_6895_weight_dense_6895_weight
//         bit 31~0 - Dense_6895_weight_dense_6895_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_6895_bias_dense_6895_bias
//         bit 31~0 - Dense_6895_bias_dense_6895_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_6899_weight_dense_6899_weight
//         bit 31~0 - Dense_6899_weight_dense_6899_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_6899_bias_dense_6899_bias
//         bit 31~0 - Dense_6899_bias_dense_6899_bias[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_6896_weight_dense_6896_weight
//         bit 31~0 - Dense_6896_weight_dense_6896_weight[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_6896_bias_dense_6896_bias
//         bit 31~0 - Dense_6896_bias_dense_6896_bias[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_6900_weight_dense_6900_weight
//         bit 31~0 - Dense_6900_weight_dense_6900_weight[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_6900_bias_dense_6900_bias
//         bit 31~0 - Dense_6900_bias_dense_6900_bias[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_6901_weight_dense_6901_weight
//         bit 31~0 - Dense_6901_weight_dense_6901_weight[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_6901_bias_dense_6901_bias
//         bit 31~0 - Dense_6901_bias_dense_6901_bias[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_6902_weight_dense_6902_weight
//         bit 31~0 - Dense_6902_weight_dense_6902_weight[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_6902_bias_dense_6902_bias
//         bit 31~0 - Dense_6902_bias_dense_6902_bias[31:0] (Read/Write)
// 0x1ec : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                           0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                           32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8685_CONV2D_8685_DATA               0x020
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8685_CONV2D_8685_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8689_CONV2D_8689_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8689_CONV2D_8689_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_6166_MAX_POOLING2D_6166_DATA 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_6166_MAX_POOLING2D_6166_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_6170_MAX_POOLING2D_6170_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_6170_MAX_POOLING2D_6170_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6893_DENSE_6893_DATA                 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6893_DENSE_6893_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6897_DENSE_6897_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6897_DENSE_6897_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8686_CONV2D_8686_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8686_CONV2D_8686_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8690_CONV2D_8690_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8690_CONV2D_8690_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_6167_MAX_POOLING2D_6167_DATA 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_6167_MAX_POOLING2D_6167_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_6171_MAX_POOLING2D_6171_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_6171_MAX_POOLING2D_6171_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6894_DENSE_6894_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6894_DENSE_6894_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6898_DENSE_6898_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6898_DENSE_6898_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8687_CONV2D_8687_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8687_CONV2D_8687_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8691_CONV2D_8691_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8691_CONV2D_8691_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_6168_MAX_POOLING2D_6168_DATA 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_6168_MAX_POOLING2D_6168_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_6172_MAX_POOLING2D_6172_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_6172_MAX_POOLING2D_6172_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6895_DENSE_6895_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6895_DENSE_6895_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6899_DENSE_6899_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6899_DENSE_6899_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_6169_MAX_POOLING2D_6169_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_6169_MAX_POOLING2D_6169_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_6173_MAX_POOLING2D_6173_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_6173_MAX_POOLING2D_6173_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6896_DENSE_6896_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6896_DENSE_6896_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6900_DENSE_6900_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6900_DENSE_6900_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_610_CONCATENATE_610_DATA       0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_610_CONCATENATE_610_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_413_FLATTEN_413_DATA               0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_413_FLATTEN_413_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6901_DENSE_6901_DATA                 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6901_DENSE_6901_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6902_DENSE_6902_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6902_DENSE_6902_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8685_WEIGHT_CONV2D_8685_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8685_WEIGHT_CONV2D_8685_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8685_BIAS_CONV2D_8685_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8685_BIAS_CONV2D_8685_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8689_WEIGHT_CONV2D_8689_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8689_WEIGHT_CONV2D_8689_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8689_BIAS_CONV2D_8689_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8689_BIAS_CONV2D_8689_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6893_WEIGHT_DENSE_6893_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6893_WEIGHT_DENSE_6893_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6893_BIAS_DENSE_6893_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6893_BIAS_DENSE_6893_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6897_WEIGHT_DENSE_6897_WEIGHT_DATA   0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6897_WEIGHT_DENSE_6897_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6897_BIAS_DENSE_6897_BIAS_DATA       0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6897_BIAS_DENSE_6897_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8686_WEIGHT_CONV2D_8686_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8686_WEIGHT_CONV2D_8686_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8686_BIAS_CONV2D_8686_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8686_BIAS_CONV2D_8686_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8690_WEIGHT_CONV2D_8690_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8690_WEIGHT_CONV2D_8690_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8690_BIAS_CONV2D_8690_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8690_BIAS_CONV2D_8690_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6894_WEIGHT_DENSE_6894_WEIGHT_DATA   0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6894_WEIGHT_DENSE_6894_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6894_BIAS_DENSE_6894_BIAS_DATA       0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6894_BIAS_DENSE_6894_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6898_WEIGHT_DENSE_6898_WEIGHT_DATA   0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6898_WEIGHT_DENSE_6898_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6898_BIAS_DENSE_6898_BIAS_DATA       0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6898_BIAS_DENSE_6898_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8687_WEIGHT_CONV2D_8687_WEIGHT_DATA 0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8687_WEIGHT_CONV2D_8687_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8687_BIAS_CONV2D_8687_BIAS_DATA     0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8687_BIAS_CONV2D_8687_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8691_WEIGHT_CONV2D_8691_WEIGHT_DATA 0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8691_WEIGHT_CONV2D_8691_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_8691_BIAS_CONV2D_8691_BIAS_DATA     0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_8691_BIAS_CONV2D_8691_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6895_WEIGHT_DENSE_6895_WEIGHT_DATA   0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6895_WEIGHT_DENSE_6895_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6895_BIAS_DENSE_6895_BIAS_DATA       0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6895_BIAS_DENSE_6895_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6899_WEIGHT_DENSE_6899_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6899_WEIGHT_DENSE_6899_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6899_BIAS_DENSE_6899_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6899_BIAS_DENSE_6899_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6896_WEIGHT_DENSE_6896_WEIGHT_DATA   0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6896_WEIGHT_DENSE_6896_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6896_BIAS_DENSE_6896_BIAS_DATA       0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6896_BIAS_DENSE_6896_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6900_WEIGHT_DENSE_6900_WEIGHT_DATA   0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6900_WEIGHT_DENSE_6900_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6900_BIAS_DENSE_6900_BIAS_DATA       0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6900_BIAS_DENSE_6900_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6901_WEIGHT_DENSE_6901_WEIGHT_DATA   0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6901_WEIGHT_DENSE_6901_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6901_BIAS_DENSE_6901_BIAS_DATA       0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6901_BIAS_DENSE_6901_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6902_WEIGHT_DENSE_6902_WEIGHT_DATA   0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6902_WEIGHT_DENSE_6902_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6902_BIAS_DENSE_6902_BIAS_DATA       0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6902_BIAS_DENSE_6902_BIAS_DATA       32

