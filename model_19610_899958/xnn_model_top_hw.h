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
// 0x028 : Data signal of Conv2d_6113_conv2d_6113
//         bit 31~0 - Conv2d_6113_conv2d_6113[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_6108_conv2d_6108
//         bit 31~0 - Conv2d_6108_conv2d_6108[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_4841_max_pooling2d_4841
//         bit 31~0 - Max_pooling2d_4841_max_pooling2d_4841[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_4836_max_pooling2d_4836
//         bit 31~0 - Max_pooling2d_4836_max_pooling2d_4836[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_4559_dense_4559
//         bit 31~0 - Dense_4559_dense_4559[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_4555_dense_4555
//         bit 31~0 - Dense_4555_dense_4555[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_6114_conv2d_6114
//         bit 31~0 - Conv2d_6114_conv2d_6114[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_6109_conv2d_6109
//         bit 31~0 - Conv2d_6109_conv2d_6109[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_4842_max_pooling2d_4842
//         bit 31~0 - Max_pooling2d_4842_max_pooling2d_4842[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_4837_max_pooling2d_4837
//         bit 31~0 - Max_pooling2d_4837_max_pooling2d_4837[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_4560_dense_4560
//         bit 31~0 - Dense_4560_dense_4560[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_4556_dense_4556
//         bit 31~0 - Dense_4556_dense_4556[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_6115_conv2d_6115
//         bit 31~0 - Conv2d_6115_conv2d_6115[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_6110_conv2d_6110
//         bit 31~0 - Conv2d_6110_conv2d_6110[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_4843_max_pooling2d_4843
//         bit 31~0 - Max_pooling2d_4843_max_pooling2d_4843[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Max_pooling2d_4838_max_pooling2d_4838
//         bit 31~0 - Max_pooling2d_4838_max_pooling2d_4838[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_4561_dense_4561
//         bit 31~0 - Dense_4561_dense_4561[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Max_pooling2d_4839_max_pooling2d_4839
//         bit 31~0 - Max_pooling2d_4839_max_pooling2d_4839[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Max_pooling2d_4844_max_pooling2d_4844
//         bit 31~0 - Max_pooling2d_4844_max_pooling2d_4844[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_4557_dense_4557
//         bit 31~0 - Dense_4557_dense_4557[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_4562_dense_4562
//         bit 31~0 - Dense_4562_dense_4562[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_4558_dense_4558
//         bit 31~0 - Dense_4558_dense_4558[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_4563_dense_4563
//         bit 31~0 - Dense_4563_dense_4563[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Concatenate_471_concatenate_471
//         bit 31~0 - Concatenate_471_concatenate_471[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Flatten_174_flatten_174
//         bit 31~0 - Flatten_174_flatten_174[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_4564_dense_4564
//         bit 31~0 - Dense_4564_dense_4564[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_4565_dense_4565
//         bit 31~0 - Dense_4565_dense_4565[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_6113_weight_conv2d_6113_weight
//         bit 31~0 - Conv2d_6113_weight_conv2d_6113_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_6113_bias_conv2d_6113_bias
//         bit 31~0 - Conv2d_6113_bias_conv2d_6113_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_6108_weight_conv2d_6108_weight
//         bit 31~0 - Conv2d_6108_weight_conv2d_6108_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_6108_bias_conv2d_6108_bias
//         bit 31~0 - Conv2d_6108_bias_conv2d_6108_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_4559_weight_dense_4559_weight
//         bit 31~0 - Dense_4559_weight_dense_4559_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_4559_bias_dense_4559_bias
//         bit 31~0 - Dense_4559_bias_dense_4559_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_4555_weight_dense_4555_weight
//         bit 31~0 - Dense_4555_weight_dense_4555_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_4555_bias_dense_4555_bias
//         bit 31~0 - Dense_4555_bias_dense_4555_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_6114_weight_conv2d_6114_weight
//         bit 31~0 - Conv2d_6114_weight_conv2d_6114_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_6114_bias_conv2d_6114_bias
//         bit 31~0 - Conv2d_6114_bias_conv2d_6114_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_6109_weight_conv2d_6109_weight
//         bit 31~0 - Conv2d_6109_weight_conv2d_6109_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_6109_bias_conv2d_6109_bias
//         bit 31~0 - Conv2d_6109_bias_conv2d_6109_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_4560_weight_dense_4560_weight
//         bit 31~0 - Dense_4560_weight_dense_4560_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_4560_bias_dense_4560_bias
//         bit 31~0 - Dense_4560_bias_dense_4560_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_4556_weight_dense_4556_weight
//         bit 31~0 - Dense_4556_weight_dense_4556_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_4556_bias_dense_4556_bias
//         bit 31~0 - Dense_4556_bias_dense_4556_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_6115_weight_conv2d_6115_weight
//         bit 31~0 - Conv2d_6115_weight_conv2d_6115_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_6115_bias_conv2d_6115_bias
//         bit 31~0 - Conv2d_6115_bias_conv2d_6115_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_6110_weight_conv2d_6110_weight
//         bit 31~0 - Conv2d_6110_weight_conv2d_6110_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Conv2d_6110_bias_conv2d_6110_bias
//         bit 31~0 - Conv2d_6110_bias_conv2d_6110_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_4561_weight_dense_4561_weight
//         bit 31~0 - Dense_4561_weight_dense_4561_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_4561_bias_dense_4561_bias
//         bit 31~0 - Dense_4561_bias_dense_4561_bias[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_4557_weight_dense_4557_weight
//         bit 31~0 - Dense_4557_weight_dense_4557_weight[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_4557_bias_dense_4557_bias
//         bit 31~0 - Dense_4557_bias_dense_4557_bias[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_4562_weight_dense_4562_weight
//         bit 31~0 - Dense_4562_weight_dense_4562_weight[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_4562_bias_dense_4562_bias
//         bit 31~0 - Dense_4562_bias_dense_4562_bias[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_4558_weight_dense_4558_weight
//         bit 31~0 - Dense_4558_weight_dense_4558_weight[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_4558_bias_dense_4558_bias
//         bit 31~0 - Dense_4558_bias_dense_4558_bias[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_4563_weight_dense_4563_weight
//         bit 31~0 - Dense_4563_weight_dense_4563_weight[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_4563_bias_dense_4563_bias
//         bit 31~0 - Dense_4563_bias_dense_4563_bias[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_4564_weight_dense_4564_weight
//         bit 31~0 - Dense_4564_weight_dense_4564_weight[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of Dense_4564_bias_dense_4564_bias
//         bit 31~0 - Dense_4564_bias_dense_4564_bias[31:0] (Read/Write)
// 0x1fc : reserved
// 0x200 : Data signal of Dense_4565_weight_dense_4565_weight
//         bit 31~0 - Dense_4565_weight_dense_4565_weight[31:0] (Read/Write)
// 0x204 : reserved
// 0x208 : Data signal of Dense_4565_bias_dense_4565_bias
//         bit 31~0 - Dense_4565_bias_dense_4565_bias[31:0] (Read/Write)
// 0x20c : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6113_CONV2D_6113_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6113_CONV2D_6113_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6108_CONV2D_6108_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6108_CONV2D_6108_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4841_MAX_POOLING2D_4841_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4841_MAX_POOLING2D_4841_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4836_MAX_POOLING2D_4836_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4836_MAX_POOLING2D_4836_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4559_DENSE_4559_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4559_DENSE_4559_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4555_DENSE_4555_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4555_DENSE_4555_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6114_CONV2D_6114_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6114_CONV2D_6114_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6109_CONV2D_6109_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6109_CONV2D_6109_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4842_MAX_POOLING2D_4842_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4842_MAX_POOLING2D_4842_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4837_MAX_POOLING2D_4837_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4837_MAX_POOLING2D_4837_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4560_DENSE_4560_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4560_DENSE_4560_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4556_DENSE_4556_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4556_DENSE_4556_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6115_CONV2D_6115_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6115_CONV2D_6115_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6110_CONV2D_6110_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6110_CONV2D_6110_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4843_MAX_POOLING2D_4843_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4843_MAX_POOLING2D_4843_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4838_MAX_POOLING2D_4838_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4838_MAX_POOLING2D_4838_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4561_DENSE_4561_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4561_DENSE_4561_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4839_MAX_POOLING2D_4839_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4839_MAX_POOLING2D_4839_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_4844_MAX_POOLING2D_4844_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_4844_MAX_POOLING2D_4844_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4557_DENSE_4557_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4557_DENSE_4557_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4562_DENSE_4562_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4562_DENSE_4562_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4558_DENSE_4558_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4558_DENSE_4558_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4563_DENSE_4563_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4563_DENSE_4563_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_471_CONCATENATE_471_DATA       0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_471_CONCATENATE_471_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_174_FLATTEN_174_DATA               0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_174_FLATTEN_174_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4564_DENSE_4564_DATA                 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4564_DENSE_4564_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4565_DENSE_4565_DATA                 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4565_DENSE_4565_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6113_WEIGHT_CONV2D_6113_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6113_WEIGHT_CONV2D_6113_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6113_BIAS_CONV2D_6113_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6113_BIAS_CONV2D_6113_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6108_WEIGHT_CONV2D_6108_WEIGHT_DATA 0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6108_WEIGHT_CONV2D_6108_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6108_BIAS_CONV2D_6108_BIAS_DATA     0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6108_BIAS_CONV2D_6108_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4559_WEIGHT_DENSE_4559_WEIGHT_DATA   0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4559_WEIGHT_DENSE_4559_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4559_BIAS_DENSE_4559_BIAS_DATA       0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4559_BIAS_DENSE_4559_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4555_WEIGHT_DENSE_4555_WEIGHT_DATA   0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4555_WEIGHT_DENSE_4555_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4555_BIAS_DENSE_4555_BIAS_DATA       0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4555_BIAS_DENSE_4555_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6114_WEIGHT_CONV2D_6114_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6114_WEIGHT_CONV2D_6114_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6114_BIAS_CONV2D_6114_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6114_BIAS_CONV2D_6114_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6109_WEIGHT_CONV2D_6109_WEIGHT_DATA 0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6109_WEIGHT_CONV2D_6109_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6109_BIAS_CONV2D_6109_BIAS_DATA     0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6109_BIAS_CONV2D_6109_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4560_WEIGHT_DENSE_4560_WEIGHT_DATA   0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4560_WEIGHT_DENSE_4560_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4560_BIAS_DENSE_4560_BIAS_DATA       0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4560_BIAS_DENSE_4560_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4556_WEIGHT_DENSE_4556_WEIGHT_DATA   0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4556_WEIGHT_DENSE_4556_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4556_BIAS_DENSE_4556_BIAS_DATA       0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4556_BIAS_DENSE_4556_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6115_WEIGHT_CONV2D_6115_WEIGHT_DATA 0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6115_WEIGHT_CONV2D_6115_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6115_BIAS_CONV2D_6115_BIAS_DATA     0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6115_BIAS_CONV2D_6115_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6110_WEIGHT_CONV2D_6110_WEIGHT_DATA 0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6110_WEIGHT_CONV2D_6110_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_6110_BIAS_CONV2D_6110_BIAS_DATA     0x198
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_6110_BIAS_CONV2D_6110_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4561_WEIGHT_DENSE_4561_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4561_WEIGHT_DENSE_4561_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4561_BIAS_DENSE_4561_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4561_BIAS_DENSE_4561_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4557_WEIGHT_DENSE_4557_WEIGHT_DATA   0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4557_WEIGHT_DENSE_4557_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4557_BIAS_DENSE_4557_BIAS_DATA       0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4557_BIAS_DENSE_4557_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4562_WEIGHT_DENSE_4562_WEIGHT_DATA   0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4562_WEIGHT_DENSE_4562_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4562_BIAS_DENSE_4562_BIAS_DATA       0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4562_BIAS_DENSE_4562_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4558_WEIGHT_DENSE_4558_WEIGHT_DATA   0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4558_WEIGHT_DENSE_4558_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4558_BIAS_DENSE_4558_BIAS_DATA       0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4558_BIAS_DENSE_4558_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4563_WEIGHT_DENSE_4563_WEIGHT_DATA   0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4563_WEIGHT_DENSE_4563_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4563_BIAS_DENSE_4563_BIAS_DATA       0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4563_BIAS_DENSE_4563_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4564_WEIGHT_DENSE_4564_WEIGHT_DATA   0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4564_WEIGHT_DENSE_4564_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4564_BIAS_DENSE_4564_BIAS_DATA       0x1f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4564_BIAS_DENSE_4564_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4565_WEIGHT_DENSE_4565_WEIGHT_DATA   0x200
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4565_WEIGHT_DENSE_4565_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_4565_BIAS_DENSE_4565_BIAS_DATA       0x208
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_4565_BIAS_DENSE_4565_BIAS_DATA       32

