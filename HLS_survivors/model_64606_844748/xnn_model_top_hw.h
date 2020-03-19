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
// 0x020 : Data signal of Conv2d_4684_conv2d_4684
//         bit 31~0 - Conv2d_4684_conv2d_4684[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Max_pooling2d_3283_max_pooling2d_3283
//         bit 31~0 - Max_pooling2d_3283_max_pooling2d_3283[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Dense_3691_dense_3691
//         bit 31~0 - Dense_3691_dense_3691[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Conv2d_4685_conv2d_4685
//         bit 31~0 - Conv2d_4685_conv2d_4685[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Conv2d_4686_conv2d_4686
//         bit 31~0 - Conv2d_4686_conv2d_4686[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Max_pooling2d_3284_max_pooling2d_3284
//         bit 31~0 - Max_pooling2d_3284_max_pooling2d_3284[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_3692_dense_3692
//         bit 31~0 - Dense_3692_dense_3692[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_4687_conv2d_4687
//         bit 31~0 - Conv2d_4687_conv2d_4687[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_4688_conv2d_4688
//         bit 31~0 - Conv2d_4688_conv2d_4688[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Dense_3693_dense_3693
//         bit 31~0 - Dense_3693_dense_3693[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_3694_dense_3694
//         bit 31~0 - Dense_3694_dense_3694[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_3695_dense_3695
//         bit 31~0 - Dense_3695_dense_3695[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_3696_dense_3696
//         bit 31~0 - Dense_3696_dense_3696[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_3697_dense_3697
//         bit 31~0 - Dense_3697_dense_3697[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Flatten_222_flatten_222
//         bit 31~0 - Flatten_222_flatten_222[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_3698_dense_3698
//         bit 31~0 - Dense_3698_dense_3698[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_3699_dense_3699
//         bit 31~0 - Dense_3699_dense_3699[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_4684_weight_conv2d_4684_weight
//         bit 31~0 - Conv2d_4684_weight_conv2d_4684_weight[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_4684_bias_conv2d_4684_bias
//         bit 31~0 - Conv2d_4684_bias_conv2d_4684_bias[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_3691_weight_dense_3691_weight
//         bit 31~0 - Dense_3691_weight_dense_3691_weight[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_3691_bias_dense_3691_bias
//         bit 31~0 - Dense_3691_bias_dense_3691_bias[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_4685_weight_conv2d_4685_weight
//         bit 31~0 - Conv2d_4685_weight_conv2d_4685_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_4685_bias_conv2d_4685_bias
//         bit 31~0 - Conv2d_4685_bias_conv2d_4685_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_4686_weight_conv2d_4686_weight
//         bit 31~0 - Conv2d_4686_weight_conv2d_4686_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_4686_bias_conv2d_4686_bias
//         bit 31~0 - Conv2d_4686_bias_conv2d_4686_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_3692_weight_dense_3692_weight
//         bit 31~0 - Dense_3692_weight_dense_3692_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_3692_bias_dense_3692_bias
//         bit 31~0 - Dense_3692_bias_dense_3692_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_4687_weight_conv2d_4687_weight
//         bit 31~0 - Conv2d_4687_weight_conv2d_4687_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_4687_bias_conv2d_4687_bias
//         bit 31~0 - Conv2d_4687_bias_conv2d_4687_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_4688_weight_conv2d_4688_weight
//         bit 31~0 - Conv2d_4688_weight_conv2d_4688_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_4688_bias_conv2d_4688_bias
//         bit 31~0 - Conv2d_4688_bias_conv2d_4688_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_3693_weight_dense_3693_weight
//         bit 31~0 - Dense_3693_weight_dense_3693_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_3693_bias_dense_3693_bias
//         bit 31~0 - Dense_3693_bias_dense_3693_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_3694_weight_dense_3694_weight
//         bit 31~0 - Dense_3694_weight_dense_3694_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_3694_bias_dense_3694_bias
//         bit 31~0 - Dense_3694_bias_dense_3694_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_3695_weight_dense_3695_weight
//         bit 31~0 - Dense_3695_weight_dense_3695_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_3695_bias_dense_3695_bias
//         bit 31~0 - Dense_3695_bias_dense_3695_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_3696_weight_dense_3696_weight
//         bit 31~0 - Dense_3696_weight_dense_3696_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_3696_bias_dense_3696_bias
//         bit 31~0 - Dense_3696_bias_dense_3696_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_3697_weight_dense_3697_weight
//         bit 31~0 - Dense_3697_weight_dense_3697_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_3697_bias_dense_3697_bias
//         bit 31~0 - Dense_3697_bias_dense_3697_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_3698_weight_dense_3698_weight
//         bit 31~0 - Dense_3698_weight_dense_3698_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_3698_bias_dense_3698_bias
//         bit 31~0 - Dense_3698_bias_dense_3698_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_3699_weight_dense_3699_weight
//         bit 31~0 - Dense_3699_weight_dense_3699_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_3699_bias_dense_3699_bias
//         bit 31~0 - Dense_3699_bias_dense_3699_bias[31:0] (Read/Write)
// 0x184 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                           0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                           32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4684_CONV2D_4684_DATA               0x020
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4684_CONV2D_4684_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3283_MAX_POOLING2D_3283_DATA 0x028
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3283_MAX_POOLING2D_3283_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3691_DENSE_3691_DATA                 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3691_DENSE_3691_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4685_CONV2D_4685_DATA               0x038
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4685_CONV2D_4685_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4686_CONV2D_4686_DATA               0x040
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4686_CONV2D_4686_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3284_MAX_POOLING2D_3284_DATA 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3284_MAX_POOLING2D_3284_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3692_DENSE_3692_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3692_DENSE_3692_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4687_CONV2D_4687_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4687_CONV2D_4687_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4688_CONV2D_4688_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4688_CONV2D_4688_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3693_DENSE_3693_DATA                 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3693_DENSE_3693_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3694_DENSE_3694_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3694_DENSE_3694_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3695_DENSE_3695_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3695_DENSE_3695_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3696_DENSE_3696_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3696_DENSE_3696_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3697_DENSE_3697_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3697_DENSE_3697_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_222_FLATTEN_222_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_222_FLATTEN_222_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3698_DENSE_3698_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3698_DENSE_3698_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3699_DENSE_3699_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3699_DENSE_3699_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4684_WEIGHT_CONV2D_4684_WEIGHT_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4684_WEIGHT_CONV2D_4684_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4684_BIAS_CONV2D_4684_BIAS_DATA     0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4684_BIAS_CONV2D_4684_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3691_WEIGHT_DENSE_3691_WEIGHT_DATA   0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3691_WEIGHT_DENSE_3691_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3691_BIAS_DENSE_3691_BIAS_DATA       0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3691_BIAS_DENSE_3691_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4685_WEIGHT_CONV2D_4685_WEIGHT_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4685_WEIGHT_CONV2D_4685_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4685_BIAS_CONV2D_4685_BIAS_DATA     0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4685_BIAS_CONV2D_4685_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4686_WEIGHT_CONV2D_4686_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4686_WEIGHT_CONV2D_4686_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4686_BIAS_CONV2D_4686_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4686_BIAS_CONV2D_4686_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3692_WEIGHT_DENSE_3692_WEIGHT_DATA   0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3692_WEIGHT_DENSE_3692_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3692_BIAS_DENSE_3692_BIAS_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3692_BIAS_DENSE_3692_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4687_WEIGHT_CONV2D_4687_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4687_WEIGHT_CONV2D_4687_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4687_BIAS_CONV2D_4687_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4687_BIAS_CONV2D_4687_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4688_WEIGHT_CONV2D_4688_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4688_WEIGHT_CONV2D_4688_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4688_BIAS_CONV2D_4688_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4688_BIAS_CONV2D_4688_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3693_WEIGHT_DENSE_3693_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3693_WEIGHT_DENSE_3693_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3693_BIAS_DENSE_3693_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3693_BIAS_DENSE_3693_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3694_WEIGHT_DENSE_3694_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3694_WEIGHT_DENSE_3694_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3694_BIAS_DENSE_3694_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3694_BIAS_DENSE_3694_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3695_WEIGHT_DENSE_3695_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3695_WEIGHT_DENSE_3695_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3695_BIAS_DENSE_3695_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3695_BIAS_DENSE_3695_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3696_WEIGHT_DENSE_3696_WEIGHT_DATA   0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3696_WEIGHT_DENSE_3696_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3696_BIAS_DENSE_3696_BIAS_DATA       0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3696_BIAS_DENSE_3696_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3697_WEIGHT_DENSE_3697_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3697_WEIGHT_DENSE_3697_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3697_BIAS_DENSE_3697_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3697_BIAS_DENSE_3697_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3698_WEIGHT_DENSE_3698_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3698_WEIGHT_DENSE_3698_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3698_BIAS_DENSE_3698_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3698_BIAS_DENSE_3698_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3699_WEIGHT_DENSE_3699_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3699_WEIGHT_DENSE_3699_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3699_BIAS_DENSE_3699_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3699_BIAS_DENSE_3699_BIAS_DATA       32

