#include <cmath>
#include <iostream>
#include "train_data.cpp"

float sum;
float weight[100];
float layer3;
float lr;
int data_pointer;
float p_average[2] = {1000};
float c_average;



float sigmoid(double x){return 2/(1+pow(M_E,-x))-1;}     // sigmoid function for actvation

float weightFunc_sigmoid(double weight, double delta, double input,double lr){
    return weight+lr*delta*2*pow(M_E,-sum)/(1+pow(M_E,-sum))/(1+pow(M_E,-sum))*input;   //  function for updating weights.	(Used if activation function is sigmoid)
}

float weightFunc_tanh(double weight, double delta, double input,double lr){
    return weight+lr*delta*4/(pow(M_E,sum)+pow(M_E,-sum))/(pow(M_E,sum)+pow(M_E,-sum))*input;   // function for updating weights. (used if activation function is tanh)
}


int main(){
    std::cout << "This process can take up to 30 seconds, please wait patiently\n";
    for(double lr = 0; lr <= 1; lr += 0.001){
        c_average = 0.0;
        for(int t = 1; t <= 3000; t++){
            data_pointer = (t%data_size)*100;   // set the data pointer to a specific group of data
            sum = 0;
            for(int i = 0;i < 100;i++){
                sum += data_list[data_pointer+i]*weight[i];     // find the sum of all input-weight products
            }

            layer3 = tanh(sum);      //apply the activation function to the calculated sum
            c_average += (data_lable[data_pointer/100]*2-1-layer3)*(data_lable[data_pointer/100]*2-1-layer3);

            for (int j = 0;j < 100;j++){
                weight[j] = weightFunc_tanh(weight[j],(float)(data_lable[data_pointer/100]*2-1)-layer3,data_list[data_pointer+j],lr); // updating the weights by gradient decent.
            }
        }

        std::fill_n(weight, 100, 0);
        if(c_average < p_average[0]){p_average[0] = c_average; p_average[1] = lr;}  // find the smallest average loss among all iterations

    }
    std::cout << "suggested learinf rate " << p_average[1] <<"\n";

    return 0;
}