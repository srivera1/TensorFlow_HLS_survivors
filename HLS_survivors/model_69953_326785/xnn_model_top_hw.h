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
// 0x020 : Data signal of Conv2d_6089_conv2d_6089
//         bit 31~0 - Conv2d_6089_conv2d_6089[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Max_pooling2d_4300_max_pooling2d_4300
//         bit 31~0 - Max_pooling2d_4300_max_pooling2d_4300[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Dense_4789_dense_4789
//         bit 31~0 - Dense_4789_dense_4789[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Conv2d_6090_conv2d_6090
//         bit 31~0 - Conv2d_6090_conv2d_6090[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_4301_max_pooling2d_4301
//         bit 31~0 - Max_pooling2d_4301_max_pooling2d_4301[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_4790_dense_4790
//         bit 31~0 - Dense_4790_dense_4790[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_6091_conv2d_6091
//         bit 31~0 - Conv2d_6091_conv2d_6091[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Max_pooling2d_4302_max_pooling2d_4302
//         bit 31~0 - Max_pooling2d_4302_max_pooling2d_4302[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Dense_4791_dense_4791
//         bit 31~0 - Dense_4791_dense_4791[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_4303_max_pooling2d_4303
//         bit 31~0 - Max_pooling2d_4303_max_pooling2d_4303[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_4792_dense_4792
//         bit 31~0 - Dense_4792_dense_4792[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_4793_dense_4793
//         bit 31~0 - Dense_4793_dense_4793[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_4794_dense_4794
//         bit 31~0 - Dense_4794_dense_4794[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Flatten_287_flatten_287
//         bit 31~0 - Flatten_287_flatten_287[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_4795_dense_4795
//         bit 31~0 - Dense_4795_dense_4795[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_4796_dense_4796
//         bit 31~0 - Dense_4796_dense_4796[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_6089_weight_conv2d_6089_weight
//         bit 31~0 - Conv2d_6089_weight_conv2d_6089_weight[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_6089_bias_conv2d_6089_bias
//         bit 31~0 - Conv2d_6089_bias_conv2d_6089_bias[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_4789_weight_dense_4789_weight
//         bit 31~0 - Dense_4789_weight_dense_4789_weight[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_4789_bias_dense_4789_bias
//         bit 31~0 - Dense_4789_bias_dense_4789_bias[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Conv2d_6090_weight_conv2d_6090_weight
//         bit 31~0 - Conv2d_6090_weight_conv2d_6090_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_6090_bias_conv2d_6090_bias
//         bit 31~0 - Conv2d_6090_bias_conv2d_6090_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_4790_weight_dense_4790_weight
//         bit 31~0 - Dense_4790_weight_dense_4790_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_4790_bias_dense_4790_bias
//         bit 31~0 - Dense_4790_bias_dense_4790_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_6091_weight_conv2d_6091_weight
//         bit 31~0 - Conv2d_6091_weight_conv2d_6091_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_6091_bias_conv2d_6091_bias
//         bit 31~0 - Conv2d_6091_bias_conv2d_6091_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_4791_weight_dense_4791_weight
//         bit 31~0 - Dense_4791_weight_dense_4791_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_4791_bias_dense_4791_bias
//         bit 31~0 - Dense_4791_bias_dense_4791_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_4792_weight_dense_4792_weight
//         bit 31~0 - Dense_4792_weight_dense_4792_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_4792_bias_dense_4792_bias
//         bit 31~0 - Dense_4792_bias_dense_4792_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_4793_weight_dense_4793_weight
//         bit 31~0 - Dense_4793_weight_dense_4793_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_4793_bias_dense_4793_bias
//         bit 31~0 - Dense_4793_bias_dense_4793_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_4794_weight_dense_4794_weight
//         bit 31~0 - Dense_4794_weight_dense_4794_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_4794_bias_dense_4794_bias
//         bit 31~0 - Dense_4794_bias_dense_4794_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_4795_weight_dense_4795_weight
//         bit 31~0 - Dense_4795_weight_dense_4795_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_4795_bias_dense_4795_bias
//         bit 31~0 - Dense_4795_bias_dense_4795_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_4796_weight_dense_4796_weight
//         bit 31~0 - Dense_4796_weight_dense_4796_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_4796_bias_dense_4796_bias
//         bit 31~0 - Dense_4796_bias_dense_4796_bias[31:0] (Read/Write)
// 0x14c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                           0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                           32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6089_CONV2D_6089_DATA               0x020
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6089_CONV2D_6089_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4300_MAX_POOLING2D_4300_DATA 0x028
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4300_MAX_POOLING2D_4300_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4789_DENSE_4789_DATA                 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4789_DENSE_4789_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6090_CONV2D_6090_DATA               0x038
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6090_CONV2D_6090_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4301_MAX_POOLING2D_4301_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4301_MAX_POOLING2D_4301_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4790_DENSE_4790_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4790_DENSE_4790_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6091_CONV2D_6091_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6091_CONV2D_6091_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4302_MAX_POOLING2D_4302_DATA 0x058
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4302_MAX_POOLING2D_4302_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4791_DENSE_4791_DATA                 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4791_DENSE_4791_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4303_MAX_POOLING2D_4303_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4303_MAX_POOLING2D_4303_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4792_DENSE_4792_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4792_DENSE_4792_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4793_DENSE_4793_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4793_DENSE_4793_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4794_DENSE_4794_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4794_DENSE_4794_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_287_FLATTEN_287_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_287_FLATTEN_287_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4795_DENSE_4795_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4795_DENSE_4795_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4796_DENSE_4796_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4796_DENSE_4796_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6089_WEIGHT_CONV2D_6089_WEIGHT_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6089_WEIGHT_CONV2D_6089_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6089_BIAS_CONV2D_6089_BIAS_DATA     0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6089_BIAS_CONV2D_6089_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4789_WEIGHT_DENSE_4789_WEIGHT_DATA   0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4789_WEIGHT_DENSE_4789_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4789_BIAS_DENSE_4789_BIAS_DATA       0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4789_BIAS_DENSE_4789_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6090_WEIGHT_CONV2D_6090_WEIGHT_DATA 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6090_WEIGHT_CONV2D_6090_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6090_BIAS_CONV2D_6090_BIAS_DATA     0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6090_BIAS_CONV2D_6090_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4790_WEIGHT_DENSE_4790_WEIGHT_DATA   0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4790_WEIGHT_DENSE_4790_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4790_BIAS_DENSE_4790_BIAS_DATA       0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4790_BIAS_DENSE_4790_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6091_WEIGHT_CONV2D_6091_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6091_WEIGHT_CONV2D_6091_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6091_BIAS_CONV2D_6091_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6091_BIAS_CONV2D_6091_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4791_WEIGHT_DENSE_4791_WEIGHT_DATA   0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4791_WEIGHT_DENSE_4791_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4791_BIAS_DENSE_4791_BIAS_DATA       0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4791_BIAS_DENSE_4791_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4792_WEIGHT_DENSE_4792_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4792_WEIGHT_DENSE_4792_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4792_BIAS_DENSE_4792_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4792_BIAS_DENSE_4792_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4793_WEIGHT_DENSE_4793_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4793_WEIGHT_DENSE_4793_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4793_BIAS_DENSE_4793_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4793_BIAS_DENSE_4793_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4794_WEIGHT_DENSE_4794_WEIGHT_DATA   0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4794_WEIGHT_DENSE_4794_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4794_BIAS_DENSE_4794_BIAS_DATA       0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4794_BIAS_DENSE_4794_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4795_WEIGHT_DENSE_4795_WEIGHT_DATA   0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4795_WEIGHT_DENSE_4795_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4795_BIAS_DENSE_4795_BIAS_DATA       0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4795_BIAS_DENSE_4795_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4796_WEIGHT_DENSE_4796_WEIGHT_DATA   0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4796_WEIGHT_DENSE_4796_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4796_BIAS_DENSE_4796_BIAS_DATA       0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4796_BIAS_DENSE_4796_BIAS_DATA       32

