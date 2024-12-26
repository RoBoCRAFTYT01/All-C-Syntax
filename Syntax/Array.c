/*  
 * In C, arrays are used to store multiple values of the same data type in a single variable.  
 * They provide a way to handle large amounts of data efficiently.  
*/  

#include <stdio.h>  

int main() {  
    // Declaration of an array with 5 integers  
    int numbers[5] = [1, 2, 3, 4, 5]; // Initialize the array with values  

    // Output the values in the array using a for loop  
    printf("Array elements:\n");  
    for (int i = 0; i < 5; i++) {  
        printf("Number %d: %d\n", i + 1, numbers[i]); // Print each element  
    }  

    // Example of modifying an array element  
    numbers[2] = 10; // Change the third element (index 2) to 10  

    // Output the modified array  
    printf("\nModified array elements:\n");  
    for (int i = 0; i < 5; i++) {  
        printf("Number %d: %d\n", i + 1, numbers[i]); // Print each element again  
    } 

    int size; // Declare a variable to hold the number of elements in the array  

    // Prompt the user for the number of elements they want to enter  
    printf("How many numbers will you write? ");  
    scanf("%d", &size); // Read the user's input for the size  

    // Declare an array to hold the user's numbers with the specified size  
    int numbers[size]; // Note: using variable-length arrays available in C99 and later  

    // Prompt the user to enter the numbers  
    printf("Give me the numbers you want:\n");  
    for (int i = 0; i < size; i++) { // Loop to get 'size' numbers from the user  
        scanf("%d", &numbers[i]); // Read each number and store it in the array  
    }  

    // Optionally, you could add code here to display the entered numbers  
    printf("You have entered the following numbers:\n");  
    for (int i = 0; i < size; i++) { // Loop to print the entered numbers  
        printf("%d ", numbers[i]); // Print each number  
    }  
    printf("\n"); // Print a new line for better output formatting  

    return 0; // End of program  
}