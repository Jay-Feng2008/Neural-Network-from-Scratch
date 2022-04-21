#include <iostream>
#include "weight.cpp"
using namespace std;

float data_array[100]=
                   {    0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,1,1,1,1,0,0,0,0,
                        0,0,1,1,1,1,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,};



float sum = 0;
int main(){

        sum = 0;
        for(int i = 0;i < 100;i++){
            sum += data_array[i]*weight[i];
        }
        if(sum > 0){
            cout << "retangle" <<sum<< endl;
        }
        else{
            cout << "circle" <<sum<< endl;
        }
         
    
    return 0;
}
