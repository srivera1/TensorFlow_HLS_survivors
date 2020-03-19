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
// 0x028 : Data signal of Conv2d_1674_conv2d_1674
//         bit 31~0 - Conv2d_1674_conv2d_1674[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_1678_conv2d_1678
//         bit 31~0 - Conv2d_1678_conv2d_1678[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_1265_max_pooling2d_1265
//         bit 31~0 - Max_pooling2d_1265_max_pooling2d_1265[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_1268_max_pooling2d_1268
//         bit 31~0 - Max_pooling2d_1268_max_pooling2d_1268[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_1195_dense_1195
//         bit 31~0 - Dense_1195_dense_1195[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_1679_conv2d_1679
//         bit 31~0 - Conv2d_1679_conv2d_1679[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_1675_conv2d_1675
//         bit 31~0 - Conv2d_1675_conv2d_1675[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Max_pooling2d_1269_max_pooling2d_1269
//         bit 31~0 - Max_pooling2d_1269_max_pooling2d_1269[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_1266_max_pooling2d_1266
//         bit 31~0 - Max_pooling2d_1266_max_pooling2d_1266[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_1197_dense_1197
//         bit 31~0 - Dense_1197_dense_1197[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_1676_conv2d_1676
//         bit 31~0 - Conv2d_1676_conv2d_1676[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_1680_conv2d_1680
//         bit 31~0 - Conv2d_1680_conv2d_1680[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_1267_max_pooling2d_1267
//         bit 31~0 - Max_pooling2d_1267_max_pooling2d_1267[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Max_pooling2d_1270_max_pooling2d_1270
//         bit 31~0 - Max_pooling2d_1270_max_pooling2d_1270[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_1196_dense_1196
//         bit 31~0 - Dense_1196_dense_1196[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_1198_dense_1198
//         bit 31~0 - Dense_1198_dense_1198[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Concatenate_203_concatenate_203
//         bit 31~0 - Concatenate_203_concatenate_203[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Max_pooling2d_1271_max_pooling2d_1271
//         bit 31~0 - Max_pooling2d_1271_max_pooling2d_1271[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Flatten_64_flatten_64
//         bit 31~0 - Flatten_64_flatten_64[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_1199_dense_1199
//         bit 31~0 - Dense_1199_dense_1199[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_1200_dense_1200
//         bit 31~0 - Dense_1200_dense_1200[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_1201_dense_1201
//         bit 31~0 - Dense_1201_dense_1201[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_1674_weight_conv2d_1674_weight
//         bit 31~0 - Conv2d_1674_weight_conv2d_1674_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_1674_bias_conv2d_1674_bias
//         bit 31~0 - Conv2d_1674_bias_conv2d_1674_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_1678_weight_conv2d_1678_weight
//         bit 31~0 - Conv2d_1678_weight_conv2d_1678_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_1678_bias_conv2d_1678_bias
//         bit 31~0 - Conv2d_1678_bias_conv2d_1678_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_1195_weight_dense_1195_weight
//         bit 31~0 - Dense_1195_weight_dense_1195_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_1195_bias_dense_1195_bias
//         bit 31~0 - Dense_1195_bias_dense_1195_bias[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_1679_weight_conv2d_1679_weight
//         bit 31~0 - Conv2d_1679_weight_conv2d_1679_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_1679_bias_conv2d_1679_bias
//         bit 31~0 - Conv2d_1679_bias_conv2d_1679_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_1675_weight_conv2d_1675_weight
//         bit 31~0 - Conv2d_1675_weight_conv2d_1675_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_1675_bias_conv2d_1675_bias
//         bit 31~0 - Conv2d_1675_bias_conv2d_1675_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_1197_weight_dense_1197_weight
//         bit 31~0 - Dense_1197_weight_dense_1197_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_1197_bias_dense_1197_bias
//         bit 31~0 - Dense_1197_bias_dense_1197_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_1676_weight_conv2d_1676_weight
//         bit 31~0 - Conv2d_1676_weight_conv2d_1676_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_1676_bias_conv2d_1676_bias
//         bit 31~0 - Conv2d_1676_bias_conv2d_1676_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_1680_weight_conv2d_1680_weight
//         bit 31~0 - Conv2d_1680_weight_conv2d_1680_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_1680_bias_conv2d_1680_bias
//         bit 31~0 - Conv2d_1680_bias_conv2d_1680_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_1196_weight_dense_1196_weight
//         bit 31~0 - Dense_1196_weight_dense_1196_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_1196_bias_dense_1196_bias
//         bit 31~0 - Dense_1196_bias_dense_1196_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_1198_weight_dense_1198_weight
//         bit 31~0 - Dense_1198_weight_dense_1198_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_1198_bias_dense_1198_bias
//         bit 31~0 - Dense_1198_bias_dense_1198_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_1199_weight_dense_1199_weight
//         bit 31~0 - Dense_1199_weight_dense_1199_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_1199_bias_dense_1199_bias
//         bit 31~0 - Dense_1199_bias_dense_1199_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_1200_weight_dense_1200_weight
//         bit 31~0 - Dense_1200_weight_dense_1200_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_1200_bias_dense_1200_bias
//         bit 31~0 - Dense_1200_bias_dense_1200_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_1201_weight_dense_1201_weight
//         bit 31~0 - Dense_1201_weight_dense_1201_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_1201_bias_dense_1201_bias
//         bit 31~0 - Dense_1201_bias_dense_1201_bias[31:0] (Read/Write)
// 0x1a4 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1674_CONV2D_1674_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1674_CONV2D_1674_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1678_CONV2D_1678_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1678_CONV2D_1678_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1265_MAX_POOLING2D_1265_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1265_MAX_POOLING2D_1265_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1268_MAX_POOLING2D_1268_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1268_MAX_POOLING2D_1268_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1195_DENSE_1195_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1195_DENSE_1195_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1679_CONV2D_1679_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1679_CONV2D_1679_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1675_CONV2D_1675_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1675_CONV2D_1675_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1269_MAX_POOLING2D_1269_DATA 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1269_MAX_POOLING2D_1269_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1266_MAX_POOLING2D_1266_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1266_MAX_POOLING2D_1266_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1197_DENSE_1197_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1197_DENSE_1197_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1676_CONV2D_1676_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1676_CONV2D_1676_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1680_CONV2D_1680_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1680_CONV2D_1680_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1267_MAX_POOLING2D_1267_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1267_MAX_POOLING2D_1267_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1270_MAX_POOLING2D_1270_DATA 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1270_MAX_POOLING2D_1270_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1196_DENSE_1196_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1196_DENSE_1196_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1198_DENSE_1198_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1198_DENSE_1198_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_203_CONCATENATE_203_DATA       0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_203_CONCATENATE_203_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1271_MAX_POOLING2D_1271_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1271_MAX_POOLING2D_1271_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_64_FLATTEN_64_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_64_FLATTEN_64_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1199_DENSE_1199_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1199_DENSE_1199_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1200_DENSE_1200_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1200_DENSE_1200_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1201_DENSE_1201_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1201_DENSE_1201_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1674_WEIGHT_CONV2D_1674_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1674_WEIGHT_CONV2D_1674_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1674_BIAS_CONV2D_1674_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1674_BIAS_CONV2D_1674_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1678_WEIGHT_CONV2D_1678_WEIGHT_DATA 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1678_WEIGHT_CONV2D_1678_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1678_BIAS_CONV2D_1678_BIAS_DATA     0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1678_BIAS_CONV2D_1678_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1195_WEIGHT_DENSE_1195_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1195_WEIGHT_DENSE_1195_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1195_BIAS_DENSE_1195_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1195_BIAS_DENSE_1195_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1679_WEIGHT_CONV2D_1679_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1679_WEIGHT_CONV2D_1679_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1679_BIAS_CONV2D_1679_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1679_BIAS_CONV2D_1679_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1675_WEIGHT_CONV2D_1675_WEIGHT_DATA 0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1675_WEIGHT_CONV2D_1675_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1675_BIAS_CONV2D_1675_BIAS_DATA     0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1675_BIAS_CONV2D_1675_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1197_WEIGHT_DENSE_1197_WEIGHT_DATA   0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1197_WEIGHT_DENSE_1197_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1197_BIAS_DENSE_1197_BIAS_DATA       0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1197_BIAS_DENSE_1197_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1676_WEIGHT_CONV2D_1676_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1676_WEIGHT_CONV2D_1676_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1676_BIAS_CONV2D_1676_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1676_BIAS_CONV2D_1676_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1680_WEIGHT_CONV2D_1680_WEIGHT_DATA 0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1680_WEIGHT_CONV2D_1680_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_1680_BIAS_CONV2D_1680_BIAS_DATA     0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_1680_BIAS_CONV2D_1680_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1196_WEIGHT_DENSE_1196_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1196_WEIGHT_DENSE_1196_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1196_BIAS_DENSE_1196_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1196_BIAS_DENSE_1196_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1198_WEIGHT_DENSE_1198_WEIGHT_DATA   0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1198_WEIGHT_DENSE_1198_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1198_BIAS_DENSE_1198_BIAS_DATA       0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1198_BIAS_DENSE_1198_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1199_WEIGHT_DENSE_1199_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1199_WEIGHT_DENSE_1199_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1199_BIAS_DENSE_1199_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1199_BIAS_DENSE_1199_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1200_WEIGHT_DENSE_1200_WEIGHT_DATA   0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1200_WEIGHT_DENSE_1200_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1200_BIAS_DENSE_1200_BIAS_DATA       0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1200_BIAS_DENSE_1200_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1201_WEIGHT_DENSE_1201_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1201_WEIGHT_DENSE_1201_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1201_BIAS_DENSE_1201_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1201_BIAS_DENSE_1201_BIAS_DATA       32

