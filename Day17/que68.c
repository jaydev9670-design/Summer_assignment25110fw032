//find common elements in two arrays
#include <stdio.h>
int main()
{
    int n1, n2, i, j, k = 0;
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
    int common_array[n1 < n2 ? n1 : n2];
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                common_array[k++] = arr1[i];
                break;
            }
        }
    }
    printf("Common elements in the two arrays: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", common_array[i]);
    }
    printf("\n");
    return 0;
}