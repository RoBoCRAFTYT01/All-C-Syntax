/*
    In C, there are three types of loop statements:
    1. `for` loop
    2. `while` loop
    3. `do-while` loop
    
    Each of these loops is used to repeat a block of code multiple times under certain conditions.
*/

#include <stdio.h>

int main() {
    
    // 1. `for` loop: Used when the number of iterations is known beforehand.
    printf("For loop example:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Iteration %d\n", i);  // Output: Iteration 1, Iteration 2, ..., Iteration 5
    }

    // 2. `while` loop: Used when the number of iterations is not known, but a condition must be true to continue.
    printf("\nWhile loop example:\n");
    int j = 1;
    while (j <= 5) {
        printf("Iteration %d\n", j);  // Output: Iteration 1, Iteration 2, ..., Iteration 5
        j++;
    }

    // 3. `do-while` loop: Similar to `while`, but the code block is guaranteed to execute at least once, 
    // even if the condition is false initially.
    printf("\nDo-while loop example:\n");
    int k = 1;
    do {
        printf("Iteration %d\n", k);  // Output: Iteration 1, Iteration 2, ..., Iteration 5
        k++;
    } while (k <= 5);

    return 0;  // End of program
}
