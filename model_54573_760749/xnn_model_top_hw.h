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
// 0x020 : Data signal of Conv2d_2508_conv2d_2508
//         bit 31~0 - Conv2d_2508_conv2d_2508[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Max_pooling2d_1745_max_pooling2d_1745
//         bit 31~0 - Max_pooling2d_1745_max_pooling2d_1745[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Dense_1969_dense_1969
//         bit 31~0 - Dense_1969_dense_1969[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Conv2d_2509_conv2d_2509
//         bit 31~0 - Conv2d_2509_conv2d_2509[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_1746_max_pooling2d_1746
//         bit 31~0 - Max_pooling2d_1746_max_pooling2d_1746[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_1970_dense_1970
//         bit 31~0 - Dense_1970_dense_1970[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_2510_conv2d_2510
//         bit 31~0 - Conv2d_2510_conv2d_2510[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Max_pooling2d_1747_max_pooling2d_1747
//         bit 31~0 - Max_pooling2d_1747_max_pooling2d_1747[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Dense_1971_dense_1971
//         bit 31~0 - Dense_1971_dense_1971[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_1748_max_pooling2d_1748
//         bit 31~0 - Max_pooling2d_1748_max_pooling2d_1748[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_1972_dense_1972
//         bit 31~0 - Dense_1972_dense_1972[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_1973_dense_1973
//         bit 31~0 - Dense_1973_dense_1973[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_1974_dense_1974
//         bit 31~0 - Dense_1974_dense_1974[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_1975_dense_1975
//         bit 31~0 - Dense_1975_dense_1975[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_1976_dense_1976
//         bit 31~0 - Dense_1976_dense_1976[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_1977_dense_1977
//         bit 31~0 - Dense_1977_dense_1977[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_1978_dense_1978
//         bit 31~0 - Dense_1978_dense_1978[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_1979_dense_1979
//         bit 31~0 - Dense_1979_dense_1979[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Flatten_122_flatten_122
//         bit 31~0 - Flatten_122_flatten_122[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_1980_dense_1980
//         bit 31~0 - Dense_1980_dense_1980[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_1981_dense_1981
//         bit 31~0 - Dense_1981_dense_1981[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_2508_weight_conv2d_2508_weight
//         bit 31~0 - Conv2d_2508_weight_conv2d_2508_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_2508_bias_conv2d_2508_bias
//         bit 31~0 - Conv2d_2508_bias_conv2d_2508_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_1969_weight_dense_1969_weight
//         bit 31~0 - Dense_1969_weight_dense_1969_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_1969_bias_dense_1969_bias
//         bit 31~0 - Dense_1969_bias_dense_1969_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_2509_weight_conv2d_2509_weight
//         bit 31~0 - Conv2d_2509_weight_conv2d_2509_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_2509_bias_conv2d_2509_bias
//         bit 31~0 - Conv2d_2509_bias_conv2d_2509_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_1970_weight_dense_1970_weight
//         bit 31~0 - Dense_1970_weight_dense_1970_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_1970_bias_dense_1970_bias
//         bit 31~0 - Dense_1970_bias_dense_1970_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_2510_weight_conv2d_2510_weight
//         bit 31~0 - Conv2d_2510_weight_conv2d_2510_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_2510_bias_conv2d_2510_bias
//         bit 31~0 - Conv2d_2510_bias_conv2d_2510_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_1971_weight_dense_1971_weight
//         bit 31~0 - Dense_1971_weight_dense_1971_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_1971_bias_dense_1971_bias
//         bit 31~0 - Dense_1971_bias_dense_1971_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_1972_weight_dense_1972_weight
//         bit 31~0 - Dense_1972_weight_dense_1972_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_1972_bias_dense_1972_bias
//         bit 31~0 - Dense_1972_bias_dense_1972_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_1973_weight_dense_1973_weight
//         bit 31~0 - Dense_1973_weight_dense_1973_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_1973_bias_dense_1973_bias
//         bit 31~0 - Dense_1973_bias_dense_1973_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_1974_weight_dense_1974_weight
//         bit 31~0 - Dense_1974_weight_dense_1974_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_1974_bias_dense_1974_bias
//         bit 31~0 - Dense_1974_bias_dense_1974_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_1975_weight_dense_1975_weight
//         bit 31~0 - Dense_1975_weight_dense_1975_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_1975_bias_dense_1975_bias
//         bit 31~0 - Dense_1975_bias_dense_1975_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_1976_weight_dense_1976_weight
//         bit 31~0 - Dense_1976_weight_dense_1976_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_1976_bias_dense_1976_bias
//         bit 31~0 - Dense_1976_bias_dense_1976_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_1977_weight_dense_1977_weight
//         bit 31~0 - Dense_1977_weight_dense_1977_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_1977_bias_dense_1977_bias
//         bit 31~0 - Dense_1977_bias_dense_1977_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_1978_weight_dense_1978_weight
//         bit 31~0 - Dense_1978_weight_dense_1978_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_1978_bias_dense_1978_bias
//         bit 31~0 - Dense_1978_bias_dense_1978_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_1979_weight_dense_1979_weight
//         bit 31~0 - Dense_1979_weight_dense_1979_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_1979_bias_dense_1979_bias
//         bit 31~0 - Dense_1979_bias_dense_1979_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_1980_weight_dense_1980_weight
//         bit 31~0 - Dense_1980_weight_dense_1980_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_1980_bias_dense_1980_bias
//         bit 31~0 - Dense_1980_bias_dense_1980_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_1981_weight_dense_1981_weight
//         bit 31~0 - Dense_1981_weight_dense_1981_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_1981_bias_dense_1981_bias
//         bit 31~0 - Dense_1981_bias_dense_1981_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                           0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                           32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2508_CONV2D_2508_DATA               0x020
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2508_CONV2D_2508_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1745_MAX_POOLING2D_1745_DATA 0x028
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1745_MAX_POOLING2D_1745_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1969_DENSE_1969_DATA                 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1969_DENSE_1969_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2509_CONV2D_2509_DATA               0x038
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2509_CONV2D_2509_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1746_MAX_POOLING2D_1746_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1746_MAX_POOLING2D_1746_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1970_DENSE_1970_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1970_DENSE_1970_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2510_CONV2D_2510_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2510_CONV2D_2510_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1747_MAX_POOLING2D_1747_DATA 0x058
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1747_MAX_POOLING2D_1747_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1971_DENSE_1971_DATA                 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1971_DENSE_1971_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1748_MAX_POOLING2D_1748_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1748_MAX_POOLING2D_1748_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1972_DENSE_1972_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1972_DENSE_1972_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1973_DENSE_1973_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1973_DENSE_1973_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1974_DENSE_1974_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1974_DENSE_1974_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1975_DENSE_1975_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1975_DENSE_1975_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1976_DENSE_1976_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1976_DENSE_1976_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1977_DENSE_1977_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1977_DENSE_1977_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1978_DENSE_1978_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1978_DENSE_1978_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1979_DENSE_1979_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1979_DENSE_1979_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_122_FLATTEN_122_DATA               0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_122_FLATTEN_122_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1980_DENSE_1980_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1980_DENSE_1980_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1981_DENSE_1981_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1981_DENSE_1981_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2508_WEIGHT_CONV2D_2508_WEIGHT_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2508_WEIGHT_CONV2D_2508_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2508_BIAS_CONV2D_2508_BIAS_DATA     0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2508_BIAS_CONV2D_2508_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1969_WEIGHT_DENSE_1969_WEIGHT_DATA   0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1969_WEIGHT_DENSE_1969_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1969_BIAS_DENSE_1969_BIAS_DATA       0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1969_BIAS_DENSE_1969_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2509_WEIGHT_CONV2D_2509_WEIGHT_DATA 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2509_WEIGHT_CONV2D_2509_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2509_BIAS_CONV2D_2509_BIAS_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2509_BIAS_CONV2D_2509_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1970_WEIGHT_DENSE_1970_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1970_WEIGHT_DENSE_1970_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1970_BIAS_DENSE_1970_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1970_BIAS_DENSE_1970_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2510_WEIGHT_CONV2D_2510_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2510_WEIGHT_CONV2D_2510_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2510_BIAS_CONV2D_2510_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2510_BIAS_CONV2D_2510_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1971_WEIGHT_DENSE_1971_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1971_WEIGHT_DENSE_1971_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1971_BIAS_DENSE_1971_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1971_BIAS_DENSE_1971_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1972_WEIGHT_DENSE_1972_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1972_WEIGHT_DENSE_1972_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1972_BIAS_DENSE_1972_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1972_BIAS_DENSE_1972_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1973_WEIGHT_DENSE_1973_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1973_WEIGHT_DENSE_1973_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1973_BIAS_DENSE_1973_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1973_BIAS_DENSE_1973_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1974_WEIGHT_DENSE_1974_WEIGHT_DATA   0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1974_WEIGHT_DENSE_1974_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1974_BIAS_DENSE_1974_BIAS_DATA       0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1974_BIAS_DENSE_1974_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1975_WEIGHT_DENSE_1975_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1975_WEIGHT_DENSE_1975_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1975_BIAS_DENSE_1975_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1975_BIAS_DENSE_1975_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1976_WEIGHT_DENSE_1976_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1976_WEIGHT_DENSE_1976_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1976_BIAS_DENSE_1976_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1976_BIAS_DENSE_1976_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1977_WEIGHT_DENSE_1977_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1977_WEIGHT_DENSE_1977_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1977_BIAS_DENSE_1977_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1977_BIAS_DENSE_1977_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1978_WEIGHT_DENSE_1978_WEIGHT_DATA   0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1978_WEIGHT_DENSE_1978_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1978_BIAS_DENSE_1978_BIAS_DATA       0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1978_BIAS_DENSE_1978_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1979_WEIGHT_DENSE_1979_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1979_WEIGHT_DENSE_1979_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1979_BIAS_DENSE_1979_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1979_BIAS_DENSE_1979_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1980_WEIGHT_DENSE_1980_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1980_WEIGHT_DENSE_1980_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1980_BIAS_DENSE_1980_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1980_BIAS_DENSE_1980_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1981_WEIGHT_DENSE_1981_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1981_WEIGHT_DENSE_1981_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1981_BIAS_DENSE_1981_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1981_BIAS_DENSE_1981_BIAS_DATA       32

