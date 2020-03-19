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
// 0x020 : Data signal of Conv2d_5947_conv2d_5947
//         bit 31~0 - Conv2d_5947_conv2d_5947[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Max_pooling2d_4191_max_pooling2d_4191
//         bit 31~0 - Max_pooling2d_4191_max_pooling2d_4191[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Dense_4673_dense_4673
//         bit 31~0 - Dense_4673_dense_4673[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Conv2d_5948_conv2d_5948
//         bit 31~0 - Conv2d_5948_conv2d_5948[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_4192_max_pooling2d_4192
//         bit 31~0 - Max_pooling2d_4192_max_pooling2d_4192[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_4674_dense_4674
//         bit 31~0 - Dense_4674_dense_4674[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_5949_conv2d_5949
//         bit 31~0 - Conv2d_5949_conv2d_5949[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Max_pooling2d_4193_max_pooling2d_4193
//         bit 31~0 - Max_pooling2d_4193_max_pooling2d_4193[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Dense_4675_dense_4675
//         bit 31~0 - Dense_4675_dense_4675[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_4194_max_pooling2d_4194
//         bit 31~0 - Max_pooling2d_4194_max_pooling2d_4194[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_4197_max_pooling2d_4197
//         bit 31~0 - Max_pooling2d_4197_max_pooling2d_4197[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_4676_dense_4676
//         bit 31~0 - Dense_4676_dense_4676[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_4678_dense_4678
//         bit 31~0 - Dense_4678_dense_4678[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_4677_dense_4677
//         bit 31~0 - Dense_4677_dense_4677[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_4679_dense_4679
//         bit 31~0 - Dense_4679_dense_4679[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Concatenate_408_concatenate_408
//         bit 31~0 - Concatenate_408_concatenate_408[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Flatten_280_flatten_280
//         bit 31~0 - Flatten_280_flatten_280[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_4680_dense_4680
//         bit 31~0 - Dense_4680_dense_4680[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_4681_dense_4681
//         bit 31~0 - Dense_4681_dense_4681[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_5947_weight_conv2d_5947_weight
//         bit 31~0 - Conv2d_5947_weight_conv2d_5947_weight[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Conv2d_5947_bias_conv2d_5947_bias
//         bit 31~0 - Conv2d_5947_bias_conv2d_5947_bias[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_4673_weight_dense_4673_weight
//         bit 31~0 - Dense_4673_weight_dense_4673_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_4673_bias_dense_4673_bias
//         bit 31~0 - Dense_4673_bias_dense_4673_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_5948_weight_conv2d_5948_weight
//         bit 31~0 - Conv2d_5948_weight_conv2d_5948_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_5948_bias_conv2d_5948_bias
//         bit 31~0 - Conv2d_5948_bias_conv2d_5948_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_4674_weight_dense_4674_weight
//         bit 31~0 - Dense_4674_weight_dense_4674_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_4674_bias_dense_4674_bias
//         bit 31~0 - Dense_4674_bias_dense_4674_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_5949_weight_conv2d_5949_weight
//         bit 31~0 - Conv2d_5949_weight_conv2d_5949_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_5949_bias_conv2d_5949_bias
//         bit 31~0 - Conv2d_5949_bias_conv2d_5949_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_4675_weight_dense_4675_weight
//         bit 31~0 - Dense_4675_weight_dense_4675_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_4675_bias_dense_4675_bias
//         bit 31~0 - Dense_4675_bias_dense_4675_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_4676_weight_dense_4676_weight
//         bit 31~0 - Dense_4676_weight_dense_4676_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_4676_bias_dense_4676_bias
//         bit 31~0 - Dense_4676_bias_dense_4676_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_4678_weight_dense_4678_weight
//         bit 31~0 - Dense_4678_weight_dense_4678_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_4678_bias_dense_4678_bias
//         bit 31~0 - Dense_4678_bias_dense_4678_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_4677_weight_dense_4677_weight
//         bit 31~0 - Dense_4677_weight_dense_4677_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_4677_bias_dense_4677_bias
//         bit 31~0 - Dense_4677_bias_dense_4677_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_4679_weight_dense_4679_weight
//         bit 31~0 - Dense_4679_weight_dense_4679_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_4679_bias_dense_4679_bias
//         bit 31~0 - Dense_4679_bias_dense_4679_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_4680_weight_dense_4680_weight
//         bit 31~0 - Dense_4680_weight_dense_4680_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_4680_bias_dense_4680_bias
//         bit 31~0 - Dense_4680_bias_dense_4680_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_4681_weight_dense_4681_weight
//         bit 31~0 - Dense_4681_weight_dense_4681_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_4681_bias_dense_4681_bias
//         bit 31~0 - Dense_4681_bias_dense_4681_bias[31:0] (Read/Write)
// 0x174 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                           0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                           32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_5947_CONV2D_5947_DATA               0x020
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_5947_CONV2D_5947_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4191_MAX_POOLING2D_4191_DATA 0x028
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4191_MAX_POOLING2D_4191_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4673_DENSE_4673_DATA                 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4673_DENSE_4673_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_5948_CONV2D_5948_DATA               0x038
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_5948_CONV2D_5948_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4192_MAX_POOLING2D_4192_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4192_MAX_POOLING2D_4192_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4674_DENSE_4674_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4674_DENSE_4674_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_5949_CONV2D_5949_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_5949_CONV2D_5949_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4193_MAX_POOLING2D_4193_DATA 0x058
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4193_MAX_POOLING2D_4193_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4675_DENSE_4675_DATA                 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4675_DENSE_4675_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4194_MAX_POOLING2D_4194_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4194_MAX_POOLING2D_4194_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4197_MAX_POOLING2D_4197_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4197_MAX_POOLING2D_4197_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4676_DENSE_4676_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4676_DENSE_4676_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4678_DENSE_4678_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4678_DENSE_4678_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4677_DENSE_4677_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4677_DENSE_4677_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4679_DENSE_4679_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4679_DENSE_4679_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_408_CONCATENATE_408_DATA       0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_408_CONCATENATE_408_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_280_FLATTEN_280_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_280_FLATTEN_280_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4680_DENSE_4680_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4680_DENSE_4680_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4681_DENSE_4681_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4681_DENSE_4681_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_5947_WEIGHT_CONV2D_5947_WEIGHT_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_5947_WEIGHT_CONV2D_5947_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_5947_BIAS_CONV2D_5947_BIAS_DATA     0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_5947_BIAS_CONV2D_5947_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4673_WEIGHT_DENSE_4673_WEIGHT_DATA   0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4673_WEIGHT_DENSE_4673_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4673_BIAS_DENSE_4673_BIAS_DATA       0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4673_BIAS_DENSE_4673_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_5948_WEIGHT_CONV2D_5948_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_5948_WEIGHT_CONV2D_5948_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_5948_BIAS_CONV2D_5948_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_5948_BIAS_CONV2D_5948_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4674_WEIGHT_DENSE_4674_WEIGHT_DATA   0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4674_WEIGHT_DENSE_4674_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4674_BIAS_DENSE_4674_BIAS_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4674_BIAS_DENSE_4674_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_5949_WEIGHT_CONV2D_5949_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_5949_WEIGHT_CONV2D_5949_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_5949_BIAS_CONV2D_5949_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_5949_BIAS_CONV2D_5949_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4675_WEIGHT_DENSE_4675_WEIGHT_DATA   0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4675_WEIGHT_DENSE_4675_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4675_BIAS_DENSE_4675_BIAS_DATA       0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4675_BIAS_DENSE_4675_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4676_WEIGHT_DENSE_4676_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4676_WEIGHT_DENSE_4676_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4676_BIAS_DENSE_4676_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4676_BIAS_DENSE_4676_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4678_WEIGHT_DENSE_4678_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4678_WEIGHT_DENSE_4678_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4678_BIAS_DENSE_4678_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4678_BIAS_DENSE_4678_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4677_WEIGHT_DENSE_4677_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4677_WEIGHT_DENSE_4677_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4677_BIAS_DENSE_4677_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4677_BIAS_DENSE_4677_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4679_WEIGHT_DENSE_4679_WEIGHT_DATA   0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4679_WEIGHT_DENSE_4679_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4679_BIAS_DENSE_4679_BIAS_DATA       0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4679_BIAS_DENSE_4679_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4680_WEIGHT_DENSE_4680_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4680_WEIGHT_DENSE_4680_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4680_BIAS_DENSE_4680_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4680_BIAS_DENSE_4680_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4681_WEIGHT_DENSE_4681_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4681_WEIGHT_DENSE_4681_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4681_BIAS_DENSE_4681_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4681_BIAS_DENSE_4681_BIAS_DATA       32

