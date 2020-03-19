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
// 0x020 : Data signal of Conv2d_6327_conv2d_6327
//         bit 31~0 - Conv2d_6327_conv2d_6327[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Max_pooling2d_4464_max_pooling2d_4464
//         bit 31~0 - Max_pooling2d_4464_max_pooling2d_4464[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Dense_4983_dense_4983
//         bit 31~0 - Dense_4983_dense_4983[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Conv2d_6328_conv2d_6328
//         bit 31~0 - Conv2d_6328_conv2d_6328[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Conv2d_6329_conv2d_6329
//         bit 31~0 - Conv2d_6329_conv2d_6329[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Max_pooling2d_4465_max_pooling2d_4465
//         bit 31~0 - Max_pooling2d_4465_max_pooling2d_4465[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_4984_dense_4984
//         bit 31~0 - Dense_4984_dense_4984[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_6330_conv2d_6330
//         bit 31~0 - Conv2d_6330_conv2d_6330[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Max_pooling2d_4466_max_pooling2d_4466
//         bit 31~0 - Max_pooling2d_4466_max_pooling2d_4466[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Dense_4985_dense_4985
//         bit 31~0 - Dense_4985_dense_4985[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_4986_dense_4986
//         bit 31~0 - Dense_4986_dense_4986[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_4990_dense_4990
//         bit 31~0 - Dense_4990_dense_4990[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_4987_dense_4987
//         bit 31~0 - Dense_4987_dense_4987[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_4991_dense_4991
//         bit 31~0 - Dense_4991_dense_4991[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_4988_dense_4988
//         bit 31~0 - Dense_4988_dense_4988[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_4992_dense_4992
//         bit 31~0 - Dense_4992_dense_4992[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_4989_dense_4989
//         bit 31~0 - Dense_4989_dense_4989[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_4993_dense_4993
//         bit 31~0 - Dense_4993_dense_4993[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Concatenate_431_concatenate_431
//         bit 31~0 - Concatenate_431_concatenate_431[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_4994_dense_4994
//         bit 31~0 - Dense_4994_dense_4994[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_4995_dense_4995
//         bit 31~0 - Dense_4995_dense_4995[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_4996_dense_4996
//         bit 31~0 - Dense_4996_dense_4996[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_4997_dense_4997
//         bit 31~0 - Dense_4997_dense_4997[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Flatten_302_flatten_302
//         bit 31~0 - Flatten_302_flatten_302[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_4998_dense_4998
//         bit 31~0 - Dense_4998_dense_4998[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_4999_dense_4999
//         bit 31~0 - Dense_4999_dense_4999[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_6327_weight_conv2d_6327_weight
//         bit 31~0 - Conv2d_6327_weight_conv2d_6327_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_6327_bias_conv2d_6327_bias
//         bit 31~0 - Conv2d_6327_bias_conv2d_6327_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_4983_weight_dense_4983_weight
//         bit 31~0 - Dense_4983_weight_dense_4983_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_4983_bias_dense_4983_bias
//         bit 31~0 - Dense_4983_bias_dense_4983_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_6328_weight_conv2d_6328_weight
//         bit 31~0 - Conv2d_6328_weight_conv2d_6328_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_6328_bias_conv2d_6328_bias
//         bit 31~0 - Conv2d_6328_bias_conv2d_6328_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_6329_weight_conv2d_6329_weight
//         bit 31~0 - Conv2d_6329_weight_conv2d_6329_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_6329_bias_conv2d_6329_bias
//         bit 31~0 - Conv2d_6329_bias_conv2d_6329_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_4984_weight_dense_4984_weight
//         bit 31~0 - Dense_4984_weight_dense_4984_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_4984_bias_dense_4984_bias
//         bit 31~0 - Dense_4984_bias_dense_4984_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_6330_weight_conv2d_6330_weight
//         bit 31~0 - Conv2d_6330_weight_conv2d_6330_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_6330_bias_conv2d_6330_bias
//         bit 31~0 - Conv2d_6330_bias_conv2d_6330_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_4985_weight_dense_4985_weight
//         bit 31~0 - Dense_4985_weight_dense_4985_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_4985_bias_dense_4985_bias
//         bit 31~0 - Dense_4985_bias_dense_4985_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_4986_weight_dense_4986_weight
//         bit 31~0 - Dense_4986_weight_dense_4986_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_4986_bias_dense_4986_bias
//         bit 31~0 - Dense_4986_bias_dense_4986_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_4990_weight_dense_4990_weight
//         bit 31~0 - Dense_4990_weight_dense_4990_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_4990_bias_dense_4990_bias
//         bit 31~0 - Dense_4990_bias_dense_4990_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_4987_weight_dense_4987_weight
//         bit 31~0 - Dense_4987_weight_dense_4987_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_4987_bias_dense_4987_bias
//         bit 31~0 - Dense_4987_bias_dense_4987_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_4991_weight_dense_4991_weight
//         bit 31~0 - Dense_4991_weight_dense_4991_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_4991_bias_dense_4991_bias
//         bit 31~0 - Dense_4991_bias_dense_4991_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_4988_weight_dense_4988_weight
//         bit 31~0 - Dense_4988_weight_dense_4988_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_4988_bias_dense_4988_bias
//         bit 31~0 - Dense_4988_bias_dense_4988_bias[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_4992_weight_dense_4992_weight
//         bit 31~0 - Dense_4992_weight_dense_4992_weight[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_4992_bias_dense_4992_bias
//         bit 31~0 - Dense_4992_bias_dense_4992_bias[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_4989_weight_dense_4989_weight
//         bit 31~0 - Dense_4989_weight_dense_4989_weight[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_4989_bias_dense_4989_bias
//         bit 31~0 - Dense_4989_bias_dense_4989_bias[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_4993_weight_dense_4993_weight
//         bit 31~0 - Dense_4993_weight_dense_4993_weight[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_4993_bias_dense_4993_bias
//         bit 31~0 - Dense_4993_bias_dense_4993_bias[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_4994_weight_dense_4994_weight
//         bit 31~0 - Dense_4994_weight_dense_4994_weight[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_4994_bias_dense_4994_bias
//         bit 31~0 - Dense_4994_bias_dense_4994_bias[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_4995_weight_dense_4995_weight
//         bit 31~0 - Dense_4995_weight_dense_4995_weight[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of Dense_4995_bias_dense_4995_bias
//         bit 31~0 - Dense_4995_bias_dense_4995_bias[31:0] (Read/Write)
// 0x1fc : reserved
// 0x200 : Data signal of Dense_4996_weight_dense_4996_weight
//         bit 31~0 - Dense_4996_weight_dense_4996_weight[31:0] (Read/Write)
// 0x204 : reserved
// 0x208 : Data signal of Dense_4996_bias_dense_4996_bias
//         bit 31~0 - Dense_4996_bias_dense_4996_bias[31:0] (Read/Write)
// 0x20c : reserved
// 0x210 : Data signal of Dense_4997_weight_dense_4997_weight
//         bit 31~0 - Dense_4997_weight_dense_4997_weight[31:0] (Read/Write)
// 0x214 : reserved
// 0x218 : Data signal of Dense_4997_bias_dense_4997_bias
//         bit 31~0 - Dense_4997_bias_dense_4997_bias[31:0] (Read/Write)
// 0x21c : reserved
// 0x220 : Data signal of Dense_4998_weight_dense_4998_weight
//         bit 31~0 - Dense_4998_weight_dense_4998_weight[31:0] (Read/Write)
// 0x224 : reserved
// 0x228 : Data signal of Dense_4998_bias_dense_4998_bias
//         bit 31~0 - Dense_4998_bias_dense_4998_bias[31:0] (Read/Write)
// 0x22c : reserved
// 0x230 : Data signal of Dense_4999_weight_dense_4999_weight
//         bit 31~0 - Dense_4999_weight_dense_4999_weight[31:0] (Read/Write)
// 0x234 : reserved
// 0x238 : Data signal of Dense_4999_bias_dense_4999_bias
//         bit 31~0 - Dense_4999_bias_dense_4999_bias[31:0] (Read/Write)
// 0x23c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                           0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                           32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6327_CONV2D_6327_DATA               0x020
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6327_CONV2D_6327_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4464_MAX_POOLING2D_4464_DATA 0x028
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4464_MAX_POOLING2D_4464_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4983_DENSE_4983_DATA                 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4983_DENSE_4983_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6328_CONV2D_6328_DATA               0x038
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6328_CONV2D_6328_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6329_CONV2D_6329_DATA               0x040
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6329_CONV2D_6329_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4465_MAX_POOLING2D_4465_DATA 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4465_MAX_POOLING2D_4465_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4984_DENSE_4984_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4984_DENSE_4984_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6330_CONV2D_6330_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6330_CONV2D_6330_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4466_MAX_POOLING2D_4466_DATA 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4466_MAX_POOLING2D_4466_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4985_DENSE_4985_DATA                 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4985_DENSE_4985_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4986_DENSE_4986_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4986_DENSE_4986_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4990_DENSE_4990_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4990_DENSE_4990_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4987_DENSE_4987_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4987_DENSE_4987_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4991_DENSE_4991_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4991_DENSE_4991_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4988_DENSE_4988_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4988_DENSE_4988_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4992_DENSE_4992_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4992_DENSE_4992_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4989_DENSE_4989_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4989_DENSE_4989_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4993_DENSE_4993_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4993_DENSE_4993_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_431_CONCATENATE_431_DATA       0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_431_CONCATENATE_431_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4994_DENSE_4994_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4994_DENSE_4994_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4995_DENSE_4995_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4995_DENSE_4995_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4996_DENSE_4996_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4996_DENSE_4996_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4997_DENSE_4997_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4997_DENSE_4997_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_302_FLATTEN_302_DATA               0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_302_FLATTEN_302_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4998_DENSE_4998_DATA                 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4998_DENSE_4998_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4999_DENSE_4999_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4999_DENSE_4999_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6327_WEIGHT_CONV2D_6327_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6327_WEIGHT_CONV2D_6327_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6327_BIAS_CONV2D_6327_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6327_BIAS_CONV2D_6327_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4983_WEIGHT_DENSE_4983_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4983_WEIGHT_DENSE_4983_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4983_BIAS_DENSE_4983_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4983_BIAS_DENSE_4983_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6328_WEIGHT_CONV2D_6328_WEIGHT_DATA 0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6328_WEIGHT_CONV2D_6328_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6328_BIAS_CONV2D_6328_BIAS_DATA     0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6328_BIAS_CONV2D_6328_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6329_WEIGHT_CONV2D_6329_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6329_WEIGHT_CONV2D_6329_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6329_BIAS_CONV2D_6329_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6329_BIAS_CONV2D_6329_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4984_WEIGHT_DENSE_4984_WEIGHT_DATA   0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4984_WEIGHT_DENSE_4984_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4984_BIAS_DENSE_4984_BIAS_DATA       0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4984_BIAS_DENSE_4984_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6330_WEIGHT_CONV2D_6330_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6330_WEIGHT_CONV2D_6330_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6330_BIAS_CONV2D_6330_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6330_BIAS_CONV2D_6330_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4985_WEIGHT_DENSE_4985_WEIGHT_DATA   0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4985_WEIGHT_DENSE_4985_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4985_BIAS_DENSE_4985_BIAS_DATA       0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4985_BIAS_DENSE_4985_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4986_WEIGHT_DENSE_4986_WEIGHT_DATA   0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4986_WEIGHT_DENSE_4986_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4986_BIAS_DENSE_4986_BIAS_DATA       0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4986_BIAS_DENSE_4986_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4990_WEIGHT_DENSE_4990_WEIGHT_DATA   0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4990_WEIGHT_DENSE_4990_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4990_BIAS_DENSE_4990_BIAS_DATA       0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4990_BIAS_DENSE_4990_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4987_WEIGHT_DENSE_4987_WEIGHT_DATA   0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4987_WEIGHT_DENSE_4987_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4987_BIAS_DENSE_4987_BIAS_DATA       0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4987_BIAS_DENSE_4987_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4991_WEIGHT_DENSE_4991_WEIGHT_DATA   0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4991_WEIGHT_DENSE_4991_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4991_BIAS_DENSE_4991_BIAS_DATA       0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4991_BIAS_DENSE_4991_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4988_WEIGHT_DENSE_4988_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4988_WEIGHT_DENSE_4988_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4988_BIAS_DENSE_4988_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4988_BIAS_DENSE_4988_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4992_WEIGHT_DENSE_4992_WEIGHT_DATA   0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4992_WEIGHT_DENSE_4992_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4992_BIAS_DENSE_4992_BIAS_DATA       0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4992_BIAS_DENSE_4992_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4989_WEIGHT_DENSE_4989_WEIGHT_DATA   0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4989_WEIGHT_DENSE_4989_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4989_BIAS_DENSE_4989_BIAS_DATA       0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4989_BIAS_DENSE_4989_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4993_WEIGHT_DENSE_4993_WEIGHT_DATA   0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4993_WEIGHT_DENSE_4993_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4993_BIAS_DENSE_4993_BIAS_DATA       0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4993_BIAS_DENSE_4993_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4994_WEIGHT_DENSE_4994_WEIGHT_DATA   0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4994_WEIGHT_DENSE_4994_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4994_BIAS_DENSE_4994_BIAS_DATA       0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4994_BIAS_DENSE_4994_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4995_WEIGHT_DENSE_4995_WEIGHT_DATA   0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4995_WEIGHT_DENSE_4995_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4995_BIAS_DENSE_4995_BIAS_DATA       0x1f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4995_BIAS_DENSE_4995_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4996_WEIGHT_DENSE_4996_WEIGHT_DATA   0x200
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4996_WEIGHT_DENSE_4996_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4996_BIAS_DENSE_4996_BIAS_DATA       0x208
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4996_BIAS_DENSE_4996_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4997_WEIGHT_DENSE_4997_WEIGHT_DATA   0x210
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4997_WEIGHT_DENSE_4997_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4997_BIAS_DENSE_4997_BIAS_DATA       0x218
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4997_BIAS_DENSE_4997_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4998_WEIGHT_DENSE_4998_WEIGHT_DATA   0x220
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4998_WEIGHT_DENSE_4998_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4998_BIAS_DENSE_4998_BIAS_DATA       0x228
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4998_BIAS_DENSE_4998_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4999_WEIGHT_DENSE_4999_WEIGHT_DATA   0x230
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4999_WEIGHT_DENSE_4999_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4999_BIAS_DENSE_4999_BIAS_DATA       0x238
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4999_BIAS_DENSE_4999_BIAS_DATA       32

