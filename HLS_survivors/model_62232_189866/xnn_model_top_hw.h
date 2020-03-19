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
// 0x020 : Data signal of Conv2d_7313_conv2d_7313
//         bit 31~0 - Conv2d_7313_conv2d_7313[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Max_pooling2d_5176_max_pooling2d_5176
//         bit 31~0 - Max_pooling2d_5176_max_pooling2d_5176[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Dense_5775_dense_5775
//         bit 31~0 - Dense_5775_dense_5775[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Conv2d_7314_conv2d_7314
//         bit 31~0 - Conv2d_7314_conv2d_7314[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Conv2d_7315_conv2d_7315
//         bit 31~0 - Conv2d_7315_conv2d_7315[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Max_pooling2d_5177_max_pooling2d_5177
//         bit 31~0 - Max_pooling2d_5177_max_pooling2d_5177[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Max_pooling2d_5178_max_pooling2d_5178
//         bit 31~0 - Max_pooling2d_5178_max_pooling2d_5178[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Dense_5776_dense_5776
//         bit 31~0 - Dense_5776_dense_5776[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Dense_5777_dense_5777
//         bit 31~0 - Dense_5777_dense_5777[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Concatenate_507_concatenate_507
//         bit 31~0 - Concatenate_507_concatenate_507[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_7316_conv2d_7316
//         bit 31~0 - Conv2d_7316_conv2d_7316[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_5179_max_pooling2d_5179
//         bit 31~0 - Max_pooling2d_5179_max_pooling2d_5179[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_5778_dense_5778
//         bit 31~0 - Dense_5778_dense_5778[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Max_pooling2d_5180_max_pooling2d_5180
//         bit 31~0 - Max_pooling2d_5180_max_pooling2d_5180[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_5779_dense_5779
//         bit 31~0 - Dense_5779_dense_5779[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_5780_dense_5780
//         bit 31~0 - Dense_5780_dense_5780[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Dense_5781_dense_5781
//         bit 31~0 - Dense_5781_dense_5781[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Dense_5782_dense_5782
//         bit 31~0 - Dense_5782_dense_5782[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Dense_5783_dense_5783
//         bit 31~0 - Dense_5783_dense_5783[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_5784_dense_5784
//         bit 31~0 - Dense_5784_dense_5784[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_5785_dense_5785
//         bit 31~0 - Dense_5785_dense_5785[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_5786_dense_5786
//         bit 31~0 - Dense_5786_dense_5786[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_5787_dense_5787
//         bit 31~0 - Dense_5787_dense_5787[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_5788_dense_5788
//         bit 31~0 - Dense_5788_dense_5788[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_5789_dense_5789
//         bit 31~0 - Dense_5789_dense_5789[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_5790_dense_5790
//         bit 31~0 - Dense_5790_dense_5790[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Flatten_347_flatten_347
//         bit 31~0 - Flatten_347_flatten_347[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_5791_dense_5791
//         bit 31~0 - Dense_5791_dense_5791[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_5792_dense_5792
//         bit 31~0 - Dense_5792_dense_5792[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_7313_weight_conv2d_7313_weight
//         bit 31~0 - Conv2d_7313_weight_conv2d_7313_weight[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Conv2d_7313_bias_conv2d_7313_bias
//         bit 31~0 - Conv2d_7313_bias_conv2d_7313_bias[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_5775_weight_dense_5775_weight
//         bit 31~0 - Dense_5775_weight_dense_5775_weight[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_5775_bias_dense_5775_bias
//         bit 31~0 - Dense_5775_bias_dense_5775_bias[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Conv2d_7314_weight_conv2d_7314_weight
//         bit 31~0 - Conv2d_7314_weight_conv2d_7314_weight[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of Conv2d_7314_bias_conv2d_7314_bias
//         bit 31~0 - Conv2d_7314_bias_conv2d_7314_bias[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of Conv2d_7315_weight_conv2d_7315_weight
//         bit 31~0 - Conv2d_7315_weight_conv2d_7315_weight[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of Conv2d_7315_bias_conv2d_7315_bias
//         bit 31~0 - Conv2d_7315_bias_conv2d_7315_bias[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of Dense_5776_weight_dense_5776_weight
//         bit 31~0 - Dense_5776_weight_dense_5776_weight[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of Dense_5776_bias_dense_5776_bias
//         bit 31~0 - Dense_5776_bias_dense_5776_bias[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of Dense_5777_weight_dense_5777_weight
//         bit 31~0 - Dense_5777_weight_dense_5777_weight[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of Dense_5777_bias_dense_5777_bias
//         bit 31~0 - Dense_5777_bias_dense_5777_bias[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of Conv2d_7316_weight_conv2d_7316_weight
//         bit 31~0 - Conv2d_7316_weight_conv2d_7316_weight[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of Conv2d_7316_bias_conv2d_7316_bias
//         bit 31~0 - Conv2d_7316_bias_conv2d_7316_bias[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of Dense_5778_weight_dense_5778_weight
//         bit 31~0 - Dense_5778_weight_dense_5778_weight[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of Dense_5778_bias_dense_5778_bias
//         bit 31~0 - Dense_5778_bias_dense_5778_bias[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of Dense_5779_weight_dense_5779_weight
//         bit 31~0 - Dense_5779_weight_dense_5779_weight[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of Dense_5779_bias_dense_5779_bias
//         bit 31~0 - Dense_5779_bias_dense_5779_bias[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of Dense_5780_weight_dense_5780_weight
//         bit 31~0 - Dense_5780_weight_dense_5780_weight[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of Dense_5780_bias_dense_5780_bias
//         bit 31~0 - Dense_5780_bias_dense_5780_bias[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of Dense_5781_weight_dense_5781_weight
//         bit 31~0 - Dense_5781_weight_dense_5781_weight[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of Dense_5781_bias_dense_5781_bias
//         bit 31~0 - Dense_5781_bias_dense_5781_bias[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of Dense_5782_weight_dense_5782_weight
//         bit 31~0 - Dense_5782_weight_dense_5782_weight[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of Dense_5782_bias_dense_5782_bias
//         bit 31~0 - Dense_5782_bias_dense_5782_bias[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of Dense_5783_weight_dense_5783_weight
//         bit 31~0 - Dense_5783_weight_dense_5783_weight[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of Dense_5783_bias_dense_5783_bias
//         bit 31~0 - Dense_5783_bias_dense_5783_bias[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of Dense_5784_weight_dense_5784_weight
//         bit 31~0 - Dense_5784_weight_dense_5784_weight[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of Dense_5784_bias_dense_5784_bias
//         bit 31~0 - Dense_5784_bias_dense_5784_bias[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of Dense_5785_weight_dense_5785_weight
//         bit 31~0 - Dense_5785_weight_dense_5785_weight[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of Dense_5785_bias_dense_5785_bias
//         bit 31~0 - Dense_5785_bias_dense_5785_bias[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of Dense_5786_weight_dense_5786_weight
//         bit 31~0 - Dense_5786_weight_dense_5786_weight[31:0] (Read/Write)
// 0x1fc : reserved
// 0x200 : Data signal of Dense_5786_bias_dense_5786_bias
//         bit 31~0 - Dense_5786_bias_dense_5786_bias[31:0] (Read/Write)
// 0x204 : reserved
// 0x208 : Data signal of Dense_5787_weight_dense_5787_weight
//         bit 31~0 - Dense_5787_weight_dense_5787_weight[31:0] (Read/Write)
// 0x20c : reserved
// 0x210 : Data signal of Dense_5787_bias_dense_5787_bias
//         bit 31~0 - Dense_5787_bias_dense_5787_bias[31:0] (Read/Write)
// 0x214 : reserved
// 0x218 : Data signal of Dense_5788_weight_dense_5788_weight
//         bit 31~0 - Dense_5788_weight_dense_5788_weight[31:0] (Read/Write)
// 0x21c : reserved
// 0x220 : Data signal of Dense_5788_bias_dense_5788_bias
//         bit 31~0 - Dense_5788_bias_dense_5788_bias[31:0] (Read/Write)
// 0x224 : reserved
// 0x228 : Data signal of Dense_5789_weight_dense_5789_weight
//         bit 31~0 - Dense_5789_weight_dense_5789_weight[31:0] (Read/Write)
// 0x22c : reserved
// 0x230 : Data signal of Dense_5789_bias_dense_5789_bias
//         bit 31~0 - Dense_5789_bias_dense_5789_bias[31:0] (Read/Write)
// 0x234 : reserved
// 0x238 : Data signal of Dense_5790_weight_dense_5790_weight
//         bit 31~0 - Dense_5790_weight_dense_5790_weight[31:0] (Read/Write)
// 0x23c : reserved
// 0x240 : Data signal of Dense_5790_bias_dense_5790_bias
//         bit 31~0 - Dense_5790_bias_dense_5790_bias[31:0] (Read/Write)
// 0x244 : reserved
// 0x248 : Data signal of Dense_5791_weight_dense_5791_weight
//         bit 31~0 - Dense_5791_weight_dense_5791_weight[31:0] (Read/Write)
// 0x24c : reserved
// 0x250 : Data signal of Dense_5791_bias_dense_5791_bias
//         bit 31~0 - Dense_5791_bias_dense_5791_bias[31:0] (Read/Write)
// 0x254 : reserved
// 0x258 : Data signal of Dense_5792_weight_dense_5792_weight
//         bit 31~0 - Dense_5792_weight_dense_5792_weight[31:0] (Read/Write)
// 0x25c : reserved
// 0x260 : Data signal of Dense_5792_bias_dense_5792_bias
//         bit 31~0 - Dense_5792_bias_dense_5792_bias[31:0] (Read/Write)
// 0x264 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                           0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                           32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7313_CONV2D_7313_DATA               0x020
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7313_CONV2D_7313_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5176_MAX_POOLING2D_5176_DATA 0x028
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5176_MAX_POOLING2D_5176_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5775_DENSE_5775_DATA                 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5775_DENSE_5775_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7314_CONV2D_7314_DATA               0x038
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7314_CONV2D_7314_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7315_CONV2D_7315_DATA               0x040
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7315_CONV2D_7315_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5177_MAX_POOLING2D_5177_DATA 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5177_MAX_POOLING2D_5177_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5178_MAX_POOLING2D_5178_DATA 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5178_MAX_POOLING2D_5178_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5776_DENSE_5776_DATA                 0x058
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5776_DENSE_5776_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5777_DENSE_5777_DATA                 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5777_DENSE_5777_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_507_CONCATENATE_507_DATA       0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_507_CONCATENATE_507_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7316_CONV2D_7316_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7316_CONV2D_7316_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5179_MAX_POOLING2D_5179_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5179_MAX_POOLING2D_5179_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5778_DENSE_5778_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5778_DENSE_5778_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_5180_MAX_POOLING2D_5180_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_5180_MAX_POOLING2D_5180_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5779_DENSE_5779_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5779_DENSE_5779_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5780_DENSE_5780_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5780_DENSE_5780_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5781_DENSE_5781_DATA                 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5781_DENSE_5781_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5782_DENSE_5782_DATA                 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5782_DENSE_5782_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5783_DENSE_5783_DATA                 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5783_DENSE_5783_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5784_DENSE_5784_DATA                 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5784_DENSE_5784_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5785_DENSE_5785_DATA                 0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5785_DENSE_5785_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5786_DENSE_5786_DATA                 0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5786_DENSE_5786_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5787_DENSE_5787_DATA                 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5787_DENSE_5787_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5788_DENSE_5788_DATA                 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5788_DENSE_5788_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5789_DENSE_5789_DATA                 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5789_DENSE_5789_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5790_DENSE_5790_DATA                 0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5790_DENSE_5790_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_347_FLATTEN_347_DATA               0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_347_FLATTEN_347_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5791_DENSE_5791_DATA                 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5791_DENSE_5791_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5792_DENSE_5792_DATA                 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5792_DENSE_5792_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7313_WEIGHT_CONV2D_7313_WEIGHT_DATA 0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7313_WEIGHT_CONV2D_7313_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7313_BIAS_CONV2D_7313_BIAS_DATA     0x110
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7313_BIAS_CONV2D_7313_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5775_WEIGHT_DENSE_5775_WEIGHT_DATA   0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5775_WEIGHT_DENSE_5775_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5775_BIAS_DENSE_5775_BIAS_DATA       0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5775_BIAS_DENSE_5775_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7314_WEIGHT_CONV2D_7314_WEIGHT_DATA 0x128
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7314_WEIGHT_CONV2D_7314_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7314_BIAS_CONV2D_7314_BIAS_DATA     0x130
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7314_BIAS_CONV2D_7314_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7315_WEIGHT_CONV2D_7315_WEIGHT_DATA 0x138
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7315_WEIGHT_CONV2D_7315_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7315_BIAS_CONV2D_7315_BIAS_DATA     0x140
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7315_BIAS_CONV2D_7315_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5776_WEIGHT_DENSE_5776_WEIGHT_DATA   0x148
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5776_WEIGHT_DENSE_5776_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5776_BIAS_DENSE_5776_BIAS_DATA       0x150
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5776_BIAS_DENSE_5776_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5777_WEIGHT_DENSE_5777_WEIGHT_DATA   0x158
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5777_WEIGHT_DENSE_5777_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5777_BIAS_DENSE_5777_BIAS_DATA       0x160
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5777_BIAS_DENSE_5777_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7316_WEIGHT_CONV2D_7316_WEIGHT_DATA 0x168
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7316_WEIGHT_CONV2D_7316_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_7316_BIAS_CONV2D_7316_BIAS_DATA     0x170
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_7316_BIAS_CONV2D_7316_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5778_WEIGHT_DENSE_5778_WEIGHT_DATA   0x178
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5778_WEIGHT_DENSE_5778_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5778_BIAS_DENSE_5778_BIAS_DATA       0x180
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5778_BIAS_DENSE_5778_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5779_WEIGHT_DENSE_5779_WEIGHT_DATA   0x188
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5779_WEIGHT_DENSE_5779_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5779_BIAS_DENSE_5779_BIAS_DATA       0x190
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5779_BIAS_DENSE_5779_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5780_WEIGHT_DENSE_5780_WEIGHT_DATA   0x198
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5780_WEIGHT_DENSE_5780_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5780_BIAS_DENSE_5780_BIAS_DATA       0x1a0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5780_BIAS_DENSE_5780_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5781_WEIGHT_DENSE_5781_WEIGHT_DATA   0x1a8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5781_WEIGHT_DENSE_5781_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5781_BIAS_DENSE_5781_BIAS_DATA       0x1b0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5781_BIAS_DENSE_5781_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5782_WEIGHT_DENSE_5782_WEIGHT_DATA   0x1b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5782_WEIGHT_DENSE_5782_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5782_BIAS_DENSE_5782_BIAS_DATA       0x1c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5782_BIAS_DENSE_5782_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5783_WEIGHT_DENSE_5783_WEIGHT_DATA   0x1c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5783_WEIGHT_DENSE_5783_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5783_BIAS_DENSE_5783_BIAS_DATA       0x1d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5783_BIAS_DENSE_5783_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5784_WEIGHT_DENSE_5784_WEIGHT_DATA   0x1d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5784_WEIGHT_DENSE_5784_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5784_BIAS_DENSE_5784_BIAS_DATA       0x1e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5784_BIAS_DENSE_5784_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5785_WEIGHT_DENSE_5785_WEIGHT_DATA   0x1e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5785_WEIGHT_DENSE_5785_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5785_BIAS_DENSE_5785_BIAS_DATA       0x1f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5785_BIAS_DENSE_5785_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5786_WEIGHT_DENSE_5786_WEIGHT_DATA   0x1f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5786_WEIGHT_DENSE_5786_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5786_BIAS_DENSE_5786_BIAS_DATA       0x200
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5786_BIAS_DENSE_5786_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5787_WEIGHT_DENSE_5787_WEIGHT_DATA   0x208
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5787_WEIGHT_DENSE_5787_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5787_BIAS_DENSE_5787_BIAS_DATA       0x210
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5787_BIAS_DENSE_5787_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5788_WEIGHT_DENSE_5788_WEIGHT_DATA   0x218
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5788_WEIGHT_DENSE_5788_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5788_BIAS_DENSE_5788_BIAS_DATA       0x220
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5788_BIAS_DENSE_5788_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5789_WEIGHT_DENSE_5789_WEIGHT_DATA   0x228
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5789_WEIGHT_DENSE_5789_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5789_BIAS_DENSE_5789_BIAS_DATA       0x230
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5789_BIAS_DENSE_5789_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5790_WEIGHT_DENSE_5790_WEIGHT_DATA   0x238
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5790_WEIGHT_DENSE_5790_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5790_BIAS_DENSE_5790_BIAS_DATA       0x240
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5790_BIAS_DENSE_5790_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5791_WEIGHT_DENSE_5791_WEIGHT_DATA   0x248
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5791_WEIGHT_DENSE_5791_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5791_BIAS_DENSE_5791_BIAS_DATA       0x250
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5791_BIAS_DENSE_5791_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5792_WEIGHT_DENSE_5792_WEIGHT_DATA   0x258
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5792_WEIGHT_DENSE_5792_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_5792_BIAS_DENSE_5792_BIAS_DATA       0x260
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_5792_BIAS_DENSE_5792_BIAS_DATA       32

