// nn_dataTypes.c
// internal data types
// sergio rivera 
// 2020/03/13 22:37:56 

int i, j, k, l, m, n, o;
int i0, i1, i2, i3, i4, i5, i6, i7;

typedef struct {
	 float input[1][2000];
} input;
typedef struct {
	 float reshape_39[1][400][5];
} reshape_39;
typedef struct {
	 float conv1d_153[1][396][7];
} conv1d_153;
typedef struct {
	 float conv1d_153_weight[5][5][7];
} conv1d_153_weight;
typedef struct {
	 float conv1d_153_bias[7];
} conv1d_153_bias;
typedef struct {
	 float max_pooling1d_153[1][132][7];
} max_pooling1d_153;
typedef struct {
	 float conv1d_154[1][132][7];
} conv1d_154;
typedef struct {
	 float conv1d_154_weight[1][7][7];
} conv1d_154_weight;
typedef struct {
	 float conv1d_154_bias[7];
} conv1d_154_bias;
typedef struct {
	 float max_pooling1d_154[1][66][7];
} max_pooling1d_154;
typedef struct {
	 float conv1d_155[1][63][5];
} conv1d_155;
typedef struct {
	 float conv1d_155_weight[4][7][5];
} conv1d_155_weight;
typedef struct {
	 float conv1d_155_bias[5];
} conv1d_155_bias;
typedef struct {
	 float max_pooling1d_155[1][21][5];
} max_pooling1d_155;
typedef struct {
	 float conv1d_156[1][17][7];
} conv1d_156;
typedef struct {
	 float conv1d_156_weight[5][5][7];
} conv1d_156_weight;
typedef struct {
	 float conv1d_156_bias[7];
} conv1d_156_bias;
typedef struct {
	 float max_pooling1d_156[1][8][7];
} max_pooling1d_156;
typedef struct {
	 float batch_normalization_77[1][8][7];
} batch_normalization_77;
typedef struct {
	 float batch_normalization_77_weight[7];
} batch_normalization_77_weight;
typedef struct {
	 float batch_normalization_77_bias[7];
} batch_normalization_77_bias;
typedef struct {
	 float batch_normalization_77_gamma[7];
} batch_normalization_77_gamma;
typedef struct {
	 float batch_normalization_77_beta[7];
} batch_normalization_77_beta;
typedef struct {
	 float flatten_39[1][56];
} flatten_39;
typedef struct {
	 float dense_77[1][43];
} dense_77;
typedef struct {
	 float dense_77_weight[56][43];
} dense_77_weight;
typedef struct {
	 float dense_77_bias[43];
} dense_77_bias;
typedef struct {
	 float batch_normalization_78[1][43];
} batch_normalization_78;
typedef struct {
	 float batch_normalization_78_weight[43];
} batch_normalization_78_weight;
typedef struct {
	 float batch_normalization_78_bias[43];
} batch_normalization_78_bias;
typedef struct {
	 float batch_normalization_78_gamma[43];
} batch_normalization_78_gamma;
typedef struct {
	 float batch_normalization_78_beta[43];
} batch_normalization_78_beta;
typedef struct {
	 float dense_78[1][23];
} dense_78;
typedef struct {
	 float dense_78_weight[43][23];
} dense_78_weight;
typedef struct {
	 float dense_78_bias[23];
} dense_78_bias;
