#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is an Uppercase letter.\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character is a Lowercase letter.\n");
    }
    else {
        printf("The entered character is not an alphabet.\n");
    }

    return 0;
}
