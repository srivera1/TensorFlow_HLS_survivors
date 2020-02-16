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
// 0x028 : Data signal of Conv2d_839_conv2d_839
//         bit 31~0 - Conv2d_839_conv2d_839[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_841_conv2d_841
//         bit 31~0 - Conv2d_841_conv2d_841[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_706_max_pooling2d_706
//         bit 31~0 - Max_pooling2d_706_max_pooling2d_706[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_708_max_pooling2d_708
//         bit 31~0 - Max_pooling2d_708_max_pooling2d_708[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_693_dense_693
//         bit 31~0 - Dense_693_dense_693[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_695_dense_695
//         bit 31~0 - Dense_695_dense_695[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_840_conv2d_840
//         bit 31~0 - Conv2d_840_conv2d_840[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_842_conv2d_842
//         bit 31~0 - Conv2d_842_conv2d_842[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_707_max_pooling2d_707
//         bit 31~0 - Max_pooling2d_707_max_pooling2d_707[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_709_max_pooling2d_709
//         bit 31~0 - Max_pooling2d_709_max_pooling2d_709[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_694_dense_694
//         bit 31~0 - Dense_694_dense_694[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_696_dense_696
//         bit 31~0 - Dense_696_dense_696[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Concatenate_150_concatenate_150
//         bit 31~0 - Concatenate_150_concatenate_150[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_843_conv2d_843
//         bit 31~0 - Conv2d_843_conv2d_843[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_710_max_pooling2d_710
//         bit 31~0 - Max_pooling2d_710_max_pooling2d_710[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_697_dense_697
//         bit 31~0 - Dense_697_dense_697[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_711_max_pooling2d_711
//         bit 31~0 - Max_pooling2d_711_max_pooling2d_711[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_698_dense_698
//         bit 31~0 - Dense_698_dense_698[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Flatten_78_flatten_78
//         bit 31~0 - Flatten_78_flatten_78[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_699_dense_699
//         bit 31~0 - Dense_699_dense_699[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_700_dense_700
//         bit 31~0 - Dense_700_dense_700[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_839_weight_conv2d_839_weight
//         bit 31~0 - Conv2d_839_weight_conv2d_839_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_839_bias_conv2d_839_bias
//         bit 31~0 - Conv2d_839_bias_conv2d_839_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_841_weight_conv2d_841_weight
//         bit 31~0 - Conv2d_841_weight_conv2d_841_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_841_bias_conv2d_841_bias
//         bit 31~0 - Conv2d_841_bias_conv2d_841_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_693_weight_dense_693_weight
//         bit 31~0 - Dense_693_weight_dense_693_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_693_bias_dense_693_bias
//         bit 31~0 - Dense_693_bias_dense_693_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_695_weight_dense_695_weight
//         bit 31~0 - Dense_695_weight_dense_695_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_695_bias_dense_695_bias
//         bit 31~0 - Dense_695_bias_dense_695_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_840_weight_conv2d_840_weight
//         bit 31~0 - Conv2d_840_weight_conv2d_840_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_840_bias_conv2d_840_bias
//         bit 31~0 - Conv2d_840_bias_conv2d_840_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_842_weight_conv2d_842_weight
//         bit 31~0 - Conv2d_842_weight_conv2d_842_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_842_bias_conv2d_842_bias
//         bit 31~0 - Conv2d_842_bias_conv2d_842_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_694_weight_dense_694_weight
//         bit 31~0 - Dense_694_weight_dense_694_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_694_bias_dense_694_bias
//         bit 31~0 - Dense_694_bias_dense_694_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_696_weight_dense_696_weight
//         bit 31~0 - Dense_696_weight_dense_696_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_696_bias_dense_696_bias
//         bit 31~0 - Dense_696_bias_dense_696_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_843_weight_conv2d_843_weight
//         bit 31~0 - Conv2d_843_weight_conv2d_843_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_843_bias_conv2d_843_bias
//         bit 31~0 - Conv2d_843_bias_conv2d_843_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_697_weight_dense_697_weight
//         bit 31~0 - Dense_697_weight_dense_697_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_697_bias_dense_697_bias
//         bit 31~0 - Dense_697_bias_dense_697_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_698_weight_dense_698_weight
//         bit 31~0 - Dense_698_weight_dense_698_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_698_bias_dense_698_bias
//         bit 31~0 - Dense_698_bias_dense_698_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_699_weight_dense_699_weight
//         bit 31~0 - Dense_699_weight_dense_699_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_699_bias_dense_699_bias
//         bit 31~0 - Dense_699_bias_dense_699_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_700_weight_dense_700_weight
//         bit 31~0 - Dense_700_weight_dense_700_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_700_bias_dense_700_bias
//         bit 31~0 - Dense_700_bias_dense_700_bias[31:0] (Read/Write)
// 0x19c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                  0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                      0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                      0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                      0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT1_INPUT1_DATA                       0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT1_INPUT1_DATA                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT2_INPUT2_DATA                       0x020
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT2_INPUT2_DATA                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_839_CONV2D_839_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_839_CONV2D_839_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_841_CONV2D_841_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_841_CONV2D_841_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_706_MAX_POOLING2D_706_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_706_MAX_POOLING2D_706_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_708_MAX_POOLING2D_708_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_708_MAX_POOLING2D_708_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_693_DENSE_693_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_693_DENSE_693_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_695_DENSE_695_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_695_DENSE_695_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_840_CONV2D_840_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_840_CONV2D_840_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_842_CONV2D_842_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_842_CONV2D_842_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_707_MAX_POOLING2D_707_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_707_MAX_POOLING2D_707_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_709_MAX_POOLING2D_709_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_709_MAX_POOLING2D_709_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_694_DENSE_694_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_694_DENSE_694_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_696_DENSE_696_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_696_DENSE_696_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_150_CONCATENATE_150_DATA     0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_150_CONCATENATE_150_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_843_CONV2D_843_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_843_CONV2D_843_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_710_MAX_POOLING2D_710_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_710_MAX_POOLING2D_710_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_697_DENSE_697_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_697_DENSE_697_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_711_MAX_POOLING2D_711_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_711_MAX_POOLING2D_711_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_698_DENSE_698_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_698_DENSE_698_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_78_FLATTEN_78_DATA               0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_78_FLATTEN_78_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_699_DENSE_699_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_699_DENSE_699_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_700_DENSE_700_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_700_DENSE_700_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_839_WEIGHT_CONV2D_839_WEIGHT_DATA 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_839_WEIGHT_CONV2D_839_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_839_BIAS_CONV2D_839_BIAS_DATA     0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_839_BIAS_CONV2D_839_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_841_WEIGHT_CONV2D_841_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_841_WEIGHT_CONV2D_841_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_841_BIAS_CONV2D_841_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_841_BIAS_CONV2D_841_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_693_WEIGHT_DENSE_693_WEIGHT_DATA   0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_693_WEIGHT_DENSE_693_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_693_BIAS_DENSE_693_BIAS_DATA       0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_693_BIAS_DENSE_693_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_695_WEIGHT_DENSE_695_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_695_WEIGHT_DENSE_695_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_695_BIAS_DENSE_695_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_695_BIAS_DENSE_695_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_840_WEIGHT_CONV2D_840_WEIGHT_DATA 0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_840_WEIGHT_CONV2D_840_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_840_BIAS_CONV2D_840_BIAS_DATA     0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_840_BIAS_CONV2D_840_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_842_WEIGHT_CONV2D_842_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_842_WEIGHT_CONV2D_842_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_842_BIAS_CONV2D_842_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_842_BIAS_CONV2D_842_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_694_WEIGHT_DENSE_694_WEIGHT_DATA   0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_694_WEIGHT_DENSE_694_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_694_BIAS_DENSE_694_BIAS_DATA       0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_694_BIAS_DENSE_694_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_696_WEIGHT_DENSE_696_WEIGHT_DATA   0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_696_WEIGHT_DENSE_696_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_696_BIAS_DENSE_696_BIAS_DATA       0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_696_BIAS_DENSE_696_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_843_WEIGHT_CONV2D_843_WEIGHT_DATA 0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_843_WEIGHT_CONV2D_843_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_843_BIAS_CONV2D_843_BIAS_DATA     0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_843_BIAS_CONV2D_843_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_697_WEIGHT_DENSE_697_WEIGHT_DATA   0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_697_WEIGHT_DENSE_697_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_697_BIAS_DENSE_697_BIAS_DATA       0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_697_BIAS_DENSE_697_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_698_WEIGHT_DENSE_698_WEIGHT_DATA   0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_698_WEIGHT_DENSE_698_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_698_BIAS_DENSE_698_BIAS_DATA       0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_698_BIAS_DENSE_698_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_699_WEIGHT_DENSE_699_WEIGHT_DATA   0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_699_WEIGHT_DENSE_699_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_699_BIAS_DENSE_699_BIAS_DATA       0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_699_BIAS_DENSE_699_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_700_WEIGHT_DENSE_700_WEIGHT_DATA   0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_700_WEIGHT_DENSE_700_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_700_BIAS_DENSE_700_BIAS_DATA       0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_700_BIAS_DENSE_700_BIAS_DATA       32

