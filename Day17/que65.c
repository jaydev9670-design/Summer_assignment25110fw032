//program to merge array
#include <stdio.h>
int main()
{
    int n1, n2, i, j;
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of the first array: ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of the second array: ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int merged_array[n1 + n2];
    for (i = 0; i < n1; i++)
    {
        merged_array[i] = arr1[i];
    }
    for (j = 0; j < n2; j++)
    {
        merged_array[i + j] = arr2[j];
    }
    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged_array[i]);
    }
    printf("\n");
    return 0;
}