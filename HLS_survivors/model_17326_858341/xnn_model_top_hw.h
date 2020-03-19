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
// 0x028 : Data signal of Dense_4562_dense_4562
//         bit 31~0 - Dense_4562_dense_4562[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Dense_4563_dense_4563
//         bit 31~0 - Dense_4563_dense_4563[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Conv2d_1378_conv2d_1378
//         bit 31~0 - Conv2d_1378_conv2d_1378[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Conv2d_1379_conv2d_1379
//         bit 31~0 - Conv2d_1379_conv2d_1379[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Concatenate_3776_concatenate_3776
//         bit 31~0 - Concatenate_3776_concatenate_3776[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_1387_conv2d_1387
//         bit 31~0 - Conv2d_1387_conv2d_1387[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_1388_conv2d_1388
//         bit 31~0 - Conv2d_1388_conv2d_1388[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Max_pooling2d_591_max_pooling2d_591
//         bit 31~0 - Max_pooling2d_591_max_pooling2d_591[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Conv2d_1389_conv2d_1389
//         bit 31~0 - Conv2d_1389_conv2d_1389[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_1390_conv2d_1390
//         bit 31~0 - Conv2d_1390_conv2d_1390[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_592_max_pooling2d_592
//         bit 31~0 - Max_pooling2d_592_max_pooling2d_592[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_593_max_pooling2d_593
//         bit 31~0 - Max_pooling2d_593_max_pooling2d_593[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_594_max_pooling2d_594
//         bit 31~0 - Max_pooling2d_594_max_pooling2d_594[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Flatten_134_flatten_134
//         bit 31~0 - Flatten_134_flatten_134[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_4614_dense_4614
//         bit 31~0 - Dense_4614_dense_4614[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_4615_dense_4615
//         bit 31~0 - Dense_4615_dense_4615[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_4562_weight_dense_4562_weight
//         bit 31~0 - Dense_4562_weight_dense_4562_weight[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_4562_bias_dense_4562_bias
//         bit 31~0 - Dense_4562_bias_dense_4562_bias[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_4563_weight_dense_4563_weight
//         bit 31~0 - Dense_4563_weight_dense_4563_weight[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_4563_bias_dense_4563_bias
//         bit 31~0 - Dense_4563_bias_dense_4563_bias[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_1378_weight_conv2d_1378_weight
//         bit 31~0 - Conv2d_1378_weight_conv2d_1378_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_1378_bias_conv2d_1378_bias
//         bit 31~0 - Conv2d_1378_bias_conv2d_1378_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_1379_weight_conv2d_1379_weight
//         bit 31~0 - Conv2d_1379_weight_conv2d_1379_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_1379_bias_conv2d_1379_bias
//         bit 31~0 - Conv2d_1379_bias_conv2d_1379_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_1387_weight_conv2d_1387_weight
//         bit 31~0 - Conv2d_1387_weight_conv2d_1387_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_1387_bias_conv2d_1387_bias
//         bit 31~0 - Conv2d_1387_bias_conv2d_1387_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_1388_weight_conv2d_1388_weight
//         bit 31~0 - Conv2d_1388_weight_conv2d_1388_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_1388_bias_conv2d_1388_bias
//         bit 31~0 - Conv2d_1388_bias_conv2d_1388_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_1389_weight_conv2d_1389_weight
//         bit 31~0 - Conv2d_1389_weight_conv2d_1389_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_1389_bias_conv2d_1389_bias
//         bit 31~0 - Conv2d_1389_bias_conv2d_1389_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_1390_weight_conv2d_1390_weight
//         bit 31~0 - Conv2d_1390_weight_conv2d_1390_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_1390_bias_conv2d_1390_bias
//         bit 31~0 - Conv2d_1390_bias_conv2d_1390_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_4614_weight_dense_4614_weight
//         bit 31~0 - Dense_4614_weight_dense_4614_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_4614_bias_dense_4614_bias
//         bit 31~0 - Dense_4614_bias_dense_4614_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_4615_weight_dense_4615_weight
//         bit 31~0 - Dense_4615_weight_dense_4615_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_4615_bias_dense_4615_bias
//         bit 31~0 - Dense_4615_bias_dense_4615_bias[31:0] (Read/Write)
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
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4562_DENSE_4562_DATA                 0x028
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4562_DENSE_4562_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4563_DENSE_4563_DATA                 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4563_DENSE_4563_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1378_CONV2D_1378_DATA               0x038
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1378_CONV2D_1378_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1379_CONV2D_1379_DATA               0x040
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1379_CONV2D_1379_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_3776_CONCATENATE_3776_DATA     0x048
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_3776_CONCATENATE_3776_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1387_CONV2D_1387_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1387_CONV2D_1387_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1388_CONV2D_1388_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1388_CONV2D_1388_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_591_MAX_POOLING2D_591_DATA   0x060
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_591_MAX_POOLING2D_591_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1389_CONV2D_1389_DATA               0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1389_CONV2D_1389_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1390_CONV2D_1390_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1390_CONV2D_1390_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_592_MAX_POOLING2D_592_DATA   0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_592_MAX_POOLING2D_592_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_593_MAX_POOLING2D_593_DATA   0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_593_MAX_POOLING2D_593_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_594_MAX_POOLING2D_594_DATA   0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_594_MAX_POOLING2D_594_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_134_FLATTEN_134_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_134_FLATTEN_134_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4614_DENSE_4614_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4614_DENSE_4614_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4615_DENSE_4615_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4615_DENSE_4615_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4562_WEIGHT_DENSE_4562_WEIGHT_DATA   0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4562_WEIGHT_DENSE_4562_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4562_BIAS_DENSE_4562_BIAS_DATA       0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4562_BIAS_DENSE_4562_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4563_WEIGHT_DENSE_4563_WEIGHT_DATA   0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4563_WEIGHT_DENSE_4563_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4563_BIAS_DENSE_4563_BIAS_DATA       0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4563_BIAS_DENSE_4563_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1378_WEIGHT_CONV2D_1378_WEIGHT_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1378_WEIGHT_CONV2D_1378_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1378_BIAS_CONV2D_1378_BIAS_DATA     0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1378_BIAS_CONV2D_1378_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1379_WEIGHT_CONV2D_1379_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1379_WEIGHT_CONV2D_1379_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1379_BIAS_CONV2D_1379_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1379_BIAS_CONV2D_1379_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1387_WEIGHT_CONV2D_1387_WEIGHT_DATA 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1387_WEIGHT_CONV2D_1387_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1387_BIAS_CONV2D_1387_BIAS_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1387_BIAS_CONV2D_1387_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1388_WEIGHT_CONV2D_1388_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1388_WEIGHT_CONV2D_1388_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1388_BIAS_CONV2D_1388_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1388_BIAS_CONV2D_1388_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1389_WEIGHT_CONV2D_1389_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1389_WEIGHT_CONV2D_1389_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1389_BIAS_CONV2D_1389_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1389_BIAS_CONV2D_1389_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1390_WEIGHT_CONV2D_1390_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1390_WEIGHT_CONV2D_1390_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1390_BIAS_CONV2D_1390_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1390_BIAS_CONV2D_1390_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4614_WEIGHT_DENSE_4614_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4614_WEIGHT_DENSE_4614_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4614_BIAS_DENSE_4614_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4614_BIAS_DENSE_4614_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4615_WEIGHT_DENSE_4615_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4615_WEIGHT_DENSE_4615_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4615_BIAS_DENSE_4615_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4615_BIAS_DENSE_4615_BIAS_DATA       32

