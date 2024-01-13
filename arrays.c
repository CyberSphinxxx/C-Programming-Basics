/*
John Lemar L. Gonzales
BSIT1 R11 COMPUTER PROGRAMMING 1

Arrays
 
Write a C program that performs the following operations on an array:
a. Accepts 5 integers from the user and stores them in an array.
b. Finds and displays the sum and average of the elements in the array.
c. Finds and displays the largest and smallest elements in the array.

*/

#include <stdio.h>

void separator(){// just a function for separating
    printf("==============================\n");
}

int main() {
    // array to store 5 int numbers
    int NumbersArray[5];

    // Input 5 integers from the user and store them in the array
    // Asks the user to input 5 integers and then store it to the
    separator();
    printf("Please Enter 5 Numbers\n");
    separator();
    
    //loop to ask user to input a number
    for (int i = 0; i < 5; i++) { //loop formula, if i is equals to 5, the loop stops
        printf("Enter a Number %d: ", i + 1);//asks user to enter a number, then i+1 the loop for every input
        scanf("%d", &NumbersArray[i]); //stores the inputs inside our NumbersArray, which can hold 5 numbers
    }

    // Calculate the sum and average of the array elements
    int sum = 0;//starts at 0
    for (int i = 0; i < 5; i++) {
        sum += NumbersArray[i]; // Add each numbers inside the array to the sum variable
    }
    double average = (double)sum / 5; // formula to get the avarage number

    // Finds the largest and smallest numbers in the array
    int largest = NumbersArray[0], smallest = NumbersArray[0]; // Assumes the first number as both the largest and smallest
    for (int i = 1; i < 5; i++) {
        if (NumbersArray[i] > largest) largest = NumbersArray[i]; // the code updates 'largest' if a larger number is found
        if (NumbersArray[i] < smallest) smallest = NumbersArray[i]; // the code updates 'smallest' if a smaller number is found
    }

    // Just displays the results
    separator();
    printf("Sum of all numbers: %d\n", sum);
    printf("The Average: %.2f\n", average);
    printf("The Largest Number is: %d\n", largest);
    printf("The Smallest Number is: %d\n",smallest);
    separator();

    return 0;
}
