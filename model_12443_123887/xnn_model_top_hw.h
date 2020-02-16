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
// 0x028 : Data signal of Conv2d_2473_conv2d_2473
//         bit 31~0 - Conv2d_2473_conv2d_2473[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2474_conv2d_2474
//         bit 31~0 - Conv2d_2474_conv2d_2474[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2091_max_pooling2d_2091
//         bit 31~0 - Max_pooling2d_2091_max_pooling2d_2091[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2092_max_pooling2d_2092
//         bit 31~0 - Max_pooling2d_2092_max_pooling2d_2092[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2013_dense_2013
//         bit 31~0 - Dense_2013_dense_2013[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2014_dense_2014
//         bit 31~0 - Dense_2014_dense_2014[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_434_concatenate_434
//         bit 31~0 - Concatenate_434_concatenate_434[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_2475_conv2d_2475
//         bit 31~0 - Conv2d_2475_conv2d_2475[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_2093_max_pooling2d_2093
//         bit 31~0 - Max_pooling2d_2093_max_pooling2d_2093[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_2015_dense_2015
//         bit 31~0 - Dense_2015_dense_2015[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_2476_conv2d_2476
//         bit 31~0 - Conv2d_2476_conv2d_2476[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_2094_max_pooling2d_2094
//         bit 31~0 - Max_pooling2d_2094_max_pooling2d_2094[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_2016_dense_2016
//         bit 31~0 - Dense_2016_dense_2016[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Max_pooling2d_2095_max_pooling2d_2095
//         bit 31~0 - Max_pooling2d_2095_max_pooling2d_2095[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_2017_dense_2017
//         bit 31~0 - Dense_2017_dense_2017[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Flatten_225_flatten_225
//         bit 31~0 - Flatten_225_flatten_225[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_2018_dense_2018
//         bit 31~0 - Dense_2018_dense_2018[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_2019_dense_2019
//         bit 31~0 - Dense_2019_dense_2019[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_2473_weight_conv2d_2473_weight
//         bit 31~0 - Conv2d_2473_weight_conv2d_2473_weight[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Conv2d_2473_bias_conv2d_2473_bias
//         bit 31~0 - Conv2d_2473_bias_conv2d_2473_bias[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_2474_weight_conv2d_2474_weight
//         bit 31~0 - Conv2d_2474_weight_conv2d_2474_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_2474_bias_conv2d_2474_bias
//         bit 31~0 - Conv2d_2474_bias_conv2d_2474_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_2013_weight_dense_2013_weight
//         bit 31~0 - Dense_2013_weight_dense_2013_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_2013_bias_dense_2013_bias
//         bit 31~0 - Dense_2013_bias_dense_2013_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_2014_weight_dense_2014_weight
//         bit 31~0 - Dense_2014_weight_dense_2014_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_2014_bias_dense_2014_bias
//         bit 31~0 - Dense_2014_bias_dense_2014_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_2475_weight_conv2d_2475_weight
//         bit 31~0 - Conv2d_2475_weight_conv2d_2475_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_2475_bias_conv2d_2475_bias
//         bit 31~0 - Conv2d_2475_bias_conv2d_2475_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_2015_weight_dense_2015_weight
//         bit 31~0 - Dense_2015_weight_dense_2015_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_2015_bias_dense_2015_bias
//         bit 31~0 - Dense_2015_bias_dense_2015_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_2476_weight_conv2d_2476_weight
//         bit 31~0 - Conv2d_2476_weight_conv2d_2476_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_2476_bias_conv2d_2476_bias
//         bit 31~0 - Conv2d_2476_bias_conv2d_2476_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_2016_weight_dense_2016_weight
//         bit 31~0 - Dense_2016_weight_dense_2016_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_2016_bias_dense_2016_bias
//         bit 31~0 - Dense_2016_bias_dense_2016_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_2017_weight_dense_2017_weight
//         bit 31~0 - Dense_2017_weight_dense_2017_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_2017_bias_dense_2017_bias
//         bit 31~0 - Dense_2017_bias_dense_2017_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_2018_weight_dense_2018_weight
//         bit 31~0 - Dense_2018_weight_dense_2018_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_2018_bias_dense_2018_bias
//         bit 31~0 - Dense_2018_bias_dense_2018_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_2019_weight_dense_2019_weight
//         bit 31~0 - Dense_2019_weight_dense_2019_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_2019_bias_dense_2019_bias
//         bit 31~0 - Dense_2019_bias_dense_2019_bias[31:0] (Read/Write)
// 0x164 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2473_CONV2D_2473_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2473_CONV2D_2473_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2474_CONV2D_2474_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2474_CONV2D_2474_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2091_MAX_POOLING2D_2091_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2091_MAX_POOLING2D_2091_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2092_MAX_POOLING2D_2092_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2092_MAX_POOLING2D_2092_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2013_DENSE_2013_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2013_DENSE_2013_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2014_DENSE_2014_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2014_DENSE_2014_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_434_CONCATENATE_434_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_434_CONCATENATE_434_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2475_CONV2D_2475_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2475_CONV2D_2475_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2093_MAX_POOLING2D_2093_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2093_MAX_POOLING2D_2093_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2015_DENSE_2015_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2015_DENSE_2015_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2476_CONV2D_2476_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2476_CONV2D_2476_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2094_MAX_POOLING2D_2094_DATA 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2094_MAX_POOLING2D_2094_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2016_DENSE_2016_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2016_DENSE_2016_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2095_MAX_POOLING2D_2095_DATA 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2095_MAX_POOLING2D_2095_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2017_DENSE_2017_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2017_DENSE_2017_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_225_FLATTEN_225_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_225_FLATTEN_225_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2018_DENSE_2018_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2018_DENSE_2018_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2019_DENSE_2019_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2019_DENSE_2019_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2473_WEIGHT_CONV2D_2473_WEIGHT_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2473_WEIGHT_CONV2D_2473_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2473_BIAS_CONV2D_2473_BIAS_DATA     0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2473_BIAS_CONV2D_2473_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2474_WEIGHT_CONV2D_2474_WEIGHT_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2474_WEIGHT_CONV2D_2474_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2474_BIAS_CONV2D_2474_BIAS_DATA     0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2474_BIAS_CONV2D_2474_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2013_WEIGHT_DENSE_2013_WEIGHT_DATA   0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2013_WEIGHT_DENSE_2013_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2013_BIAS_DENSE_2013_BIAS_DATA       0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2013_BIAS_DENSE_2013_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2014_WEIGHT_DENSE_2014_WEIGHT_DATA   0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2014_WEIGHT_DENSE_2014_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2014_BIAS_DENSE_2014_BIAS_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2014_BIAS_DENSE_2014_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2475_WEIGHT_CONV2D_2475_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2475_WEIGHT_CONV2D_2475_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2475_BIAS_CONV2D_2475_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2475_BIAS_CONV2D_2475_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2015_WEIGHT_DENSE_2015_WEIGHT_DATA   0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2015_WEIGHT_DENSE_2015_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2015_BIAS_DENSE_2015_BIAS_DATA       0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2015_BIAS_DENSE_2015_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2476_WEIGHT_CONV2D_2476_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2476_WEIGHT_CONV2D_2476_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2476_BIAS_CONV2D_2476_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2476_BIAS_CONV2D_2476_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2016_WEIGHT_DENSE_2016_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2016_WEIGHT_DENSE_2016_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2016_BIAS_DENSE_2016_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2016_BIAS_DENSE_2016_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2017_WEIGHT_DENSE_2017_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2017_WEIGHT_DENSE_2017_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2017_BIAS_DENSE_2017_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2017_BIAS_DENSE_2017_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2018_WEIGHT_DENSE_2018_WEIGHT_DATA   0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2018_WEIGHT_DENSE_2018_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2018_BIAS_DENSE_2018_BIAS_DATA       0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2018_BIAS_DENSE_2018_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2019_WEIGHT_DENSE_2019_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2019_WEIGHT_DENSE_2019_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2019_BIAS_DENSE_2019_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2019_BIAS_DENSE_2019_BIAS_DATA       32

