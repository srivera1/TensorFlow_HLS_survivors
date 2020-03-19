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
// 0x028 : Data signal of Conv2d_2518_conv2d_2518
//         bit 31~0 - Conv2d_2518_conv2d_2518[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2520_conv2d_2520
//         bit 31~0 - Conv2d_2520_conv2d_2520[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2126_max_pooling2d_2126
//         bit 31~0 - Max_pooling2d_2126_max_pooling2d_2126[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2127_max_pooling2d_2127
//         bit 31~0 - Max_pooling2d_2127_max_pooling2d_2127[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2049_dense_2049
//         bit 31~0 - Dense_2049_dense_2049[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2050_dense_2050
//         bit 31~0 - Dense_2050_dense_2050[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_2519_conv2d_2519
//         bit 31~0 - Conv2d_2519_conv2d_2519[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_2521_conv2d_2521
//         bit 31~0 - Conv2d_2521_conv2d_2521[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Concatenate_442_concatenate_442
//         bit 31~0 - Concatenate_442_concatenate_442[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_2525_conv2d_2525
//         bit 31~0 - Conv2d_2525_conv2d_2525[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_2528_conv2d_2528
//         bit 31~0 - Conv2d_2528_conv2d_2528[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_2130_max_pooling2d_2130
//         bit 31~0 - Max_pooling2d_2130_max_pooling2d_2130[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_2132_max_pooling2d_2132
//         bit 31~0 - Max_pooling2d_2132_max_pooling2d_2132[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_2053_dense_2053
//         bit 31~0 - Dense_2053_dense_2053[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_2055_dense_2055
//         bit 31~0 - Dense_2055_dense_2055[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_2526_conv2d_2526
//         bit 31~0 - Conv2d_2526_conv2d_2526[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_2529_conv2d_2529
//         bit 31~0 - Conv2d_2529_conv2d_2529[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Max_pooling2d_2131_max_pooling2d_2131
//         bit 31~0 - Max_pooling2d_2131_max_pooling2d_2131[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Max_pooling2d_2133_max_pooling2d_2133
//         bit 31~0 - Max_pooling2d_2133_max_pooling2d_2133[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_2054_dense_2054
//         bit 31~0 - Dense_2054_dense_2054[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_2056_dense_2056
//         bit 31~0 - Dense_2056_dense_2056[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Concatenate_444_concatenate_444
//         bit 31~0 - Concatenate_444_concatenate_444[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Flatten_228_flatten_228
//         bit 31~0 - Flatten_228_flatten_228[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_2057_dense_2057
//         bit 31~0 - Dense_2057_dense_2057[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_2058_dense_2058
//         bit 31~0 - Dense_2058_dense_2058[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_2518_weight_conv2d_2518_weight
//         bit 31~0 - Conv2d_2518_weight_conv2d_2518_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_2518_bias_conv2d_2518_bias
//         bit 31~0 - Conv2d_2518_bias_conv2d_2518_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_2520_weight_conv2d_2520_weight
//         bit 31~0 - Conv2d_2520_weight_conv2d_2520_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_2520_bias_conv2d_2520_bias
//         bit 31~0 - Conv2d_2520_bias_conv2d_2520_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_2049_weight_dense_2049_weight
//         bit 31~0 - Dense_2049_weight_dense_2049_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_2049_bias_dense_2049_bias
//         bit 31~0 - Dense_2049_bias_dense_2049_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_2050_weight_dense_2050_weight
//         bit 31~0 - Dense_2050_weight_dense_2050_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_2050_bias_dense_2050_bias
//         bit 31~0 - Dense_2050_bias_dense_2050_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_2519_weight_conv2d_2519_weight
//         bit 31~0 - Conv2d_2519_weight_conv2d_2519_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_2519_bias_conv2d_2519_bias
//         bit 31~0 - Conv2d_2519_bias_conv2d_2519_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_2521_weight_conv2d_2521_weight
//         bit 31~0 - Conv2d_2521_weight_conv2d_2521_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_2521_bias_conv2d_2521_bias
//         bit 31~0 - Conv2d_2521_bias_conv2d_2521_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_2525_weight_conv2d_2525_weight
//         bit 31~0 - Conv2d_2525_weight_conv2d_2525_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_2525_bias_conv2d_2525_bias
//         bit 31~0 - Conv2d_2525_bias_conv2d_2525_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_2528_weight_conv2d_2528_weight
//         bit 31~0 - Conv2d_2528_weight_conv2d_2528_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_2528_bias_conv2d_2528_bias
//         bit 31~0 - Conv2d_2528_bias_conv2d_2528_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_2053_weight_dense_2053_weight
//         bit 31~0 - Dense_2053_weight_dense_2053_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_2053_bias_dense_2053_bias
//         bit 31~0 - Dense_2053_bias_dense_2053_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_2055_weight_dense_2055_weight
//         bit 31~0 - Dense_2055_weight_dense_2055_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_2055_bias_dense_2055_bias
//         bit 31~0 - Dense_2055_bias_dense_2055_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_2526_weight_conv2d_2526_weight
//         bit 31~0 - Conv2d_2526_weight_conv2d_2526_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Conv2d_2526_bias_conv2d_2526_bias
//         bit 31~0 - Conv2d_2526_bias_conv2d_2526_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Conv2d_2529_weight_conv2d_2529_weight
//         bit 31~0 - Conv2d_2529_weight_conv2d_2529_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Conv2d_2529_bias_conv2d_2529_bias
//         bit 31~0 - Conv2d_2529_bias_conv2d_2529_bias[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_2054_weight_dense_2054_weight
//         bit 31~0 - Dense_2054_weight_dense_2054_weight[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_2054_bias_dense_2054_bias
//         bit 31~0 - Dense_2054_bias_dense_2054_bias[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_2056_weight_dense_2056_weight
//         bit 31~0 - Dense_2056_weight_dense_2056_weight[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_2056_bias_dense_2056_bias
//         bit 31~0 - Dense_2056_bias_dense_2056_bias[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_2057_weight_dense_2057_weight
//         bit 31~0 - Dense_2057_weight_dense_2057_weight[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_2057_bias_dense_2057_bias
//         bit 31~0 - Dense_2057_bias_dense_2057_bias[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_2058_weight_dense_2058_weight
//         bit 31~0 - Dense_2058_weight_dense_2058_weight[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_2058_bias_dense_2058_bias
//         bit 31~0 - Dense_2058_bias_dense_2058_bias[31:0] (Read/Write)
// 0x1ec : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2518_CONV2D_2518_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2518_CONV2D_2518_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2520_CONV2D_2520_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2520_CONV2D_2520_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2126_MAX_POOLING2D_2126_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2126_MAX_POOLING2D_2126_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2127_MAX_POOLING2D_2127_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2127_MAX_POOLING2D_2127_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2049_DENSE_2049_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2049_DENSE_2049_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2050_DENSE_2050_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2050_DENSE_2050_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2519_CONV2D_2519_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2519_CONV2D_2519_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2521_CONV2D_2521_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2521_CONV2D_2521_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_442_CONCATENATE_442_DATA       0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_442_CONCATENATE_442_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2525_CONV2D_2525_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2525_CONV2D_2525_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2528_CONV2D_2528_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2528_CONV2D_2528_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2130_MAX_POOLING2D_2130_DATA 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2130_MAX_POOLING2D_2130_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2132_MAX_POOLING2D_2132_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2132_MAX_POOLING2D_2132_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2053_DENSE_2053_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2053_DENSE_2053_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2055_DENSE_2055_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2055_DENSE_2055_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2526_CONV2D_2526_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2526_CONV2D_2526_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2529_CONV2D_2529_DATA               0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2529_CONV2D_2529_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2131_MAX_POOLING2D_2131_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2131_MAX_POOLING2D_2131_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2133_MAX_POOLING2D_2133_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2133_MAX_POOLING2D_2133_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2054_DENSE_2054_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2054_DENSE_2054_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2056_DENSE_2056_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2056_DENSE_2056_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_444_CONCATENATE_444_DATA       0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_444_CONCATENATE_444_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_228_FLATTEN_228_DATA               0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_228_FLATTEN_228_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2057_DENSE_2057_DATA                 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2057_DENSE_2057_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2058_DENSE_2058_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2058_DENSE_2058_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2518_WEIGHT_CONV2D_2518_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2518_WEIGHT_CONV2D_2518_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2518_BIAS_CONV2D_2518_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2518_BIAS_CONV2D_2518_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2520_WEIGHT_CONV2D_2520_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2520_WEIGHT_CONV2D_2520_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2520_BIAS_CONV2D_2520_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2520_BIAS_CONV2D_2520_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2049_WEIGHT_DENSE_2049_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2049_WEIGHT_DENSE_2049_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2049_BIAS_DENSE_2049_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2049_BIAS_DENSE_2049_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2050_WEIGHT_DENSE_2050_WEIGHT_DATA   0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2050_WEIGHT_DENSE_2050_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2050_BIAS_DENSE_2050_BIAS_DATA       0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2050_BIAS_DENSE_2050_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2519_WEIGHT_CONV2D_2519_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2519_WEIGHT_CONV2D_2519_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2519_BIAS_CONV2D_2519_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2519_BIAS_CONV2D_2519_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2521_WEIGHT_CONV2D_2521_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2521_WEIGHT_CONV2D_2521_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2521_BIAS_CONV2D_2521_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2521_BIAS_CONV2D_2521_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2525_WEIGHT_CONV2D_2525_WEIGHT_DATA 0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2525_WEIGHT_CONV2D_2525_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2525_BIAS_CONV2D_2525_BIAS_DATA     0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2525_BIAS_CONV2D_2525_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2528_WEIGHT_CONV2D_2528_WEIGHT_DATA 0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2528_WEIGHT_CONV2D_2528_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2528_BIAS_CONV2D_2528_BIAS_DATA     0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2528_BIAS_CONV2D_2528_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2053_WEIGHT_DENSE_2053_WEIGHT_DATA   0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2053_WEIGHT_DENSE_2053_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2053_BIAS_DENSE_2053_BIAS_DATA       0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2053_BIAS_DENSE_2053_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2055_WEIGHT_DENSE_2055_WEIGHT_DATA   0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2055_WEIGHT_DENSE_2055_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2055_BIAS_DENSE_2055_BIAS_DATA       0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2055_BIAS_DENSE_2055_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2526_WEIGHT_CONV2D_2526_WEIGHT_DATA 0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2526_WEIGHT_CONV2D_2526_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2526_BIAS_CONV2D_2526_BIAS_DATA     0x198
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2526_BIAS_CONV2D_2526_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2529_WEIGHT_CONV2D_2529_WEIGHT_DATA 0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2529_WEIGHT_CONV2D_2529_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2529_BIAS_CONV2D_2529_BIAS_DATA     0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2529_BIAS_CONV2D_2529_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2054_WEIGHT_DENSE_2054_WEIGHT_DATA   0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2054_WEIGHT_DENSE_2054_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2054_BIAS_DENSE_2054_BIAS_DATA       0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2054_BIAS_DENSE_2054_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2056_WEIGHT_DENSE_2056_WEIGHT_DATA   0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2056_WEIGHT_DENSE_2056_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2056_BIAS_DENSE_2056_BIAS_DATA       0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2056_BIAS_DENSE_2056_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2057_WEIGHT_DENSE_2057_WEIGHT_DATA   0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2057_WEIGHT_DENSE_2057_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2057_BIAS_DENSE_2057_BIAS_DATA       0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2057_BIAS_DENSE_2057_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2058_WEIGHT_DENSE_2058_WEIGHT_DATA   0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2058_WEIGHT_DENSE_2058_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2058_BIAS_DENSE_2058_BIAS_DATA       0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2058_BIAS_DENSE_2058_BIAS_DATA       32

