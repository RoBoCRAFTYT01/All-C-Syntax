/*
 * This file provides detailed examples of functions in C,
 * including functions with no return values (void) and functions
 * that return values and accept parameters.
 */

#include <stdio.h>

// Function with no return value (void)
void greet() {
    printf("Hello, User!\n");
}

// Function that returns an integer value
int add(int a, int b) {
    return a + b;
}

// Function that accepts parameters and returns nothing
void printSum(int a, int b) {
    int sum = a + b;
    printf("The sum of %d and %d is: %d\n", a, b, sum);
}

// Main function to test the above functions
int main() {
    // Calling the greet function
    greet();

    // Calling the add function and printing the result
    int result = add(5, 3);
    printf("The result of adding 5 and 3 is: %d\n", result);

    // Calling the printSum function
    printSum(4, 7);

    return 0; // Return 0 indicates the program executed successfully
}
