#include <stdio.h>

int main(){
    // Integer variable
    int N = 4;

    // Pointer to an integer
    int *ptr1, *ptr2;

    // Pointer stores the address of N
    ptr1 = &N;
    ptr2 = &N;

    printf("Pointer ptr2 before Addition: ");
    printf("%p \n", ptr2);

    // Addition of 3 to ptr2
    ptr2 = ptr2 + 3;
    printf("Pointer ptr2 after Addition: ");
    printf("%p \n", ptr2);

    return 0;
}

// #include <stdio.h>

// int main(){
//     // Integer variable
//     int N = 4;

//     // Pointer to an integer
//     int *ptr1, *ptr2;

//     // Pointer stores the address of N
//     ptr1 = &N;
//     ptr2 = &N;

//     printf("Pointer ptr2 before Subtraction: ");
//     printf("%u \n", ptr2);

//     // Subtraction of 3 to ptr2
//     ptr2 = ptr2 - 3;
//     printf("Pointer ptr2 after Subtraction: ");
//     printf("%u \n", ptr2);

//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int x = 6; 
//     int N = 4;

//     // Pointer declaration
//     int *ptr1, *ptr2;
    
//     // stores address of N
//     ptr1 = &x; 
    
//     // stores address of x
//     ptr2 = &N; 

//     printf(" ptr1 = %u, ptr2 = %u\n", ptr1, ptr2);
//     // %p gives an hexa-decimal value,
//     // We convert it into an 
//     // unsigned int value by using %u

//     // Subtraction of ptr2 and ptr1
//     x = ptr1 - ptr2;

//     // Print x to get the Increment
//     // between ptr1 and ptr2
//     printf("Subtraction of ptr1 "
//            "& ptr2 is %d\n",
//            x);

//     return 0;
// }