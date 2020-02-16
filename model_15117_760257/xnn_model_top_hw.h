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
// 0x028 : Data signal of Conv2d_835_conv2d_835
//         bit 31~0 - Conv2d_835_conv2d_835[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_834_conv2d_834
//         bit 31~0 - Conv2d_834_conv2d_834[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_702_max_pooling2d_702
//         bit 31~0 - Max_pooling2d_702_max_pooling2d_702[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_701_max_pooling2d_701
//         bit 31~0 - Max_pooling2d_701_max_pooling2d_701[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_689_dense_689
//         bit 31~0 - Dense_689_dense_689[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Concatenate_149_concatenate_149
//         bit 31~0 - Concatenate_149_concatenate_149[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv2d_836_conv2d_836
//         bit 31~0 - Conv2d_836_conv2d_836[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Max_pooling2d_703_max_pooling2d_703
//         bit 31~0 - Max_pooling2d_703_max_pooling2d_703[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Dense_690_dense_690
//         bit 31~0 - Dense_690_dense_690[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Conv2d_837_conv2d_837
//         bit 31~0 - Conv2d_837_conv2d_837[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Conv2d_838_conv2d_838
//         bit 31~0 - Conv2d_838_conv2d_838[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Max_pooling2d_704_max_pooling2d_704
//         bit 31~0 - Max_pooling2d_704_max_pooling2d_704[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Flatten_77_flatten_77
//         bit 31~0 - Flatten_77_flatten_77[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_691_dense_691
//         bit 31~0 - Dense_691_dense_691[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Dense_692_dense_692
//         bit 31~0 - Dense_692_dense_692[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_835_weight_conv2d_835_weight
//         bit 31~0 - Conv2d_835_weight_conv2d_835_weight[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_835_bias_conv2d_835_bias
//         bit 31~0 - Conv2d_835_bias_conv2d_835_bias[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_834_weight_conv2d_834_weight
//         bit 31~0 - Conv2d_834_weight_conv2d_834_weight[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv2d_834_bias_conv2d_834_bias
//         bit 31~0 - Conv2d_834_bias_conv2d_834_bias[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_689_weight_dense_689_weight
//         bit 31~0 - Dense_689_weight_dense_689_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_689_bias_dense_689_bias
//         bit 31~0 - Dense_689_bias_dense_689_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Conv2d_836_weight_conv2d_836_weight
//         bit 31~0 - Conv2d_836_weight_conv2d_836_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_836_bias_conv2d_836_bias
//         bit 31~0 - Conv2d_836_bias_conv2d_836_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Dense_690_weight_dense_690_weight
//         bit 31~0 - Dense_690_weight_dense_690_weight[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_690_bias_dense_690_bias
//         bit 31~0 - Dense_690_bias_dense_690_bias[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Conv2d_837_weight_conv2d_837_weight
//         bit 31~0 - Conv2d_837_weight_conv2d_837_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Conv2d_837_bias_conv2d_837_bias
//         bit 31~0 - Conv2d_837_bias_conv2d_837_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Conv2d_838_weight_conv2d_838_weight
//         bit 31~0 - Conv2d_838_weight_conv2d_838_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Conv2d_838_bias_conv2d_838_bias
//         bit 31~0 - Conv2d_838_bias_conv2d_838_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Dense_691_weight_dense_691_weight
//         bit 31~0 - Dense_691_weight_dense_691_weight[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Dense_691_bias_dense_691_bias
//         bit 31~0 - Dense_691_bias_dense_691_bias[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_692_weight_dense_692_weight
//         bit 31~0 - Dense_692_weight_dense_692_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_692_bias_dense_692_bias
//         bit 31~0 - Dense_692_bias_dense_692_bias[31:0] (Read/Write)
// 0x12c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                  0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                      0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                      0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                      0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT2_INPUT2_DATA                       0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT2_INPUT2_DATA                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT1_INPUT1_DATA                       0x020
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT1_INPUT1_DATA                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_835_CONV2D_835_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_835_CONV2D_835_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_834_CONV2D_834_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_834_CONV2D_834_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_702_MAX_POOLING2D_702_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_702_MAX_POOLING2D_702_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_701_MAX_POOLING2D_701_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_701_MAX_POOLING2D_701_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_689_DENSE_689_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_689_DENSE_689_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_149_CONCATENATE_149_DATA     0x050
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_149_CONCATENATE_149_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_836_CONV2D_836_DATA               0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_836_CONV2D_836_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_703_MAX_POOLING2D_703_DATA 0x060
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_703_MAX_POOLING2D_703_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_690_DENSE_690_DATA                 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_690_DENSE_690_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_837_CONV2D_837_DATA               0x070
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_837_CONV2D_837_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_838_CONV2D_838_DATA               0x078
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_838_CONV2D_838_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_704_MAX_POOLING2D_704_DATA 0x080
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_704_MAX_POOLING2D_704_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_77_FLATTEN_77_DATA               0x088
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_77_FLATTEN_77_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_691_DENSE_691_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_691_DENSE_691_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_692_DENSE_692_DATA                 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_692_DENSE_692_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_835_WEIGHT_CONV2D_835_WEIGHT_DATA 0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_835_WEIGHT_CONV2D_835_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_835_BIAS_CONV2D_835_BIAS_DATA     0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_835_BIAS_CONV2D_835_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_834_WEIGHT_CONV2D_834_WEIGHT_DATA 0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_834_WEIGHT_CONV2D_834_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_834_BIAS_CONV2D_834_BIAS_DATA     0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_834_BIAS_CONV2D_834_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_689_WEIGHT_DENSE_689_WEIGHT_DATA   0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_689_WEIGHT_DENSE_689_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_689_BIAS_DENSE_689_BIAS_DATA       0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_689_BIAS_DENSE_689_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_836_WEIGHT_CONV2D_836_WEIGHT_DATA 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_836_WEIGHT_CONV2D_836_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_836_BIAS_CONV2D_836_BIAS_DATA     0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_836_BIAS_CONV2D_836_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_690_WEIGHT_DENSE_690_WEIGHT_DATA   0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_690_WEIGHT_DENSE_690_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_690_BIAS_DENSE_690_BIAS_DATA       0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_690_BIAS_DENSE_690_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_837_WEIGHT_CONV2D_837_WEIGHT_DATA 0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_837_WEIGHT_CONV2D_837_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_837_BIAS_CONV2D_837_BIAS_DATA     0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_837_BIAS_CONV2D_837_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_838_WEIGHT_CONV2D_838_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_838_WEIGHT_CONV2D_838_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_838_BIAS_CONV2D_838_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_838_BIAS_CONV2D_838_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_691_WEIGHT_DENSE_691_WEIGHT_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_691_WEIGHT_DENSE_691_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_691_BIAS_DENSE_691_BIAS_DATA       0x118
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_691_BIAS_DENSE_691_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_692_WEIGHT_DENSE_692_WEIGHT_DATA   0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_692_WEIGHT_DENSE_692_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_692_BIAS_DENSE_692_BIAS_DATA       0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_692_BIAS_DENSE_692_BIAS_DATA       32

