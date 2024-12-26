/*
 * Task Section: Array.c
 */

#include <stdio.h>

int main() {
    // Task 1: Array of 5 integers, initialize them, and print their values using a loop
    int numbers[5] = {1, 2, 3, 4, 5};
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    // Task 2: Find the largest and smallest elements in an array of integers
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int max = arr[0], min = arr[0];
    for (int i = 1; i < 11; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);

    // Task 3: Function that takes an array of integers and returns the sum of its elements
    int sumArray(int arr[], int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }
    int array[] = {1, 2, 3, 4, 5};
    printf("Sum of array elements: %d\n", sumArray(array, 5));

    // Task 4: Read 5 integers from the user into an array and then print them in reverse order
    int userNumbers[5];
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &userNumbers[i]);
    }
    printf("Integers in reverse order:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d\n", userNumbers[i]);
    }

    // Task 5: Two-dimensional array to represent a 3x3 matrix, initialize it, and print its elements
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("3x3 Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
