# Neural-Network-from-Scratch
A neural network built entirely with basic math functions in c++ that distinguish circles and rectangles    
# Explanation     
In normal circumstances, the step activation function choosed for a neural network is either sigmoid or tanh shown in the equations below  
         
![\Large y=\frac{1}{1+e^{-x}}](https://latex.codecogs.com/svg.latex?\Large&space;y=\frac{1}{1+e^{-x}})         
        
![\Large y=\frac{e^x-e^{-x}}{e^x+e^{-x}}](https://latex.codecogs.com/svg.latex?\Large&space;y=\frac{e^x-e^{-x}}{e^x+e^{-x}})      
          
For each individual activation functon, there has to be a corresponding function for updating weights.
In most networks, the function for updating the weight is shown below             
                       
![image](https://user-images.githubusercontent.com/101462429/164485414-74b39564-e841-4eb2-b845-17a688712405.png)
     
