#include <stdio.h>           //import the library

char nameInitial = 'K';      //declare a character variable 'nameInitial' to use with characters and made it 'K'
int age = 20;                //declare an integer variable 'age' to use with whole number and made it 20
float weihght = 48.50;       //declare a float variable 'weight' with decimal number and made it 48.50
char gender[8] = "Female";   //declare a array of char to '8' to use with strings value and declare it as 'Female' 

int main() {                                    //main function
    printf("NameInitial: %c\n", nameInitial);   //display the value of 'nameInitial' and move to the next line
    printf("Age: %d\n", age);                   //display the value of 'age' and move to the next line
    printf("Weight: %f\n", weihght);            //display the value of 'weight' and move to the next line
    printf("gender: %s\n", gender);             //display the value of 'gender' and move to the next line

    return 0;                                   // running successful 

}