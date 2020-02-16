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
// 0x028 : Data signal of Conv2d_4054_conv2d_4054
//         bit 31~0 - Conv2d_4054_conv2d_4054[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_4056_conv2d_4056
//         bit 31~0 - Conv2d_4056_conv2d_4056[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_3433_max_pooling2d_3433
//         bit 31~0 - Max_pooling2d_3433_max_pooling2d_3433[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_3434_max_pooling2d_3434
//         bit 31~0 - Max_pooling2d_3434_max_pooling2d_3434[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_3281_dense_3281
//         bit 31~0 - Dense_3281_dense_3281[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_3282_dense_3282
//         bit 31~0 - Dense_3282_dense_3282[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_4055_conv2d_4055
//         bit 31~0 - Conv2d_4055_conv2d_4055[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_4057_conv2d_4057
//         bit 31~0 - Conv2d_4057_conv2d_4057[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Concatenate_707_concatenate_707
//         bit 31~0 - Concatenate_707_concatenate_707[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_4058_conv2d_4058
//         bit 31~0 - Conv2d_4058_conv2d_4058[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_3435_max_pooling2d_3435
//         bit 31~0 - Max_pooling2d_3435_max_pooling2d_3435[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_3283_dense_3283
//         bit 31~0 - Dense_3283_dense_3283[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_4059_conv2d_4059
//         bit 31~0 - Conv2d_4059_conv2d_4059[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Max_pooling2d_3436_max_pooling2d_3436
//         bit 31~0 - Max_pooling2d_3436_max_pooling2d_3436[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_3284_dense_3284
//         bit 31~0 - Dense_3284_dense_3284[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_3285_dense_3285
//         bit 31~0 - Dense_3285_dense_3285[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_3286_dense_3286
//         bit 31~0 - Dense_3286_dense_3286[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_3287_dense_3287
//         bit 31~0 - Dense_3287_dense_3287[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_3288_dense_3288
//         bit 31~0 - Dense_3288_dense_3288[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Flatten_366_flatten_366
//         bit 31~0 - Flatten_366_flatten_366[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_3289_dense_3289
//         bit 31~0 - Dense_3289_dense_3289[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_3290_dense_3290
//         bit 31~0 - Dense_3290_dense_3290[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_3291_dense_3291
//         bit 31~0 - Dense_3291_dense_3291[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_4054_weight_conv2d_4054_weight
//         bit 31~0 - Conv2d_4054_weight_conv2d_4054_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_4054_bias_conv2d_4054_bias
//         bit 31~0 - Conv2d_4054_bias_conv2d_4054_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_4056_weight_conv2d_4056_weight
//         bit 31~0 - Conv2d_4056_weight_conv2d_4056_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_4056_bias_conv2d_4056_bias
//         bit 31~0 - Conv2d_4056_bias_conv2d_4056_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_3281_weight_dense_3281_weight
//         bit 31~0 - Dense_3281_weight_dense_3281_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_3281_bias_dense_3281_bias
//         bit 31~0 - Dense_3281_bias_dense_3281_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_3282_weight_dense_3282_weight
//         bit 31~0 - Dense_3282_weight_dense_3282_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_3282_bias_dense_3282_bias
//         bit 31~0 - Dense_3282_bias_dense_3282_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Conv2d_4055_weight_conv2d_4055_weight
//         bit 31~0 - Conv2d_4055_weight_conv2d_4055_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_4055_bias_conv2d_4055_bias
//         bit 31~0 - Conv2d_4055_bias_conv2d_4055_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_4057_weight_conv2d_4057_weight
//         bit 31~0 - Conv2d_4057_weight_conv2d_4057_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_4057_bias_conv2d_4057_bias
//         bit 31~0 - Conv2d_4057_bias_conv2d_4057_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_4058_weight_conv2d_4058_weight
//         bit 31~0 - Conv2d_4058_weight_conv2d_4058_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_4058_bias_conv2d_4058_bias
//         bit 31~0 - Conv2d_4058_bias_conv2d_4058_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_3283_weight_dense_3283_weight
//         bit 31~0 - Dense_3283_weight_dense_3283_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_3283_bias_dense_3283_bias
//         bit 31~0 - Dense_3283_bias_dense_3283_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Conv2d_4059_weight_conv2d_4059_weight
//         bit 31~0 - Conv2d_4059_weight_conv2d_4059_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_4059_bias_conv2d_4059_bias
//         bit 31~0 - Conv2d_4059_bias_conv2d_4059_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Dense_3284_weight_dense_3284_weight
//         bit 31~0 - Dense_3284_weight_dense_3284_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_3284_bias_dense_3284_bias
//         bit 31~0 - Dense_3284_bias_dense_3284_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_3285_weight_dense_3285_weight
//         bit 31~0 - Dense_3285_weight_dense_3285_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_3285_bias_dense_3285_bias
//         bit 31~0 - Dense_3285_bias_dense_3285_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_3286_weight_dense_3286_weight
//         bit 31~0 - Dense_3286_weight_dense_3286_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_3286_bias_dense_3286_bias
//         bit 31~0 - Dense_3286_bias_dense_3286_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_3287_weight_dense_3287_weight
//         bit 31~0 - Dense_3287_weight_dense_3287_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_3287_bias_dense_3287_bias
//         bit 31~0 - Dense_3287_bias_dense_3287_bias[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_3288_weight_dense_3288_weight
//         bit 31~0 - Dense_3288_weight_dense_3288_weight[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_3288_bias_dense_3288_bias
//         bit 31~0 - Dense_3288_bias_dense_3288_bias[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_3289_weight_dense_3289_weight
//         bit 31~0 - Dense_3289_weight_dense_3289_weight[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_3289_bias_dense_3289_bias
//         bit 31~0 - Dense_3289_bias_dense_3289_bias[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_3290_weight_dense_3290_weight
//         bit 31~0 - Dense_3290_weight_dense_3290_weight[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_3290_bias_dense_3290_bias
//         bit 31~0 - Dense_3290_bias_dense_3290_bias[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_3291_weight_dense_3291_weight
//         bit 31~0 - Dense_3291_weight_dense_3291_weight[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_3291_bias_dense_3291_bias
//         bit 31~0 - Dense_3291_bias_dense_3291_bias[31:0] (Read/Write)
// 0x1ec : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4054_CONV2D_4054_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4054_CONV2D_4054_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4056_CONV2D_4056_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4056_CONV2D_4056_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3433_MAX_POOLING2D_3433_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3433_MAX_POOLING2D_3433_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3434_MAX_POOLING2D_3434_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3434_MAX_POOLING2D_3434_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3281_DENSE_3281_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3281_DENSE_3281_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3282_DENSE_3282_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3282_DENSE_3282_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4055_CONV2D_4055_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4055_CONV2D_4055_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4057_CONV2D_4057_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4057_CONV2D_4057_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_707_CONCATENATE_707_DATA       0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_707_CONCATENATE_707_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4058_CONV2D_4058_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4058_CONV2D_4058_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3435_MAX_POOLING2D_3435_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3435_MAX_POOLING2D_3435_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3283_DENSE_3283_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3283_DENSE_3283_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4059_CONV2D_4059_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4059_CONV2D_4059_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3436_MAX_POOLING2D_3436_DATA 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3436_MAX_POOLING2D_3436_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3284_DENSE_3284_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3284_DENSE_3284_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3285_DENSE_3285_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3285_DENSE_3285_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3286_DENSE_3286_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3286_DENSE_3286_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3287_DENSE_3287_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3287_DENSE_3287_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3288_DENSE_3288_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3288_DENSE_3288_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_366_FLATTEN_366_DATA               0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_366_FLATTEN_366_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3289_DENSE_3289_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3289_DENSE_3289_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3290_DENSE_3290_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3290_DENSE_3290_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3291_DENSE_3291_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3291_DENSE_3291_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4054_WEIGHT_CONV2D_4054_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4054_WEIGHT_CONV2D_4054_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4054_BIAS_CONV2D_4054_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4054_BIAS_CONV2D_4054_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4056_WEIGHT_CONV2D_4056_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4056_WEIGHT_CONV2D_4056_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4056_BIAS_CONV2D_4056_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4056_BIAS_CONV2D_4056_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3281_WEIGHT_DENSE_3281_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3281_WEIGHT_DENSE_3281_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3281_BIAS_DENSE_3281_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3281_BIAS_DENSE_3281_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3282_WEIGHT_DENSE_3282_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3282_WEIGHT_DENSE_3282_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3282_BIAS_DENSE_3282_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3282_BIAS_DENSE_3282_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4055_WEIGHT_CONV2D_4055_WEIGHT_DATA 0x120
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4055_WEIGHT_CONV2D_4055_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4055_BIAS_CONV2D_4055_BIAS_DATA     0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4055_BIAS_CONV2D_4055_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4057_WEIGHT_CONV2D_4057_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4057_WEIGHT_CONV2D_4057_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4057_BIAS_CONV2D_4057_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4057_BIAS_CONV2D_4057_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4058_WEIGHT_CONV2D_4058_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4058_WEIGHT_CONV2D_4058_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4058_BIAS_CONV2D_4058_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4058_BIAS_CONV2D_4058_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3283_WEIGHT_DENSE_3283_WEIGHT_DATA   0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3283_WEIGHT_DENSE_3283_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3283_BIAS_DENSE_3283_BIAS_DATA       0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3283_BIAS_DENSE_3283_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4059_WEIGHT_CONV2D_4059_WEIGHT_DATA 0x160
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4059_WEIGHT_CONV2D_4059_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_4059_BIAS_CONV2D_4059_BIAS_DATA     0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_4059_BIAS_CONV2D_4059_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3284_WEIGHT_DENSE_3284_WEIGHT_DATA   0x170
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3284_WEIGHT_DENSE_3284_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3284_BIAS_DENSE_3284_BIAS_DATA       0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3284_BIAS_DENSE_3284_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3285_WEIGHT_DENSE_3285_WEIGHT_DATA   0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3285_WEIGHT_DENSE_3285_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3285_BIAS_DENSE_3285_BIAS_DATA       0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3285_BIAS_DENSE_3285_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3286_WEIGHT_DENSE_3286_WEIGHT_DATA   0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3286_WEIGHT_DENSE_3286_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3286_BIAS_DENSE_3286_BIAS_DATA       0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3286_BIAS_DENSE_3286_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3287_WEIGHT_DENSE_3287_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3287_WEIGHT_DENSE_3287_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3287_BIAS_DENSE_3287_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3287_BIAS_DENSE_3287_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3288_WEIGHT_DENSE_3288_WEIGHT_DATA   0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3288_WEIGHT_DENSE_3288_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3288_BIAS_DENSE_3288_BIAS_DATA       0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3288_BIAS_DENSE_3288_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3289_WEIGHT_DENSE_3289_WEIGHT_DATA   0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3289_WEIGHT_DENSE_3289_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3289_BIAS_DENSE_3289_BIAS_DATA       0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3289_BIAS_DENSE_3289_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3290_WEIGHT_DENSE_3290_WEIGHT_DATA   0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3290_WEIGHT_DENSE_3290_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3290_BIAS_DENSE_3290_BIAS_DATA       0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3290_BIAS_DENSE_3290_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3291_WEIGHT_DENSE_3291_WEIGHT_DATA   0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3291_WEIGHT_DENSE_3291_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_3291_BIAS_DENSE_3291_BIAS_DATA       0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_3291_BIAS_DENSE_3291_BIAS_DATA       32

