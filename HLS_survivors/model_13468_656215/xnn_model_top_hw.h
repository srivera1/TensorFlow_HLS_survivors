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
// 0x028 : Data signal of Conv2d_895_conv2d_895
//         bit 31~0 - Conv2d_895_conv2d_895[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_897_conv2d_897
//         bit 31~0 - Conv2d_897_conv2d_897[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_762_max_pooling2d_762
//         bit 31~0 - Max_pooling2d_762_max_pooling2d_762[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_763_max_pooling2d_763
//         bit 31~0 - Max_pooling2d_763_max_pooling2d_763[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_744_dense_744
//         bit 31~0 - Dense_744_dense_744[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_745_dense_745
//         bit 31~0 - Dense_745_dense_745[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_896_conv2d_896
//         bit 31~0 - Conv2d_896_conv2d_896[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_898_conv2d_898
//         bit 31~0 - Conv2d_898_conv2d_898[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Concatenate_159_concatenate_159
//         bit 31~0 - Concatenate_159_concatenate_159[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_904_conv2d_904
//         bit 31~0 - Conv2d_904_conv2d_904[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_902_conv2d_902
//         bit 31~0 - Conv2d_902_conv2d_902[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_768_max_pooling2d_768
//         bit 31~0 - Max_pooling2d_768_max_pooling2d_768[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_766_max_pooling2d_766
//         bit 31~0 - Max_pooling2d_766_max_pooling2d_766[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_749_dense_749
//         bit 31~0 - Dense_749_dense_749[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_903_conv2d_903
//         bit 31~0 - Conv2d_903_conv2d_903[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_905_conv2d_905
//         bit 31~0 - Conv2d_905_conv2d_905[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_767_max_pooling2d_767
//         bit 31~0 - Max_pooling2d_767_max_pooling2d_767[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Max_pooling2d_769_max_pooling2d_769
//         bit 31~0 - Max_pooling2d_769_max_pooling2d_769[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_748_dense_748
//         bit 31~0 - Dense_748_dense_748[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_750_dense_750
//         bit 31~0 - Dense_750_dense_750[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Concatenate_161_concatenate_161
//         bit 31~0 - Concatenate_161_concatenate_161[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Flatten_85_flatten_85
//         bit 31~0 - Flatten_85_flatten_85[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_751_dense_751
//         bit 31~0 - Dense_751_dense_751[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_752_dense_752
//         bit 31~0 - Dense_752_dense_752[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_895_weight_conv2d_895_weight
//         bit 31~0 - Conv2d_895_weight_conv2d_895_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_895_bias_conv2d_895_bias
//         bit 31~0 - Conv2d_895_bias_conv2d_895_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_897_weight_conv2d_897_weight
//         bit 31~0 - Conv2d_897_weight_conv2d_897_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_897_bias_conv2d_897_bias
//         bit 31~0 - Conv2d_897_bias_conv2d_897_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_744_weight_dense_744_weight
//         bit 31~0 - Dense_744_weight_dense_744_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_744_bias_dense_744_bias
//         bit 31~0 - Dense_744_bias_dense_744_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_745_weight_dense_745_weight
//         bit 31~0 - Dense_745_weight_dense_745_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_745_bias_dense_745_bias
//         bit 31~0 - Dense_745_bias_dense_745_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_896_weight_conv2d_896_weight
//         bit 31~0 - Conv2d_896_weight_conv2d_896_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_896_bias_conv2d_896_bias
//         bit 31~0 - Conv2d_896_bias_conv2d_896_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_898_weight_conv2d_898_weight
//         bit 31~0 - Conv2d_898_weight_conv2d_898_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_898_bias_conv2d_898_bias
//         bit 31~0 - Conv2d_898_bias_conv2d_898_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_904_weight_conv2d_904_weight
//         bit 31~0 - Conv2d_904_weight_conv2d_904_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_904_bias_conv2d_904_bias
//         bit 31~0 - Conv2d_904_bias_conv2d_904_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_902_weight_conv2d_902_weight
//         bit 31~0 - Conv2d_902_weight_conv2d_902_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_902_bias_conv2d_902_bias
//         bit 31~0 - Conv2d_902_bias_conv2d_902_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_749_weight_dense_749_weight
//         bit 31~0 - Dense_749_weight_dense_749_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_749_bias_dense_749_bias
//         bit 31~0 - Dense_749_bias_dense_749_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_903_weight_conv2d_903_weight
//         bit 31~0 - Conv2d_903_weight_conv2d_903_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_903_bias_conv2d_903_bias
//         bit 31~0 - Conv2d_903_bias_conv2d_903_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_905_weight_conv2d_905_weight
//         bit 31~0 - Conv2d_905_weight_conv2d_905_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_905_bias_conv2d_905_bias
//         bit 31~0 - Conv2d_905_bias_conv2d_905_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_748_weight_dense_748_weight
//         bit 31~0 - Dense_748_weight_dense_748_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_748_bias_dense_748_bias
//         bit 31~0 - Dense_748_bias_dense_748_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_750_weight_dense_750_weight
//         bit 31~0 - Dense_750_weight_dense_750_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_750_bias_dense_750_bias
//         bit 31~0 - Dense_750_bias_dense_750_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_751_weight_dense_751_weight
//         bit 31~0 - Dense_751_weight_dense_751_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_751_bias_dense_751_bias
//         bit 31~0 - Dense_751_bias_dense_751_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_752_weight_dense_752_weight
//         bit 31~0 - Dense_752_weight_dense_752_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_752_bias_dense_752_bias
//         bit 31~0 - Dense_752_bias_dense_752_bias[31:0] (Read/Write)
// 0x1d4 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_895_CONV2D_895_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_895_CONV2D_895_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_897_CONV2D_897_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_897_CONV2D_897_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_762_MAX_POOLING2D_762_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_762_MAX_POOLING2D_762_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_763_MAX_POOLING2D_763_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_763_MAX_POOLING2D_763_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_744_DENSE_744_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_744_DENSE_744_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_745_DENSE_745_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_745_DENSE_745_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_896_CONV2D_896_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_896_CONV2D_896_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_898_CONV2D_898_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_898_CONV2D_898_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_159_CONCATENATE_159_DATA     0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_159_CONCATENATE_159_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_904_CONV2D_904_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_904_CONV2D_904_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_902_CONV2D_902_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_902_CONV2D_902_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_768_MAX_POOLING2D_768_DATA 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_768_MAX_POOLING2D_768_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_766_MAX_POOLING2D_766_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_766_MAX_POOLING2D_766_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_749_DENSE_749_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_749_DENSE_749_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_903_CONV2D_903_DATA               0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_903_CONV2D_903_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_905_CONV2D_905_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_905_CONV2D_905_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_767_MAX_POOLING2D_767_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_767_MAX_POOLING2D_767_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_769_MAX_POOLING2D_769_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_769_MAX_POOLING2D_769_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_748_DENSE_748_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_748_DENSE_748_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_750_DENSE_750_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_750_DENSE_750_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_161_CONCATENATE_161_DATA     0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_161_CONCATENATE_161_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_85_FLATTEN_85_DATA               0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_85_FLATTEN_85_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_751_DENSE_751_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_751_DENSE_751_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_752_DENSE_752_DATA                 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_752_DENSE_752_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_895_WEIGHT_CONV2D_895_WEIGHT_DATA 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_895_WEIGHT_CONV2D_895_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_895_BIAS_CONV2D_895_BIAS_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_895_BIAS_CONV2D_895_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_897_WEIGHT_CONV2D_897_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_897_WEIGHT_CONV2D_897_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_897_BIAS_CONV2D_897_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_897_BIAS_CONV2D_897_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_744_WEIGHT_DENSE_744_WEIGHT_DATA   0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_744_WEIGHT_DENSE_744_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_744_BIAS_DENSE_744_BIAS_DATA       0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_744_BIAS_DENSE_744_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_745_WEIGHT_DENSE_745_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_745_WEIGHT_DENSE_745_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_745_BIAS_DENSE_745_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_745_BIAS_DENSE_745_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_896_WEIGHT_CONV2D_896_WEIGHT_DATA 0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_896_WEIGHT_CONV2D_896_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_896_BIAS_CONV2D_896_BIAS_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_896_BIAS_CONV2D_896_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_898_WEIGHT_CONV2D_898_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_898_WEIGHT_CONV2D_898_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_898_BIAS_CONV2D_898_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_898_BIAS_CONV2D_898_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_904_WEIGHT_CONV2D_904_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_904_WEIGHT_CONV2D_904_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_904_BIAS_CONV2D_904_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_904_BIAS_CONV2D_904_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_902_WEIGHT_CONV2D_902_WEIGHT_DATA 0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_902_WEIGHT_CONV2D_902_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_902_BIAS_CONV2D_902_BIAS_DATA     0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_902_BIAS_CONV2D_902_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_749_WEIGHT_DENSE_749_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_749_WEIGHT_DENSE_749_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_749_BIAS_DENSE_749_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_749_BIAS_DENSE_749_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_903_WEIGHT_CONV2D_903_WEIGHT_DATA 0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_903_WEIGHT_CONV2D_903_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_903_BIAS_CONV2D_903_BIAS_DATA     0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_903_BIAS_CONV2D_903_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_905_WEIGHT_CONV2D_905_WEIGHT_DATA 0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_905_WEIGHT_CONV2D_905_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_905_BIAS_CONV2D_905_BIAS_DATA     0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_905_BIAS_CONV2D_905_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_748_WEIGHT_DENSE_748_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_748_WEIGHT_DENSE_748_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_748_BIAS_DENSE_748_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_748_BIAS_DENSE_748_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_750_WEIGHT_DENSE_750_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_750_WEIGHT_DENSE_750_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_750_BIAS_DENSE_750_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_750_BIAS_DENSE_750_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_751_WEIGHT_DENSE_751_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_751_WEIGHT_DENSE_751_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_751_BIAS_DENSE_751_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_751_BIAS_DENSE_751_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_752_WEIGHT_DENSE_752_WEIGHT_DATA   0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_752_WEIGHT_DENSE_752_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_752_BIAS_DENSE_752_BIAS_DATA       0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_752_BIAS_DENSE_752_BIAS_DATA       32

