// // C program to illustrate the concept of
// // returning pointer from a function
// #include <stdio.h>

// // Function that returns pointer
// int* fun()
// {
//     // Declare a static integer
//     static int A = 10;
//     return (&A);
// }

// // Driver Code
// int main()
// {
//     // Declare a pointer
//     int* p;

//     // Function call
//     p = fun();

//     // Print Address
//     printf("%p\n", p);

//     // Print value at the above address
//     printf("%d\n", *p);
//     return 0;
// }

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
  
    // Declare a function pointer that matches
  	// the signature of add() function
    int (*fptr)(int, int);

    // Assign to add()
    fptr = &add;

    // Call the function via ptr
    printf("%d", fptr(10, 5));
    return 0;
}