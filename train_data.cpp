#define data_size   56
int data_lable[data_size] = 
                      {0,0,0,0,0,
                       1,1,1,1,1,
                       1,1,0,1,1,
                       1,0,1,0,1,
                       0,1,1,0,1,
                       0,1,0,1,0,
                       1,0,1,0,1,
                       0,1,0,1,0,
                       1,0,1,0,1,
                       0,1,0,1,1,
                       0,0,0,0,0,
                       1};

int data_list[data_size*1000] = 
                       {0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,1,1,1,0,0,0,0,
                        0,0,1,1,1,1,1,0,0,0,
                        0,1,1,1,1,1,1,1,0,0,
                        0,1,1,1,1,1,1,1,0,0,
                        0,1,1,1,1,1,1,1,0,0,
                        0,0,1,1,1,1,1,0,0,0,
                        0,0,0,1,1,1,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,1,1,0,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,0,1,1,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,1,1,0,0,0,0,0,
                        0,0,1,1,1,1,0,0,0,0,
                        0,0,1,1,1,1,0,0,0,0,
                        0,0,0,1,1,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,1,1,0,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,1,1,1,1,1,1,0,0,
                        0,0,1,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,0,1,1,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,1,1,1,0,0,
                        0,0,0,0,1,1,1,1,1,0,
                        0,0,0,1,1,1,1,1,1,1,
                        0,0,0,1,1,1,1,1,1,1,
                        0,0,0,1,1,1,1,1,1,1,
                        0,0,0,0,1,1,1,1,1,0,
                        0,0,0,0,0,1,1,1,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,1,1,1,1,1,1,
                        0,0,0,0,1,1,1,1,1,1,
                        0,0,0,0,1,1,1,1,1,1,
                        0,0,0,0,1,1,1,1,1,1,
                        0,0,0,0,1,1,1,1,1,1,
                        0,0,0,0,1,1,1,1,1,1,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        1,1,1,1,1,1,0,0,0,0,
                        1,1,1,1,1,1,0,0,0,0,
                        1,1,1,1,1,1,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,1,1,1,
                        0,0,0,0,0,0,0,1,1,1,
                        0,0,0,0,0,0,0,1,1,1,
                        0,0,0,0,0,0,0,1,1,1,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,1,1,1,0,0,0,0,0,0,
                        0,1,1,1,0,0,0,0,0,0,
                        0,1,1,1,0,0,0,0,0,0,
                        0,1,1,1,0,0,0,0,0,0,
                        0,1,1,1,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,1,1,0,0,0,
                        0,0,0,0,1,1,1,1,0,0,
                        0,0,0,0,1,1,1,1,0,0,
                        0,0,0,0,0,1,1,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,1,1,1,1,1,1,0,
                        0,0,0,1,1,1,1,1,1,0,
                        0,0,0,1,1,1,1,1,1,0,
                        0,0,0,1,1,1,1,1,1,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,1,1,0,0,0,0,0,0,0,
                        0,1,1,0,0,0,0,0,0,0,
                        0,1,1,0,0,0,0,0,0,0,
                        0,1,1,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0, 
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,1,1,1,0,0,0,
                        0,0,0,0,1,1,1,0,0,0,
                        0,0,0,0,1,1,1,0,0,0,
                        0,0,0,0,1,1,1,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,1,1,0,0,0,0,0,0,
                        0,1,1,1,1,0,0,0,0,0,
                        0,1,1,1,1,0,0,0,0,0,
                        0,0,1,1,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,1,1,1,0,0,
                        0,0,0,0,0,1,1,1,0,0,
                        0,0,0,0,0,1,1,1,0,0,
                        0,0,0,0,0,1,1,1,0,0,
                        0,0,0,0,0,1,1,1,0,0,
                        0,0,0,0,0,1,1,1,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,1,0,0,0,0,0,
                        0,0,0,1,1,1,0,0,0,0,
                        0,0,0,0,1,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,1,1,1,0,0,0,0,
                        0,0,0,1,1,1,0,0,0,0,
                        0,0,0,1,1,1,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0, //20
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,1,1,0,0,0,0,0,0,
                        0,1,1,1,1,0,0,0,0,0,
                        1,1,1,1,1,1,0,0,0,0,
                        1,1,1,1,1,1,0,0,0,0,
                        0,1,1,1,1,0,0,0,0,0,
                        0,0,1,1,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        1,1,1,1,1,1,0,0,0,0,
                        1,1,1,1,1,1,0,0,0,0,
                        1,1,1,1,1,1,0,0,0,0,
                        1,1,1,1,1,1,0,0,0,0,
                        1,1,1,1,1,1,0,0,0,0,
                        1,1,1,1,1,1,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        
                        0,1,1,0,0,0,0,0,0,0,
                        1,1,1,1,0,0,0,0,0,0,
                        1,1,1,1,0,0,0,0,0,0,
                        0,1,1,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,1,1,1,0,0,0,0,0,
                        0,0,1,1,1,0,0,0,0,0,
                        0,0,1,1,1,0,0,0,0,0,
                        0,0,1,1,1,0,0,0,0,0,
                        0,0,1,1,1,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,1,0,0,0,0,0,0,0,0,
                        1,1,1,0,0,0,0,0,0,0,
                        0,1,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        1,1,1,0,0,0,0,0,0,0,
                        1,1,1,0,0,0,0,0,0,0,
                        1,1,1,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                    
                        0,0,1,1,0,0,0,0,0,0,
                        0,1,1,1,1,0,0,0,0,0,
                        0,1,1,1,1,0,0,0,0,0,
                        0,0,1,1,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,1,1,1,1,0,0,0,0,0,
                        0,1,1,1,1,0,0,0,0,0,
                        0,1,1,1,1,0,0,0,0,0,
                        0,1,1,1,1,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,1,1,1,0,
                        0,0,0,0,0,1,1,1,1,1,
                        0,0,0,0,0,1,1,1,1,1,
                        0,0,0,0,0,0,1,1,1,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,   //30
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,1,1,1,1,1,
                        0,0,0,0,0,1,1,1,1,1,
                        0,0,0,0,0,1,1,1,1,1,
                        0,0,0,0,0,1,1,1,1,1,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,1,1,1,0,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,0,1,1,1,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,1,1,0,0,0,0,0,
                        0,0,1,1,1,1,0,0,0,0,
                        0,0,1,1,1,1,0,0,0,0,
                        0,0,0,1,1,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,1,1,1,1,0,0,0,0,
                        0,0,1,1,1,1,0,0,0,0,
                        0,0,1,1,1,1,0,0,0,0,
                        0,0,1,1,1,1,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,1,1,1,0,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,0,1,1,1,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,1,1,1,1,1,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,1,1,0,0,
                        0,0,0,0,0,1,1,1,1,0,
                        0,0,0,0,0,1,1,1,1,0,
                        0,0,0,0,0,0,1,1,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,1,1,1,1,0,
                        0,0,0,0,0,1,1,1,1,0,
                        0,0,0,0,0,1,1,1,1,0,
                        0,0,0,0,0,1,1,1,1,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,1,1,1,0,0,0,0,0,
                        0,1,1,1,1,1,0,0,0,0,
                        0,0,1,1,1,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,  //40
                        
                        0,1,1,1,1,1,0,0,0,0,
                        0,1,1,1,1,1,0,0,0,0,
                        0,1,1,1,1,1,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,1,1,1,0,
                        0,0,0,0,0,1,1,1,1,1,
                        0,0,0,0,0,1,1,1,1,1,
                        0,0,0,0,0,1,1,1,1,1,
                        0,0,0,0,0,0,1,1,1,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,1,1,1,1,1,
                        0,0,0,0,0,1,1,1,1,1,
                        0,0,0,0,0,1,1,1,1,1,
                        0,0,0,0,0,1,1,1,1,1,
                        0,0,0,0,0,1,1,1,1,1,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,1,1,0,0,0,
                        0,0,0,0,1,1,1,1,0,0,
                        0,0,0,0,0,1,1,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,1,1,1,1,0,0,
                        0,0,0,0,1,1,1,1,0,0,
                        0,0,0,0,1,1,1,1,0,0,    //45
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,1,1,1,0,0,0,0,0,
                        0,1,1,1,1,1,0,0,0,0,
                        0,1,1,1,1,1,0,0,0,0,
                        0,0,1,1,1,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,1,1,1,1,1,0,0,0,0,
                        0,1,1,1,1,1,0,0,0,0,
                        0,1,1,1,1,1,0,0,0,0,
                        0,1,1,1,1,1,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,1,1,0,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,0,1,1,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        1,1,1,1,0,0,0,0,0,0,
                        1,1,1,1,0,0,0,0,0,0,
                        1,1,1,1,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,

                        0,0,0,0,0,0,0,0,0,0,
                        0,0,1,1,1,1,1,1,0,0,
                        0,0,1,1,1,1,1,1,0,0,
                        0,0,1,1,1,1,1,1,0,0,
                        0,0,1,1,1,1,1,1,0,0,
                        0,0,1,1,1,1,1,1,0,0,
                        0,0,1,1,1,1,1,1,0,0,
                        0,0,1,1,1,1,1,1,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0, //50
                        
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,1,1,0,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,1,1,1,1,0,0,0,
                        0,0,0,0,1,1,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,    
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,1,1,1,0,0,0,0,0,
                        0,1,1,1,1,1,0,0,0,0,
                        1,1,1,1,1,1,1,0,0,0,
                        1,1,1,1,1,1,1,0,0,0,
                        1,1,1,1,1,1,1,0,0,0,
                        0,1,1,1,1,1,0,0,0,0,
                        0,0,1,1,1,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0, 
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,1,1,0,0,
                        0,0,0,0,0,1,1,1,1,0,
                        0,0,0,0,0,1,1,1,1,0,
                        0,0,0,0,0,0,1,1,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,1,0,0,0,0,0,
                        0,0,0,1,1,1,0,0,0,0,
                        0,0,1,1,1,1,1,0,0,0,
                        0,0,0,1,1,1,0,0,0,0,
                        0,0,0,0,1,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,1,1,1,0,0,
                        0,0,0,0,1,1,1,1,1,0,
                        0,0,0,1,1,1,1,1,1,0,
                        0,0,0,0,1,1,1,1,1,1,
                        0,0,0,0,1,1,1,1,1,0,
                        0,0,0,0,0,1,1,1,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,1,1,1,1,0,0,0,0,
                        0,0,1,1,1,1,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0};