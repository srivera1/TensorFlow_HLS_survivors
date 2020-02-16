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
// 0x028 : Data signal of Conv2d_3426_conv2d_3426
//         bit 31~0 - Conv2d_3426_conv2d_3426[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_3427_conv2d_3427
//         bit 31~0 - Conv2d_3427_conv2d_3427[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2893_max_pooling2d_2893
//         bit 31~0 - Max_pooling2d_2893_max_pooling2d_2893[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2894_max_pooling2d_2894
//         bit 31~0 - Max_pooling2d_2894_max_pooling2d_2894[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2763_dense_2763
//         bit 31~0 - Dense_2763_dense_2763[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2764_dense_2764
//         bit 31~0 - Dense_2764_dense_2764[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_596_concatenate_596
//         bit 31~0 - Concatenate_596_concatenate_596[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_3428_conv2d_3428
//         bit 31~0 - Conv2d_3428_conv2d_3428[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Conv2d_3431_conv2d_3431
//         bit 31~0 - Conv2d_3431_conv2d_3431[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_2895_max_pooling2d_2895
//         bit 31~0 - Max_pooling2d_2895_max_pooling2d_2895[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_2897_max_pooling2d_2897
//         bit 31~0 - Max_pooling2d_2897_max_pooling2d_2897[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_2765_dense_2765
//         bit 31~0 - Dense_2765_dense_2765[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_2767_dense_2767
//         bit 31~0 - Dense_2767_dense_2767[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_3429_conv2d_3429
//         bit 31~0 - Conv2d_3429_conv2d_3429[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_3432_conv2d_3432
//         bit 31~0 - Conv2d_3432_conv2d_3432[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Max_pooling2d_2896_max_pooling2d_2896
//         bit 31~0 - Max_pooling2d_2896_max_pooling2d_2896[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_2898_max_pooling2d_2898
//         bit 31~0 - Max_pooling2d_2898_max_pooling2d_2898[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_2766_dense_2766
//         bit 31~0 - Dense_2766_dense_2766[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_2768_dense_2768
//         bit 31~0 - Dense_2768_dense_2768[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Concatenate_597_concatenate_597
//         bit 31~0 - Concatenate_597_concatenate_597[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Max_pooling2d_2899_max_pooling2d_2899
//         bit 31~0 - Max_pooling2d_2899_max_pooling2d_2899[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_2769_dense_2769
//         bit 31~0 - Dense_2769_dense_2769[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_2770_dense_2770
//         bit 31~0 - Dense_2770_dense_2770[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_2771_dense_2771
//         bit 31~0 - Dense_2771_dense_2771[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_2772_dense_2772
//         bit 31~0 - Dense_2772_dense_2772[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Flatten_307_flatten_307
//         bit 31~0 - Flatten_307_flatten_307[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_2773_dense_2773
//         bit 31~0 - Dense_2773_dense_2773[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_2774_dense_2774
//         bit 31~0 - Dense_2774_dense_2774[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_3426_weight_conv2d_3426_weight
//         bit 31~0 - Conv2d_3426_weight_conv2d_3426_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_3426_bias_conv2d_3426_bias
//         bit 31~0 - Conv2d_3426_bias_conv2d_3426_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_3427_weight_conv2d_3427_weight
//         bit 31~0 - Conv2d_3427_weight_conv2d_3427_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_3427_bias_conv2d_3427_bias
//         bit 31~0 - Conv2d_3427_bias_conv2d_3427_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_2763_weight_dense_2763_weight
//         bit 31~0 - Dense_2763_weight_dense_2763_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_2763_bias_dense_2763_bias
//         bit 31~0 - Dense_2763_bias_dense_2763_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_2764_weight_dense_2764_weight
//         bit 31~0 - Dense_2764_weight_dense_2764_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_2764_bias_dense_2764_bias
//         bit 31~0 - Dense_2764_bias_dense_2764_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_3428_weight_conv2d_3428_weight
//         bit 31~0 - Conv2d_3428_weight_conv2d_3428_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_3428_bias_conv2d_3428_bias
//         bit 31~0 - Conv2d_3428_bias_conv2d_3428_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_3431_weight_conv2d_3431_weight
//         bit 31~0 - Conv2d_3431_weight_conv2d_3431_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_3431_bias_conv2d_3431_bias
//         bit 31~0 - Conv2d_3431_bias_conv2d_3431_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_2765_weight_dense_2765_weight
//         bit 31~0 - Dense_2765_weight_dense_2765_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_2765_bias_dense_2765_bias
//         bit 31~0 - Dense_2765_bias_dense_2765_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_2767_weight_dense_2767_weight
//         bit 31~0 - Dense_2767_weight_dense_2767_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_2767_bias_dense_2767_bias
//         bit 31~0 - Dense_2767_bias_dense_2767_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_3429_weight_conv2d_3429_weight
//         bit 31~0 - Conv2d_3429_weight_conv2d_3429_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_3429_bias_conv2d_3429_bias
//         bit 31~0 - Conv2d_3429_bias_conv2d_3429_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Conv2d_3432_weight_conv2d_3432_weight
//         bit 31~0 - Conv2d_3432_weight_conv2d_3432_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Conv2d_3432_bias_conv2d_3432_bias
//         bit 31~0 - Conv2d_3432_bias_conv2d_3432_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_2766_weight_dense_2766_weight
//         bit 31~0 - Dense_2766_weight_dense_2766_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_2766_bias_dense_2766_bias
//         bit 31~0 - Dense_2766_bias_dense_2766_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_2768_weight_dense_2768_weight
//         bit 31~0 - Dense_2768_weight_dense_2768_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_2768_bias_dense_2768_bias
//         bit 31~0 - Dense_2768_bias_dense_2768_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_2769_weight_dense_2769_weight
//         bit 31~0 - Dense_2769_weight_dense_2769_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_2769_bias_dense_2769_bias
//         bit 31~0 - Dense_2769_bias_dense_2769_bias[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_2770_weight_dense_2770_weight
//         bit 31~0 - Dense_2770_weight_dense_2770_weight[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_2770_bias_dense_2770_bias
//         bit 31~0 - Dense_2770_bias_dense_2770_bias[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_2771_weight_dense_2771_weight
//         bit 31~0 - Dense_2771_weight_dense_2771_weight[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_2771_bias_dense_2771_bias
//         bit 31~0 - Dense_2771_bias_dense_2771_bias[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of Dense_2772_weight_dense_2772_weight
//         bit 31~0 - Dense_2772_weight_dense_2772_weight[31:0] (Read/Write)
// 0x1fc : reserved
// 0x200 : Data signal of Dense_2772_bias_dense_2772_bias
//         bit 31~0 - Dense_2772_bias_dense_2772_bias[31:0] (Read/Write)
// 0x204 : reserved
// 0x208 : Data signal of Dense_2773_weight_dense_2773_weight
//         bit 31~0 - Dense_2773_weight_dense_2773_weight[31:0] (Read/Write)
// 0x20c : reserved
// 0x210 : Data signal of Dense_2773_bias_dense_2773_bias
//         bit 31~0 - Dense_2773_bias_dense_2773_bias[31:0] (Read/Write)
// 0x214 : reserved
// 0x218 : Data signal of Dense_2774_weight_dense_2774_weight
//         bit 31~0 - Dense_2774_weight_dense_2774_weight[31:0] (Read/Write)
// 0x21c : reserved
// 0x220 : Data signal of Dense_2774_bias_dense_2774_bias
//         bit 31~0 - Dense_2774_bias_dense_2774_bias[31:0] (Read/Write)
// 0x224 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3426_CONV2D_3426_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3426_CONV2D_3426_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3427_CONV2D_3427_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3427_CONV2D_3427_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2893_MAX_POOLING2D_2893_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2893_MAX_POOLING2D_2893_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2894_MAX_POOLING2D_2894_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2894_MAX_POOLING2D_2894_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2763_DENSE_2763_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2763_DENSE_2763_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2764_DENSE_2764_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2764_DENSE_2764_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_596_CONCATENATE_596_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_596_CONCATENATE_596_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3428_CONV2D_3428_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3428_CONV2D_3428_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3431_CONV2D_3431_DATA               0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3431_CONV2D_3431_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2895_MAX_POOLING2D_2895_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2895_MAX_POOLING2D_2895_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2897_MAX_POOLING2D_2897_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2897_MAX_POOLING2D_2897_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2765_DENSE_2765_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2765_DENSE_2765_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2767_DENSE_2767_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2767_DENSE_2767_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3429_CONV2D_3429_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3429_CONV2D_3429_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3432_CONV2D_3432_DATA               0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3432_CONV2D_3432_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2896_MAX_POOLING2D_2896_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2896_MAX_POOLING2D_2896_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2898_MAX_POOLING2D_2898_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2898_MAX_POOLING2D_2898_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2766_DENSE_2766_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2766_DENSE_2766_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2768_DENSE_2768_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2768_DENSE_2768_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_597_CONCATENATE_597_DATA       0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_597_CONCATENATE_597_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2899_MAX_POOLING2D_2899_DATA 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2899_MAX_POOLING2D_2899_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2769_DENSE_2769_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2769_DENSE_2769_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2770_DENSE_2770_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2770_DENSE_2770_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2771_DENSE_2771_DATA                 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2771_DENSE_2771_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2772_DENSE_2772_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2772_DENSE_2772_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_307_FLATTEN_307_DATA               0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_307_FLATTEN_307_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2773_DENSE_2773_DATA                 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2773_DENSE_2773_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2774_DENSE_2774_DATA                 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2774_DENSE_2774_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3426_WEIGHT_CONV2D_3426_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3426_WEIGHT_CONV2D_3426_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3426_BIAS_CONV2D_3426_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3426_BIAS_CONV2D_3426_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3427_WEIGHT_CONV2D_3427_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3427_WEIGHT_CONV2D_3427_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3427_BIAS_CONV2D_3427_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3427_BIAS_CONV2D_3427_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2763_WEIGHT_DENSE_2763_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2763_WEIGHT_DENSE_2763_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2763_BIAS_DENSE_2763_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2763_BIAS_DENSE_2763_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2764_WEIGHT_DENSE_2764_WEIGHT_DATA   0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2764_WEIGHT_DENSE_2764_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2764_BIAS_DENSE_2764_BIAS_DATA       0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2764_BIAS_DENSE_2764_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3428_WEIGHT_CONV2D_3428_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3428_WEIGHT_CONV2D_3428_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3428_BIAS_CONV2D_3428_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3428_BIAS_CONV2D_3428_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3431_WEIGHT_CONV2D_3431_WEIGHT_DATA 0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3431_WEIGHT_CONV2D_3431_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3431_BIAS_CONV2D_3431_BIAS_DATA     0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3431_BIAS_CONV2D_3431_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2765_WEIGHT_DENSE_2765_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2765_WEIGHT_DENSE_2765_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2765_BIAS_DENSE_2765_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2765_BIAS_DENSE_2765_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2767_WEIGHT_DENSE_2767_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2767_WEIGHT_DENSE_2767_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2767_BIAS_DENSE_2767_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2767_BIAS_DENSE_2767_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3429_WEIGHT_CONV2D_3429_WEIGHT_DATA 0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3429_WEIGHT_CONV2D_3429_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3429_BIAS_CONV2D_3429_BIAS_DATA     0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3429_BIAS_CONV2D_3429_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3432_WEIGHT_CONV2D_3432_WEIGHT_DATA 0x198
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3432_WEIGHT_CONV2D_3432_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3432_BIAS_CONV2D_3432_BIAS_DATA     0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3432_BIAS_CONV2D_3432_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2766_WEIGHT_DENSE_2766_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2766_WEIGHT_DENSE_2766_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2766_BIAS_DENSE_2766_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2766_BIAS_DENSE_2766_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2768_WEIGHT_DENSE_2768_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2768_WEIGHT_DENSE_2768_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2768_BIAS_DENSE_2768_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2768_BIAS_DENSE_2768_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2769_WEIGHT_DENSE_2769_WEIGHT_DATA   0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2769_WEIGHT_DENSE_2769_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2769_BIAS_DENSE_2769_BIAS_DATA       0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2769_BIAS_DENSE_2769_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2770_WEIGHT_DENSE_2770_WEIGHT_DATA   0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2770_WEIGHT_DENSE_2770_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2770_BIAS_DENSE_2770_BIAS_DATA       0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2770_BIAS_DENSE_2770_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2771_WEIGHT_DENSE_2771_WEIGHT_DATA   0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2771_WEIGHT_DENSE_2771_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2771_BIAS_DENSE_2771_BIAS_DATA       0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2771_BIAS_DENSE_2771_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2772_WEIGHT_DENSE_2772_WEIGHT_DATA   0x1f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2772_WEIGHT_DENSE_2772_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2772_BIAS_DENSE_2772_BIAS_DATA       0x200
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2772_BIAS_DENSE_2772_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2773_WEIGHT_DENSE_2773_WEIGHT_DATA   0x208
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2773_WEIGHT_DENSE_2773_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2773_BIAS_DENSE_2773_BIAS_DATA       0x210
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2773_BIAS_DENSE_2773_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2774_WEIGHT_DENSE_2774_WEIGHT_DATA   0x218
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2774_WEIGHT_DENSE_2774_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2774_BIAS_DENSE_2774_BIAS_DATA       0x220
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2774_BIAS_DENSE_2774_BIAS_DATA       32

