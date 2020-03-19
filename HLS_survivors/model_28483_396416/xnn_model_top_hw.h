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
// 0x028 : Data signal of Conv2d_1292_conv2d_1292
//         bit 31~0 - Conv2d_1292_conv2d_1292[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_1293_conv2d_1293
//         bit 31~0 - Conv2d_1293_conv2d_1293[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_969_max_pooling2d_969
//         bit 31~0 - Max_pooling2d_969_max_pooling2d_969[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_970_max_pooling2d_970
//         bit 31~0 - Max_pooling2d_970_max_pooling2d_970[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_916_dense_916
//         bit 31~0 - Dense_916_dense_916[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_917_dense_917
//         bit 31~0 - Dense_917_dense_917[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_155_concatenate_155
//         bit 31~0 - Concatenate_155_concatenate_155[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_1297_conv2d_1297
//         bit 31~0 - Conv2d_1297_conv2d_1297[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Conv2d_1298_conv2d_1298
//         bit 31~0 - Conv2d_1298_conv2d_1298[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_973_max_pooling2d_973
//         bit 31~0 - Max_pooling2d_973_max_pooling2d_973[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_1299_conv2d_1299
//         bit 31~0 - Conv2d_1299_conv2d_1299[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_974_max_pooling2d_974
//         bit 31~0 - Max_pooling2d_974_max_pooling2d_974[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Flatten_51_flatten_51
//         bit 31~0 - Flatten_51_flatten_51[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_920_dense_920
//         bit 31~0 - Dense_920_dense_920[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_921_dense_921
//         bit 31~0 - Dense_921_dense_921[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_1292_weight_conv2d_1292_weight
//         bit 31~0 - Conv2d_1292_weight_conv2d_1292_weight[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_1292_bias_conv2d_1292_bias
//         bit 31~0 - Conv2d_1292_bias_conv2d_1292_bias[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_1293_weight_conv2d_1293_weight
//         bit 31~0 - Conv2d_1293_weight_conv2d_1293_weight[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_1293_bias_conv2d_1293_bias
//         bit 31~0 - Conv2d_1293_bias_conv2d_1293_bias[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_916_weight_dense_916_weight
//         bit 31~0 - Dense_916_weight_dense_916_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_916_bias_dense_916_bias
//         bit 31~0 - Dense_916_bias_dense_916_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_917_weight_dense_917_weight
//         bit 31~0 - Dense_917_weight_dense_917_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_917_bias_dense_917_bias
//         bit 31~0 - Dense_917_bias_dense_917_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_1297_weight_conv2d_1297_weight
//         bit 31~0 - Conv2d_1297_weight_conv2d_1297_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_1297_bias_conv2d_1297_bias
//         bit 31~0 - Conv2d_1297_bias_conv2d_1297_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_1298_weight_conv2d_1298_weight
//         bit 31~0 - Conv2d_1298_weight_conv2d_1298_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_1298_bias_conv2d_1298_bias
//         bit 31~0 - Conv2d_1298_bias_conv2d_1298_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_1299_weight_conv2d_1299_weight
//         bit 31~0 - Conv2d_1299_weight_conv2d_1299_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_1299_bias_conv2d_1299_bias
//         bit 31~0 - Conv2d_1299_bias_conv2d_1299_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_920_weight_dense_920_weight
//         bit 31~0 - Dense_920_weight_dense_920_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_920_bias_dense_920_bias
//         bit 31~0 - Dense_920_bias_dense_920_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_921_weight_dense_921_weight
//         bit 31~0 - Dense_921_weight_dense_921_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_921_bias_dense_921_bias
//         bit 31~0 - Dense_921_bias_dense_921_bias[31:0] (Read/Write)
// 0x12c : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1292_CONV2D_1292_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1292_CONV2D_1292_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1293_CONV2D_1293_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1293_CONV2D_1293_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_969_MAX_POOLING2D_969_DATA   0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_969_MAX_POOLING2D_969_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_970_MAX_POOLING2D_970_DATA   0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_970_MAX_POOLING2D_970_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_916_DENSE_916_DATA                   0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_916_DENSE_916_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_917_DENSE_917_DATA                   0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_917_DENSE_917_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_155_CONCATENATE_155_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_155_CONCATENATE_155_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1297_CONV2D_1297_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1297_CONV2D_1297_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1298_CONV2D_1298_DATA               0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1298_CONV2D_1298_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_973_MAX_POOLING2D_973_DATA   0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_973_MAX_POOLING2D_973_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1299_CONV2D_1299_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1299_CONV2D_1299_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_974_MAX_POOLING2D_974_DATA   0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_974_MAX_POOLING2D_974_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_51_FLATTEN_51_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_51_FLATTEN_51_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_920_DENSE_920_DATA                   0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_920_DENSE_920_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_921_DENSE_921_DATA                   0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_921_DENSE_921_DATA                   32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1292_WEIGHT_CONV2D_1292_WEIGHT_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1292_WEIGHT_CONV2D_1292_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1292_BIAS_CONV2D_1292_BIAS_DATA     0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1292_BIAS_CONV2D_1292_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1293_WEIGHT_CONV2D_1293_WEIGHT_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1293_WEIGHT_CONV2D_1293_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1293_BIAS_CONV2D_1293_BIAS_DATA     0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1293_BIAS_CONV2D_1293_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_916_WEIGHT_DENSE_916_WEIGHT_DATA     0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_916_WEIGHT_DENSE_916_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_916_BIAS_DENSE_916_BIAS_DATA         0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_916_BIAS_DENSE_916_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_917_WEIGHT_DENSE_917_WEIGHT_DATA     0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_917_WEIGHT_DENSE_917_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_917_BIAS_DENSE_917_BIAS_DATA         0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_917_BIAS_DENSE_917_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1297_WEIGHT_CONV2D_1297_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1297_WEIGHT_CONV2D_1297_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1297_BIAS_CONV2D_1297_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1297_BIAS_CONV2D_1297_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1298_WEIGHT_CONV2D_1298_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1298_WEIGHT_CONV2D_1298_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1298_BIAS_CONV2D_1298_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1298_BIAS_CONV2D_1298_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1299_WEIGHT_CONV2D_1299_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1299_WEIGHT_CONV2D_1299_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1299_BIAS_CONV2D_1299_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1299_BIAS_CONV2D_1299_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_920_WEIGHT_DENSE_920_WEIGHT_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_920_WEIGHT_DENSE_920_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_920_BIAS_DENSE_920_BIAS_DATA         0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_920_BIAS_DENSE_920_BIAS_DATA         32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_921_WEIGHT_DENSE_921_WEIGHT_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_921_WEIGHT_DENSE_921_WEIGHT_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_921_BIAS_DENSE_921_BIAS_DATA         0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_921_BIAS_DENSE_921_BIAS_DATA         32

