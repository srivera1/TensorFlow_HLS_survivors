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
// 0x020 : Data signal of Reshape_39_reshape_39
//         bit 31~0 - Reshape_39_reshape_39[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of Conv1d_153_conv1d_153
//         bit 31~0 - Conv1d_153_conv1d_153[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of Max_pooling1d_153_max_pooling1d_153
//         bit 31~0 - Max_pooling1d_153_max_pooling1d_153[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of Conv1d_154_conv1d_154
//         bit 31~0 - Conv1d_154_conv1d_154[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of Max_pooling1d_154_max_pooling1d_154
//         bit 31~0 - Max_pooling1d_154_max_pooling1d_154[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of Conv1d_155_conv1d_155
//         bit 31~0 - Conv1d_155_conv1d_155[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of Max_pooling1d_155_max_pooling1d_155
//         bit 31~0 - Max_pooling1d_155_max_pooling1d_155[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of Conv1d_156_conv1d_156
//         bit 31~0 - Conv1d_156_conv1d_156[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of Max_pooling1d_156_max_pooling1d_156
//         bit 31~0 - Max_pooling1d_156_max_pooling1d_156[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of Batch_normalization_77_batch_normalization_77
//         bit 31~0 - Batch_normalization_77_batch_normalization_77[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of Flatten_39_flatten_39
//         bit 31~0 - Flatten_39_flatten_39[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of Dense_77_dense_77
//         bit 31~0 - Dense_77_dense_77[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of Batch_normalization_78_batch_normalization_78
//         bit 31~0 - Batch_normalization_78_batch_normalization_78[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of Dense_78_dense_78
//         bit 31~0 - Dense_78_dense_78[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of Conv1d_153_weight_conv1d_153_weight
//         bit 31~0 - Conv1d_153_weight_conv1d_153_weight[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of Conv1d_153_bias_conv1d_153_bias
//         bit 31~0 - Conv1d_153_bias_conv1d_153_bias[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of Conv1d_154_weight_conv1d_154_weight
//         bit 31~0 - Conv1d_154_weight_conv1d_154_weight[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of Conv1d_154_bias_conv1d_154_bias
//         bit 31~0 - Conv1d_154_bias_conv1d_154_bias[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of Conv1d_155_weight_conv1d_155_weight
//         bit 31~0 - Conv1d_155_weight_conv1d_155_weight[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of Conv1d_155_bias_conv1d_155_bias
//         bit 31~0 - Conv1d_155_bias_conv1d_155_bias[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of Conv1d_156_weight_conv1d_156_weight
//         bit 31~0 - Conv1d_156_weight_conv1d_156_weight[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of Conv1d_156_bias_conv1d_156_bias
//         bit 31~0 - Conv1d_156_bias_conv1d_156_bias[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of Batch_normalization_77_weight_batch_normalization_77_weight
//         bit 31~0 - Batch_normalization_77_weight_batch_normalization_77_weight[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of Batch_normalization_77_bias_batch_normalization_77_bias
//         bit 31~0 - Batch_normalization_77_bias_batch_normalization_77_bias[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of Batch_normalization_77_gamma_batch_normalization_77_gamma
//         bit 31~0 - Batch_normalization_77_gamma_batch_normalization_77_gamma[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of Batch_normalization_77_beta_batch_normalization_77_beta
//         bit 31~0 - Batch_normalization_77_beta_batch_normalization_77_beta[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of Dense_77_weight_dense_77_weight
//         bit 31~0 - Dense_77_weight_dense_77_weight[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of Dense_77_bias_dense_77_bias
//         bit 31~0 - Dense_77_bias_dense_77_bias[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of Batch_normalization_78_weight_batch_normalization_78_weight
//         bit 31~0 - Batch_normalization_78_weight_batch_normalization_78_weight[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of Batch_normalization_78_bias_batch_normalization_78_bias
//         bit 31~0 - Batch_normalization_78_bias_batch_normalization_78_bias[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of Batch_normalization_78_gamma_batch_normalization_78_gamma
//         bit 31~0 - Batch_normalization_78_gamma_batch_normalization_78_gamma[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of Batch_normalization_78_beta_batch_normalization_78_beta
//         bit 31~0 - Batch_normalization_78_beta_batch_normalization_78_beta[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of Dense_78_weight_dense_78_weight
//         bit 31~0 - Dense_78_weight_dense_78_weight[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of Dense_78_bias_dense_78_bias
//         bit 31~0 - Dense_78_bias_dense_78_bias[31:0] (Read/Write)
// 0x12c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNN_MODEL_TOP_CONTROL_ADDR_AP_CTRL                                                          0x000
#define XNN_MODEL_TOP_CONTROL_ADDR_GIE                                                              0x004
#define XNN_MODEL_TOP_CONTROL_ADDR_IER                                                              0x008
#define XNN_MODEL_TOP_CONTROL_ADDR_ISR                                                              0x00c
#define XNN_MODEL_TOP_CONTROL_ADDR_AP_RETURN                                                        0x010
#define XNN_MODEL_TOP_CONTROL_BITS_AP_RETURN                                                        32
#define XNN_MODEL_TOP_CONTROL_ADDR_INPUT_INPUT_DATA                                                 0x018
#define XNN_MODEL_TOP_CONTROL_BITS_INPUT_INPUT_DATA                                                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_RESHAPE_39_RESHAPE_39_DATA                                       0x020
#define XNN_MODEL_TOP_CONTROL_BITS_RESHAPE_39_RESHAPE_39_DATA                                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV1D_153_CONV1D_153_DATA                                       0x028
#define XNN_MODEL_TOP_CONTROL_BITS_CONV1D_153_CONV1D_153_DATA                                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING1D_153_MAX_POOLING1D_153_DATA                         0x030
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING1D_153_MAX_POOLING1D_153_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV1D_154_CONV1D_154_DATA                                       0x038
#define XNN_MODEL_TOP_CONTROL_BITS_CONV1D_154_CONV1D_154_DATA                                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING1D_154_MAX_POOLING1D_154_DATA                         0x040
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING1D_154_MAX_POOLING1D_154_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV1D_155_CONV1D_155_DATA                                       0x048
#define XNN_MODEL_TOP_CONTROL_BITS_CONV1D_155_CONV1D_155_DATA                                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING1D_155_MAX_POOLING1D_155_DATA                         0x050
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING1D_155_MAX_POOLING1D_155_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV1D_156_CONV1D_156_DATA                                       0x058
#define XNN_MODEL_TOP_CONTROL_BITS_CONV1D_156_CONV1D_156_DATA                                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_MAX_POOLING1D_156_MAX_POOLING1D_156_DATA                         0x060
#define XNN_MODEL_TOP_CONTROL_BITS_MAX_POOLING1D_156_MAX_POOLING1D_156_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_BATCH_NORMALIZATION_77_BATCH_NORMALIZATION_77_DATA               0x068
#define XNN_MODEL_TOP_CONTROL_BITS_BATCH_NORMALIZATION_77_BATCH_NORMALIZATION_77_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_FLATTEN_39_FLATTEN_39_DATA                                       0x070
#define XNN_MODEL_TOP_CONTROL_BITS_FLATTEN_39_FLATTEN_39_DATA                                       32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_77_DENSE_77_DATA                                           0x078
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_77_DENSE_77_DATA                                           32
#define XNN_MODEL_TOP_CONTROL_ADDR_BATCH_NORMALIZATION_78_BATCH_NORMALIZATION_78_DATA               0x080
#define XNN_MODEL_TOP_CONTROL_BITS_BATCH_NORMALIZATION_78_BATCH_NORMALIZATION_78_DATA               32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_78_DENSE_78_DATA                                           0x088
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_78_DENSE_78_DATA                                           32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV1D_153_WEIGHT_CONV1D_153_WEIGHT_DATA                         0x090
#define XNN_MODEL_TOP_CONTROL_BITS_CONV1D_153_WEIGHT_CONV1D_153_WEIGHT_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV1D_153_BIAS_CONV1D_153_BIAS_DATA                             0x098
#define XNN_MODEL_TOP_CONTROL_BITS_CONV1D_153_BIAS_CONV1D_153_BIAS_DATA                             32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV1D_154_WEIGHT_CONV1D_154_WEIGHT_DATA                         0x0a0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV1D_154_WEIGHT_CONV1D_154_WEIGHT_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV1D_154_BIAS_CONV1D_154_BIAS_DATA                             0x0a8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV1D_154_BIAS_CONV1D_154_BIAS_DATA                             32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV1D_155_WEIGHT_CONV1D_155_WEIGHT_DATA                         0x0b0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV1D_155_WEIGHT_CONV1D_155_WEIGHT_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV1D_155_BIAS_CONV1D_155_BIAS_DATA                             0x0b8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV1D_155_BIAS_CONV1D_155_BIAS_DATA                             32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV1D_156_WEIGHT_CONV1D_156_WEIGHT_DATA                         0x0c0
#define XNN_MODEL_TOP_CONTROL_BITS_CONV1D_156_WEIGHT_CONV1D_156_WEIGHT_DATA                         32
#define XNN_MODEL_TOP_CONTROL_ADDR_CONV1D_156_BIAS_CONV1D_156_BIAS_DATA                             0x0c8
#define XNN_MODEL_TOP_CONTROL_BITS_CONV1D_156_BIAS_CONV1D_156_BIAS_DATA                             32
#define XNN_MODEL_TOP_CONTROL_ADDR_BATCH_NORMALIZATION_77_WEIGHT_BATCH_NORMALIZATION_77_WEIGHT_DATA 0x0d0
#define XNN_MODEL_TOP_CONTROL_BITS_BATCH_NORMALIZATION_77_WEIGHT_BATCH_NORMALIZATION_77_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_BATCH_NORMALIZATION_77_BIAS_BATCH_NORMALIZATION_77_BIAS_DATA     0x0d8
#define XNN_MODEL_TOP_CONTROL_BITS_BATCH_NORMALIZATION_77_BIAS_BATCH_NORMALIZATION_77_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_BATCH_NORMALIZATION_77_GAMMA_BATCH_NORMALIZATION_77_GAMMA_DATA   0x0e0
#define XNN_MODEL_TOP_CONTROL_BITS_BATCH_NORMALIZATION_77_GAMMA_BATCH_NORMALIZATION_77_GAMMA_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_BATCH_NORMALIZATION_77_BETA_BATCH_NORMALIZATION_77_BETA_DATA     0x0e8
#define XNN_MODEL_TOP_CONTROL_BITS_BATCH_NORMALIZATION_77_BETA_BATCH_NORMALIZATION_77_BETA_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_77_WEIGHT_DENSE_77_WEIGHT_DATA                             0x0f0
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_77_WEIGHT_DENSE_77_WEIGHT_DATA                             32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_77_BIAS_DENSE_77_BIAS_DATA                                 0x0f8
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_77_BIAS_DENSE_77_BIAS_DATA                                 32
#define XNN_MODEL_TOP_CONTROL_ADDR_BATCH_NORMALIZATION_78_WEIGHT_BATCH_NORMALIZATION_78_WEIGHT_DATA 0x100
#define XNN_MODEL_TOP_CONTROL_BITS_BATCH_NORMALIZATION_78_WEIGHT_BATCH_NORMALIZATION_78_WEIGHT_DATA 32
#define XNN_MODEL_TOP_CONTROL_ADDR_BATCH_NORMALIZATION_78_BIAS_BATCH_NORMALIZATION_78_BIAS_DATA     0x108
#define XNN_MODEL_TOP_CONTROL_BITS_BATCH_NORMALIZATION_78_BIAS_BATCH_NORMALIZATION_78_BIAS_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_BATCH_NORMALIZATION_78_GAMMA_BATCH_NORMALIZATION_78_GAMMA_DATA   0x110
#define XNN_MODEL_TOP_CONTROL_BITS_BATCH_NORMALIZATION_78_GAMMA_BATCH_NORMALIZATION_78_GAMMA_DATA   32
#define XNN_MODEL_TOP_CONTROL_ADDR_BATCH_NORMALIZATION_78_BETA_BATCH_NORMALIZATION_78_BETA_DATA     0x118
#define XNN_MODEL_TOP_CONTROL_BITS_BATCH_NORMALIZATION_78_BETA_BATCH_NORMALIZATION_78_BETA_DATA     32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_78_WEIGHT_DENSE_78_WEIGHT_DATA                             0x120
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_78_WEIGHT_DENSE_78_WEIGHT_DATA                             32
#define XNN_MODEL_TOP_CONTROL_ADDR_DENSE_78_BIAS_DENSE_78_BIAS_DATA                                 0x128
#define XNN_MODEL_TOP_CONTROL_BITS_DENSE_78_BIAS_DENSE_78_BIAS_DATA                                 32

