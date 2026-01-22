#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    /* Check for a valid triangle */
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("The given sides do not form a valid triangle.\n");
    }
    else if (a == b && b == c) {
        printf("The triangle is Equilateral.\n");
    }
    else if (a == b || b == c || a == c) {
        printf("The triangle is Isosceles.\n");
    }
    else {
        printf("The triangle is Scalene.\n");
    }

    return 0;
}
