#include <stdio.h>

// Function prototype for the 'add' UDF
int add(int a, int b);

int main() {
    int num1, num2, sum_result;

    // Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the 'add' UDF to calculate the sum
    sum_result = add(num1, num2);

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum_result);

    return 0;
}

// Definition of the 'add' UDF
int add(int a, int b) {
    return a + b; // Returns the sum of the two input integers
}