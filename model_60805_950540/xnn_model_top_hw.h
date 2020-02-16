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
// 0x020 : Data signal of Conv2d_7823_conv2d_7823
//         bit 31~0 - Conv2d_7823_conv2d_7823[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Max_pooling2d_5556_max_pooling2d_5556
//         bit 31~0 - Max_pooling2d_5556_max_pooling2d_5556[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Dense_6203_dense_6203
//         bit 31~0 - Dense_6203_dense_6203[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Conv2d_7824_conv2d_7824
//         bit 31~0 - Conv2d_7824_conv2d_7824[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Conv2d_7825_conv2d_7825
//         bit 31~0 - Conv2d_7825_conv2d_7825[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Conv2d_7827_conv2d_7827
//         bit 31~0 - Conv2d_7827_conv2d_7827[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Max_pooling2d_5557_max_pooling2d_5557
//         bit 31~0 - Max_pooling2d_5557_max_pooling2d_5557[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Max_pooling2d_5558_max_pooling2d_5558
//         bit 31~0 - Max_pooling2d_5558_max_pooling2d_5558[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Dense_6204_dense_6204
//         bit 31~0 - Dense_6204_dense_6204[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Dense_6205_dense_6205
//         bit 31~0 - Dense_6205_dense_6205[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_7826_conv2d_7826
//         bit 31~0 - Conv2d_7826_conv2d_7826[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_7828_conv2d_7828
//         bit 31~0 - Conv2d_7828_conv2d_7828[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Concatenate_544_concatenate_544
//         bit 31~0 - Concatenate_544_concatenate_544[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_7829_conv2d_7829
//         bit 31~0 - Conv2d_7829_conv2d_7829[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Flatten_370_flatten_370
//         bit 31~0 - Flatten_370_flatten_370[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_6206_dense_6206
//         bit 31~0 - Dense_6206_dense_6206[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_6207_dense_6207
//         bit 31~0 - Dense_6207_dense_6207[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_7823_weight_conv2d_7823_weight
//         bit 31~0 - Conv2d_7823_weight_conv2d_7823_weight[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_7823_bias_conv2d_7823_bias
//         bit 31~0 - Conv2d_7823_bias_conv2d_7823_bias[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_6203_weight_dense_6203_weight
//         bit 31~0 - Dense_6203_weight_dense_6203_weight[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_6203_bias_dense_6203_bias
//         bit 31~0 - Dense_6203_bias_dense_6203_bias[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_7824_weight_conv2d_7824_weight
//         bit 31~0 - Conv2d_7824_weight_conv2d_7824_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_7824_bias_conv2d_7824_bias
//         bit 31~0 - Conv2d_7824_bias_conv2d_7824_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_7825_weight_conv2d_7825_weight
//         bit 31~0 - Conv2d_7825_weight_conv2d_7825_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_7825_bias_conv2d_7825_bias
//         bit 31~0 - Conv2d_7825_bias_conv2d_7825_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_7827_weight_conv2d_7827_weight
//         bit 31~0 - Conv2d_7827_weight_conv2d_7827_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_7827_bias_conv2d_7827_bias
//         bit 31~0 - Conv2d_7827_bias_conv2d_7827_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_6204_weight_dense_6204_weight
//         bit 31~0 - Dense_6204_weight_dense_6204_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_6204_bias_dense_6204_bias
//         bit 31~0 - Dense_6204_bias_dense_6204_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_6205_weight_dense_6205_weight
//         bit 31~0 - Dense_6205_weight_dense_6205_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_6205_bias_dense_6205_bias
//         bit 31~0 - Dense_6205_bias_dense_6205_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_7826_weight_conv2d_7826_weight
//         bit 31~0 - Conv2d_7826_weight_conv2d_7826_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_7826_bias_conv2d_7826_bias
//         bit 31~0 - Conv2d_7826_bias_conv2d_7826_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_7828_weight_conv2d_7828_weight
//         bit 31~0 - Conv2d_7828_weight_conv2d_7828_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_7828_bias_conv2d_7828_bias
//         bit 31~0 - Conv2d_7828_bias_conv2d_7828_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_7829_weight_conv2d_7829_weight
//         bit 31~0 - Conv2d_7829_weight_conv2d_7829_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_7829_bias_conv2d_7829_bias
//         bit 31~0 - Conv2d_7829_bias_conv2d_7829_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_6206_weight_dense_6206_weight
//         bit 31~0 - Dense_6206_weight_dense_6206_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_6206_bias_dense_6206_bias
//         bit 31~0 - Dense_6206_bias_dense_6206_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_6207_weight_dense_6207_weight
//         bit 31~0 - Dense_6207_weight_dense_6207_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_6207_bias_dense_6207_bias
//         bit 31~0 - Dense_6207_bias_dense_6207_bias[31:0] (Read/Write)
// 0x164 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                           0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                           32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7823_CONV2D_7823_DATA               0x020
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7823_CONV2D_7823_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5556_MAX_POOLING2D_5556_DATA 0x028
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5556_MAX_POOLING2D_5556_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6203_DENSE_6203_DATA                 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6203_DENSE_6203_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7824_CONV2D_7824_DATA               0x038
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7824_CONV2D_7824_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7825_CONV2D_7825_DATA               0x040
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7825_CONV2D_7825_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7827_CONV2D_7827_DATA               0x048
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7827_CONV2D_7827_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5557_MAX_POOLING2D_5557_DATA 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5557_MAX_POOLING2D_5557_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5558_MAX_POOLING2D_5558_DATA 0x058
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5558_MAX_POOLING2D_5558_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6204_DENSE_6204_DATA                 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6204_DENSE_6204_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6205_DENSE_6205_DATA                 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6205_DENSE_6205_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7826_CONV2D_7826_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7826_CONV2D_7826_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7828_CONV2D_7828_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7828_CONV2D_7828_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_544_CONCATENATE_544_DATA       0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_544_CONCATENATE_544_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7829_CONV2D_7829_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7829_CONV2D_7829_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_370_FLATTEN_370_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_370_FLATTEN_370_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6206_DENSE_6206_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6206_DENSE_6206_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6207_DENSE_6207_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6207_DENSE_6207_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7823_WEIGHT_CONV2D_7823_WEIGHT_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7823_WEIGHT_CONV2D_7823_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7823_BIAS_CONV2D_7823_BIAS_DATA     0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7823_BIAS_CONV2D_7823_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6203_WEIGHT_DENSE_6203_WEIGHT_DATA   0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6203_WEIGHT_DENSE_6203_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6203_BIAS_DENSE_6203_BIAS_DATA       0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6203_BIAS_DENSE_6203_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7824_WEIGHT_CONV2D_7824_WEIGHT_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7824_WEIGHT_CONV2D_7824_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7824_BIAS_CONV2D_7824_BIAS_DATA     0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7824_BIAS_CONV2D_7824_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7825_WEIGHT_CONV2D_7825_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7825_WEIGHT_CONV2D_7825_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7825_BIAS_CONV2D_7825_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7825_BIAS_CONV2D_7825_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7827_WEIGHT_CONV2D_7827_WEIGHT_DATA 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7827_WEIGHT_CONV2D_7827_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7827_BIAS_CONV2D_7827_BIAS_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7827_BIAS_CONV2D_7827_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6204_WEIGHT_DENSE_6204_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6204_WEIGHT_DENSE_6204_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6204_BIAS_DENSE_6204_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6204_BIAS_DENSE_6204_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6205_WEIGHT_DENSE_6205_WEIGHT_DATA   0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6205_WEIGHT_DENSE_6205_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6205_BIAS_DENSE_6205_BIAS_DATA       0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6205_BIAS_DENSE_6205_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7826_WEIGHT_CONV2D_7826_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7826_WEIGHT_CONV2D_7826_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7826_BIAS_CONV2D_7826_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7826_BIAS_CONV2D_7826_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7828_WEIGHT_CONV2D_7828_WEIGHT_DATA 0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7828_WEIGHT_CONV2D_7828_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7828_BIAS_CONV2D_7828_BIAS_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7828_BIAS_CONV2D_7828_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7829_WEIGHT_CONV2D_7829_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7829_WEIGHT_CONV2D_7829_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7829_BIAS_CONV2D_7829_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7829_BIAS_CONV2D_7829_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6206_WEIGHT_DENSE_6206_WEIGHT_DATA   0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6206_WEIGHT_DENSE_6206_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6206_BIAS_DENSE_6206_BIAS_DATA       0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6206_BIAS_DENSE_6206_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6207_WEIGHT_DENSE_6207_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6207_WEIGHT_DENSE_6207_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_6207_BIAS_DENSE_6207_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_6207_BIAS_DENSE_6207_BIAS_DATA       32

