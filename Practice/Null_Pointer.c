// Uses of NULL Pointer in C
// Following are some most common uses of the NULL pointer in C:

// To initialize a pointer variable when that pointer variable hasn't been assigned any valid memory address yet.
// To check for a null pointer before accessing any pointer variable. By doing so, we can perform error handling in pointer-related code, e.g., dereference a pointer variable only if it’s not NULL.
// To pass a null pointer to a function argument when we don’t want to pass any valid memory address.
// A NULL pointer is used in data structures like trees, linked lists, etc. to indicate the end.

// C NULL pointer demonstration
#include <stdio.h>

void foo(int* string)
{
    if (string == NULL) {
        printf("NULL Pointer Passed");
        return;
    }
    printf("Non-Null Pointer Passed");
}

int main()
{
    // declaring null pointer
    int* ptr = NULL;

    // derefencing only if the pointer have any value
    if (ptr == NULL) {
        printf("Pointer does not point to anything\n");
    }
    else {
        printf("Value pointed by pointer: %d\n", *ptr);
    }

    foo(NULL);

    return 0;
}
// If we dereference a null pointer it will a segmentation error.