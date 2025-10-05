#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseAdjacentPairs(char *word) {
    int len = strlen(word);
    for (int i = 0; i < len - 1; i += 2) {
        char temp = word[i];
        word[i] = word[i+1];
        word[i+1] = temp;
    }
}

int main() {
    char line[1000];
    char word[100];
    int i, j, k;

    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin); 

    line[strcspn(line, "\n")] = 0;

    printf("Modified string: ");

    i = 0;
    while (line[i] != '\0') {
        while (isspace(line[i])) {
            printf("%c", line[i]); 
            i++;
        }

        j = 0;
        while (line[i] != '\0' && !isspace(line[i])) {
            word[j] = line[i];
            i++;
            j++;
        }
        word[j] = '\0'; 

        reverseAdjacentPairs(word);

        printf("%s", word);
    }
    printf("\n");

    return 0;
}