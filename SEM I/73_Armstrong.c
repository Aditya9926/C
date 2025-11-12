#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, temp, digit, original;
    double sum = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    // Calculate the number of digits
    int num_digits = 0;
    temp = n;
    while (temp != 0) {
        temp /= 10;
        num_digits++;
    }

    temp = n;

    // Calculate the sum of the digits raised to the power of num_digits
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, num_digits);
        temp /= 10;
    }

    // Check if the sum is equal to the original number
    if ((int)sum == original)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}