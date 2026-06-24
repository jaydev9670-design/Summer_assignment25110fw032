//compress a string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], compressed[100];
    int i, j = 0, len, count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str) - 1; 
    for (i = 0; i < len; i++) {
        count = 1;
        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        compressed[j++] = str[i];
        if (count > 1) {
            compressed[j++] = count + '0';
        }
    }
    compressed[j] = '\0';

    printf("Compressed string is: %s\n", compressed);
    return 0;
}
