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
// 0x028 : Data signal of Conv2d_3676_conv2d_3676
//         bit 31~0 - Conv2d_3676_conv2d_3676[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_3677_conv2d_3677
//         bit 31~0 - Conv2d_3677_conv2d_3677[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_3127_max_pooling2d_3127
//         bit 31~0 - Max_pooling2d_3127_max_pooling2d_3127[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_3128_max_pooling2d_3128
//         bit 31~0 - Max_pooling2d_3128_max_pooling2d_3128[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2974_dense_2974
//         bit 31~0 - Dense_2974_dense_2974[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2975_dense_2975
//         bit 31~0 - Dense_2975_dense_2975[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_642_concatenate_642
//         bit 31~0 - Concatenate_642_concatenate_642[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_3678_conv2d_3678
//         bit 31~0 - Conv2d_3678_conv2d_3678[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_3129_max_pooling2d_3129
//         bit 31~0 - Max_pooling2d_3129_max_pooling2d_3129[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_3680_conv2d_3680
//         bit 31~0 - Conv2d_3680_conv2d_3680[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_2976_dense_2976
//         bit 31~0 - Dense_2976_dense_2976[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_3131_max_pooling2d_3131
//         bit 31~0 - Max_pooling2d_3131_max_pooling2d_3131[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_3679_conv2d_3679
//         bit 31~0 - Conv2d_3679_conv2d_3679[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_2978_dense_2978
//         bit 31~0 - Dense_2978_dense_2978[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_3130_max_pooling2d_3130
//         bit 31~0 - Max_pooling2d_3130_max_pooling2d_3130[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_3681_conv2d_3681
//         bit 31~0 - Conv2d_3681_conv2d_3681[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_2977_dense_2977
//         bit 31~0 - Dense_2977_dense_2977[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Max_pooling2d_3132_max_pooling2d_3132
//         bit 31~0 - Max_pooling2d_3132_max_pooling2d_3132[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Concatenate_643_concatenate_643
//         bit 31~0 - Concatenate_643_concatenate_643[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Max_pooling2d_3133_max_pooling2d_3133
//         bit 31~0 - Max_pooling2d_3133_max_pooling2d_3133[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Flatten_334_flatten_334
//         bit 31~0 - Flatten_334_flatten_334[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_2979_dense_2979
//         bit 31~0 - Dense_2979_dense_2979[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_2980_dense_2980
//         bit 31~0 - Dense_2980_dense_2980[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_3676_weight_conv2d_3676_weight
//         bit 31~0 - Conv2d_3676_weight_conv2d_3676_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_3676_bias_conv2d_3676_bias
//         bit 31~0 - Conv2d_3676_bias_conv2d_3676_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_3677_weight_conv2d_3677_weight
//         bit 31~0 - Conv2d_3677_weight_conv2d_3677_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_3677_bias_conv2d_3677_bias
//         bit 31~0 - Conv2d_3677_bias_conv2d_3677_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_2974_weight_dense_2974_weight
//         bit 31~0 - Dense_2974_weight_dense_2974_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_2974_bias_dense_2974_bias
//         bit 31~0 - Dense_2974_bias_dense_2974_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_2975_weight_dense_2975_weight
//         bit 31~0 - Dense_2975_weight_dense_2975_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_2975_bias_dense_2975_bias
//         bit 31~0 - Dense_2975_bias_dense_2975_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_3678_weight_conv2d_3678_weight
//         bit 31~0 - Conv2d_3678_weight_conv2d_3678_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_3678_bias_conv2d_3678_bias
//         bit 31~0 - Conv2d_3678_bias_conv2d_3678_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_3680_weight_conv2d_3680_weight
//         bit 31~0 - Conv2d_3680_weight_conv2d_3680_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_3680_bias_conv2d_3680_bias
//         bit 31~0 - Conv2d_3680_bias_conv2d_3680_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_2976_weight_dense_2976_weight
//         bit 31~0 - Dense_2976_weight_dense_2976_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_2976_bias_dense_2976_bias
//         bit 31~0 - Dense_2976_bias_dense_2976_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_3679_weight_conv2d_3679_weight
//         bit 31~0 - Conv2d_3679_weight_conv2d_3679_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_3679_bias_conv2d_3679_bias
//         bit 31~0 - Conv2d_3679_bias_conv2d_3679_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_2978_weight_dense_2978_weight
//         bit 31~0 - Dense_2978_weight_dense_2978_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_2978_bias_dense_2978_bias
//         bit 31~0 - Dense_2978_bias_dense_2978_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_3681_weight_conv2d_3681_weight
//         bit 31~0 - Conv2d_3681_weight_conv2d_3681_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_3681_bias_conv2d_3681_bias
//         bit 31~0 - Conv2d_3681_bias_conv2d_3681_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_2977_weight_dense_2977_weight
//         bit 31~0 - Dense_2977_weight_dense_2977_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_2977_bias_dense_2977_bias
//         bit 31~0 - Dense_2977_bias_dense_2977_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_2979_weight_dense_2979_weight
//         bit 31~0 - Dense_2979_weight_dense_2979_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_2979_bias_dense_2979_bias
//         bit 31~0 - Dense_2979_bias_dense_2979_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_2980_weight_dense_2980_weight
//         bit 31~0 - Dense_2980_weight_dense_2980_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_2980_bias_dense_2980_bias
//         bit 31~0 - Dense_2980_bias_dense_2980_bias[31:0] (Read/Write)
// 0x1ac : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3676_CONV2D_3676_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3676_CONV2D_3676_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3677_CONV2D_3677_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3677_CONV2D_3677_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3127_MAX_POOLING2D_3127_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3127_MAX_POOLING2D_3127_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3128_MAX_POOLING2D_3128_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3128_MAX_POOLING2D_3128_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2974_DENSE_2974_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2974_DENSE_2974_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2975_DENSE_2975_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2975_DENSE_2975_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_642_CONCATENATE_642_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_642_CONCATENATE_642_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3678_CONV2D_3678_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3678_CONV2D_3678_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3129_MAX_POOLING2D_3129_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3129_MAX_POOLING2D_3129_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3680_CONV2D_3680_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3680_CONV2D_3680_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2976_DENSE_2976_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2976_DENSE_2976_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3131_MAX_POOLING2D_3131_DATA 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3131_MAX_POOLING2D_3131_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3679_CONV2D_3679_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3679_CONV2D_3679_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2978_DENSE_2978_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2978_DENSE_2978_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3130_MAX_POOLING2D_3130_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3130_MAX_POOLING2D_3130_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3681_CONV2D_3681_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3681_CONV2D_3681_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2977_DENSE_2977_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2977_DENSE_2977_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3132_MAX_POOLING2D_3132_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3132_MAX_POOLING2D_3132_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_643_CONCATENATE_643_DATA       0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_643_CONCATENATE_643_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3133_MAX_POOLING2D_3133_DATA 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3133_MAX_POOLING2D_3133_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_334_FLATTEN_334_DATA               0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_334_FLATTEN_334_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2979_DENSE_2979_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2979_DENSE_2979_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2980_DENSE_2980_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2980_DENSE_2980_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3676_WEIGHT_CONV2D_3676_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3676_WEIGHT_CONV2D_3676_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3676_BIAS_CONV2D_3676_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3676_BIAS_CONV2D_3676_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3677_WEIGHT_CONV2D_3677_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3677_WEIGHT_CONV2D_3677_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3677_BIAS_CONV2D_3677_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3677_BIAS_CONV2D_3677_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2974_WEIGHT_DENSE_2974_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2974_WEIGHT_DENSE_2974_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2974_BIAS_DENSE_2974_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2974_BIAS_DENSE_2974_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2975_WEIGHT_DENSE_2975_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2975_WEIGHT_DENSE_2975_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2975_BIAS_DENSE_2975_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2975_BIAS_DENSE_2975_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3678_WEIGHT_CONV2D_3678_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3678_WEIGHT_CONV2D_3678_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3678_BIAS_CONV2D_3678_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3678_BIAS_CONV2D_3678_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3680_WEIGHT_CONV2D_3680_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3680_WEIGHT_CONV2D_3680_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3680_BIAS_CONV2D_3680_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3680_BIAS_CONV2D_3680_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2976_WEIGHT_DENSE_2976_WEIGHT_DATA   0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2976_WEIGHT_DENSE_2976_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2976_BIAS_DENSE_2976_BIAS_DATA       0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2976_BIAS_DENSE_2976_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3679_WEIGHT_CONV2D_3679_WEIGHT_DATA 0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3679_WEIGHT_CONV2D_3679_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3679_BIAS_CONV2D_3679_BIAS_DATA     0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3679_BIAS_CONV2D_3679_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2978_WEIGHT_DENSE_2978_WEIGHT_DATA   0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2978_WEIGHT_DENSE_2978_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2978_BIAS_DENSE_2978_BIAS_DATA       0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2978_BIAS_DENSE_2978_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3681_WEIGHT_CONV2D_3681_WEIGHT_DATA 0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3681_WEIGHT_CONV2D_3681_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3681_BIAS_CONV2D_3681_BIAS_DATA     0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3681_BIAS_CONV2D_3681_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2977_WEIGHT_DENSE_2977_WEIGHT_DATA   0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2977_WEIGHT_DENSE_2977_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2977_BIAS_DENSE_2977_BIAS_DATA       0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2977_BIAS_DENSE_2977_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2979_WEIGHT_DENSE_2979_WEIGHT_DATA   0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2979_WEIGHT_DENSE_2979_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2979_BIAS_DENSE_2979_BIAS_DATA       0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2979_BIAS_DENSE_2979_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2980_WEIGHT_DENSE_2980_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2980_WEIGHT_DENSE_2980_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2980_BIAS_DENSE_2980_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2980_BIAS_DENSE_2980_BIAS_DATA       32

