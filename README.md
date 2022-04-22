# Neural-Network-from-Scratch
A neural network built entirely with basic math functions in c++ that distinguish circles and rectangles    
# Explanation     
This neural network utilize the gradient descent algorithm                  
                
In normal circumstances, the step activation function chosed for a neural network is either sigmoid or tanh shown in the equations below  
         
![image](https://user-images.githubusercontent.com/101462429/164486917-0d8785a5-5a6e-4f6b-a846-ed40c1bfad71.png)         

        
![image](https://user-images.githubusercontent.com/101462429/164487397-27d4892c-b37b-4cb2-be77-4e9844d27dbe.png)      
          
For each individual activation function, there has to be a corresponding function for updating weights.
In most networks, the function for updating the weight is shown below             
                       
![image](https://user-images.githubusercontent.com/101462429/164508633-e81ac128-f6c9-4c52-8b70-edbcdb7c36df.png)                    
            
W':      New weight that has been updated.      
W:       A Weight which connects two neurons that need to be update.           
m, n:    Index values expressing the relative position of the input neuron.                  
m',n':   Index values expressing the relative position of the output neurone.                 
Eta:     Learning Rate.            
Delta:   Loss       
f(u):    The output of the input neuron as a function of "u".          
u:       The sum of the product of each weight and output of output neurons in the previous.          
X:       The output of the output neuron which the weight in connecting.           
Notice the function f also has index m and n. However in most models the function for each neuron is the same. Therefore, the index of f does not matter too much.              
                 
The configuration of neurons is shown in the figure below                                  
<img width="530" alt="Screen Shot 2022-04-22 at 00 29 16" src="https://user-images.githubusercontent.com/101462429/164507828-8eaf267f-63b0-49e3-88f5-8c1f7ed7a6a4.png">                  
                                
                                
BTW:                         
*The equation might seem scary to you, but it's just something derived from the gradient descent equation (below). There are plenty of resources online so search it yourself.                     
![image](https://user-images.githubusercontent.com/101462429/164511425-c43a9cd2-69e0-48e0-89bb-9c19c08a4a2b.png)                 
                                  
Back to our topic:                       
Consider our model, which is a singal-layer network with all neurons sharing the same activation function. We can simplify the equation into something like this:                     
![image](https://user-images.githubusercontent.com/101462429/164514530-1a181c12-f42b-445a-9513-c311985f1fad.png)                
                     
The configuration of the neurons is shown in the figure below                 
<img width="475" alt="Screen Shot 2022-04-22 at 01 21 46" src="https://user-images.githubusercontent.com/101462429/164516159-c40fcca8-901a-476e-9322-e4d0bb98856e.png">                      
                  
Plugging in the sigmoid and tanh functions:              
![image](https://user-images.githubusercontent.com/101462429/164530041-0b700274-ddca-4041-b289-acf6d4b0d76d.png)           
![image](https://user-images.githubusercontent.com/101462429/164531202-7627c915-c780-46f5-954b-8b07b462d13a.png)          
                
# Running         
For mac and linux users, first download the repository containing all codes. Then run the executable files in a terminal.              
You might need to change the permissions first if the terminal returns "permission denied".            
`sudo chmod 775 <filename>`           
                  
For windows users, you have to manually compile and run the c++ codes.              
              
More information will be show in the next section.              
                   
# More Information      
To train the network, run the executable file named "train".                 
`./train`    
For windows user, compile train.cpp and run it.                      
The program will take 3 to 4 seconds.           
                 
To change the parameters of the training, open train.cpp and tweak some values in the activation function or learning rate.                          
<img width="675" alt="Screen Shot 2022-04-22 at 16 16 43" src="https://user-images.githubusercontent.com/101462429/164648121-376eb7d8-1832-4b21-9c02-807c590244b1.png">              
                
After changing the activation function or training data, you might need a new learning rate.            
To find an appropriate learning rate, copy the activation function to learning_rate.cpp and run the executable file named "lr"            
<img width="692" alt="Screen Shot 2022-04-22 at 16 00 03" src="https://user-images.githubusercontent.com/101462429/164644631-2e479e84-5123-413d-be7c-c41339c6bc65.png">            
              
To swich between sigmoid and tanh activation or any activation functions you designed, change the function in line 35 and 38 of train.cpp          
<img width="949" alt="Screen Shot 2022-04-22 at 16 13 19" src="https://user-images.githubusercontent.com/101462429/164647045-477a2396-5026-4d67-9f5c-d3e2683b498b.png">              
             
To test the network, open main.cpp first. You can see a array named "data_array". Copy a set of data from train_data.cpp. If the network is trained properly, then it should be able to distinguish a circles(ellipses) and rectangles.          
For example:    
Assuming this a an array of data fed in to the network:        
`float data_array[100]={`           
`                        0,0,0,0,0,0,0,0,0,0,  `    
`                        0,0,0,0,0,0,0,0,0,0,  `        
`                        0,0,0,0,0,0,0,0,0,0,  `         
`                        0,0,0,1,1,1,0,0,0,0,  `           
`                        0,0,0,1,1,1,0,0,0,0,  `        
`                        0,0,0,1,1,1,0,0,0,0,  `       
`                        0,0,0,0,0,0,0,0,0,0,  `         
`                        0,0,0,0,0,0,0,0,0,0,  `       
`                        0,0,0,0,0,0,0,0,0,0,  `        
`                        0,0,0,0,0,0,0,0,0,0,};`              
                      
