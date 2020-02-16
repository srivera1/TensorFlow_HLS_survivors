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
// 0x018 : Data signal of Input2_input2
//         bit 31~0 - Input2_input2[31:0] (Read/Write)
// 0x01c : reserved
// 0x020 : Data signal of Input1_input1
//         bit 31~0 - Input1_input1[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Conv2d_2974_conv2d_2974
//         bit 31~0 - Conv2d_2974_conv2d_2974[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2972_conv2d_2972
//         bit 31~0 - Conv2d_2972_conv2d_2972[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2507_max_pooling2d_2507
//         bit 31~0 - Max_pooling2d_2507_max_pooling2d_2507[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2505_max_pooling2d_2505
//         bit 31~0 - Max_pooling2d_2505_max_pooling2d_2505[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2400_dense_2400
//         bit 31~0 - Dense_2400_dense_2400[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_2973_conv2d_2973
//         bit 31~0 - Conv2d_2973_conv2d_2973[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_2975_conv2d_2975
//         bit 31~0 - Conv2d_2975_conv2d_2975[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Max_pooling2d_2506_max_pooling2d_2506
//         bit 31~0 - Max_pooling2d_2506_max_pooling2d_2506[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_2508_max_pooling2d_2508
//         bit 31~0 - Max_pooling2d_2508_max_pooling2d_2508[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_2399_dense_2399
//         bit 31~0 - Dense_2399_dense_2399[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_2401_dense_2401
//         bit 31~0 - Dense_2401_dense_2401[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Concatenate_525_concatenate_525
//         bit 31~0 - Concatenate_525_concatenate_525[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_2976_conv2d_2976
//         bit 31~0 - Conv2d_2976_conv2d_2976[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_2977_conv2d_2977
//         bit 31~0 - Conv2d_2977_conv2d_2977[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_2509_max_pooling2d_2509
//         bit 31~0 - Max_pooling2d_2509_max_pooling2d_2509[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Flatten_266_flatten_266
//         bit 31~0 - Flatten_266_flatten_266[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_2402_dense_2402
//         bit 31~0 - Dense_2402_dense_2402[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_2403_dense_2403
//         bit 31~0 - Dense_2403_dense_2403[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_2404_dense_2404
//         bit 31~0 - Dense_2404_dense_2404[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Conv2d_2974_weight_conv2d_2974_weight
//         bit 31~0 - Conv2d_2974_weight_conv2d_2974_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_2974_bias_conv2d_2974_bias
//         bit 31~0 - Conv2d_2974_bias_conv2d_2974_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_2972_weight_conv2d_2972_weight
//         bit 31~0 - Conv2d_2972_weight_conv2d_2972_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_2972_bias_conv2d_2972_bias
//         bit 31~0 - Conv2d_2972_bias_conv2d_2972_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_2400_weight_dense_2400_weight
//         bit 31~0 - Dense_2400_weight_dense_2400_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_2400_bias_dense_2400_bias
//         bit 31~0 - Dense_2400_bias_dense_2400_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_2973_weight_conv2d_2973_weight
//         bit 31~0 - Conv2d_2973_weight_conv2d_2973_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_2973_bias_conv2d_2973_bias
//         bit 31~0 - Conv2d_2973_bias_conv2d_2973_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_2975_weight_conv2d_2975_weight
//         bit 31~0 - Conv2d_2975_weight_conv2d_2975_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_2975_bias_conv2d_2975_bias
//         bit 31~0 - Conv2d_2975_bias_conv2d_2975_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_2399_weight_dense_2399_weight
//         bit 31~0 - Dense_2399_weight_dense_2399_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_2399_bias_dense_2399_bias
//         bit 31~0 - Dense_2399_bias_dense_2399_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_2401_weight_dense_2401_weight
//         bit 31~0 - Dense_2401_weight_dense_2401_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_2401_bias_dense_2401_bias
//         bit 31~0 - Dense_2401_bias_dense_2401_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_2976_weight_conv2d_2976_weight
//         bit 31~0 - Conv2d_2976_weight_conv2d_2976_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_2976_bias_conv2d_2976_bias
//         bit 31~0 - Conv2d_2976_bias_conv2d_2976_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_2977_weight_conv2d_2977_weight
//         bit 31~0 - Conv2d_2977_weight_conv2d_2977_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_2977_bias_conv2d_2977_bias
//         bit 31~0 - Conv2d_2977_bias_conv2d_2977_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_2402_weight_dense_2402_weight
//         bit 31~0 - Dense_2402_weight_dense_2402_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_2402_bias_dense_2402_bias
//         bit 31~0 - Dense_2402_bias_dense_2402_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_2403_weight_dense_2403_weight
//         bit 31~0 - Dense_2403_weight_dense_2403_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_2403_bias_dense_2403_bias
//         bit 31~0 - Dense_2403_bias_dense_2403_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_2404_weight_dense_2404_weight
//         bit 31~0 - Dense_2404_weight_dense_2404_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_2404_bias_dense_2404_bias
//         bit 31~0 - Dense_2404_bias_dense_2404_bias[31:0] (Read/Write)
// 0x17c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT2_INPUT2_DATA                         0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT2_INPUT2_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT1_INPUT1_DATA                         0x020
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT1_INPUT1_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2974_CONV2D_2974_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2974_CONV2D_2974_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2972_CONV2D_2972_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2972_CONV2D_2972_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2507_MAX_POOLING2D_2507_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2507_MAX_POOLING2D_2507_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2505_MAX_POOLING2D_2505_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2505_MAX_POOLING2D_2505_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2400_DENSE_2400_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2400_DENSE_2400_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2973_CONV2D_2973_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2973_CONV2D_2973_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2975_CONV2D_2975_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2975_CONV2D_2975_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2506_MAX_POOLING2D_2506_DATA 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2506_MAX_POOLING2D_2506_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2508_MAX_POOLING2D_2508_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2508_MAX_POOLING2D_2508_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2399_DENSE_2399_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2399_DENSE_2399_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2401_DENSE_2401_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2401_DENSE_2401_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_525_CONCATENATE_525_DATA       0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_525_CONCATENATE_525_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2976_CONV2D_2976_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2976_CONV2D_2976_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2977_CONV2D_2977_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2977_CONV2D_2977_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2509_MAX_POOLING2D_2509_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2509_MAX_POOLING2D_2509_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_266_FLATTEN_266_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_266_FLATTEN_266_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2402_DENSE_2402_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2402_DENSE_2402_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2403_DENSE_2403_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2403_DENSE_2403_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2404_DENSE_2404_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2404_DENSE_2404_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2974_WEIGHT_CONV2D_2974_WEIGHT_DATA 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2974_WEIGHT_CONV2D_2974_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2974_BIAS_CONV2D_2974_BIAS_DATA     0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2974_BIAS_CONV2D_2974_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2972_WEIGHT_CONV2D_2972_WEIGHT_DATA 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2972_WEIGHT_CONV2D_2972_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2972_BIAS_CONV2D_2972_BIAS_DATA     0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2972_BIAS_CONV2D_2972_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2400_WEIGHT_DENSE_2400_WEIGHT_DATA   0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2400_WEIGHT_DENSE_2400_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2400_BIAS_DENSE_2400_BIAS_DATA       0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2400_BIAS_DENSE_2400_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2973_WEIGHT_CONV2D_2973_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2973_WEIGHT_CONV2D_2973_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2973_BIAS_CONV2D_2973_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2973_BIAS_CONV2D_2973_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2975_WEIGHT_CONV2D_2975_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2975_WEIGHT_CONV2D_2975_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2975_BIAS_CONV2D_2975_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2975_BIAS_CONV2D_2975_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2399_WEIGHT_DENSE_2399_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2399_WEIGHT_DENSE_2399_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2399_BIAS_DENSE_2399_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2399_BIAS_DENSE_2399_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2401_WEIGHT_DENSE_2401_WEIGHT_DATA   0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2401_WEIGHT_DENSE_2401_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2401_BIAS_DENSE_2401_BIAS_DATA       0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2401_BIAS_DENSE_2401_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2976_WEIGHT_CONV2D_2976_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2976_WEIGHT_CONV2D_2976_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2976_BIAS_CONV2D_2976_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2976_BIAS_CONV2D_2976_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2977_WEIGHT_CONV2D_2977_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2977_WEIGHT_CONV2D_2977_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2977_BIAS_CONV2D_2977_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2977_BIAS_CONV2D_2977_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2402_WEIGHT_DENSE_2402_WEIGHT_DATA   0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2402_WEIGHT_DENSE_2402_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2402_BIAS_DENSE_2402_BIAS_DATA       0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2402_BIAS_DENSE_2402_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2403_WEIGHT_DENSE_2403_WEIGHT_DATA   0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2403_WEIGHT_DENSE_2403_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2403_BIAS_DENSE_2403_BIAS_DATA       0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2403_BIAS_DENSE_2403_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2404_WEIGHT_DENSE_2404_WEIGHT_DATA   0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2404_WEIGHT_DENSE_2404_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2404_BIAS_DENSE_2404_BIAS_DATA       0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2404_BIAS_DENSE_2404_BIAS_DATA       32

