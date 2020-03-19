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
// 0x028 : Data signal of Conv2d_762_conv2d_762
//         bit 31~0 - Conv2d_762_conv2d_762[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_764_conv2d_764
//         bit 31~0 - Conv2d_764_conv2d_764[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_640_max_pooling2d_640
//         bit 31~0 - Max_pooling2d_640_max_pooling2d_640[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_642_max_pooling2d_642
//         bit 31~0 - Max_pooling2d_642_max_pooling2d_642[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_625_dense_625
//         bit 31~0 - Dense_625_dense_625[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_627_dense_627
//         bit 31~0 - Dense_627_dense_627[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_763_conv2d_763
//         bit 31~0 - Conv2d_763_conv2d_763[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_765_conv2d_765
//         bit 31~0 - Conv2d_765_conv2d_765[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_641_max_pooling2d_641
//         bit 31~0 - Max_pooling2d_641_max_pooling2d_641[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_643_max_pooling2d_643
//         bit 31~0 - Max_pooling2d_643_max_pooling2d_643[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_626_dense_626
//         bit 31~0 - Dense_626_dense_626[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_628_dense_628
//         bit 31~0 - Dense_628_dense_628[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Concatenate_139_concatenate_139
//         bit 31~0 - Concatenate_139_concatenate_139[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_766_conv2d_766
//         bit 31~0 - Conv2d_766_conv2d_766[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_644_max_pooling2d_644
//         bit 31~0 - Max_pooling2d_644_max_pooling2d_644[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_629_dense_629
//         bit 31~0 - Dense_629_dense_629[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_645_max_pooling2d_645
//         bit 31~0 - Max_pooling2d_645_max_pooling2d_645[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_630_dense_630
//         bit 31~0 - Dense_630_dense_630[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_631_dense_631
//         bit 31~0 - Dense_631_dense_631[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_632_dense_632
//         bit 31~0 - Dense_632_dense_632[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_633_dense_633
//         bit 31~0 - Dense_633_dense_633[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_634_dense_634
//         bit 31~0 - Dense_634_dense_634[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Flatten_70_flatten_70
//         bit 31~0 - Flatten_70_flatten_70[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_635_dense_635
//         bit 31~0 - Dense_635_dense_635[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_636_dense_636
//         bit 31~0 - Dense_636_dense_636[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_637_dense_637
//         bit 31~0 - Dense_637_dense_637[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_762_weight_conv2d_762_weight
//         bit 31~0 - Conv2d_762_weight_conv2d_762_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_762_bias_conv2d_762_bias
//         bit 31~0 - Conv2d_762_bias_conv2d_762_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_764_weight_conv2d_764_weight
//         bit 31~0 - Conv2d_764_weight_conv2d_764_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_764_bias_conv2d_764_bias
//         bit 31~0 - Conv2d_764_bias_conv2d_764_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_625_weight_dense_625_weight
//         bit 31~0 - Dense_625_weight_dense_625_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_625_bias_dense_625_bias
//         bit 31~0 - Dense_625_bias_dense_625_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_627_weight_dense_627_weight
//         bit 31~0 - Dense_627_weight_dense_627_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_627_bias_dense_627_bias
//         bit 31~0 - Dense_627_bias_dense_627_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_763_weight_conv2d_763_weight
//         bit 31~0 - Conv2d_763_weight_conv2d_763_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_763_bias_conv2d_763_bias
//         bit 31~0 - Conv2d_763_bias_conv2d_763_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_765_weight_conv2d_765_weight
//         bit 31~0 - Conv2d_765_weight_conv2d_765_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_765_bias_conv2d_765_bias
//         bit 31~0 - Conv2d_765_bias_conv2d_765_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_626_weight_dense_626_weight
//         bit 31~0 - Dense_626_weight_dense_626_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_626_bias_dense_626_bias
//         bit 31~0 - Dense_626_bias_dense_626_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_628_weight_dense_628_weight
//         bit 31~0 - Dense_628_weight_dense_628_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_628_bias_dense_628_bias
//         bit 31~0 - Dense_628_bias_dense_628_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_766_weight_conv2d_766_weight
//         bit 31~0 - Conv2d_766_weight_conv2d_766_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_766_bias_conv2d_766_bias
//         bit 31~0 - Conv2d_766_bias_conv2d_766_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_629_weight_dense_629_weight
//         bit 31~0 - Dense_629_weight_dense_629_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_629_bias_dense_629_bias
//         bit 31~0 - Dense_629_bias_dense_629_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_630_weight_dense_630_weight
//         bit 31~0 - Dense_630_weight_dense_630_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_630_bias_dense_630_bias
//         bit 31~0 - Dense_630_bias_dense_630_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_631_weight_dense_631_weight
//         bit 31~0 - Dense_631_weight_dense_631_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_631_bias_dense_631_bias
//         bit 31~0 - Dense_631_bias_dense_631_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_632_weight_dense_632_weight
//         bit 31~0 - Dense_632_weight_dense_632_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_632_bias_dense_632_bias
//         bit 31~0 - Dense_632_bias_dense_632_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_633_weight_dense_633_weight
//         bit 31~0 - Dense_633_weight_dense_633_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_633_bias_dense_633_bias
//         bit 31~0 - Dense_633_bias_dense_633_bias[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_634_weight_dense_634_weight
//         bit 31~0 - Dense_634_weight_dense_634_weight[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_634_bias_dense_634_bias
//         bit 31~0 - Dense_634_bias_dense_634_bias[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_635_weight_dense_635_weight
//         bit 31~0 - Dense_635_weight_dense_635_weight[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_635_bias_dense_635_bias
//         bit 31~0 - Dense_635_bias_dense_635_bias[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of Dense_636_weight_dense_636_weight
//         bit 31~0 - Dense_636_weight_dense_636_weight[31:0] (Read/Write)
// 0x1fc : reserved
// 0x200 : Data signal of Dense_636_bias_dense_636_bias
//         bit 31~0 - Dense_636_bias_dense_636_bias[31:0] (Read/Write)
// 0x204 : reserved
// 0x208 : Data signal of Dense_637_weight_dense_637_weight
//         bit 31~0 - Dense_637_weight_dense_637_weight[31:0] (Read/Write)
// 0x20c : reserved
// 0x210 : Data signal of Dense_637_bias_dense_637_bias
//         bit 31~0 - Dense_637_bias_dense_637_bias[31:0] (Read/Write)
// 0x214 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_762_CONV2D_762_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_762_CONV2D_762_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_764_CONV2D_764_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_764_CONV2D_764_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_640_MAX_POOLING2D_640_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_640_MAX_POOLING2D_640_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_642_MAX_POOLING2D_642_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_642_MAX_POOLING2D_642_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_625_DENSE_625_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_625_DENSE_625_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_627_DENSE_627_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_627_DENSE_627_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_763_CONV2D_763_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_763_CONV2D_763_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_765_CONV2D_765_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_765_CONV2D_765_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_641_MAX_POOLING2D_641_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_641_MAX_POOLING2D_641_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_643_MAX_POOLING2D_643_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_643_MAX_POOLING2D_643_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_626_DENSE_626_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_626_DENSE_626_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_628_DENSE_628_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_628_DENSE_628_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_139_CONCATENATE_139_DATA     0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_139_CONCATENATE_139_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_766_CONV2D_766_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_766_CONV2D_766_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_644_MAX_POOLING2D_644_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_644_MAX_POOLING2D_644_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_629_DENSE_629_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_629_DENSE_629_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_645_MAX_POOLING2D_645_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_645_MAX_POOLING2D_645_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_630_DENSE_630_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_630_DENSE_630_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_631_DENSE_631_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_631_DENSE_631_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_632_DENSE_632_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_632_DENSE_632_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_633_DENSE_633_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_633_DENSE_633_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_634_DENSE_634_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_634_DENSE_634_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_70_FLATTEN_70_DATA               0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_70_FLATTEN_70_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_635_DENSE_635_DATA                 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_635_DENSE_635_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_636_DENSE_636_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_636_DENSE_636_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_637_DENSE_637_DATA                 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_637_DENSE_637_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_762_WEIGHT_CONV2D_762_WEIGHT_DATA 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_762_WEIGHT_CONV2D_762_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_762_BIAS_CONV2D_762_BIAS_DATA     0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_762_BIAS_CONV2D_762_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_764_WEIGHT_CONV2D_764_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_764_WEIGHT_CONV2D_764_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_764_BIAS_CONV2D_764_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_764_BIAS_CONV2D_764_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_625_WEIGHT_DENSE_625_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_625_WEIGHT_DENSE_625_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_625_BIAS_DENSE_625_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_625_BIAS_DENSE_625_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_627_WEIGHT_DENSE_627_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_627_WEIGHT_DENSE_627_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_627_BIAS_DENSE_627_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_627_BIAS_DENSE_627_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_763_WEIGHT_CONV2D_763_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_763_WEIGHT_CONV2D_763_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_763_BIAS_CONV2D_763_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_763_BIAS_CONV2D_763_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_765_WEIGHT_CONV2D_765_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_765_WEIGHT_CONV2D_765_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_765_BIAS_CONV2D_765_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_765_BIAS_CONV2D_765_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_626_WEIGHT_DENSE_626_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_626_WEIGHT_DENSE_626_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_626_BIAS_DENSE_626_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_626_BIAS_DENSE_626_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_628_WEIGHT_DENSE_628_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_628_WEIGHT_DENSE_628_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_628_BIAS_DENSE_628_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_628_BIAS_DENSE_628_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_766_WEIGHT_CONV2D_766_WEIGHT_DATA 0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_766_WEIGHT_CONV2D_766_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_766_BIAS_CONV2D_766_BIAS_DATA     0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_766_BIAS_CONV2D_766_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_629_WEIGHT_DENSE_629_WEIGHT_DATA   0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_629_WEIGHT_DENSE_629_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_629_BIAS_DENSE_629_BIAS_DATA       0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_629_BIAS_DENSE_629_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_630_WEIGHT_DENSE_630_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_630_WEIGHT_DENSE_630_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_630_BIAS_DENSE_630_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_630_BIAS_DENSE_630_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_631_WEIGHT_DENSE_631_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_631_WEIGHT_DENSE_631_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_631_BIAS_DENSE_631_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_631_BIAS_DENSE_631_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_632_WEIGHT_DENSE_632_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_632_WEIGHT_DENSE_632_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_632_BIAS_DENSE_632_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_632_BIAS_DENSE_632_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_633_WEIGHT_DENSE_633_WEIGHT_DATA   0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_633_WEIGHT_DENSE_633_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_633_BIAS_DENSE_633_BIAS_DATA       0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_633_BIAS_DENSE_633_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_634_WEIGHT_DENSE_634_WEIGHT_DATA   0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_634_WEIGHT_DENSE_634_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_634_BIAS_DENSE_634_BIAS_DATA       0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_634_BIAS_DENSE_634_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_635_WEIGHT_DENSE_635_WEIGHT_DATA   0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_635_WEIGHT_DENSE_635_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_635_BIAS_DENSE_635_BIAS_DATA       0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_635_BIAS_DENSE_635_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_636_WEIGHT_DENSE_636_WEIGHT_DATA   0x1f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_636_WEIGHT_DENSE_636_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_636_BIAS_DENSE_636_BIAS_DATA       0x200
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_636_BIAS_DENSE_636_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_637_WEIGHT_DENSE_637_WEIGHT_DATA   0x208
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_637_WEIGHT_DENSE_637_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_637_BIAS_DENSE_637_BIAS_DATA       0x210
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_637_BIAS_DENSE_637_BIAS_DATA       32

