// // Program showing pointer expressions
// // during Arithmetic Operations
// #include <stdio.h>

// int main()
// {
//     // Integer variables
//     int a = 20, b = 10;

//     // Variables for storing arithmetic
//     // operations solution
//     int add, sub, div, mul, mod;

//     // Pointer variables for variables
//     // a and b
//     int *ptr_a, *ptr_b;

//     // Initialization of pointers
//     ptr_a = &a;
//     ptr_b = &b;

//     // Performing arithmetic Operations
//     // on pointers
//     add = *ptr_a + *ptr_b;
//     sub = *ptr_a - *ptr_b;
//     mul = *ptr_a * *ptr_b;
//     div = *ptr_a / *ptr_b;
//     mod = *ptr_a % *ptr_b;

//     // Printing values
//     printf("Addition = %d\n", add);
//     printf("Subtraction = %d\n", sub);
//     printf("Multiplication = %d\n", mul);
//     printf("Division = %d\n", div);
//     printf("Modulo = %d\n", mod);
//     return 0;
// }

// // Program showing pointer expressions
// // during Relational Operations
// #include <stdio.h>
// int main()
// {
//     // Initializing integer variables
//     int a = 20, b = 10;

//     // Declaring pointer variables
//     int* ptr_a;
//     int* ptr_b;

//     // Initializing pointer variables
//     ptr_a = &a;
//     ptr_b = &b;

//     // Performing relational operations
//     // less than operator
//     if (*ptr_a < *ptr_b) {
//         printf(
//             "%d is less than %d.", *ptr_a, *ptr_b);
//     }

//     // Greater than operator
//     if (*ptr_a > *ptr_b) {
//         printf(
//             "%d is greater than %d.", *ptr_a, *ptr_b);
//     }

//     // Equal to
//     if (*ptr_a == *ptr_b) {
//         printf(
//             "%d is equal to %d.", *ptr_a, *ptr_b);
//     }

//     return 0;
// }

// // Program showing pointer expressions
// // during Assignment Operations
// #include <stdio.h>
// int main()
// {
//     // Initializing integer variable
//     int a = 30;

//     // Declaring pointer variable
//     int* ptr_a;

//     // Initializing pointer using
//     // assignment operator
//     ptr_a = &a;

//     // Changing the variable's value using
//     // assignment operator
//     *ptr_a = 50;

//     // Printing value of 'a' after
//     // updating its value
//     printf("Value of variable a = %d", *ptr_a);

//     return 0;
// }

// // Program showing pointer expressions
// // during Conditional Operations
// #include <stdio.h>
// int main()
// {
//     // Initializing integer variables
//     int a = 15, b = 20, result = 0;

//     // Declaring pointer variables
//     int *ptr_a, *ptr_b;

//     // Initializing pointer variables
//     ptr_a = &a;
//     ptr_b = &b;

//     // Performing ternary operator
//     result = ((*ptr_a > *ptr_b) ? *ptr_a : *ptr_b);

//     // Printing result of ternary operator
//     printf("%d is the greatest.", result);
//     return 0;
// }

// // Program showing pointer expressions
// // during Unary Operations
// #include <stdio.h>
// int main()
// {
//     // Initializing integer variable
//     int a = 34;

//     // Declaring pointer variable
//     int* ptr_a;

//     // Initializing pointer variable
//     ptr_a = &a;

//     // Value of a before increment
//     printf("Increment:\n");
//     printf(
//         "Before increment a = %d\n", *ptr_a);

//     // Unary increment operation
//     (*ptr_a)++;

//     // Value of a after increment
//     printf(
//         "After increment a = %d", *ptr_a);

//     // Value before decrement
//     printf("\n\nDecrement:\n");
//     printf(
//         "Before decrement a = %d\n", *ptr_a);

//     // unary decrement operation
//     (*ptr_a)--;

//     // Value after decrement
//     printf("After decrement a=%d", *ptr_a);

//     return 0;
// }

// Program showing pointer expressions
// during Bitwise Operations
#include <stdio.h>
int main()
{
    // Declaring integer variable for
    // storing result
    int and, or, ex_or;

    // Initializing integer variable
    int a = 1, b = 2;

    // Performing bitwise operations
    // AND operation
    and = a & b;

    // OR operation
    or = a | b;

    // EX-OR operation
    ex_or = a ^ b;

    // Printing result of operations
    printf("\na AND b = %d", and);
    printf("\na OR b = %d", or);
    printf("\na Exclusive-OR b = %d", ex_or);
    return 0;
}