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
// 0x028 : Data signal of Conv2d_3546_conv2d_3546
//         bit 31~0 - Conv2d_3546_conv2d_3546[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_3544_conv2d_3544
//         bit 31~0 - Conv2d_3544_conv2d_3544[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_3007_max_pooling2d_3007
//         bit 31~0 - Max_pooling2d_3007_max_pooling2d_3007[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_3006_max_pooling2d_3006
//         bit 31~0 - Max_pooling2d_3006_max_pooling2d_3006[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_2860_dense_2860
//         bit 31~0 - Dense_2860_dense_2860[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Conv2d_3545_conv2d_3545
//         bit 31~0 - Conv2d_3545_conv2d_3545[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_3547_conv2d_3547
//         bit 31~0 - Conv2d_3547_conv2d_3547[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Concatenate_619_concatenate_619
//         bit 31~0 - Concatenate_619_concatenate_619[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Conv2d_3548_conv2d_3548
//         bit 31~0 - Conv2d_3548_conv2d_3548[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_3008_max_pooling2d_3008
//         bit 31~0 - Max_pooling2d_3008_max_pooling2d_3008[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_3009_max_pooling2d_3009
//         bit 31~0 - Max_pooling2d_3009_max_pooling2d_3009[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_3010_max_pooling2d_3010
//         bit 31~0 - Max_pooling2d_3010_max_pooling2d_3010[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Flatten_320_flatten_320
//         bit 31~0 - Flatten_320_flatten_320[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_2861_dense_2861
//         bit 31~0 - Dense_2861_dense_2861[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_2862_dense_2862
//         bit 31~0 - Dense_2862_dense_2862[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_3546_weight_conv2d_3546_weight
//         bit 31~0 - Conv2d_3546_weight_conv2d_3546_weight[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_3546_bias_conv2d_3546_bias
//         bit 31~0 - Conv2d_3546_bias_conv2d_3546_bias[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_3544_weight_conv2d_3544_weight
//         bit 31~0 - Conv2d_3544_weight_conv2d_3544_weight[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_3544_bias_conv2d_3544_bias
//         bit 31~0 - Conv2d_3544_bias_conv2d_3544_bias[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_2860_weight_dense_2860_weight
//         bit 31~0 - Dense_2860_weight_dense_2860_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_2860_bias_dense_2860_bias
//         bit 31~0 - Dense_2860_bias_dense_2860_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_3545_weight_conv2d_3545_weight
//         bit 31~0 - Conv2d_3545_weight_conv2d_3545_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_3545_bias_conv2d_3545_bias
//         bit 31~0 - Conv2d_3545_bias_conv2d_3545_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_3547_weight_conv2d_3547_weight
//         bit 31~0 - Conv2d_3547_weight_conv2d_3547_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Conv2d_3547_bias_conv2d_3547_bias
//         bit 31~0 - Conv2d_3547_bias_conv2d_3547_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_3548_weight_conv2d_3548_weight
//         bit 31~0 - Conv2d_3548_weight_conv2d_3548_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_3548_bias_conv2d_3548_bias
//         bit 31~0 - Conv2d_3548_bias_conv2d_3548_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_2861_weight_dense_2861_weight
//         bit 31~0 - Dense_2861_weight_dense_2861_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Dense_2861_bias_dense_2861_bias
//         bit 31~0 - Dense_2861_bias_dense_2861_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_2862_weight_dense_2862_weight
//         bit 31~0 - Dense_2862_weight_dense_2862_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_2862_bias_dense_2862_bias
//         bit 31~0 - Dense_2862_bias_dense_2862_bias[31:0] (Read/Write)
// 0x11c : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3546_CONV2D_3546_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3546_CONV2D_3546_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3544_CONV2D_3544_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3544_CONV2D_3544_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3007_MAX_POOLING2D_3007_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3007_MAX_POOLING2D_3007_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3006_MAX_POOLING2D_3006_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3006_MAX_POOLING2D_3006_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2860_DENSE_2860_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2860_DENSE_2860_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3545_CONV2D_3545_DATA               0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3545_CONV2D_3545_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3547_CONV2D_3547_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3547_CONV2D_3547_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_619_CONCATENATE_619_DATA       0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_619_CONCATENATE_619_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3548_CONV2D_3548_DATA               0x068
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3548_CONV2D_3548_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3008_MAX_POOLING2D_3008_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3008_MAX_POOLING2D_3008_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3009_MAX_POOLING2D_3009_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3009_MAX_POOLING2D_3009_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_3010_MAX_POOLING2D_3010_DATA 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_3010_MAX_POOLING2D_3010_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_320_FLATTEN_320_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_320_FLATTEN_320_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2861_DENSE_2861_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2861_DENSE_2861_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2862_DENSE_2862_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2862_DENSE_2862_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3546_WEIGHT_CONV2D_3546_WEIGHT_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3546_WEIGHT_CONV2D_3546_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3546_BIAS_CONV2D_3546_BIAS_DATA     0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3546_BIAS_CONV2D_3546_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3544_WEIGHT_CONV2D_3544_WEIGHT_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3544_WEIGHT_CONV2D_3544_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3544_BIAS_CONV2D_3544_BIAS_DATA     0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3544_BIAS_CONV2D_3544_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2860_WEIGHT_DENSE_2860_WEIGHT_DATA   0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2860_WEIGHT_DENSE_2860_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2860_BIAS_DENSE_2860_BIAS_DATA       0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2860_BIAS_DENSE_2860_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3545_WEIGHT_CONV2D_3545_WEIGHT_DATA 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3545_WEIGHT_CONV2D_3545_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3545_BIAS_CONV2D_3545_BIAS_DATA     0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3545_BIAS_CONV2D_3545_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3547_WEIGHT_CONV2D_3547_WEIGHT_DATA 0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3547_WEIGHT_CONV2D_3547_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3547_BIAS_CONV2D_3547_BIAS_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3547_BIAS_CONV2D_3547_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3548_WEIGHT_CONV2D_3548_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3548_WEIGHT_CONV2D_3548_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_3548_BIAS_CONV2D_3548_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_3548_BIAS_CONV2D_3548_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2861_WEIGHT_DENSE_2861_WEIGHT_DATA   0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2861_WEIGHT_DENSE_2861_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2861_BIAS_DENSE_2861_BIAS_DATA       0x108
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2861_BIAS_DENSE_2861_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2862_WEIGHT_DENSE_2862_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2862_WEIGHT_DENSE_2862_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_2862_BIAS_DENSE_2862_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_2862_BIAS_DENSE_2862_BIAS_DATA       32

