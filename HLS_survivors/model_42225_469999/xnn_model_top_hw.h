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
// 0x028 : Data signal of Conv2d_3538_conv2d_3538
//         bit 31~0 - Conv2d_3538_conv2d_3538[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_3539_conv2d_3539
//         bit 31~0 - Conv2d_3539_conv2d_3539[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_3001_max_pooling2d_3001
//         bit 31~0 - Max_pooling2d_3001_max_pooling2d_3001[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_3002_max_pooling2d_3002
//         bit 31~0 - Max_pooling2d_3002_max_pooling2d_3002[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2854_dense_2854
//         bit 31~0 - Dense_2854_dense_2854[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2855_dense_2855
//         bit 31~0 - Dense_2855_dense_2855[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_618_concatenate_618
//         bit 31~0 - Concatenate_618_concatenate_618[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_3540_conv2d_3540
//         bit 31~0 - Conv2d_3540_conv2d_3540[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_3003_max_pooling2d_3003
//         bit 31~0 - Max_pooling2d_3003_max_pooling2d_3003[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_2856_dense_2856
//         bit 31~0 - Dense_2856_dense_2856[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_3541_conv2d_3541
//         bit 31~0 - Conv2d_3541_conv2d_3541[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_3542_conv2d_3542
//         bit 31~0 - Conv2d_3542_conv2d_3542[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_3004_max_pooling2d_3004
//         bit 31~0 - Max_pooling2d_3004_max_pooling2d_3004[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Flatten_319_flatten_319
//         bit 31~0 - Flatten_319_flatten_319[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_2857_dense_2857
//         bit 31~0 - Dense_2857_dense_2857[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_2858_dense_2858
//         bit 31~0 - Dense_2858_dense_2858[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_2859_dense_2859
//         bit 31~0 - Dense_2859_dense_2859[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_3538_weight_conv2d_3538_weight
//         bit 31~0 - Conv2d_3538_weight_conv2d_3538_weight[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_3538_bias_conv2d_3538_bias
//         bit 31~0 - Conv2d_3538_bias_conv2d_3538_bias[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Conv2d_3539_weight_conv2d_3539_weight
//         bit 31~0 - Conv2d_3539_weight_conv2d_3539_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv2d_3539_bias_conv2d_3539_bias
//         bit 31~0 - Conv2d_3539_bias_conv2d_3539_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_2854_weight_dense_2854_weight
//         bit 31~0 - Dense_2854_weight_dense_2854_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_2854_bias_dense_2854_bias
//         bit 31~0 - Dense_2854_bias_dense_2854_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_2855_weight_dense_2855_weight
//         bit 31~0 - Dense_2855_weight_dense_2855_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_2855_bias_dense_2855_bias
//         bit 31~0 - Dense_2855_bias_dense_2855_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_3540_weight_conv2d_3540_weight
//         bit 31~0 - Conv2d_3540_weight_conv2d_3540_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_3540_bias_conv2d_3540_bias
//         bit 31~0 - Conv2d_3540_bias_conv2d_3540_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_2856_weight_dense_2856_weight
//         bit 31~0 - Dense_2856_weight_dense_2856_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_2856_bias_dense_2856_bias
//         bit 31~0 - Dense_2856_bias_dense_2856_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_3541_weight_conv2d_3541_weight
//         bit 31~0 - Conv2d_3541_weight_conv2d_3541_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_3541_bias_conv2d_3541_bias
//         bit 31~0 - Conv2d_3541_bias_conv2d_3541_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_3542_weight_conv2d_3542_weight
//         bit 31~0 - Conv2d_3542_weight_conv2d_3542_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_3542_bias_conv2d_3542_bias
//         bit 31~0 - Conv2d_3542_bias_conv2d_3542_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_2857_weight_dense_2857_weight
//         bit 31~0 - Dense_2857_weight_dense_2857_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_2857_bias_dense_2857_bias
//         bit 31~0 - Dense_2857_bias_dense_2857_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_2858_weight_dense_2858_weight
//         bit 31~0 - Dense_2858_weight_dense_2858_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_2858_bias_dense_2858_bias
//         bit 31~0 - Dense_2858_bias_dense_2858_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_2859_weight_dense_2859_weight
//         bit 31~0 - Dense_2859_weight_dense_2859_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_2859_bias_dense_2859_bias
//         bit 31~0 - Dense_2859_bias_dense_2859_bias[31:0] (Read/Write)
// 0x15c : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3538_CONV2D_3538_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3538_CONV2D_3538_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3539_CONV2D_3539_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3539_CONV2D_3539_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3001_MAX_POOLING2D_3001_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3001_MAX_POOLING2D_3001_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3002_MAX_POOLING2D_3002_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3002_MAX_POOLING2D_3002_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2854_DENSE_2854_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2854_DENSE_2854_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2855_DENSE_2855_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2855_DENSE_2855_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_618_CONCATENATE_618_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_618_CONCATENATE_618_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3540_CONV2D_3540_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3540_CONV2D_3540_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3003_MAX_POOLING2D_3003_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3003_MAX_POOLING2D_3003_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2856_DENSE_2856_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2856_DENSE_2856_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3541_CONV2D_3541_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3541_CONV2D_3541_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3542_CONV2D_3542_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3542_CONV2D_3542_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3004_MAX_POOLING2D_3004_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3004_MAX_POOLING2D_3004_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_319_FLATTEN_319_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_319_FLATTEN_319_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2857_DENSE_2857_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2857_DENSE_2857_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2858_DENSE_2858_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2858_DENSE_2858_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2859_DENSE_2859_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2859_DENSE_2859_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3538_WEIGHT_CONV2D_3538_WEIGHT_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3538_WEIGHT_CONV2D_3538_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3538_BIAS_CONV2D_3538_BIAS_DATA     0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3538_BIAS_CONV2D_3538_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3539_WEIGHT_CONV2D_3539_WEIGHT_DATA 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3539_WEIGHT_CONV2D_3539_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3539_BIAS_CONV2D_3539_BIAS_DATA     0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3539_BIAS_CONV2D_3539_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2854_WEIGHT_DENSE_2854_WEIGHT_DATA   0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2854_WEIGHT_DENSE_2854_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2854_BIAS_DENSE_2854_BIAS_DATA       0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2854_BIAS_DENSE_2854_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2855_WEIGHT_DENSE_2855_WEIGHT_DATA   0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2855_WEIGHT_DENSE_2855_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2855_BIAS_DENSE_2855_BIAS_DATA       0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2855_BIAS_DENSE_2855_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3540_WEIGHT_CONV2D_3540_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3540_WEIGHT_CONV2D_3540_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3540_BIAS_CONV2D_3540_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3540_BIAS_CONV2D_3540_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2856_WEIGHT_DENSE_2856_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2856_WEIGHT_DENSE_2856_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2856_BIAS_DENSE_2856_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2856_BIAS_DENSE_2856_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3541_WEIGHT_CONV2D_3541_WEIGHT_DATA 0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3541_WEIGHT_CONV2D_3541_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3541_BIAS_CONV2D_3541_BIAS_DATA     0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3541_BIAS_CONV2D_3541_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3542_WEIGHT_CONV2D_3542_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3542_WEIGHT_CONV2D_3542_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3542_BIAS_CONV2D_3542_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3542_BIAS_CONV2D_3542_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2857_WEIGHT_DENSE_2857_WEIGHT_DATA   0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2857_WEIGHT_DENSE_2857_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2857_BIAS_DENSE_2857_BIAS_DATA       0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2857_BIAS_DENSE_2857_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2858_WEIGHT_DENSE_2858_WEIGHT_DATA   0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2858_WEIGHT_DENSE_2858_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2858_BIAS_DENSE_2858_BIAS_DATA       0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2858_BIAS_DENSE_2858_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2859_WEIGHT_DENSE_2859_WEIGHT_DATA   0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2859_WEIGHT_DENSE_2859_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2859_BIAS_DENSE_2859_BIAS_DATA       0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2859_BIAS_DENSE_2859_BIAS_DATA       32

