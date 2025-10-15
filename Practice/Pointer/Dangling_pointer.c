// // C program to demonstrate dangling pointer when variable
// // goes put of scope
// #include <stdio.h>
// #include <stdlib.h>

// // driver code
// int main()
// {
//     int* ptr;
//     // creating a block
//     {
//         int a = 10;
//         ptr = &a;
//     }

//     // ptr here becomes dangling pointer
//     printf("%d", *ptr);

//     return 0;
// }

// The pointer pointing to local variable doesn't become dangling when local variable is static.
#include <stdio.h>

int* fun()
{
    // x now has scope throughout the program
    static int x = 5;

    return &x;
}

int main()
{
    int* p = fun();
    fflush(stdin);

    // Not a dangling pointer as it points
    // to static variable.
    printf("%d", *p);
}