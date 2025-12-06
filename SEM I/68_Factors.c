#include <stdio.h>

int main() {
    int num, i;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Validate if the number is positive
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

    printf("Factors of %d are: ", num);

    // Loop from 1 up to the number itself
    for (i = 1; i <= num; ++i) {
        // Check if 'i' divides 'num' exactly (remainder is 0)
        if (num % i == 0) {
            printf("%d ", i); // If it divides, 'i' is a factor
        }
    }
    printf("\n"); // Newline for better formatting

    return 0; // Indicate successful execution
}