#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks[3];
    float avg;
};

int main() {
    int n, i, j;
    struct Student *s;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    s = (struct Student *)malloc(n * sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        s[i].avg = 0;
        for (j = 0; j < 3; j++) {
            printf("Marks in subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].avg += s[i].marks[j];
        }

        s[i].avg /= 3;
    }

    // Display average marks
    printf("\nStudent Average Marks:\n");
    for (i = 0; i < n; i++) {
        printf("Roll No: %d | Name: %s | Average Marks: %.2f\n",
               s[i].roll, s[i].name, s[i].avg);
    }

    // Free allocated memory
    free(s);

    return 0;
}
