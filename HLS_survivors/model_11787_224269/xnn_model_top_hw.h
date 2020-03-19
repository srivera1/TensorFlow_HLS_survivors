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
// 0x028 : Data signal of Conv2d_2287_conv2d_2287
//         bit 31~0 - Conv2d_2287_conv2d_2287[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Conv2d_2288_conv2d_2288
//         bit 31~0 - Conv2d_2288_conv2d_2288[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Max_pooling2d_1920_max_pooling2d_1920
//         bit 31~0 - Max_pooling2d_1920_max_pooling2d_1920[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling2d_1921_max_pooling2d_1921
//         bit 31~0 - Max_pooling2d_1921_max_pooling2d_1921[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Dense_1862_dense_1862
//         bit 31~0 - Dense_1862_dense_1862[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Dense_1863_dense_1863
//         bit 31~0 - Dense_1863_dense_1863[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Concatenate_400_concatenate_400
//         bit 31~0 - Concatenate_400_concatenate_400[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Conv2d_2289_conv2d_2289
//         bit 31~0 - Conv2d_2289_conv2d_2289[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Max_pooling2d_1922_max_pooling2d_1922
//         bit 31~0 - Max_pooling2d_1922_max_pooling2d_1922[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Max_pooling2d_1923_max_pooling2d_1923
//         bit 31~0 - Max_pooling2d_1923_max_pooling2d_1923[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Max_pooling2d_1924_max_pooling2d_1924
//         bit 31~0 - Max_pooling2d_1924_max_pooling2d_1924[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Flatten_205_flatten_205
//         bit 31~0 - Flatten_205_flatten_205[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_1864_dense_1864
//         bit 31~0 - Dense_1864_dense_1864[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Dense_1865_dense_1865
//         bit 31~0 - Dense_1865_dense_1865[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv2d_2287_weight_conv2d_2287_weight
//         bit 31~0 - Conv2d_2287_weight_conv2d_2287_weight[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv2d_2287_bias_conv2d_2287_bias
//         bit 31~0 - Conv2d_2287_bias_conv2d_2287_bias[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv2d_2288_weight_conv2d_2288_weight
//         bit 31~0 - Conv2d_2288_weight_conv2d_2288_weight[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv2d_2288_bias_conv2d_2288_bias
//         bit 31~0 - Conv2d_2288_bias_conv2d_2288_bias[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Dense_1862_weight_dense_1862_weight
//         bit 31~0 - Dense_1862_weight_dense_1862_weight[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Dense_1862_bias_dense_1862_bias
//         bit 31~0 - Dense_1862_bias_dense_1862_bias[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Dense_1863_weight_dense_1863_weight
//         bit 31~0 - Dense_1863_weight_dense_1863_weight[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Dense_1863_bias_dense_1863_bias
//         bit 31~0 - Dense_1863_bias_dense_1863_bias[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Conv2d_2289_weight_conv2d_2289_weight
//         bit 31~0 - Conv2d_2289_weight_conv2d_2289_weight[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Conv2d_2289_bias_conv2d_2289_bias
//         bit 31~0 - Conv2d_2289_bias_conv2d_2289_bias[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Dense_1864_weight_dense_1864_weight
//         bit 31~0 - Dense_1864_weight_dense_1864_weight[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_1864_bias_dense_1864_bias
//         bit 31~0 - Dense_1864_bias_dense_1864_bias[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_1865_weight_dense_1865_weight
//         bit 31~0 - Dense_1865_weight_dense_1865_weight[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Dense_1865_bias_dense_1865_bias
//         bit 31~0 - Dense_1865_bias_dense_1865_bias[31:0] (Read/Write)
// 0x104 : reserved
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
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2287_CONV2D_2287_DATA               0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2287_CONV2D_2287_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2288_CONV2D_2288_DATA               0x030
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2288_CONV2D_2288_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1920_MAX_POOLING2D_1920_DATA 0x038
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1920_MAX_POOLING2D_1920_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1921_MAX_POOLING2D_1921_DATA 0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1921_MAX_POOLING2D_1921_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1862_DENSE_1862_DATA                 0x048
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1862_DENSE_1862_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1863_DENSE_1863_DATA                 0x050
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1863_DENSE_1863_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONCATENATE_400_CONCATENATE_400_DATA       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONCATENATE_400_CONCATENATE_400_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2289_CONV2D_2289_DATA               0x060
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2289_CONV2D_2289_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1922_MAX_POOLING2D_1922_DATA 0x068
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1922_MAX_POOLING2D_1922_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1923_MAX_POOLING2D_1923_DATA 0x070
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1923_MAX_POOLING2D_1923_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING2D_1924_MAX_POOLING2D_1924_DATA 0x078
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING2D_1924_MAX_POOLING2D_1924_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_205_FLATTEN_205_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_205_FLATTEN_205_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1864_DENSE_1864_DATA                 0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1864_DENSE_1864_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1865_DENSE_1865_DATA                 0x090
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1865_DENSE_1865_DATA                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2287_WEIGHT_CONV2D_2287_WEIGHT_DATA 0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2287_WEIGHT_CONV2D_2287_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2287_BIAS_CONV2D_2287_BIAS_DATA     0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2287_BIAS_CONV2D_2287_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2288_WEIGHT_CONV2D_2288_WEIGHT_DATA 0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2288_WEIGHT_CONV2D_2288_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2288_BIAS_CONV2D_2288_BIAS_DATA     0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2288_BIAS_CONV2D_2288_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1862_WEIGHT_DENSE_1862_WEIGHT_DATA   0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1862_WEIGHT_DENSE_1862_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1862_BIAS_DENSE_1862_BIAS_DATA       0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1862_BIAS_DENSE_1862_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1863_WEIGHT_DENSE_1863_WEIGHT_DATA   0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1863_WEIGHT_DENSE_1863_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1863_BIAS_DENSE_1863_BIAS_DATA       0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1863_BIAS_DENSE_1863_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2289_WEIGHT_CONV2D_2289_WEIGHT_DATA 0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2289_WEIGHT_CONV2D_2289_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV2D_2289_BIAS_CONV2D_2289_BIAS_DATA     0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV2D_2289_BIAS_CONV2D_2289_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1864_WEIGHT_DENSE_1864_WEIGHT_DATA   0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1864_WEIGHT_DENSE_1864_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1864_BIAS_DENSE_1864_BIAS_DATA       0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1864_BIAS_DENSE_1864_BIAS_DATA       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1865_WEIGHT_DENSE_1865_WEIGHT_DATA   0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1865_WEIGHT_DENSE_1865_WEIGHT_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_1865_BIAS_DENSE_1865_BIAS_DATA       0x100
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_1865_BIAS_DENSE_1865_BIAS_DATA       32

