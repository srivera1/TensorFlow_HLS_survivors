# Hardware implementations of Neural Networks (Zynq-7020)

This repo contains a collection of digital hardware as [IP cores](https://en.wikipedia.org/wiki/Semiconductor_intellectual_property_core) that perform [neural computations](https://en.wikipedia.org/wiki/Neural_computation). These IP cores have been generated with [HLS](https://en.wikipedia.org/wiki/High-level_synthesis) technics and are based on [Keras](https://en.wikipedia.org/wiki/Keras) generated neural networks.

For every model, there is an include/ folder, which contains headers files. There is a header for each of the layers, weights, and biases of the model as well as an input/s sample. These files have been used to verify the HW implementations.
<table>
    <thead>
    <tr>
    <a href="https://github.com/srivera1/TensorFlow_HLS_survivors/raw/master/model_53942_789635"><img align="left" src="https://github.com/srivera1/TensorFlow_HLS_survivors/raw/master/model_53942_789635/model_53942_789635.png" align="left" height="430" width=auto border="10" ></a>
    <a href="https://github.com/srivera1/TensorFlow_HLS_survivors/raw/master/model_10543_138445"><img align="left" src="https://github.com/srivera1/TensorFlow_HLS_survivors/raw/master/model_10543_138445/model_10543_138445.png" align="left" height="430" width=auto border="10" ></a>
    <a href="https://github.com/srivera1/TensorFlow_HLS_survivors/raw/master/model_33755_160548"><img align="left" src="https://github.com/srivera1/TensorFlow_HLS_survivors/raw/master/model_33755_160548/model_33755_160548.png" align="left" height="430" width=auto border="10" ></a>
    <a href="https://github.com/srivera1/TensorFlow_HLS_survivors/raw/master/model_46585_660725"><img align="left" src="https://github.com/srivera1/TensorFlow_HLS_survivors/raw/master/model_46585_660725/model_46585_660725.png" align="left" height="430" width=auto border="10" ></a>
    </tr>
    </thead>
    <tbody>
    </tbody>
</table>


## Getting Started

<strike>Until now, the models uploaded have one or two inputs of 32x32 floats and 100 outputs.</strike> The operations are performed with floats of 32 bit in the digital HW. The layers of the models are of the types "GaussianNoise", "Dropout", "Activation", "Dense", "Flatten", "Concatenate", "MaxPooling2D", "Conv2D" and "InputLayer". Since "GaussianNoise", "Dropout" layers are only used for training purposes, they are not included in the HW.

The IPs have a few digital ports. The most important being the control port (AXI4-Lite) and the data port maxi_commns (AXI4 master). 

### Prerequisites

1) With python load and train the Keras model with your datasheet:

```
model = load_model("myModel.h5")
history = model.fit(x_train, y_train, batch_size=batch_size,
    epochs=epochs, verbose=1, validation_data=(x_test, y_test))
```
2) With Vivado:
    - Create the project
    - Import the Neural Network IP
    - Connect buses
    - Configure addreses
    - Synthesize

### Using

Examples:
 - [Keras model implementation and training](https://github.com/srivera1/TensorFlow_HLS_survivors/blob/master/arrythmia/clasificador_arritmia_version_aumentada_v0.ipynb)
 - [Vivado project to include a Neural Network](https://github.com/srivera1/TensorFlow_HLS_survivors/blob/master/arrythmia/arrythmia_design_1.pdf)
 - [User Space App to configure the NN](https://github.com/srivera1/TensorFlow_HLS_survivors/blob/master/arrythmia/nn_model_linux_driver.c)
 - [No driver, no DMA, PYNQ framework Neural Network accesing](https://github.com/srivera1/TensorFlow_HLS_survivors/blob/master/arrythmia/arrythmia_PYNQ_v1.ipynb)

## Running the tests

Compare the output of the digital circuit against the calculated values in python (given in the headers at include/). [If the last layer has a softmax activation matrix](https://github.com/srivera1/TensorFlow_HLS_survivors/blob/master/arrythmia/arrythmia_PYNQ_v1.ipynb), the value of the output layer will not match the value in the header; it has to be normalized.


## Authors

* **Sergio Rivera** - *Initial work* - [srivera1](https://github.com/srivera1)


## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE](LICENSE) file for details

## Acknowledgments

* The template for this Readme comes from [PurpleBooth](https://github.com/PurpleBooth)


