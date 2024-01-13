/*

John Lemar L. Gonzales
BSIT1 R11 COMPUTER PROGRAMMING 1

Scope Rules
 
Write a C program that demonstrates the concepts of scope rules.
Declare variables with the same name in different scopes (local and global).
Output the values of these variables in different scopes to show how scope rules work in C.

*/

#include <stdio.h>

int globalVar; // Global variable

// Separator line to make code pretty
void separator() {
    printf("===========================================\n");
}

// Function to show variable scope
void displayData() {
    // Local variable with the same name as globalVar
    int localVar;

    printf("Inside displayData Function:\n");

    // Ask the user to input a value for the local variable
    printf("Enter a value for the local variable: ");
    scanf("%d", &localVar); // Stores input here

    // Prints local and global variables
    printf("Local variable: %d\n", localVar);
    printf("Global variable: %d\n", globalVar);
    separator();
}

int main() {
    // Local variable with the same name as globalVar
    int localVar;

    separator();
    printf("Inside main:\n");

    // Input for global variable
    printf("Enter a value for the global variable: ");
    scanf("%d", &globalVar);

    // Input for local variable
    printf("Enter a value for the local variable: ");
    scanf("%d", &localVar);

    // Prints values of local and global variable
    printf("Local variable: %d\n", localVar);
    printf("Global variable: %d\n", globalVar);
    separator();

    displayData(); // Calls the displayData function

    return 0;
}
