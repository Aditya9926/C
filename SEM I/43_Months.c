#include <stdio.h>

int main() {
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            printf("Number of days = 31\n");
            break;

        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            printf("Number of days = 30\n");
            break;

        case 2:  // February
            printf("Number of days = 28 or 29 (leap year)\n");
            break;

        default:
            printf("Invalid month number! Please enter between 1 and 12.\n");
    }

    return 0;
}
