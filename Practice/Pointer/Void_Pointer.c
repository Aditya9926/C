// C program to dereference the void
// pointer to access the value
#include <stdio.h>

int main()
{
    int a = 10;
    char b = 'x';

    // void pointer holds address of int 'a'
    void* p = &a;
    printf("%p\n",p);
    // void pointer holds address of char 'b'
    p = &b;
    printf("%p\n",p); // void pointer cannot be dereference.

    int c = 10;
    void* ptr = &c;
    // The void pointer 'ptr' is cast to an integer pointer
    // using '(int*)ptr' Then, the value is dereferenced
    // with `*(int*)ptr` to get the value at that memory
    // location
    printf("%d\n", *(int*)ptr);
    return 0;
}

// C program to demonstrate the usage
// of a void pointer to perform pointer
// arithmetic and access a specific memory location

// #include <stdio.h>

// int main()
// {
//     // Declare and initialize an integer array 'a' with two
//     // elements
//     int a[2] = { 5, 6 };
//     // Declare a void pointer and assign the address of
//     // array 'a' to it
//     void* ptr = &a;

//     // Increment the pointer by the size of an integer
//     ptr = ptr + sizeof(int);

//     // The void pointer 'ptr' is cast to an integer
//     // pointer using '(int*)ptr' Then, the value is
//     // dereferenced with `*(int*)ptr` to get the value at
//     // that memory location
//     printf("%d", *(int*)ptr);

//     return 0;
// }

// Advantages of Void Pointers in C
// Following are the advantages of void pointers

// malloc() and calloc() return void * type and this allows these functions to be used to allocate memory of any data type (just because of void *).
// void pointers in C are used to implement generic functions in C. For example, compare function which is used in qsort().
// void pointers used along with Function pointers of type void (*)(void) point to the functions that take any arguments and return any value.
// void pointers are mainly used in the implementation of data structures such as linked lists, trees, and queues i.e. dynamic data structures.
// void pointers are also commonly used for typecasting.