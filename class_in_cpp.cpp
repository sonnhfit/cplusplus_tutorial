#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>

//list ANN cost
enum ANN_COST{
    COST_MSE
};

//ANN activation is tanh, relu, migm function
enum ANN_ACTIVATION{
    A_TANH,
    A_RELU,
    A_SIGM,
};

struct ANNConfig {
    vector<int> topology;
    double bias;
    double learningRate;
    double momentum;
    int epoch;
    ANN_ACTIVATION hActivation;
    ANN_ACTIVATION oActivation;
    ANN_COST cost;
    string trainingFile;
    string labelsFile;
    string weightsFile;
};

//i have a class
class NeuralNetwork
{
public:
    //contructor function
    NeuralNetwork(ANNconfig config); //paramater of function is a structure
    

};
