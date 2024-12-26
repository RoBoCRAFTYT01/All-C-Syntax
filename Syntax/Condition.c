/*
    In C, we have two types of conditional statements:
    1. `if-else`: Used for evaluating multiple conditions with logical operators.
    2. `switch-case`: Best for evaluating a single variable against multiple constant values.
*/

#include <stdio.h>

int main() {
    int choice;

    // Example of `if-else` condition
    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You chose option 1.\n");
    } else if (choice == 2) {
        printf("You chose option 2.\n");
    } else if (choice == 3) {
        printf("You chose option 3.\n");
    } else {
        printf("Invalid choice.\n");
    }

    // Example of `switch-case` condition
    printf("\nUsing switch-case for the same condition:\n");

    switch (choice) {
        case 1:
            printf("You selected option 1.\n");
            break; // Exit the switch block
        case 2:
            printf("You selected option 2.\n");
            break;
        case 3:
            printf("You selected option 3.\n");
            break;
        default:
            printf("Invalid selection.\n");
    }

    // Note !!! : usally we use if else

    return 0; // End of program
}
