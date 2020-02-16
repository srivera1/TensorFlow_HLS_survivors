// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
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
// 0x020 : Data signal of Conv2d_1796_conv2d_1796
//         bit 31~0 - Conv2d_1796_conv2d_1796[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Conv2d_1800_conv2d_1800
//         bit 31~0 - Conv2d_1800_conv2d_1800[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Max_pooling2d_1454_max_pooling2d_1454
//         bit 31~0 - Max_pooling2d_1454_max_pooling2d_1454[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_1458_max_pooling2d_1458
//         bit 31~0 - Max_pooling2d_1458_max_pooling2d_1458[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Dense_1367_dense_1367
//         bit 31~0 - Dense_1367_dense_1367[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_1371_dense_1371
//         bit 31~0 - Dense_1371_dense_1371[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_1797_conv2d_1797
//         bit 31~0 - Conv2d_1797_conv2d_1797[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_1801_conv2d_1801
//         bit 31~0 - Conv2d_1801_conv2d_1801[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Max_pooling2d_1455_max_pooling2d_1455
//         bit 31~0 - Max_pooling2d_1455_max_pooling2d_1455[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_1459_max_pooling2d_1459
//         bit 31~0 - Max_pooling2d_1459_max_pooling2d_1459[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_1368_dense_1368
//         bit 31~0 - Dense_1368_dense_1368[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_1372_dense_1372
//         bit 31~0 - Dense_1372_dense_1372[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_1798_conv2d_1798
//         bit 31~0 - Conv2d_1798_conv2d_1798[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_1802_conv2d_1802
//         bit 31~0 - Conv2d_1802_conv2d_1802[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Max_pooling2d_1456_max_pooling2d_1456
//         bit 31~0 - Max_pooling2d_1456_max_pooling2d_1456[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_1460_max_pooling2d_1460
//         bit 31~0 - Max_pooling2d_1460_max_pooling2d_1460[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_1369_dense_1369
//         bit 31~0 - Dense_1369_dense_1369[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_1373_dense_1373
//         bit 31~0 - Dense_1373_dense_1373[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Max_pooling2d_1457_max_pooling2d_1457
//         bit 31~0 - Max_pooling2d_1457_max_pooling2d_1457[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Max_pooling2d_1461_max_pooling2d_1461
//         bit 31~0 - Max_pooling2d_1461_max_pooling2d_1461[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_1370_dense_1370
//         bit 31~0 - Dense_1370_dense_1370[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_1374_dense_1374
//         bit 31~0 - Dense_1374_dense_1374[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Concatenate_114_concatenate_114
//         bit 31~0 - Concatenate_114_concatenate_114[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Flatten_43_flatten_43
//         bit 31~0 - Flatten_43_flatten_43[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_1375_dense_1375
//         bit 31~0 - Dense_1375_dense_1375[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_1376_dense_1376
//         bit 31~0 - Dense_1376_dense_1376[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_1796_weight_conv2d_1796_weight
//         bit 31~0 - Conv2d_1796_weight_conv2d_1796_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_1796_bias_conv2d_1796_bias
//         bit 31~0 - Conv2d_1796_bias_conv2d_1796_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_1800_weight_conv2d_1800_weight
//         bit 31~0 - Conv2d_1800_weight_conv2d_1800_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_1800_bias_conv2d_1800_bias
//         bit 31~0 - Conv2d_1800_bias_conv2d_1800_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_1367_weight_dense_1367_weight
//         bit 31~0 - Dense_1367_weight_dense_1367_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_1367_bias_dense_1367_bias
//         bit 31~0 - Dense_1367_bias_dense_1367_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_1371_weight_dense_1371_weight
//         bit 31~0 - Dense_1371_weight_dense_1371_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_1371_bias_dense_1371_bias
//         bit 31~0 - Dense_1371_bias_dense_1371_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_1797_weight_conv2d_1797_weight
//         bit 31~0 - Conv2d_1797_weight_conv2d_1797_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_1797_bias_conv2d_1797_bias
//         bit 31~0 - Conv2d_1797_bias_conv2d_1797_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_1801_weight_conv2d_1801_weight
//         bit 31~0 - Conv2d_1801_weight_conv2d_1801_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_1801_bias_conv2d_1801_bias
//         bit 31~0 - Conv2d_1801_bias_conv2d_1801_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_1368_weight_dense_1368_weight
//         bit 31~0 - Dense_1368_weight_dense_1368_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_1368_bias_dense_1368_bias
//         bit 31~0 - Dense_1368_bias_dense_1368_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_1372_weight_dense_1372_weight
//         bit 31~0 - Dense_1372_weight_dense_1372_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_1372_bias_dense_1372_bias
//         bit 31~0 - Dense_1372_bias_dense_1372_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_1798_weight_conv2d_1798_weight
//         bit 31~0 - Conv2d_1798_weight_conv2d_1798_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_1798_bias_conv2d_1798_bias
//         bit 31~0 - Conv2d_1798_bias_conv2d_1798_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_1802_weight_conv2d_1802_weight
//         bit 31~0 - Conv2d_1802_weight_conv2d_1802_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_1802_bias_conv2d_1802_bias
//         bit 31~0 - Conv2d_1802_bias_conv2d_1802_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_1369_weight_dense_1369_weight
//         bit 31~0 - Dense_1369_weight_dense_1369_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_1369_bias_dense_1369_bias
//         bit 31~0 - Dense_1369_bias_dense_1369_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_1373_weight_dense_1373_weight
//         bit 31~0 - Dense_1373_weight_dense_1373_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_1373_bias_dense_1373_bias
//         bit 31~0 - Dense_1373_bias_dense_1373_bias[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_1370_weight_dense_1370_weight
//         bit 31~0 - Dense_1370_weight_dense_1370_weight[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_1370_bias_dense_1370_bias
//         bit 31~0 - Dense_1370_bias_dense_1370_bias[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_1374_weight_dense_1374_weight
//         bit 31~0 - Dense_1374_weight_dense_1374_weight[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_1374_bias_dense_1374_bias
//         bit 31~0 - Dense_1374_bias_dense_1374_bias[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_1375_weight_dense_1375_weight
//         bit 31~0 - Dense_1375_weight_dense_1375_weight[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_1375_bias_dense_1375_bias
//         bit 31~0 - Dense_1375_bias_dense_1375_bias[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_1376_weight_dense_1376_weight
//         bit 31~0 - Dense_1376_weight_dense_1376_weight[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_1376_bias_dense_1376_bias
//         bit 31~0 - Dense_1376_bias_dense_1376_bias[31:0] (Read/Write)
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1796_CONV2D_1796_DATA               0x020
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1796_CONV2D_1796_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1800_CONV2D_1800_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1800_CONV2D_1800_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1454_MAX_POOLING2D_1454_DATA 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1454_MAX_POOLING2D_1454_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1458_MAX_POOLING2D_1458_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1458_MAX_POOLING2D_1458_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1367_DENSE_1367_DATA                 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1367_DENSE_1367_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1371_DENSE_1371_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1371_DENSE_1371_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1797_CONV2D_1797_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1797_CONV2D_1797_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1801_CONV2D_1801_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1801_CONV2D_1801_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1455_MAX_POOLING2D_1455_DATA 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1455_MAX_POOLING2D_1455_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1459_MAX_POOLING2D_1459_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1459_MAX_POOLING2D_1459_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1368_DENSE_1368_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1368_DENSE_1368_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1372_DENSE_1372_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1372_DENSE_1372_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1798_CONV2D_1798_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1798_CONV2D_1798_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1802_CONV2D_1802_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1802_CONV2D_1802_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1456_MAX_POOLING2D_1456_DATA 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1456_MAX_POOLING2D_1456_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1460_MAX_POOLING2D_1460_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1460_MAX_POOLING2D_1460_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1369_DENSE_1369_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1369_DENSE_1369_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1373_DENSE_1373_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1373_DENSE_1373_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1457_MAX_POOLING2D_1457_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1457_MAX_POOLING2D_1457_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1461_MAX_POOLING2D_1461_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1461_MAX_POOLING2D_1461_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1370_DENSE_1370_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1370_DENSE_1370_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1374_DENSE_1374_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1374_DENSE_1374_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_114_CONCATENATE_114_DATA       0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_114_CONCATENATE_114_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_43_FLATTEN_43_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_43_FLATTEN_43_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1375_DENSE_1375_DATA                 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1375_DENSE_1375_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1376_DENSE_1376_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1376_DENSE_1376_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1796_WEIGHT_CONV2D_1796_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1796_WEIGHT_CONV2D_1796_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1796_BIAS_CONV2D_1796_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1796_BIAS_CONV2D_1796_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1800_WEIGHT_CONV2D_1800_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1800_WEIGHT_CONV2D_1800_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1800_BIAS_CONV2D_1800_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1800_BIAS_CONV2D_1800_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1367_WEIGHT_DENSE_1367_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1367_WEIGHT_DENSE_1367_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1367_BIAS_DENSE_1367_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1367_BIAS_DENSE_1367_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1371_WEIGHT_DENSE_1371_WEIGHT_DATA   0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1371_WEIGHT_DENSE_1371_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1371_BIAS_DENSE_1371_BIAS_DATA       0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1371_BIAS_DENSE_1371_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1797_WEIGHT_CONV2D_1797_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1797_WEIGHT_CONV2D_1797_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1797_BIAS_CONV2D_1797_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1797_BIAS_CONV2D_1797_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1801_WEIGHT_CONV2D_1801_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1801_WEIGHT_CONV2D_1801_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1801_BIAS_CONV2D_1801_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1801_BIAS_CONV2D_1801_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1368_WEIGHT_DENSE_1368_WEIGHT_DATA   0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1368_WEIGHT_DENSE_1368_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1368_BIAS_DENSE_1368_BIAS_DATA       0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1368_BIAS_DENSE_1368_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1372_WEIGHT_DENSE_1372_WEIGHT_DATA   0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1372_WEIGHT_DENSE_1372_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1372_BIAS_DENSE_1372_BIAS_DATA       0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1372_BIAS_DENSE_1372_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1798_WEIGHT_CONV2D_1798_WEIGHT_DATA 0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1798_WEIGHT_CONV2D_1798_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1798_BIAS_CONV2D_1798_BIAS_DATA     0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1798_BIAS_CONV2D_1798_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1802_WEIGHT_CONV2D_1802_WEIGHT_DATA 0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1802_WEIGHT_CONV2D_1802_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1802_BIAS_CONV2D_1802_BIAS_DATA     0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1802_BIAS_CONV2D_1802_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1369_WEIGHT_DENSE_1369_WEIGHT_DATA   0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1369_WEIGHT_DENSE_1369_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1369_BIAS_DENSE_1369_BIAS_DATA       0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1369_BIAS_DENSE_1369_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1373_WEIGHT_DENSE_1373_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1373_WEIGHT_DENSE_1373_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1373_BIAS_DENSE_1373_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1373_BIAS_DENSE_1373_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1370_WEIGHT_DENSE_1370_WEIGHT_DATA   0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1370_WEIGHT_DENSE_1370_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1370_BIAS_DENSE_1370_BIAS_DATA       0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1370_BIAS_DENSE_1370_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1374_WEIGHT_DENSE_1374_WEIGHT_DATA   0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1374_WEIGHT_DENSE_1374_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1374_BIAS_DENSE_1374_BIAS_DATA       0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1374_BIAS_DENSE_1374_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1375_WEIGHT_DENSE_1375_WEIGHT_DATA   0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1375_WEIGHT_DENSE_1375_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1375_BIAS_DENSE_1375_BIAS_DATA       0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1375_BIAS_DENSE_1375_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1376_WEIGHT_DENSE_1376_WEIGHT_DATA   0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1376_WEIGHT_DENSE_1376_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1376_BIAS_DENSE_1376_BIAS_DATA       0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1376_BIAS_DENSE_1376_BIAS_DATA       32

