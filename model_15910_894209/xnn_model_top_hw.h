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
// 0x028 : Data signal of Conv2d_2783_conv2d_2783
//         bit 31~0 - Conv2d_2783_conv2d_2783[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2784_conv2d_2784
//         bit 31~0 - Conv2d_2784_conv2d_2784[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_2344_max_pooling2d_2344
//         bit 31~0 - Max_pooling2d_2344_max_pooling2d_2344[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_2345_max_pooling2d_2345
//         bit 31~0 - Max_pooling2d_2345_max_pooling2d_2345[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2256_dense_2256
//         bit 31~0 - Dense_2256_dense_2256[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_2257_dense_2257
//         bit 31~0 - Dense_2257_dense_2257[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_491_concatenate_491
//         bit 31~0 - Concatenate_491_concatenate_491[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_2788_conv2d_2788
//         bit 31~0 - Conv2d_2788_conv2d_2788[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Conv2d_2785_conv2d_2785
//         bit 31~0 - Conv2d_2785_conv2d_2785[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_2348_max_pooling2d_2348
//         bit 31~0 - Max_pooling2d_2348_max_pooling2d_2348[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_2346_max_pooling2d_2346
//         bit 31~0 - Max_pooling2d_2346_max_pooling2d_2346[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_2259_dense_2259
//         bit 31~0 - Dense_2259_dense_2259[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_2786_conv2d_2786
//         bit 31~0 - Conv2d_2786_conv2d_2786[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_2789_conv2d_2789
//         bit 31~0 - Conv2d_2789_conv2d_2789[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_2347_max_pooling2d_2347
//         bit 31~0 - Max_pooling2d_2347_max_pooling2d_2347[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Max_pooling2d_2349_max_pooling2d_2349
//         bit 31~0 - Max_pooling2d_2349_max_pooling2d_2349[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_2258_dense_2258
//         bit 31~0 - Dense_2258_dense_2258[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_2260_dense_2260
//         bit 31~0 - Dense_2260_dense_2260[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Concatenate_492_concatenate_492
//         bit 31~0 - Concatenate_492_concatenate_492[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Max_pooling2d_2350_max_pooling2d_2350
//         bit 31~0 - Max_pooling2d_2350_max_pooling2d_2350[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Flatten_250_flatten_250
//         bit 31~0 - Flatten_250_flatten_250[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_2261_dense_2261
//         bit 31~0 - Dense_2261_dense_2261[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_2262_dense_2262
//         bit 31~0 - Dense_2262_dense_2262[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_2783_weight_conv2d_2783_weight
//         bit 31~0 - Conv2d_2783_weight_conv2d_2783_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_2783_bias_conv2d_2783_bias
//         bit 31~0 - Conv2d_2783_bias_conv2d_2783_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_2784_weight_conv2d_2784_weight
//         bit 31~0 - Conv2d_2784_weight_conv2d_2784_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_2784_bias_conv2d_2784_bias
//         bit 31~0 - Conv2d_2784_bias_conv2d_2784_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_2256_weight_dense_2256_weight
//         bit 31~0 - Dense_2256_weight_dense_2256_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_2256_bias_dense_2256_bias
//         bit 31~0 - Dense_2256_bias_dense_2256_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_2257_weight_dense_2257_weight
//         bit 31~0 - Dense_2257_weight_dense_2257_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_2257_bias_dense_2257_bias
//         bit 31~0 - Dense_2257_bias_dense_2257_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_2788_weight_conv2d_2788_weight
//         bit 31~0 - Conv2d_2788_weight_conv2d_2788_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_2788_bias_conv2d_2788_bias
//         bit 31~0 - Conv2d_2788_bias_conv2d_2788_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_2785_weight_conv2d_2785_weight
//         bit 31~0 - Conv2d_2785_weight_conv2d_2785_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_2785_bias_conv2d_2785_bias
//         bit 31~0 - Conv2d_2785_bias_conv2d_2785_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Dense_2259_weight_dense_2259_weight
//         bit 31~0 - Dense_2259_weight_dense_2259_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_2259_bias_dense_2259_bias
//         bit 31~0 - Dense_2259_bias_dense_2259_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Conv2d_2786_weight_conv2d_2786_weight
//         bit 31~0 - Conv2d_2786_weight_conv2d_2786_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Conv2d_2786_bias_conv2d_2786_bias
//         bit 31~0 - Conv2d_2786_bias_conv2d_2786_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_2789_weight_conv2d_2789_weight
//         bit 31~0 - Conv2d_2789_weight_conv2d_2789_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_2789_bias_conv2d_2789_bias
//         bit 31~0 - Conv2d_2789_bias_conv2d_2789_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_2258_weight_dense_2258_weight
//         bit 31~0 - Dense_2258_weight_dense_2258_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_2258_bias_dense_2258_bias
//         bit 31~0 - Dense_2258_bias_dense_2258_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_2260_weight_dense_2260_weight
//         bit 31~0 - Dense_2260_weight_dense_2260_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_2260_bias_dense_2260_bias
//         bit 31~0 - Dense_2260_bias_dense_2260_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_2261_weight_dense_2261_weight
//         bit 31~0 - Dense_2261_weight_dense_2261_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_2261_bias_dense_2261_bias
//         bit 31~0 - Dense_2261_bias_dense_2261_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_2262_weight_dense_2262_weight
//         bit 31~0 - Dense_2262_weight_dense_2262_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_2262_bias_dense_2262_bias
//         bit 31~0 - Dense_2262_bias_dense_2262_bias[31:0] (Read/Write)
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2783_CONV2D_2783_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2783_CONV2D_2783_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2784_CONV2D_2784_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2784_CONV2D_2784_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2344_MAX_POOLING2D_2344_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2344_MAX_POOLING2D_2344_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2345_MAX_POOLING2D_2345_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2345_MAX_POOLING2D_2345_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2256_DENSE_2256_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2256_DENSE_2256_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2257_DENSE_2257_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2257_DENSE_2257_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_491_CONCATENATE_491_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_491_CONCATENATE_491_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2788_CONV2D_2788_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2788_CONV2D_2788_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2785_CONV2D_2785_DATA               0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2785_CONV2D_2785_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2348_MAX_POOLING2D_2348_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2348_MAX_POOLING2D_2348_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2346_MAX_POOLING2D_2346_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2346_MAX_POOLING2D_2346_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2259_DENSE_2259_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2259_DENSE_2259_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2786_CONV2D_2786_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2786_CONV2D_2786_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2789_CONV2D_2789_DATA               0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2789_CONV2D_2789_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2347_MAX_POOLING2D_2347_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2347_MAX_POOLING2D_2347_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2349_MAX_POOLING2D_2349_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2349_MAX_POOLING2D_2349_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2258_DENSE_2258_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2258_DENSE_2258_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2260_DENSE_2260_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2260_DENSE_2260_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_492_CONCATENATE_492_DATA       0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_492_CONCATENATE_492_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_2350_MAX_POOLING2D_2350_DATA 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_2350_MAX_POOLING2D_2350_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_250_FLATTEN_250_DATA               0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_250_FLATTEN_250_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2261_DENSE_2261_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2261_DENSE_2261_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2262_DENSE_2262_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2262_DENSE_2262_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2783_WEIGHT_CONV2D_2783_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2783_WEIGHT_CONV2D_2783_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2783_BIAS_CONV2D_2783_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2783_BIAS_CONV2D_2783_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2784_WEIGHT_CONV2D_2784_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2784_WEIGHT_CONV2D_2784_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2784_BIAS_CONV2D_2784_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2784_BIAS_CONV2D_2784_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2256_WEIGHT_DENSE_2256_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2256_WEIGHT_DENSE_2256_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2256_BIAS_DENSE_2256_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2256_BIAS_DENSE_2256_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2257_WEIGHT_DENSE_2257_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2257_WEIGHT_DENSE_2257_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2257_BIAS_DENSE_2257_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2257_BIAS_DENSE_2257_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2788_WEIGHT_CONV2D_2788_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2788_WEIGHT_CONV2D_2788_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2788_BIAS_CONV2D_2788_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2788_BIAS_CONV2D_2788_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2785_WEIGHT_CONV2D_2785_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2785_WEIGHT_CONV2D_2785_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2785_BIAS_CONV2D_2785_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2785_BIAS_CONV2D_2785_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2259_WEIGHT_DENSE_2259_WEIGHT_DATA   0x140
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2259_WEIGHT_DENSE_2259_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2259_BIAS_DENSE_2259_BIAS_DATA       0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2259_BIAS_DENSE_2259_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2786_WEIGHT_CONV2D_2786_WEIGHT_DATA 0x150
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2786_WEIGHT_CONV2D_2786_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2786_BIAS_CONV2D_2786_BIAS_DATA     0x158
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2786_BIAS_CONV2D_2786_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2789_WEIGHT_CONV2D_2789_WEIGHT_DATA 0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2789_WEIGHT_CONV2D_2789_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2789_BIAS_CONV2D_2789_BIAS_DATA     0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2789_BIAS_CONV2D_2789_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2258_WEIGHT_DENSE_2258_WEIGHT_DATA   0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2258_WEIGHT_DENSE_2258_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2258_BIAS_DENSE_2258_BIAS_DATA       0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2258_BIAS_DENSE_2258_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2260_WEIGHT_DENSE_2260_WEIGHT_DATA   0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2260_WEIGHT_DENSE_2260_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2260_BIAS_DENSE_2260_BIAS_DATA       0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2260_BIAS_DENSE_2260_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2261_WEIGHT_DENSE_2261_WEIGHT_DATA   0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2261_WEIGHT_DENSE_2261_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2261_BIAS_DENSE_2261_BIAS_DATA       0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2261_BIAS_DENSE_2261_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2262_WEIGHT_DENSE_2262_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2262_WEIGHT_DENSE_2262_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2262_BIAS_DENSE_2262_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2262_BIAS_DENSE_2262_BIAS_DATA       32

