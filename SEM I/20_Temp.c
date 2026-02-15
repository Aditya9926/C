#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Prompt the user for input
    printf("Enter temperature in Celsius: ");
    
    // Read the input from the user
    scanf("%f", &celsius);

    // Apply the conversion formula
    // Using 9.0/5.0 ensures floating-point division
    fahrenheit = (celsius * 9.0/5.0) + 32.0;

    // Display the result
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
