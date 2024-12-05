/*
 * Welcome to learning C programming!
 * This file introduces basic C syntax to help you get started.
 * For additional resources, refer to the README file.
 */

#include <stdio.h>  // Standard library for input and output functions
#include <stdbool.h> // Library for boolean data type

// Every C program starts with a function, typically named `main`.

int main() { 
    // Note: Always end statements with a semicolon ";"

    /*
     * C supports various data types to store information in memory (RAM):
     * - Numbers: 
     *      - int: Integer values (e.g., 1, 2, -3)
     *      - float: Single precision floating-point numbers (e.g., 3.14)
     *      - double: Double precision floating-point numbers (e.g., 2.718281828)
     * - Strings: 
     *      - char: A single character or array of characters (strings are enclosed in double quotes: "text")
     * - Boolean:
     *      - bool: Represents `true` or `false` (requires <stdbool.h>)
     */

    // Examples:
    int num1 = 5;
    float num2 = 5.23f;
    double num3 = 10.123456789;

    char string[] = "Raouf"; // Use char arrays for strings
    bool state = true;

    // Output data using printf
    printf("The value of num1 is: %d\n", num1); // `%d` is a placeholder for integers
    printf("The value of num2 is: %.2f\n", num2); // `%f` is for floats; `%.2f` limits to 2 decimal places
    printf("The value of num3 is: %.9f\n", num3); // `%f` with more precision for double
    printf("Hello, %s!\n", string); // `%s` is for strings

    printf("Your current state is: %s\n", state ? "true" : "false"); // Ternary operator for boolean output ( you don't need it right now )

    // Explanation:
    // - `printf` is a function used to display text and variable values to the console.
    // - Format specifiers like `%d`, `%f`, and `%s` allow dynamic data output.

    // Input from the user using `scanf`
    int userNumber;

    printf("Please select a number between 1 and 10: ");
    scanf("%d", &userNumber); // `&` is used to provide the address of the variable where the value will be stored

    printf("You selected the number: %d\n", userNumber);

    // Notes:
    // - `scanf` reads user input and stores it in the specified variable.
    // - Always use the correct format specifier (`%d`, `%f`, etc.) with both `printf` and `scanf`.

    return 0; // Return 0 indicates the program executed successfully
}
