/*
John Lemar L. Gonzales
BSIT1 R11 COMPUTER PROGRAMMING 1

Functions
 
Create a C program that uses functions to perform the following tasks:
a. Accept two integers from the user.
b. Calculate and display their sum, difference, product, and quotient.
c. Use separate functions for each arithmetic operation.

*/

#include <stdio.h>

// Our Function declarations
int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);

// Function formula for addition
int add(int num1, int num2) {
    return num1 + num2;
}

// Function formula for subtraction
int subtract(int num1, int num2) {
    return num1 - num2;
}

// Function formula for multiplication
int multiply(int num1, int num2) {
    return num1 * num2;
}

// Function formula for division
int divide(int num1, int num2) {
        return num1 / num2;
}

int main() {
    // Variables for the first and second numbers to calculate
    int num1, num2;

    // Accept two numbers from the user and store them in variables num1 and num2
    printf("Enter the first integer: ");//asks the user
    scanf("%d", &num1); // Stores input in num1

    printf("Enter the second integer: ");//asks the user
    scanf("%d", &num2); // Stores in num2

    // Uses the functions to calculate and display results 
    printf("Sum: %d\n", add(num1, num2));
    printf("Difference: %d\n", subtract(num1, num2));
    printf("Product: %d\n", multiply(num1, num2));
    printf("Quotient: %d\n", divide(num1, num2));

    return 0;
}
