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
// 0x028 : Data signal of Conv2d_36_conv2d_36
//         bit 31~0 - Conv2d_36_conv2d_36[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_38_conv2d_38
//         bit 31~0 - Conv2d_38_conv2d_38[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_25_max_pooling2d_25
//         bit 31~0 - Max_pooling2d_25_max_pooling2d_25[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_27_max_pooling2d_27
//         bit 31~0 - Max_pooling2d_27_max_pooling2d_27[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_26_dense_26
//         bit 31~0 - Dense_26_dense_26[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_28_dense_28
//         bit 31~0 - Dense_28_dense_28[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_37_conv2d_37
//         bit 31~0 - Conv2d_37_conv2d_37[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_39_conv2d_39
//         bit 31~0 - Conv2d_39_conv2d_39[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_26_max_pooling2d_26
//         bit 31~0 - Max_pooling2d_26_max_pooling2d_26[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_28_max_pooling2d_28
//         bit 31~0 - Max_pooling2d_28_max_pooling2d_28[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_27_dense_27
//         bit 31~0 - Dense_27_dense_27[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_29_dense_29
//         bit 31~0 - Dense_29_dense_29[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Concatenate_8_concatenate_8
//         bit 31~0 - Concatenate_8_concatenate_8[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_40_conv2d_40
//         bit 31~0 - Conv2d_40_conv2d_40[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_43_conv2d_43
//         bit 31~0 - Conv2d_43_conv2d_43[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Max_pooling2d_29_max_pooling2d_29
//         bit 31~0 - Max_pooling2d_29_max_pooling2d_29[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_31_max_pooling2d_31
//         bit 31~0 - Max_pooling2d_31_max_pooling2d_31[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_30_dense_30
//         bit 31~0 - Dense_30_dense_30[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_32_dense_32
//         bit 31~0 - Dense_32_dense_32[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Max_pooling2d_30_max_pooling2d_30
//         bit 31~0 - Max_pooling2d_30_max_pooling2d_30[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Max_pooling2d_32_max_pooling2d_32
//         bit 31~0 - Max_pooling2d_32_max_pooling2d_32[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_31_dense_31
//         bit 31~0 - Dense_31_dense_31[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_33_dense_33
//         bit 31~0 - Dense_33_dense_33[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Concatenate_9_concatenate_9
//         bit 31~0 - Concatenate_9_concatenate_9[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Flatten_3_flatten_3
//         bit 31~0 - Flatten_3_flatten_3[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_34_dense_34
//         bit 31~0 - Dense_34_dense_34[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_35_dense_35
//         bit 31~0 - Dense_35_dense_35[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_36_dense_36
//         bit 31~0 - Dense_36_dense_36[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_36_weight_conv2d_36_weight
//         bit 31~0 - Conv2d_36_weight_conv2d_36_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_36_bias_conv2d_36_bias
//         bit 31~0 - Conv2d_36_bias_conv2d_36_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_38_weight_conv2d_38_weight
//         bit 31~0 - Conv2d_38_weight_conv2d_38_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_38_bias_conv2d_38_bias
//         bit 31~0 - Conv2d_38_bias_conv2d_38_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_26_weight_dense_26_weight
//         bit 31~0 - Dense_26_weight_dense_26_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_26_bias_dense_26_bias
//         bit 31~0 - Dense_26_bias_dense_26_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_28_weight_dense_28_weight
//         bit 31~0 - Dense_28_weight_dense_28_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_28_bias_dense_28_bias
//         bit 31~0 - Dense_28_bias_dense_28_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_37_weight_conv2d_37_weight
//         bit 31~0 - Conv2d_37_weight_conv2d_37_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_37_bias_conv2d_37_bias
//         bit 31~0 - Conv2d_37_bias_conv2d_37_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_39_weight_conv2d_39_weight
//         bit 31~0 - Conv2d_39_weight_conv2d_39_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_39_bias_conv2d_39_bias
//         bit 31~0 - Conv2d_39_bias_conv2d_39_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_27_weight_dense_27_weight
//         bit 31~0 - Dense_27_weight_dense_27_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_27_bias_dense_27_bias
//         bit 31~0 - Dense_27_bias_dense_27_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_29_weight_dense_29_weight
//         bit 31~0 - Dense_29_weight_dense_29_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_29_bias_dense_29_bias
//         bit 31~0 - Dense_29_bias_dense_29_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_40_weight_conv2d_40_weight
//         bit 31~0 - Conv2d_40_weight_conv2d_40_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_40_bias_conv2d_40_bias
//         bit 31~0 - Conv2d_40_bias_conv2d_40_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Conv2d_43_weight_conv2d_43_weight
//         bit 31~0 - Conv2d_43_weight_conv2d_43_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Conv2d_43_bias_conv2d_43_bias
//         bit 31~0 - Conv2d_43_bias_conv2d_43_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_30_weight_dense_30_weight
//         bit 31~0 - Dense_30_weight_dense_30_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_30_bias_dense_30_bias
//         bit 31~0 - Dense_30_bias_dense_30_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_32_weight_dense_32_weight
//         bit 31~0 - Dense_32_weight_dense_32_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_32_bias_dense_32_bias
//         bit 31~0 - Dense_32_bias_dense_32_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_31_weight_dense_31_weight
//         bit 31~0 - Dense_31_weight_dense_31_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_31_bias_dense_31_bias
//         bit 31~0 - Dense_31_bias_dense_31_bias[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_33_weight_dense_33_weight
//         bit 31~0 - Dense_33_weight_dense_33_weight[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_33_bias_dense_33_bias
//         bit 31~0 - Dense_33_bias_dense_33_bias[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_34_weight_dense_34_weight
//         bit 31~0 - Dense_34_weight_dense_34_weight[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_34_bias_dense_34_bias
//         bit 31~0 - Dense_34_bias_dense_34_bias[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of Dense_35_weight_dense_35_weight
//         bit 31~0 - Dense_35_weight_dense_35_weight[31:0] (Read/Write)
// 0x1fc : reserved
// 0x200 : Data signal of Dense_35_bias_dense_35_bias
//         bit 31~0 - Dense_35_bias_dense_35_bias[31:0] (Read/Write)
// 0x204 : reserved
// 0x208 : Data signal of Dense_36_weight_dense_36_weight
//         bit 31~0 - Dense_36_weight_dense_36_weight[31:0] (Read/Write)
// 0x20c : reserved
// 0x210 : Data signal of Dense_36_bias_dense_36_bias
//         bit 31~0 - Dense_36_bias_dense_36_bias[31:0] (Read/Write)
// 0x214 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                    0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                    0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                    0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                              0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                              32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT1_INPUT1_DATA                     0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT1_INPUT1_DATA                     32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT2_INPUT2_DATA                     0x020
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT2_INPUT2_DATA                     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_36_CONV2D_36_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_36_CONV2D_36_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_38_CONV2D_38_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_38_CONV2D_38_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_25_MAX_POOLING2D_25_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_25_MAX_POOLING2D_25_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_27_MAX_POOLING2D_27_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_27_MAX_POOLING2D_27_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_26_DENSE_26_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_26_DENSE_26_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_28_DENSE_28_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_28_DENSE_28_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_37_CONV2D_37_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_37_CONV2D_37_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_39_CONV2D_39_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_39_CONV2D_39_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_26_MAX_POOLING2D_26_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_26_MAX_POOLING2D_26_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_28_MAX_POOLING2D_28_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_28_MAX_POOLING2D_28_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_27_DENSE_27_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_27_DENSE_27_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_29_DENSE_29_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_29_DENSE_29_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_8_CONCATENATE_8_DATA       0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_8_CONCATENATE_8_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_40_CONV2D_40_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_40_CONV2D_40_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_43_CONV2D_43_DATA               0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_43_CONV2D_43_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_29_MAX_POOLING2D_29_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_29_MAX_POOLING2D_29_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_31_MAX_POOLING2D_31_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_31_MAX_POOLING2D_31_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_30_DENSE_30_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_30_DENSE_30_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_32_DENSE_32_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_32_DENSE_32_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_30_MAX_POOLING2D_30_DATA 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_30_MAX_POOLING2D_30_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_32_MAX_POOLING2D_32_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_32_MAX_POOLING2D_32_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_31_DENSE_31_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_31_DENSE_31_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_33_DENSE_33_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_33_DENSE_33_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_9_CONCATENATE_9_DATA       0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_9_CONCATENATE_9_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_3_FLATTEN_3_DATA               0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_3_FLATTEN_3_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_34_DENSE_34_DATA                 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_34_DENSE_34_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_35_DENSE_35_DATA                 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_35_DENSE_35_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_36_DENSE_36_DATA                 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_36_DENSE_36_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_36_WEIGHT_CONV2D_36_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_36_WEIGHT_CONV2D_36_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_36_BIAS_CONV2D_36_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_36_BIAS_CONV2D_36_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_38_WEIGHT_CONV2D_38_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_38_WEIGHT_CONV2D_38_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_38_BIAS_CONV2D_38_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_38_BIAS_CONV2D_38_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_26_WEIGHT_DENSE_26_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_26_WEIGHT_DENSE_26_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_26_BIAS_DENSE_26_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_26_BIAS_DENSE_26_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_28_WEIGHT_DENSE_28_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_28_WEIGHT_DENSE_28_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_28_BIAS_DENSE_28_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_28_BIAS_DENSE_28_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_37_WEIGHT_CONV2D_37_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_37_WEIGHT_CONV2D_37_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_37_BIAS_CONV2D_37_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_37_BIAS_CONV2D_37_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_39_WEIGHT_CONV2D_39_WEIGHT_DATA 0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_39_WEIGHT_CONV2D_39_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_39_BIAS_CONV2D_39_BIAS_DATA     0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_39_BIAS_CONV2D_39_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_27_WEIGHT_DENSE_27_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_27_WEIGHT_DENSE_27_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_27_BIAS_DENSE_27_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_27_BIAS_DENSE_27_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_29_WEIGHT_DENSE_29_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_29_WEIGHT_DENSE_29_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_29_BIAS_DENSE_29_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_29_BIAS_DENSE_29_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_40_WEIGHT_CONV2D_40_WEIGHT_DATA 0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_40_WEIGHT_CONV2D_40_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_40_BIAS_CONV2D_40_BIAS_DATA     0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_40_BIAS_CONV2D_40_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_43_WEIGHT_CONV2D_43_WEIGHT_DATA 0x198
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_43_WEIGHT_CONV2D_43_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_43_BIAS_CONV2D_43_BIAS_DATA     0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_43_BIAS_CONV2D_43_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_30_WEIGHT_DENSE_30_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_30_WEIGHT_DENSE_30_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_30_BIAS_DENSE_30_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_30_BIAS_DENSE_30_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_32_WEIGHT_DENSE_32_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_32_WEIGHT_DENSE_32_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_32_BIAS_DENSE_32_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_32_BIAS_DENSE_32_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_31_WEIGHT_DENSE_31_WEIGHT_DATA   0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_31_WEIGHT_DENSE_31_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_31_BIAS_DENSE_31_BIAS_DATA       0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_31_BIAS_DENSE_31_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_33_WEIGHT_DENSE_33_WEIGHT_DATA   0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_33_WEIGHT_DENSE_33_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_33_BIAS_DENSE_33_BIAS_DATA       0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_33_BIAS_DENSE_33_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_34_WEIGHT_DENSE_34_WEIGHT_DATA   0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_34_WEIGHT_DENSE_34_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_34_BIAS_DENSE_34_BIAS_DATA       0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_34_BIAS_DENSE_34_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_35_WEIGHT_DENSE_35_WEIGHT_DATA   0x1f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_35_WEIGHT_DENSE_35_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_35_BIAS_DENSE_35_BIAS_DATA       0x200
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_35_BIAS_DENSE_35_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_36_WEIGHT_DENSE_36_WEIGHT_DATA   0x208
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_36_WEIGHT_DENSE_36_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_36_BIAS_DENSE_36_BIAS_DATA       0x210
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_36_BIAS_DENSE_36_BIAS_DATA       32

