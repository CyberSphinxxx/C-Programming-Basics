#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; //character array to store the user's input
    int i, j; //variables for loop

    // Prompts the user to enter a word
    printf("Enter a word: ");
    scanf("%s", str);// Read and store the user's input

    // Display the reversed word
    printf("Reversed word: ");
    for (i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);  // Print each character in reverse order
    }
    printf("\n"); // Move to the next line for better formatting

    // Check if the word is a palindrome
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            printf("It's not a palindrome.\n"); // Informs the user if it's not a palindrome
            return 0; // Exits the program
        }
    }

    printf("It's a palindrome!\n"); // Inform the user if it's a palindrome

    return 0; // Exits the program
}