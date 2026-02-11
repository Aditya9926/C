#include <stdio.h>

int main() {
    float physics, chemistry, maths, hindi, english;
    float total, percentage;

    // Accepting marks
    printf("Enter marks for Physics: ");
    scanf("%f", &physics);

    printf("Enter marks for Chemistry: ");
    scanf("%f", &chemistry);

    printf("Enter marks for Maths: ");
    scanf("%f", &maths);

    printf("Enter marks for Hindi: ");
    scanf("%f", &hindi);

    printf("Enter marks for English: ");
    scanf("%f", &english);

    // Calculating total
    total = physics + chemistry + maths + hindi + english;

    // Calculating percentage (assuming each subject is out of 100)
    percentage = total / 5;

    // Displaying result
    printf("\nTotal Marks = %.2f", total);
    printf("\nPercentage = %.2f%%", percentage);

    return 0;
}
