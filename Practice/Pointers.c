#include<stdio.h>

int main(){
    int var = 10;
    int *ptr = &var;
    char *ptr2;
    printf("%d\n",var); // var value
    printf("%p\n",ptr); // address of var
    printf("%d\n",*ptr); // dereferance a pointer.
    printf("%zu\n",sizeof(ptr2)); // zu is used in sizeof.
}