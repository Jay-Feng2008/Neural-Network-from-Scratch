#include <iostream>
#include <cmath>
#include <fstream>
#include "train_data.cpp"
#include "weight.cpp"

float sum = 0;
int t = 1;
int wrongs;
float layer3;
float lr = 0.08; // learning rate.
int data_pointer;

float sigmoid(float x){return 2/(1+pow(M_E,-x))-1;}     // sigmoid function for actvation

float weightFunc_sigmoid(float weight, float delta, float input){
    return weight+lr*delta*2*pow(M_E,-sum)/(1+pow(M_E,-sum))/(1+pow(M_E,-sum))*input;   //  function for updating weights.    (used if activation function is sigmoid)
}

float weightFunc_tanh(float weight, float delta, float input){
    return weight+lr*delta*4/(pow(M_E,sum)+pow(M_E,-sum))/(pow(M_E,sum)+pow(M_E,-sum))*input;   // function for updating weights. (used if activation function is tanh)
}


int main(){
    srand(time(NULL));
    std::ofstream myfile;
    std::ofstream lossFile;
    lossFile.open("Loss.txt");
    for(int t = 1; t <= 200000; t++){
        data_pointer = (t%data_size)*100;   // set the data_pointer to a spcific group of data
        sum = 0;
        for(int i = 0;i < 100;i++){
            sum += data_list[data_pointer+i]*weight[i];     // find the sum of all input-weight products
        }

        layer3 = tanh(sum);      //apply the activation function to the calculated sum
        lossFile << (data_lable[data_pointer/100]*2-1-layer3)*(data_lable[data_pointer/100]*2-1-layer3) << "\n";

        for (int j = 0;j < 100;j++){
            weight[j] = weightFunc_tanh(weight[j],(float)(data_lable[data_pointer/100]*2-1)-layer3,data_list[data_pointer+j]); // updating the weights by gradient decent.
        }
    }

    myfile.open ("weight.cpp");myfile << "float weight[100] = {"; for (double i : weight) myfile << i <<",";myfile << "};";    //rewrite the weight.cpp file to update stored weights
    myfile.close();     
    lossFile.close();

    return 0;
}
