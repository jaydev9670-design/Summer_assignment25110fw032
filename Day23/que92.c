//find maximum occurring character
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[256] = {0};
    int i, len, max_freq = 0;
    char max_char;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str) - 1; 
    for (i = 0; i < len; i++) {
        freq[str[i]]++;
        if (freq[str[i]] > max_freq) {
            max_freq = freq[str[i]];
            max_char = str[i];
        }
    }

    printf("Maximum occurring character is: %c\n", max_char);
    return 0;
} 