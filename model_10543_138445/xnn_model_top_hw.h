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
// 0x018 : Data signal of Input_input
//         bit 31~0 - Input_input[31:0] (Read/Write)
// 0x01c : reserved
// 0x020 : Data signal of Conv2d_239_conv2d_239
//         bit 31~0 - Conv2d_239_conv2d_239[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Conv2d_244_conv2d_244
//         bit 31~0 - Conv2d_244_conv2d_244[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Max_pooling2d_185_max_pooling2d_185
//         bit 31~0 - Max_pooling2d_185_max_pooling2d_185[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_189_max_pooling2d_189
//         bit 31~0 - Max_pooling2d_189_max_pooling2d_189[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Dense_173_dense_173
//         bit 31~0 - Dense_173_dense_173[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_177_dense_177
//         bit 31~0 - Dense_177_dense_177[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_240_conv2d_240
//         bit 31~0 - Conv2d_240_conv2d_240[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_245_conv2d_245
//         bit 31~0 - Conv2d_245_conv2d_245[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Max_pooling2d_186_max_pooling2d_186
//         bit 31~0 - Max_pooling2d_186_max_pooling2d_186[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_190_max_pooling2d_190
//         bit 31~0 - Max_pooling2d_190_max_pooling2d_190[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_174_dense_174
//         bit 31~0 - Dense_174_dense_174[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_178_dense_178
//         bit 31~0 - Dense_178_dense_178[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Conv2d_241_conv2d_241
//         bit 31~0 - Conv2d_241_conv2d_241[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_246_conv2d_246
//         bit 31~0 - Conv2d_246_conv2d_246[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Max_pooling2d_187_max_pooling2d_187
//         bit 31~0 - Max_pooling2d_187_max_pooling2d_187[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Max_pooling2d_191_max_pooling2d_191
//         bit 31~0 - Max_pooling2d_191_max_pooling2d_191[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_175_dense_175
//         bit 31~0 - Dense_175_dense_175[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_179_dense_179
//         bit 31~0 - Dense_179_dense_179[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Max_pooling2d_188_max_pooling2d_188
//         bit 31~0 - Max_pooling2d_188_max_pooling2d_188[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Max_pooling2d_192_max_pooling2d_192
//         bit 31~0 - Max_pooling2d_192_max_pooling2d_192[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_176_dense_176
//         bit 31~0 - Dense_176_dense_176[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_180_dense_180
//         bit 31~0 - Dense_180_dense_180[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Concatenate_20_concatenate_20
//         bit 31~0 - Concatenate_20_concatenate_20[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Flatten_9_flatten_9
//         bit 31~0 - Flatten_9_flatten_9[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_181_dense_181
//         bit 31~0 - Dense_181_dense_181[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_182_dense_182
//         bit 31~0 - Dense_182_dense_182[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_239_weight_conv2d_239_weight
//         bit 31~0 - Conv2d_239_weight_conv2d_239_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_239_bias_conv2d_239_bias
//         bit 31~0 - Conv2d_239_bias_conv2d_239_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_244_weight_conv2d_244_weight
//         bit 31~0 - Conv2d_244_weight_conv2d_244_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_244_bias_conv2d_244_bias
//         bit 31~0 - Conv2d_244_bias_conv2d_244_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_173_weight_dense_173_weight
//         bit 31~0 - Dense_173_weight_dense_173_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_173_bias_dense_173_bias
//         bit 31~0 - Dense_173_bias_dense_173_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_177_weight_dense_177_weight
//         bit 31~0 - Dense_177_weight_dense_177_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_177_bias_dense_177_bias
//         bit 31~0 - Dense_177_bias_dense_177_bias[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_240_weight_conv2d_240_weight
//         bit 31~0 - Conv2d_240_weight_conv2d_240_weight[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_240_bias_conv2d_240_bias
//         bit 31~0 - Conv2d_240_bias_conv2d_240_bias[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_245_weight_conv2d_245_weight
//         bit 31~0 - Conv2d_245_weight_conv2d_245_weight[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Conv2d_245_bias_conv2d_245_bias
//         bit 31~0 - Conv2d_245_bias_conv2d_245_bias[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_174_weight_dense_174_weight
//         bit 31~0 - Dense_174_weight_dense_174_weight[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_174_bias_dense_174_bias
//         bit 31~0 - Dense_174_bias_dense_174_bias[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_178_weight_dense_178_weight
//         bit 31~0 - Dense_178_weight_dense_178_weight[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Dense_178_bias_dense_178_bias
//         bit 31~0 - Dense_178_bias_dense_178_bias[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_241_weight_conv2d_241_weight
//         bit 31~0 - Conv2d_241_weight_conv2d_241_weight[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Conv2d_241_bias_conv2d_241_bias
//         bit 31~0 - Conv2d_241_bias_conv2d_241_bias[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Conv2d_246_weight_conv2d_246_weight
//         bit 31~0 - Conv2d_246_weight_conv2d_246_weight[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Conv2d_246_bias_conv2d_246_bias
//         bit 31~0 - Conv2d_246_bias_conv2d_246_bias[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_175_weight_dense_175_weight
//         bit 31~0 - Dense_175_weight_dense_175_weight[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_175_bias_dense_175_bias
//         bit 31~0 - Dense_175_bias_dense_175_bias[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_179_weight_dense_179_weight
//         bit 31~0 - Dense_179_weight_dense_179_weight[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_179_bias_dense_179_bias
//         bit 31~0 - Dense_179_bias_dense_179_bias[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_176_weight_dense_176_weight
//         bit 31~0 - Dense_176_weight_dense_176_weight[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_176_bias_dense_176_bias
//         bit 31~0 - Dense_176_bias_dense_176_bias[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_180_weight_dense_180_weight
//         bit 31~0 - Dense_180_weight_dense_180_weight[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_180_bias_dense_180_bias
//         bit 31~0 - Dense_180_bias_dense_180_bias[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_181_weight_dense_181_weight
//         bit 31~0 - Dense_181_weight_dense_181_weight[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_181_bias_dense_181_bias
//         bit 31~0 - Dense_181_bias_dense_181_bias[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_182_weight_dense_182_weight
//         bit 31~0 - Dense_182_weight_dense_182_weight[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_182_bias_dense_182_bias
//         bit 31~0 - Dense_182_bias_dense_182_bias[31:0] (Read/Write)
// 0x1ec : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                  0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                      0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                      0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                      0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                         0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_239_CONV2D_239_DATA               0x020
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_239_CONV2D_239_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_244_CONV2D_244_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_244_CONV2D_244_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_185_MAX_POOLING2D_185_DATA 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_185_MAX_POOLING2D_185_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_189_MAX_POOLING2D_189_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_189_MAX_POOLING2D_189_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_173_DENSE_173_DATA                 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_173_DENSE_173_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_177_DENSE_177_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_177_DENSE_177_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_240_CONV2D_240_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_240_CONV2D_240_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_245_CONV2D_245_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_245_CONV2D_245_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_186_MAX_POOLING2D_186_DATA 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_186_MAX_POOLING2D_186_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_190_MAX_POOLING2D_190_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_190_MAX_POOLING2D_190_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_174_DENSE_174_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_174_DENSE_174_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_178_DENSE_178_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_178_DENSE_178_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_241_CONV2D_241_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_241_CONV2D_241_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_246_CONV2D_246_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_246_CONV2D_246_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_187_MAX_POOLING2D_187_DATA 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_187_MAX_POOLING2D_187_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_191_MAX_POOLING2D_191_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_191_MAX_POOLING2D_191_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_175_DENSE_175_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_175_DENSE_175_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_179_DENSE_179_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_179_DENSE_179_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_188_MAX_POOLING2D_188_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_188_MAX_POOLING2D_188_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_192_MAX_POOLING2D_192_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_192_MAX_POOLING2D_192_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_176_DENSE_176_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_176_DENSE_176_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_180_DENSE_180_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_180_DENSE_180_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_20_CONCATENATE_20_DATA       0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_20_CONCATENATE_20_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_9_FLATTEN_9_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_9_FLATTEN_9_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_181_DENSE_181_DATA                 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_181_DENSE_181_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_182_DENSE_182_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_182_DENSE_182_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_239_WEIGHT_CONV2D_239_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_239_WEIGHT_CONV2D_239_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_239_BIAS_CONV2D_239_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_239_BIAS_CONV2D_239_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_244_WEIGHT_CONV2D_244_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_244_WEIGHT_CONV2D_244_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_244_BIAS_CONV2D_244_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_244_BIAS_CONV2D_244_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_173_WEIGHT_DENSE_173_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_173_WEIGHT_DENSE_173_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_173_BIAS_DENSE_173_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_173_BIAS_DENSE_173_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_177_WEIGHT_DENSE_177_WEIGHT_DATA   0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_177_WEIGHT_DENSE_177_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_177_BIAS_DENSE_177_BIAS_DATA       0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_177_BIAS_DENSE_177_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_240_WEIGHT_CONV2D_240_WEIGHT_DATA 0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_240_WEIGHT_CONV2D_240_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_240_BIAS_CONV2D_240_BIAS_DATA     0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_240_BIAS_CONV2D_240_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_245_WEIGHT_CONV2D_245_WEIGHT_DATA 0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_245_WEIGHT_CONV2D_245_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_245_BIAS_CONV2D_245_BIAS_DATA     0x148
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_245_BIAS_CONV2D_245_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_174_WEIGHT_DENSE_174_WEIGHT_DATA   0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_174_WEIGHT_DENSE_174_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_174_BIAS_DENSE_174_BIAS_DATA       0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_174_BIAS_DENSE_174_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_178_WEIGHT_DENSE_178_WEIGHT_DATA   0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_178_WEIGHT_DENSE_178_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_178_BIAS_DENSE_178_BIAS_DATA       0x168
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_178_BIAS_DENSE_178_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_241_WEIGHT_CONV2D_241_WEIGHT_DATA 0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_241_WEIGHT_CONV2D_241_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_241_BIAS_CONV2D_241_BIAS_DATA     0x178
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_241_BIAS_CONV2D_241_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_246_WEIGHT_CONV2D_246_WEIGHT_DATA 0x180
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_246_WEIGHT_CONV2D_246_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_246_BIAS_CONV2D_246_BIAS_DATA     0x188
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_246_BIAS_CONV2D_246_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_175_WEIGHT_DENSE_175_WEIGHT_DATA   0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_175_WEIGHT_DENSE_175_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_175_BIAS_DENSE_175_BIAS_DATA       0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_175_BIAS_DENSE_175_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_179_WEIGHT_DENSE_179_WEIGHT_DATA   0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_179_WEIGHT_DENSE_179_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_179_BIAS_DENSE_179_BIAS_DATA       0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_179_BIAS_DENSE_179_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_176_WEIGHT_DENSE_176_WEIGHT_DATA   0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_176_WEIGHT_DENSE_176_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_176_BIAS_DENSE_176_BIAS_DATA       0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_176_BIAS_DENSE_176_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_180_WEIGHT_DENSE_180_WEIGHT_DATA   0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_180_WEIGHT_DENSE_180_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_180_BIAS_DENSE_180_BIAS_DATA       0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_180_BIAS_DENSE_180_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_181_WEIGHT_DENSE_181_WEIGHT_DATA   0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_181_WEIGHT_DENSE_181_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_181_BIAS_DENSE_181_BIAS_DATA       0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_181_BIAS_DENSE_181_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_182_WEIGHT_DENSE_182_WEIGHT_DATA   0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_182_WEIGHT_DENSE_182_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_182_BIAS_DENSE_182_BIAS_DATA       0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_182_BIAS_DENSE_182_BIAS_DATA       32

