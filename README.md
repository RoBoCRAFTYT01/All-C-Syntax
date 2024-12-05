
# C Programming Syntax Guide

This guide provides an in-depth explanation of essential C programming syntax and concepts. Each section is accompanied by a link to a specific `.c` file for you to examine the code examples.

## What is C Syntax?

C is a general-purpose programming language that provides a simple yet powerful syntax. It is widely used for system programming, embedded systems, and application development due to its efficiency and performance. Learning C syntax helps you build a strong foundation for understanding other programming languages.

C follows a procedural programming paradigm, where functions are executed sequentially. Variables are declared with specific data types, and functions are used to structure the program flow.

For more details, check the [Start.c](Start.c) file.

---

## Start with C

The `main()` function is the starting point of any C program. It is where the program execution begins. In this section, you'll learn the basic syntax of C, such as variable declarations, the use of the `printf()` function to output text, and more.

Here’s a simple C program structure:

```c
#include <stdio.h>  // Standard input-output header for printing

int main() {
    printf("Hello, World!");  // Prints "Hello, World!" to the console
    return 0;  // Exits the program with status 0 (success)
}
```

For more details, check the [Start.c](Start.c) file.

---

## Conditionals (if-else, switch)

Conditional statements allow your program to make decisions based on certain conditions. The most commonly used conditional statements are `if`, `else`, and `switch`.

### Example:

```c
#include <stdio.h>

int main() {
    int num = 10;

    if (num > 0) {
        printf("The number is positive.
");
    } else {
        printf("The number is non-positive.
");
    }

    return 0;
}
```

The `if` condition checks if the number is greater than 0. If it is, the program prints that the number is positive; otherwise, it prints that the number is non-positive.

For more examples, check the [Condition.c](Condition.c) file.

---

## Loops (for, while, do-while)

Loops allow you to execute a block of code multiple times. C provides three types of loops: `for`, `while`, and `do-while`.

### Example: `for` loop

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("Iteration %d
", i);
    }
    return 0;
}
```

The `for` loop iterates a block of code from `i = 1` to `i = 5`.

### Example: `while` loop

```c
#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 5) {
        printf("Iteration %d
", i);
        i++;
    }
    return 0;
}
```

The `while` loop continues until the condition (`i <= 5`) is false.

### Example: `do-while` loop

```c
#include <stdio.h>

int main() {
    int i = 1;
    do {
        printf("Iteration %d
", i);
        i++;
    } while (i <= 5);
    return 0;
}
```

The `do-while` loop ensures that the code runs at least once before checking the condition.

For more loop examples, check the [Loop.c](Loop.c) file.

---

## Arrays

Arrays are used to store multiple values of the same data type in a single variable. They allow efficient handling of large amounts of data.

### Example:

```c
#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        printf("Number %d: %d
", i + 1, numbers[i]);
    }
    
    return 0;
}
```

In this example, we declare an array `numbers` to store five integers and print them using a loop.

For more details, check the [Array.c](Array.c) file.

---

## Functions

Functions allow you to group code into reusable blocks. Functions can accept parameters, perform operations, and return values.

### Example: Function with no return value (`void`)

```c
#include <stdio.h>

void greet() {
    printf("Hello, User!
");
}

int main() {
    greet();  // Calls the greet function
    return 0;
}
```

In this example, the function `greet` does not return any value (`void`), but it performs a specific task — printing a greeting message.

For more details on functions, check the [Void.c](Void.c) file.

---

## Task

Now that you’ve gone through the basics, it’s time to practice! The [Task.c](Task.c) file contains exercises for you to work on. These tasks will help you reinforce the concepts you've learned and challenge you to think critically about how to apply them.

---

Happy coding!
