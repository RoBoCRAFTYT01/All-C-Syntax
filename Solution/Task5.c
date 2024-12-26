/* 
* Task Section: Void.c 
*/

#include <stdio.h>

// Task 1: Function that prints a greeting message including the user's name
void greetUser(char name[]) {
    printf("Hello, %s!\n", name);
}

// Task 2: Function that accepts two integers as parameters and prints their product
void printProduct(int a, int b) {
    printf("The product of %d and %d is: %d\n", a, b, a * b);
}

// Task 3: Void function that swaps the values of two integer variables using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Task 4: Function that takes an array and its size as parameters, and prints the array elements
void printArray(int arr[], int size) {
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}

// Task 5: Function that calculates the area of a rectangle given its length and width, and prints the result
void printRectangleArea(float length, float width) {
    float area = length * width;
    printf("The area of the rectangle is: %.2f\n", area);
}

int main() {
    // Testing Task 1
    char name[] = "Raouf";
    greetUser(name);

    // Testing Task 2
    int num1 = 5, num2 = 10;
    printProduct(num1, num2);

    // Testing Task 3
    int x = 15, y = 30;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);

    // Testing Task 4
    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 5);

    // Testing Task 5
    float length = 7.5, width = 3.2;
    printRectangleArea(length, width);

    return 0;
}
