#include <stdio.h>

/* extern storage class */
int x = 10;   // global variable

void staticExample() {
    static int count = 0;   // static variable
    count++;
    printf("Static count = %d\n", count);
}

int main() {
    /* auto storage class (default) */
    auto int a = 5;

    /* register storage class */
    register int i;

    printf("Auto variable a = %d\n", a);

    printf("Register variable i values:\n");
    for (i = 1; i <= 3; i++) {
        printf("%d ", i);
    }
    printf("\n");

    /* extern storage class */
    printf("Extern variable x = %d\n", x);

    /* static storage class */
    staticExample();
    staticExample();
    staticExample();

    return 0;
}
