#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    if (basic <= 10000) {
        hra = 0.20 * basic;
        da  = 0.80 * basic;
    } 
    else if (basic <= 20000) {
        hra = 0.25 * basic;
        da  = 0.90 * basic;
    } 
    else {
        hra = 0.30 * basic;
        da  = 0.95 * basic;
    }

    gross = basic + hra + da;

    printf("Gross Salary = %.2f\n", gross);

    return 0;
}
