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
// 0x020 : Data signal of Conv2d_1719_conv2d_1719
//         bit 31~0 - Conv2d_1719_conv2d_1719[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Max_pooling2d_1217_max_pooling2d_1217
//         bit 31~0 - Max_pooling2d_1217_max_pooling2d_1217[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Dense_1362_dense_1362
//         bit 31~0 - Dense_1362_dense_1362[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Conv2d_1720_conv2d_1720
//         bit 31~0 - Conv2d_1720_conv2d_1720[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_1218_max_pooling2d_1218
//         bit 31~0 - Max_pooling2d_1218_max_pooling2d_1218[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_1363_dense_1363
//         bit 31~0 - Dense_1363_dense_1363[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_1721_conv2d_1721
//         bit 31~0 - Conv2d_1721_conv2d_1721[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Max_pooling2d_1219_max_pooling2d_1219
//         bit 31~0 - Max_pooling2d_1219_max_pooling2d_1219[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Dense_1364_dense_1364
//         bit 31~0 - Dense_1364_dense_1364[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_1220_max_pooling2d_1220
//         bit 31~0 - Max_pooling2d_1220_max_pooling2d_1220[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_1365_dense_1365
//         bit 31~0 - Dense_1365_dense_1365[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Flatten_82_flatten_82
//         bit 31~0 - Flatten_82_flatten_82[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_1366_dense_1366
//         bit 31~0 - Dense_1366_dense_1366[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_1367_dense_1367
//         bit 31~0 - Dense_1367_dense_1367[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_1719_weight_conv2d_1719_weight
//         bit 31~0 - Conv2d_1719_weight_conv2d_1719_weight[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_1719_bias_conv2d_1719_bias
//         bit 31~0 - Conv2d_1719_bias_conv2d_1719_bias[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_1362_weight_dense_1362_weight
//         bit 31~0 - Dense_1362_weight_dense_1362_weight[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_1362_bias_dense_1362_bias
//         bit 31~0 - Dense_1362_bias_dense_1362_bias[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_1720_weight_conv2d_1720_weight
//         bit 31~0 - Conv2d_1720_weight_conv2d_1720_weight[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_1720_bias_conv2d_1720_bias
//         bit 31~0 - Conv2d_1720_bias_conv2d_1720_bias[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_1363_weight_dense_1363_weight
//         bit 31~0 - Dense_1363_weight_dense_1363_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_1363_bias_dense_1363_bias
//         bit 31~0 - Dense_1363_bias_dense_1363_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_1721_weight_conv2d_1721_weight
//         bit 31~0 - Conv2d_1721_weight_conv2d_1721_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_1721_bias_conv2d_1721_bias
//         bit 31~0 - Conv2d_1721_bias_conv2d_1721_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_1364_weight_dense_1364_weight
//         bit 31~0 - Dense_1364_weight_dense_1364_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_1364_bias_dense_1364_bias
//         bit 31~0 - Dense_1364_bias_dense_1364_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_1365_weight_dense_1365_weight
//         bit 31~0 - Dense_1365_weight_dense_1365_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_1365_bias_dense_1365_bias
//         bit 31~0 - Dense_1365_bias_dense_1365_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_1366_weight_dense_1366_weight
//         bit 31~0 - Dense_1366_weight_dense_1366_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_1366_bias_dense_1366_bias
//         bit 31~0 - Dense_1366_bias_dense_1366_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_1367_weight_dense_1367_weight
//         bit 31~0 - Dense_1367_weight_dense_1367_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_1367_bias_dense_1367_bias
//         bit 31~0 - Dense_1367_bias_dense_1367_bias[31:0] (Read/Write)
// 0x11c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                           0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                           32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1719_CONV2D_1719_DATA               0x020
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1719_CONV2D_1719_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1217_MAX_POOLING2D_1217_DATA 0x028
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1217_MAX_POOLING2D_1217_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1362_DENSE_1362_DATA                 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1362_DENSE_1362_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1720_CONV2D_1720_DATA               0x038
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1720_CONV2D_1720_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1218_MAX_POOLING2D_1218_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1218_MAX_POOLING2D_1218_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1363_DENSE_1363_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1363_DENSE_1363_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1721_CONV2D_1721_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1721_CONV2D_1721_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1219_MAX_POOLING2D_1219_DATA 0x058
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1219_MAX_POOLING2D_1219_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1364_DENSE_1364_DATA                 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1364_DENSE_1364_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1220_MAX_POOLING2D_1220_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1220_MAX_POOLING2D_1220_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1365_DENSE_1365_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1365_DENSE_1365_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_82_FLATTEN_82_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_82_FLATTEN_82_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1366_DENSE_1366_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1366_DENSE_1366_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1367_DENSE_1367_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1367_DENSE_1367_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1719_WEIGHT_CONV2D_1719_WEIGHT_DATA 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1719_WEIGHT_CONV2D_1719_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1719_BIAS_CONV2D_1719_BIAS_DATA     0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1719_BIAS_CONV2D_1719_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1362_WEIGHT_DENSE_1362_WEIGHT_DATA   0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1362_WEIGHT_DENSE_1362_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1362_BIAS_DENSE_1362_BIAS_DATA       0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1362_BIAS_DENSE_1362_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1720_WEIGHT_CONV2D_1720_WEIGHT_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1720_WEIGHT_CONV2D_1720_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1720_BIAS_CONV2D_1720_BIAS_DATA     0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1720_BIAS_CONV2D_1720_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1363_WEIGHT_DENSE_1363_WEIGHT_DATA   0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1363_WEIGHT_DENSE_1363_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1363_BIAS_DENSE_1363_BIAS_DATA       0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1363_BIAS_DENSE_1363_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1721_WEIGHT_CONV2D_1721_WEIGHT_DATA 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1721_WEIGHT_CONV2D_1721_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1721_BIAS_CONV2D_1721_BIAS_DATA     0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1721_BIAS_CONV2D_1721_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1364_WEIGHT_DENSE_1364_WEIGHT_DATA   0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1364_WEIGHT_DENSE_1364_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1364_BIAS_DENSE_1364_BIAS_DATA       0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1364_BIAS_DENSE_1364_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1365_WEIGHT_DENSE_1365_WEIGHT_DATA   0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1365_WEIGHT_DENSE_1365_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1365_BIAS_DENSE_1365_BIAS_DATA       0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1365_BIAS_DENSE_1365_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1366_WEIGHT_DENSE_1366_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1366_WEIGHT_DENSE_1366_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1366_BIAS_DENSE_1366_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1366_BIAS_DENSE_1366_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1367_WEIGHT_DENSE_1367_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1367_WEIGHT_DENSE_1367_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1367_BIAS_DENSE_1367_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1367_BIAS_DENSE_1367_BIAS_DATA       32

