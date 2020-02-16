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
// 0x028 : Data signal of Dense_5329_dense_5329
//         bit 31~0 - Dense_5329_dense_5329[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Dense_5332_dense_5332
//         bit 31~0 - Dense_5332_dense_5332[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Dense_5330_dense_5330
//         bit 31~0 - Dense_5330_dense_5330[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Dense_5333_dense_5333
//         bit 31~0 - Dense_5333_dense_5333[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_5331_dense_5331
//         bit 31~0 - Dense_5331_dense_5331[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_5334_dense_5334
//         bit 31~0 - Dense_5334_dense_5334[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_1574_conv2d_1574
//         bit 31~0 - Conv2d_1574_conv2d_1574[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_1575_conv2d_1575
//         bit 31~0 - Conv2d_1575_conv2d_1575[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Concatenate_4442_concatenate_4442
//         bit 31~0 - Concatenate_4442_concatenate_4442[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_1580_conv2d_1580
//         bit 31~0 - Conv2d_1580_conv2d_1580[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_678_max_pooling2d_678
//         bit 31~0 - Max_pooling2d_678_max_pooling2d_678[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_679_max_pooling2d_679
//         bit 31~0 - Max_pooling2d_679_max_pooling2d_679[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_680_max_pooling2d_680
//         bit 31~0 - Max_pooling2d_680_max_pooling2d_680[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Max_pooling2d_681_max_pooling2d_681
//         bit 31~0 - Max_pooling2d_681_max_pooling2d_681[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Flatten_153_flatten_153
//         bit 31~0 - Flatten_153_flatten_153[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_5345_dense_5345
//         bit 31~0 - Dense_5345_dense_5345[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_5346_dense_5346
//         bit 31~0 - Dense_5346_dense_5346[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_5329_weight_dense_5329_weight
//         bit 31~0 - Dense_5329_weight_dense_5329_weight[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_5329_bias_dense_5329_bias
//         bit 31~0 - Dense_5329_bias_dense_5329_bias[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_5332_weight_dense_5332_weight
//         bit 31~0 - Dense_5332_weight_dense_5332_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_5332_bias_dense_5332_bias
//         bit 31~0 - Dense_5332_bias_dense_5332_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_5330_weight_dense_5330_weight
//         bit 31~0 - Dense_5330_weight_dense_5330_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_5330_bias_dense_5330_bias
//         bit 31~0 - Dense_5330_bias_dense_5330_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_5333_weight_dense_5333_weight
//         bit 31~0 - Dense_5333_weight_dense_5333_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_5333_bias_dense_5333_bias
//         bit 31~0 - Dense_5333_bias_dense_5333_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_5331_weight_dense_5331_weight
//         bit 31~0 - Dense_5331_weight_dense_5331_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_5331_bias_dense_5331_bias
//         bit 31~0 - Dense_5331_bias_dense_5331_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_5334_weight_dense_5334_weight
//         bit 31~0 - Dense_5334_weight_dense_5334_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_5334_bias_dense_5334_bias
//         bit 31~0 - Dense_5334_bias_dense_5334_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_1574_weight_conv2d_1574_weight
//         bit 31~0 - Conv2d_1574_weight_conv2d_1574_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_1574_bias_conv2d_1574_bias
//         bit 31~0 - Conv2d_1574_bias_conv2d_1574_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_1575_weight_conv2d_1575_weight
//         bit 31~0 - Conv2d_1575_weight_conv2d_1575_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_1575_bias_conv2d_1575_bias
//         bit 31~0 - Conv2d_1575_bias_conv2d_1575_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_1580_weight_conv2d_1580_weight
//         bit 31~0 - Conv2d_1580_weight_conv2d_1580_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_1580_bias_conv2d_1580_bias
//         bit 31~0 - Conv2d_1580_bias_conv2d_1580_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_5345_weight_dense_5345_weight
//         bit 31~0 - Dense_5345_weight_dense_5345_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_5345_bias_dense_5345_bias
//         bit 31~0 - Dense_5345_bias_dense_5345_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_5346_weight_dense_5346_weight
//         bit 31~0 - Dense_5346_weight_dense_5346_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_5346_bias_dense_5346_bias
//         bit 31~0 - Dense_5346_bias_dense_5346_bias[31:0] (Read/Write)
// 0x15c : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5329_DENSE_5329_DATA                 0x028
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5329_DENSE_5329_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5332_DENSE_5332_DATA                 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5332_DENSE_5332_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5330_DENSE_5330_DATA                 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5330_DENSE_5330_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5333_DENSE_5333_DATA                 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5333_DENSE_5333_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5331_DENSE_5331_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5331_DENSE_5331_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5334_DENSE_5334_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5334_DENSE_5334_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1574_CONV2D_1574_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1574_CONV2D_1574_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1575_CONV2D_1575_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1575_CONV2D_1575_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_4442_CONCATENATE_4442_DATA     0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_4442_CONCATENATE_4442_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1580_CONV2D_1580_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1580_CONV2D_1580_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_678_MAX_POOLING2D_678_DATA   0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_678_MAX_POOLING2D_678_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_679_MAX_POOLING2D_679_DATA   0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_679_MAX_POOLING2D_679_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_680_MAX_POOLING2D_680_DATA   0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_680_MAX_POOLING2D_680_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_681_MAX_POOLING2D_681_DATA   0x090
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_681_MAX_POOLING2D_681_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_153_FLATTEN_153_DATA               0x098
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_153_FLATTEN_153_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5345_DENSE_5345_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5345_DENSE_5345_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5346_DENSE_5346_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5346_DENSE_5346_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5329_WEIGHT_DENSE_5329_WEIGHT_DATA   0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5329_WEIGHT_DENSE_5329_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5329_BIAS_DENSE_5329_BIAS_DATA       0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5329_BIAS_DENSE_5329_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5332_WEIGHT_DENSE_5332_WEIGHT_DATA   0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5332_WEIGHT_DENSE_5332_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5332_BIAS_DENSE_5332_BIAS_DATA       0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5332_BIAS_DENSE_5332_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5330_WEIGHT_DENSE_5330_WEIGHT_DATA   0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5330_WEIGHT_DENSE_5330_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5330_BIAS_DENSE_5330_BIAS_DATA       0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5330_BIAS_DENSE_5330_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5333_WEIGHT_DENSE_5333_WEIGHT_DATA   0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5333_WEIGHT_DENSE_5333_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5333_BIAS_DENSE_5333_BIAS_DATA       0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5333_BIAS_DENSE_5333_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5331_WEIGHT_DENSE_5331_WEIGHT_DATA   0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5331_WEIGHT_DENSE_5331_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5331_BIAS_DENSE_5331_BIAS_DATA       0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5331_BIAS_DENSE_5331_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5334_WEIGHT_DENSE_5334_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5334_WEIGHT_DENSE_5334_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5334_BIAS_DENSE_5334_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5334_BIAS_DENSE_5334_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1574_WEIGHT_CONV2D_1574_WEIGHT_DATA 0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1574_WEIGHT_CONV2D_1574_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1574_BIAS_CONV2D_1574_BIAS_DATA     0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1574_BIAS_CONV2D_1574_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1575_WEIGHT_CONV2D_1575_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1575_WEIGHT_CONV2D_1575_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1575_BIAS_CONV2D_1575_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1575_BIAS_CONV2D_1575_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1580_WEIGHT_CONV2D_1580_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1580_WEIGHT_CONV2D_1580_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1580_BIAS_CONV2D_1580_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1580_BIAS_CONV2D_1580_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5345_WEIGHT_DENSE_5345_WEIGHT_DATA   0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5345_WEIGHT_DENSE_5345_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5345_BIAS_DENSE_5345_BIAS_DATA       0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5345_BIAS_DENSE_5345_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5346_WEIGHT_DENSE_5346_WEIGHT_DATA   0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5346_WEIGHT_DENSE_5346_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5346_BIAS_DENSE_5346_BIAS_DATA       0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5346_BIAS_DENSE_5346_BIAS_DATA       32

