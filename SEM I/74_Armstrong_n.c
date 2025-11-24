#include <stdio.h>
#include <math.h> // Required for pow() function

int main() {
    int n, i;
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are: \n", n);

    for (i = 1; i <= n; i++) {
        int originalNum = i;
        int numDigits = 0;
        int tempNum = i;
        double sum = 0.0;

        // Count the number of digits
        while (tempNum != 0) {
            tempNum /= 10;
            numDigits++;
        }

        // Calculate the sum of digits raised to the power of numDigits
        tempNum = originalNum; // Reset tempNum to original number
        while (tempNum != 0) {
            int remainder = tempNum % 10;
            sum += pow(remainder, numDigits);
            tempNum /= 10;
        }

        // Check if the number is an Armstrong number
        if ((int)sum == originalNum) {
            printf("%d ", originalNum);
        }
    }
    printf("\n");
    return 0;
}