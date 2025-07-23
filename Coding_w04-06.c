#include <stdio.h>

const int GLOBAL_RATE = 20; 

void calculate() {

    const int LOCAL_BONUS = 80; 

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {

    calculate();
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);

    return 0;
}

//1. The GLOBAL_RATE is a constant variable that is declare outside of function, making it accessible throughout the program.
// The LOCAL_BONUS is a constant variable that is declare inside the function, making it only accessible within that function.
// when run the program, it will display Global rate = 10 and Local bonus = 50 but when we call the calculate function again in main function it will
// only display Global rate = 10 because the Local bonus is not accessible outside of the function.

//2. when we change the GlOBAL_RATE to 20 and LOCAL_BONUS to 80, the output will be:
// GLOBAL_RATE = 20 and LOCAL_BONUS = 80
// and when we call the calculate function again in main function it will display GLOBAL_RATE = 20 

//3. The reasom why we can't use the LOCAL_BONUS outside of the function is because it is declared in a function, so it is only accessible within that function. 

//4. From the experiment we learn that the global variable can be accessed from anywhere in the program
// while the local variable can only be accessed within the function that is declared in.