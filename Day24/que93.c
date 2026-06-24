//program to check string rotation
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int len1, len2, i, j, k;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    len1 = strlen(str1) - 1;
    len2 = strlen(str2) - 1;

    if (len1 != len2) {
        printf("Strings are not rotations of each other.\n");
        return 0;
    }
    strcat(str1, str1);
    for (i = 0; i < len1; i++) {
        for (j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            printf("Strings are rotations of each other.\n");
            return 0;
        }
    }

    printf("Strings are not rotations of each other.\n");
    return 0;
}
