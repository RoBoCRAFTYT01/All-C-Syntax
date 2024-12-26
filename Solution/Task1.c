/*
 * Task Section: Start.c
 */

#include <stdio.h>

int main() {
    // Task 1: Declare and initialize a new double variable and print its value
    double newDouble = 3.14159;
    printf("The value of newDouble is: %.5f\n", newDouble);

    // Task 2: Create a new string variable to store your favorite hobby and print it
    char hobby[] = "Reading";
    printf("My favorite hobby is: %s\n", hobby);

    // Task 3: Read an integer value from the user, multiply it by 2, and print the result
    int userNumber;
    printf("Enter an integer: ");
    scanf("%d", &userNumber);
    printf("Twice the number you entered is: %d\n", userNumber * 2);

    // Task 4: Add a new variable to indicate whether it's raining, and print its value
    int isRaining = 0; // 0 for no, 1 for yes
    printf("Is it raining? %s\n", isRaining ? "Yes" : "No");

    // Task 5: Display a float with 3 decimal places using printf
    float pi = 3.14159f;
    printf("The value of pi to 3 decimal places is: %.3f\n", pi);

    return 0;
}
