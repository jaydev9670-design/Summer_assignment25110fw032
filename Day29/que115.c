//create menu-driven string operations system
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    do {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("Copied String: %s\n", str2);
                break;

            case 3:
                printf("Enter second string: ");
                scanf(" %[^\n]", str2);

                strcat(str1, str2);
                printf("Concatenated String: %s\n", str1);
                break;

            case 4:
                printf("Enter second string: ");
                scanf(" %[^\n]", str2);

                if(strcmp(str1, str2) == 0)
                    printf("Strings are Equal.\n");
                else
                    printf("Strings are Not Equal.\n");
                break;

            case 5: {
                char temp[100];
                int i, len;

                strcpy(temp, str1);
                len = strlen(temp);

                for(i = 0; i < len / 2; i++) {
                    char ch = temp[i];
                    temp[i] = temp[len - i - 1];
                    temp[len - i - 1] = ch;
                }

                printf("Reversed String: %s\n", temp);
                break;
            }

            case 6:
                for(int i = 0; str1[i] != '\0'; i++) {
                    if(str1[i] >= 'a' && str1[i] <= 'z')
                        str1[i] = str1[i] - 32;
                }
                printf("Uppercase: %s\n", str1);
                break;

            case 7:
                for(int i = 0; str1[i] != '\0'; i++) {
                    if(str1[i] >= 'A' && str1[i] <= 'Z')
                        str1[i] = str1[i] + 32;
                }
                printf("Lowercase: %s\n", str1);
                break;

            case 8:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 8);

    return 0;
}