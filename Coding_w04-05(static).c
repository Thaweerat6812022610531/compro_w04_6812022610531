#include <stdio.h>       

void countCall() {                                               

    static int counter = 0;                                        
    counter++;                                                           
    printf("Call Function: Counter = %d\n", counter);            
    
}

int main(){                                                       

    printf("Starting Function calls...\n");                        
    countCall();                                             
    printf("After first call\n");                                
    countCall();                                                    

    return 0;                                                               
                                                                          
}

//The static variable will keep its value, when the CountCall function is called multiple times, it will turn from 1 to 2 and so on.
//while the non-static variable will not keep its value, so when the CountCall function is called multiple times, it will reset to 1 each time.
