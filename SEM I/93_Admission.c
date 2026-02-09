#include <stdio.h>

int main() {
    int maths, phy, chem, total, mpTotal;

    printf("Enter marks in Maths, Physics and Chemistry: ");
    scanf("%d %d %d", &maths, &phy, &chem);

    total = maths + phy + chem;
    mpTotal = maths + phy;

    if (maths >= 65 && phy >= 55 && chem >= 50 &&
        (total >= 190 || mpTotal >= 140)) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}
