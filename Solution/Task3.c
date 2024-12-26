/*
 * Task Section: Loop.c
 */

#include <stdio.h>

int main() {
    // Task 1: Nested loop to print a multiplication table for numbers 1 to 5
    printf("Multiplication Table:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%d * %d = %d\t", i, j, i * j);
        }
        printf("\n");
    }

    // Task 2: While loop to sum the numbers from 1 to 10 and print the result
    int sum = 0;
    int i = 1;
    while (i <= 10) {
        sum += i;
        i++;
    }
    printf("Sum of numbers from 1 to 10 is: %d\n", sum);

    // Task 3: Do-while loop to read integers from the user until they enter a negative number
    int num;
    do {
        printf("Enter a number (negative to quit): ");
        scanf("%d", &num);
    } while (num >= 0);

    // Task 4: For loop to print the first 10 Fibonacci numbers
    int a = 0, b = 1, next;
    printf("First 10 Fibonacci numbers:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", a);
        next = a + b;
        a = b;
        b = next;
    }

    // Task 5: For loop to find the factorial of a number entered by the user
    int n, factorial = 1;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("Factorial of %d is: %d\n", n, factorial);

    return 0;
}
