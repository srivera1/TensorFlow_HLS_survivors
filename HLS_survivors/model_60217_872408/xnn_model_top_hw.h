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
// 0x020 : Data signal of Conv2d_9559_conv2d_9559
//         bit 31~0 - Conv2d_9559_conv2d_9559[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Conv2d_9560_conv2d_9560
//         bit 31~0 - Conv2d_9560_conv2d_9560[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Max_pooling2d_6750_max_pooling2d_6750
//         bit 31~0 - Max_pooling2d_6750_max_pooling2d_6750[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Conv2d_9561_conv2d_9561
//         bit 31~0 - Conv2d_9561_conv2d_9561[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Conv2d_9562_conv2d_9562
//         bit 31~0 - Conv2d_9562_conv2d_9562[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Max_pooling2d_6751_max_pooling2d_6751
//         bit 31~0 - Max_pooling2d_6751_max_pooling2d_6751[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Max_pooling2d_6752_max_pooling2d_6752
//         bit 31~0 - Max_pooling2d_6752_max_pooling2d_6752[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Max_pooling2d_6753_max_pooling2d_6753
//         bit 31~0 - Max_pooling2d_6753_max_pooling2d_6753[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Flatten_458_flatten_458
//         bit 31~0 - Flatten_458_flatten_458[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Dense_7550_dense_7550
//         bit 31~0 - Dense_7550_dense_7550[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Dense_7551_dense_7551
//         bit 31~0 - Dense_7551_dense_7551[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_7552_dense_7552
//         bit 31~0 - Dense_7552_dense_7552[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Dense_7553_dense_7553
//         bit 31~0 - Dense_7553_dense_7553[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Conv2d_9559_weight_conv2d_9559_weight
//         bit 31~0 - Conv2d_9559_weight_conv2d_9559_weight[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv2d_9559_bias_conv2d_9559_bias
//         bit 31~0 - Conv2d_9559_bias_conv2d_9559_bias[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_9560_weight_conv2d_9560_weight
//         bit 31~0 - Conv2d_9560_weight_conv2d_9560_weight[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_9560_bias_conv2d_9560_bias
//         bit 31~0 - Conv2d_9560_bias_conv2d_9560_bias[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_9561_weight_conv2d_9561_weight
//         bit 31~0 - Conv2d_9561_weight_conv2d_9561_weight[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_9561_bias_conv2d_9561_bias
//         bit 31~0 - Conv2d_9561_bias_conv2d_9561_bias[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_9562_weight_conv2d_9562_weight
//         bit 31~0 - Conv2d_9562_weight_conv2d_9562_weight[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Conv2d_9562_bias_conv2d_9562_bias
//         bit 31~0 - Conv2d_9562_bias_conv2d_9562_bias[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_7550_weight_dense_7550_weight
//         bit 31~0 - Dense_7550_weight_dense_7550_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_7550_bias_dense_7550_bias
//         bit 31~0 - Dense_7550_bias_dense_7550_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Dense_7551_weight_dense_7551_weight
//         bit 31~0 - Dense_7551_weight_dense_7551_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_7551_bias_dense_7551_bias
//         bit 31~0 - Dense_7551_bias_dense_7551_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_7552_weight_dense_7552_weight
//         bit 31~0 - Dense_7552_weight_dense_7552_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_7552_bias_dense_7552_bias
//         bit 31~0 - Dense_7552_bias_dense_7552_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_7553_weight_dense_7553_weight
//         bit 31~0 - Dense_7553_weight_dense_7553_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_7553_bias_dense_7553_bias
//         bit 31~0 - Dense_7553_bias_dense_7553_bias[31:0] (Read/Write)
// 0x104 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                    0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                        0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                        0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                        0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                  0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                  32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                           0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                           32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_9559_CONV2D_9559_DATA               0x020
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_9559_CONV2D_9559_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_9560_CONV2D_9560_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_9560_CONV2D_9560_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_6750_MAX_POOLING2D_6750_DATA 0x030
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_6750_MAX_POOLING2D_6750_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_9561_CONV2D_9561_DATA               0x038
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_9561_CONV2D_9561_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_9562_CONV2D_9562_DATA               0x040
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_9562_CONV2D_9562_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_6751_MAX_POOLING2D_6751_DATA 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_6751_MAX_POOLING2D_6751_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_6752_MAX_POOLING2D_6752_DATA 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_6752_MAX_POOLING2D_6752_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_6753_MAX_POOLING2D_6753_DATA 0x058
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_6753_MAX_POOLING2D_6753_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_458_FLATTEN_458_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_458_FLATTEN_458_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_7550_DENSE_7550_DATA                 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_7550_DENSE_7550_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_7551_DENSE_7551_DATA                 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_7551_DENSE_7551_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_7552_DENSE_7552_DATA                 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_7552_DENSE_7552_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_7553_DENSE_7553_DATA                 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_7553_DENSE_7553_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_9559_WEIGHT_CONV2D_9559_WEIGHT_DATA 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_9559_WEIGHT_CONV2D_9559_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_9559_BIAS_CONV2D_9559_BIAS_DATA     0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_9559_BIAS_CONV2D_9559_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_9560_WEIGHT_CONV2D_9560_WEIGHT_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_9560_WEIGHT_CONV2D_9560_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_9560_BIAS_CONV2D_9560_BIAS_DATA     0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_9560_BIAS_CONV2D_9560_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_9561_WEIGHT_CONV2D_9561_WEIGHT_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_9561_WEIGHT_CONV2D_9561_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_9561_BIAS_CONV2D_9561_BIAS_DATA     0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_9561_BIAS_CONV2D_9561_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_9562_WEIGHT_CONV2D_9562_WEIGHT_DATA 0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_9562_WEIGHT_CONV2D_9562_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_9562_BIAS_CONV2D_9562_BIAS_DATA     0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_9562_BIAS_CONV2D_9562_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_7550_WEIGHT_DENSE_7550_WEIGHT_DATA   0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_7550_WEIGHT_DENSE_7550_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_7550_BIAS_DENSE_7550_BIAS_DATA       0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_7550_BIAS_DENSE_7550_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_7551_WEIGHT_DENSE_7551_WEIGHT_DATA   0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_7551_WEIGHT_DENSE_7551_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_7551_BIAS_DENSE_7551_BIAS_DATA       0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_7551_BIAS_DENSE_7551_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_7552_WEIGHT_DENSE_7552_WEIGHT_DATA   0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_7552_WEIGHT_DENSE_7552_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_7552_BIAS_DENSE_7552_BIAS_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_7552_BIAS_DENSE_7552_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_7553_WEIGHT_DENSE_7553_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_7553_WEIGHT_DENSE_7553_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_7553_BIAS_DENSE_7553_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_7553_BIAS_DENSE_7553_BIAS_DATA       32

