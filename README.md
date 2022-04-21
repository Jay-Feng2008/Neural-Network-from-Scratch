# Neural-Network-from-Scratch
A neural network built entirely with basic math functions in c++ that distinguish circles and rectangles    
# Explanation     
In normal circumstances, the step activation function choosed for a neural network is either sigmoid or tanh shown in the equations below  
         
![image](https://user-images.githubusercontent.com/101462429/164486917-0d8785a5-5a6e-4f6b-a846-ed40c1bfad71.png)         

        
![image](https://user-images.githubusercontent.com/101462429/164487397-27d4892c-b37b-4cb2-be77-4e9844d27dbe.png)      
          
For each individual activation functon, there has to be a corresponding function for updating weights.
In most networks, the function for updating the weight is shown below             
                       
![image](https://user-images.githubusercontent.com/101462429/164508633-e81ac128-f6c9-4c52-8b70-edbcdb7c36df.png)                    
            
W':      New weight that has been updated.      
W:       A Weight which connects two neurons that need to be update.           
m, n:    Index values expressing the relative position of the input neuron.                  
m',n':   Index values expressing the relative position of the output neruon.                 
Eta:     Learning Rate.            
Delta:   Loss       
f(u):    The output of the input neuron as a function of "u".          
u:       The sum of the product of each weight and output of output neurons in the previous.          
X:       The output of the output neuron which the weight in connecting.           
Notice the function f also has index m and n. However in most modles the function for each neuron is the same. Therefore, the index of f does not matter too much.              
                 
The configuration of neurons is shown in the figure below                                  
<img width="530" alt="Screen Shot 2022-04-22 at 00 29 16" src="https://user-images.githubusercontent.com/101462429/164507828-8eaf267f-63b0-49e3-88f5-8c1f7ed7a6a4.png">                  
                                
                                
BTW:                         
*The equation might seem scary to you, but it's just something derived from the gradient descent eqution (below). There are plenty of resources online so search it yourself.                     
![image](https://user-images.githubusercontent.com/101462429/164511425-c43a9cd2-69e0-48e0-89bb-9c19c08a4a2b.png)                 
                                  
Back to our topic:                       
Consider our model, which is a singal-layer network with all neurons sharing the same activation function. We can simplify the equation into something like this:                     
![image](https://user-images.githubusercontent.com/101462429/164514530-1a181c12-f42b-445a-9513-c311985f1fad.png)                
                     
The configuration of the neurons is shown in the figure below                 
<img width="475" alt="Screen Shot 2022-04-22 at 01 21 46" src="https://user-images.githubusercontent.com/101462429/164516159-c40fcca8-901a-476e-9322-e4d0bb98856e.png">                      
