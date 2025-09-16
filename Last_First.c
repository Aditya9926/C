#include <stdio.h>

int main()
{
    int n, first,lastdigit;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &n);

    first = n;
    while(first >= 10)
    {
        first = first / 10;
    }
    lastdigit = n%10;
    printf("First digit = %d\n", first);
    printf("last digit = %d", lastdigit);
    return 0;
}