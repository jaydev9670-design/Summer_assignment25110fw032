//find longest word
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char longest_word[100] = "";
    char *word;
    int i, len, max_len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str) - 1;
    str[len] = '\0';

    word = strtok(str, " ");
    while (word != NULL) {
        if (strlen(word) > max_len) {
            max_len = strlen(word);
            strcpy(longest_word, word);
        }
        word = strtok(NULL, " ");
    }

    printf("Longest word is: %s\n", longest_word);
    return 0;
}
