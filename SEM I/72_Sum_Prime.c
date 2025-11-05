#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // If divisible, it's not prime
        }
    }
    return 1; // If no divisors found, it's prime
}

int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

    long long sum_of_primes = 0; // Use long long for sum to handle larger values

    // Iterate from 2 to n and sum prime numbers
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            sum_of_primes += i;
        }
    }

    printf("Sum of all prime numbers between 1 and %d is: %lld\n", n, sum_of_primes);

    return 0; // Indicate successful execution
}