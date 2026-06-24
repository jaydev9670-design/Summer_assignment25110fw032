//program to character frequency in a string
#include <stdio.h>
int main()
{
    char str[100];
    int i, freq[256] = {0};
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c: %d\n", i, freq[i]);
        }
    }
    return 0;
}