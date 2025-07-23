#include <stdio.h>                   

int main() {                 
   
   
    float score = 90.5;             
    int score2 = 90.5;                

    printf("score = %f\n", score);    
    printf("score = %d\n", score2);  

    return 0;                         
}


//1. The difference between float and int is flost disply score = 90.500000 but int display score = 90 
//2. The reason we have to corrected the Data Type is because the float variable can hold decimal values while int variable can only hold whole numbers and can cause trouble
//3. the importance of using the correct data type is to make sure that the program display correctly and avoids errors 
//like this one here where the integer only display the whole number but not the decimal part. which is can make trouble if we need deimals to calculate something