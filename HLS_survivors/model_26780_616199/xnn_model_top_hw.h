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
// 0x028 : Data signal of Conv2d_2985_conv2d_2985
//         bit 31~0 - Conv2d_2985_conv2d_2985[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2988_conv2d_2988
//         bit 31~0 - Conv2d_2988_conv2d_2988[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2517_max_pooling2d_2517
//         bit 31~0 - Max_pooling2d_2517_max_pooling2d_2517[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2519_max_pooling2d_2519
//         bit 31~0 - Max_pooling2d_2519_max_pooling2d_2519[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2411_dense_2411
//         bit 31~0 - Dense_2411_dense_2411[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2413_dense_2413
//         bit 31~0 - Dense_2413_dense_2413[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_2986_conv2d_2986
//         bit 31~0 - Conv2d_2986_conv2d_2986[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_2989_conv2d_2989
//         bit 31~0 - Conv2d_2989_conv2d_2989[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_2518_max_pooling2d_2518
//         bit 31~0 - Max_pooling2d_2518_max_pooling2d_2518[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_2520_max_pooling2d_2520
//         bit 31~0 - Max_pooling2d_2520_max_pooling2d_2520[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_2412_dense_2412
//         bit 31~0 - Dense_2412_dense_2412[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_2414_dense_2414
//         bit 31~0 - Dense_2414_dense_2414[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_2987_conv2d_2987
//         bit 31~0 - Conv2d_2987_conv2d_2987[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_2990_conv2d_2990
//         bit 31~0 - Conv2d_2990_conv2d_2990[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Concatenate_527_concatenate_527
//         bit 31~0 - Concatenate_527_concatenate_527[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_2991_conv2d_2991
//         bit 31~0 - Conv2d_2991_conv2d_2991[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Max_pooling2d_2521_max_pooling2d_2521
//         bit 31~0 - Max_pooling2d_2521_max_pooling2d_2521[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_2415_dense_2415
//         bit 31~0 - Dense_2415_dense_2415[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_2416_dense_2416
//         bit 31~0 - Dense_2416_dense_2416[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_2417_dense_2417
//         bit 31~0 - Dense_2417_dense_2417[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_2418_dense_2418
//         bit 31~0 - Dense_2418_dense_2418[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_2419_dense_2419
//         bit 31~0 - Dense_2419_dense_2419[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_2420_dense_2420
//         bit 31~0 - Dense_2420_dense_2420[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Flatten_268_flatten_268
//         bit 31~0 - Flatten_268_flatten_268[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_2421_dense_2421
//         bit 31~0 - Dense_2421_dense_2421[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_2422_dense_2422
//         bit 31~0 - Dense_2422_dense_2422[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_2423_dense_2423
//         bit 31~0 - Dense_2423_dense_2423[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_2985_weight_conv2d_2985_weight
//         bit 31~0 - Conv2d_2985_weight_conv2d_2985_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_2985_bias_conv2d_2985_bias
//         bit 31~0 - Conv2d_2985_bias_conv2d_2985_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_2988_weight_conv2d_2988_weight
//         bit 31~0 - Conv2d_2988_weight_conv2d_2988_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Conv2d_2988_bias_conv2d_2988_bias
//         bit 31~0 - Conv2d_2988_bias_conv2d_2988_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_2411_weight_dense_2411_weight
//         bit 31~0 - Dense_2411_weight_dense_2411_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_2411_bias_dense_2411_bias
//         bit 31~0 - Dense_2411_bias_dense_2411_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Dense_2413_weight_dense_2413_weight
//         bit 31~0 - Dense_2413_weight_dense_2413_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Dense_2413_bias_dense_2413_bias
//         bit 31~0 - Dense_2413_bias_dense_2413_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_2986_weight_conv2d_2986_weight
//         bit 31~0 - Conv2d_2986_weight_conv2d_2986_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_2986_bias_conv2d_2986_bias
//         bit 31~0 - Conv2d_2986_bias_conv2d_2986_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_2989_weight_conv2d_2989_weight
//         bit 31~0 - Conv2d_2989_weight_conv2d_2989_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_2989_bias_conv2d_2989_bias
//         bit 31~0 - Conv2d_2989_bias_conv2d_2989_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_2412_weight_dense_2412_weight
//         bit 31~0 - Dense_2412_weight_dense_2412_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_2412_bias_dense_2412_bias
//         bit 31~0 - Dense_2412_bias_dense_2412_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_2414_weight_dense_2414_weight
//         bit 31~0 - Dense_2414_weight_dense_2414_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_2414_bias_dense_2414_bias
//         bit 31~0 - Dense_2414_bias_dense_2414_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_2987_weight_conv2d_2987_weight
//         bit 31~0 - Conv2d_2987_weight_conv2d_2987_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_2987_bias_conv2d_2987_bias
//         bit 31~0 - Conv2d_2987_bias_conv2d_2987_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Conv2d_2990_weight_conv2d_2990_weight
//         bit 31~0 - Conv2d_2990_weight_conv2d_2990_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Conv2d_2990_bias_conv2d_2990_bias
//         bit 31~0 - Conv2d_2990_bias_conv2d_2990_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Conv2d_2991_weight_conv2d_2991_weight
//         bit 31~0 - Conv2d_2991_weight_conv2d_2991_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Conv2d_2991_bias_conv2d_2991_bias
//         bit 31~0 - Conv2d_2991_bias_conv2d_2991_bias[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_2415_weight_dense_2415_weight
//         bit 31~0 - Dense_2415_weight_dense_2415_weight[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_2415_bias_dense_2415_bias
//         bit 31~0 - Dense_2415_bias_dense_2415_bias[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_2416_weight_dense_2416_weight
//         bit 31~0 - Dense_2416_weight_dense_2416_weight[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_2416_bias_dense_2416_bias
//         bit 31~0 - Dense_2416_bias_dense_2416_bias[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_2417_weight_dense_2417_weight
//         bit 31~0 - Dense_2417_weight_dense_2417_weight[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_2417_bias_dense_2417_bias
//         bit 31~0 - Dense_2417_bias_dense_2417_bias[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_2418_weight_dense_2418_weight
//         bit 31~0 - Dense_2418_weight_dense_2418_weight[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_2418_bias_dense_2418_bias
//         bit 31~0 - Dense_2418_bias_dense_2418_bias[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_2419_weight_dense_2419_weight
//         bit 31~0 - Dense_2419_weight_dense_2419_weight[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of Dense_2419_bias_dense_2419_bias
//         bit 31~0 - Dense_2419_bias_dense_2419_bias[31:0] (Read/Write)
// 0x1fc : reserved
// 0x200 : Data signal of Dense_2420_weight_dense_2420_weight
//         bit 31~0 - Dense_2420_weight_dense_2420_weight[31:0] (Read/Write)
// 0x204 : reserved
// 0x208 : Data signal of Dense_2420_bias_dense_2420_bias
//         bit 31~0 - Dense_2420_bias_dense_2420_bias[31:0] (Read/Write)
// 0x20c : reserved
// 0x210 : Data signal of Dense_2421_weight_dense_2421_weight
//         bit 31~0 - Dense_2421_weight_dense_2421_weight[31:0] (Read/Write)
// 0x214 : reserved
// 0x218 : Data signal of Dense_2421_bias_dense_2421_bias
//         bit 31~0 - Dense_2421_bias_dense_2421_bias[31:0] (Read/Write)
// 0x21c : reserved
// 0x220 : Data signal of Dense_2422_weight_dense_2422_weight
//         bit 31~0 - Dense_2422_weight_dense_2422_weight[31:0] (Read/Write)
// 0x224 : reserved
// 0x228 : Data signal of Dense_2422_bias_dense_2422_bias
//         bit 31~0 - Dense_2422_bias_dense_2422_bias[31:0] (Read/Write)
// 0x22c : reserved
// 0x230 : Data signal of Dense_2423_weight_dense_2423_weight
//         bit 31~0 - Dense_2423_weight_dense_2423_weight[31:0] (Read/Write)
// 0x234 : reserved
// 0x238 : Data signal of Dense_2423_bias_dense_2423_bias
//         bit 31~0 - Dense_2423_bias_dense_2423_bias[31:0] (Read/Write)
// 0x23c : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2985_CONV2D_2985_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2985_CONV2D_2985_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2988_CONV2D_2988_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2988_CONV2D_2988_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2517_MAX_POOLING2D_2517_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2517_MAX_POOLING2D_2517_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2519_MAX_POOLING2D_2519_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2519_MAX_POOLING2D_2519_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2411_DENSE_2411_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2411_DENSE_2411_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2413_DENSE_2413_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2413_DENSE_2413_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2986_CONV2D_2986_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2986_CONV2D_2986_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2989_CONV2D_2989_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2989_CONV2D_2989_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2518_MAX_POOLING2D_2518_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2518_MAX_POOLING2D_2518_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2520_MAX_POOLING2D_2520_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2520_MAX_POOLING2D_2520_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2412_DENSE_2412_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2412_DENSE_2412_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2414_DENSE_2414_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2414_DENSE_2414_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2987_CONV2D_2987_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2987_CONV2D_2987_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2990_CONV2D_2990_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2990_CONV2D_2990_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_527_CONCATENATE_527_DATA       0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_527_CONCATENATE_527_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2991_CONV2D_2991_DATA               0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2991_CONV2D_2991_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2521_MAX_POOLING2D_2521_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2521_MAX_POOLING2D_2521_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2415_DENSE_2415_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2415_DENSE_2415_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2416_DENSE_2416_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2416_DENSE_2416_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2417_DENSE_2417_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2417_DENSE_2417_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2418_DENSE_2418_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2418_DENSE_2418_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2419_DENSE_2419_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2419_DENSE_2419_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2420_DENSE_2420_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2420_DENSE_2420_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_268_FLATTEN_268_DATA               0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_268_FLATTEN_268_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2421_DENSE_2421_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2421_DENSE_2421_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2422_DENSE_2422_DATA                 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2422_DENSE_2422_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2423_DENSE_2423_DATA                 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2423_DENSE_2423_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2985_WEIGHT_CONV2D_2985_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2985_WEIGHT_CONV2D_2985_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2985_BIAS_CONV2D_2985_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2985_BIAS_CONV2D_2985_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2988_WEIGHT_CONV2D_2988_WEIGHT_DATA 0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2988_WEIGHT_CONV2D_2988_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2988_BIAS_CONV2D_2988_BIAS_DATA     0x118
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2988_BIAS_CONV2D_2988_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2411_WEIGHT_DENSE_2411_WEIGHT_DATA   0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2411_WEIGHT_DENSE_2411_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2411_BIAS_DENSE_2411_BIAS_DATA       0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2411_BIAS_DENSE_2411_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2413_WEIGHT_DENSE_2413_WEIGHT_DATA   0x130
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2413_WEIGHT_DENSE_2413_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2413_BIAS_DENSE_2413_BIAS_DATA       0x138
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2413_BIAS_DENSE_2413_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2986_WEIGHT_CONV2D_2986_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2986_WEIGHT_CONV2D_2986_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2986_BIAS_CONV2D_2986_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2986_BIAS_CONV2D_2986_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2989_WEIGHT_CONV2D_2989_WEIGHT_DATA 0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2989_WEIGHT_CONV2D_2989_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2989_BIAS_CONV2D_2989_BIAS_DATA     0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2989_BIAS_CONV2D_2989_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2412_WEIGHT_DENSE_2412_WEIGHT_DATA   0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2412_WEIGHT_DENSE_2412_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2412_BIAS_DENSE_2412_BIAS_DATA       0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2412_BIAS_DENSE_2412_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2414_WEIGHT_DENSE_2414_WEIGHT_DATA   0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2414_WEIGHT_DENSE_2414_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2414_BIAS_DENSE_2414_BIAS_DATA       0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2414_BIAS_DENSE_2414_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2987_WEIGHT_CONV2D_2987_WEIGHT_DATA 0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2987_WEIGHT_CONV2D_2987_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2987_BIAS_CONV2D_2987_BIAS_DATA     0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2987_BIAS_CONV2D_2987_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2990_WEIGHT_CONV2D_2990_WEIGHT_DATA 0x190
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2990_WEIGHT_CONV2D_2990_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2990_BIAS_CONV2D_2990_BIAS_DATA     0x198
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2990_BIAS_CONV2D_2990_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2991_WEIGHT_CONV2D_2991_WEIGHT_DATA 0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2991_WEIGHT_CONV2D_2991_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2991_BIAS_CONV2D_2991_BIAS_DATA     0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2991_BIAS_CONV2D_2991_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2415_WEIGHT_DENSE_2415_WEIGHT_DATA   0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2415_WEIGHT_DENSE_2415_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2415_BIAS_DENSE_2415_BIAS_DATA       0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2415_BIAS_DENSE_2415_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2416_WEIGHT_DENSE_2416_WEIGHT_DATA   0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2416_WEIGHT_DENSE_2416_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2416_BIAS_DENSE_2416_BIAS_DATA       0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2416_BIAS_DENSE_2416_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2417_WEIGHT_DENSE_2417_WEIGHT_DATA   0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2417_WEIGHT_DENSE_2417_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2417_BIAS_DENSE_2417_BIAS_DATA       0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2417_BIAS_DENSE_2417_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2418_WEIGHT_DENSE_2418_WEIGHT_DATA   0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2418_WEIGHT_DENSE_2418_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2418_BIAS_DENSE_2418_BIAS_DATA       0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2418_BIAS_DENSE_2418_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2419_WEIGHT_DENSE_2419_WEIGHT_DATA   0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2419_WEIGHT_DENSE_2419_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2419_BIAS_DENSE_2419_BIAS_DATA       0x1f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2419_BIAS_DENSE_2419_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2420_WEIGHT_DENSE_2420_WEIGHT_DATA   0x200
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2420_WEIGHT_DENSE_2420_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2420_BIAS_DENSE_2420_BIAS_DATA       0x208
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2420_BIAS_DENSE_2420_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2421_WEIGHT_DENSE_2421_WEIGHT_DATA   0x210
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2421_WEIGHT_DENSE_2421_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2421_BIAS_DENSE_2421_BIAS_DATA       0x218
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2421_BIAS_DENSE_2421_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2422_WEIGHT_DENSE_2422_WEIGHT_DATA   0x220
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2422_WEIGHT_DENSE_2422_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2422_BIAS_DENSE_2422_BIAS_DATA       0x228
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2422_BIAS_DENSE_2422_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2423_WEIGHT_DENSE_2423_WEIGHT_DATA   0x230
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2423_WEIGHT_DENSE_2423_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2423_BIAS_DENSE_2423_BIAS_DATA       0x238
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2423_BIAS_DENSE_2423_BIAS_DATA       32

