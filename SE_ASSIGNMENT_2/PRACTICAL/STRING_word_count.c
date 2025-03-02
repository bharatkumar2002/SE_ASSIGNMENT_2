#include <stdio.h>
void main() {
    char sen[100];
    int word_count = 0;
    printf("Enter a sentence: ");
    scanf("%[^\n]s", sen);

    int i = 0;
    while (sen[i] != '\0') {
        if (sen[i] == ' ' && sen[i + 1] != ' ' && sen[i + 1] != '\0') {
            word_count++;
        }
        i++;
    }
    if (sen[0] != ' ') {
        word_count++;
    }
    printf("Number of words: %d\n", word_count);
}

