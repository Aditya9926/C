#include<stdio.h>   

int factorial(int num) {
    if(num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int is_strong_number(int num) {
    int sum = 0, temp = num;

    while(temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    return (sum == num);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(is_strong_number(number)) {
        printf("%d is a Strong Number.\n", number);
    } else {
        printf("%d is not a Strong Number.\n", number);
    }

    return 0;
}