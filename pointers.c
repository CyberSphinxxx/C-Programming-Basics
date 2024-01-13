/*

John Lemar L. Gonzales
BSIT1 R11 COMPUTER PROGRAMMING 1

Pointers

Develop a C program that demonstrates the use of pointers.
Create an integer variable, assign a value to it,
and then use a pointer to modify the value of the variable.
Finally, print the modified value.

*/
#include <stdio.h>

void separator(){// Function to print a separator line
    printf("========================================\n");
}
int main() {
    //integer variable, stores the input here
    int num;
    
    separator();
    printf("Enter a number: ");//Prompts the user to input an initial value
    scanf("%d", &num);

    //pointer to an integer and initialize it with the address of 'num'
    int *ptr = &num;
    
    printf("Original value of number is: %d\n", num);// Prints the original value of 'num'
    separator();
    
    int originalValue = num;// Stores the original value before modification

    printf("Enter a number to change the value: ");//Asks the user for a modified value
    scanf("%d", ptr);//stores that modified value here

    separator();
    printf("Modified value of number is: %d\n", num);//Prints the modified value of 'num'

    printf("Original value of number was: %d\n", originalValue);//Prints the original value
    separator();
    return 0;
}
