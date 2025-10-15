// Application of Array of Pointers
// An array of pointers is useful in a wide range of cases. Some of these applications are listed below:

// It is most commonly used to store multiple strings.
// It is also used to implement LinkedHashMap in C and also in the Chaining technique of collision resolving in Hashing.
// It is used in sorting algorithms like bucket sort.
// It can be used with any pointer type so it is useful when we have separate declarations of multiple entities and we want to store them in a single place.
// Disadvantages of Array of Pointers
// The array of pointers also has its fair share of disadvantages and should be used when the advantages outweigh the disadvantages. Some of the disadvantages of the array of pointers are:

// Higher Memory Consumption: An array of pointers requires more memory as compared to plain arrays because of the additional space required to store pointers.
// Complexity: An array of pointers might be complex to use as compared to a simple array.
// Prone to Bugs: As we use pointers, all the bugs associated with pointers come with it so we need to handle them carefully.

// C program to illustrate the use of array of pointers to
// function

// #include <stdio.h>

// // some basic arithmetic operations
// void add(int a, int b) {
//   printf("Sum : %d\n", a + b);
// }

// void subtract(int a, int b) {
//     printf("Difference : %d\n", a - b);
// }

// void multiply(int a, int b) {
//     printf("Product : %d\n", a * b);
// }

// void divide(int a, int b) {
//     printf("Quotient : %d", a / b);
// }

// int main() {

//     int x = 50, y = 5;

//     // array of pointers to function of return type int
//     void (*arr[4])(int, int)
//         = { &add, &subtract, &multiply, &divide };
//     for (int i = 0; i < 4; i++) {
//         arr[i](x, y);
//     }
//     return 0;
// }

// C Program to print Array of strings with array of pointers
// #include <stdio.h>

// int main() {
//     // Declare an array of pointers to characters
//     char* arr[] = { "geek", "Geeks", "Geeksfor" };

//     // Print each string and its address
//     for (int i = 0; i < 3; i++) {
//         printf("%s\n", arr[i]);
//     }

//     // Print addresses of each string
//     for (int i = 0; i < 3; i++) {
//         printf("Address of arr[%d]: %p\n", i, (void*)arr[i]);
//     }

//     return 0;
// }

// C program to demonstrate the use of array of pointers
#include <stdio.h>

int main()
{
    // declaring some temp variables
    int var1 = 10;
    int var2 = 20;
    int var3 = 30;

    // array of pointers to integers
    int* ptr_arr[3] = { &var1, &var2, &var3 };

    // traversing using loop
    for (int i = 0; i < 3; i++) {
        printf("Value of var%d: %d\tAddress: %p\n", i + 1, *ptr_arr[i], ptr_arr[i]);
    }

    return 0;
}