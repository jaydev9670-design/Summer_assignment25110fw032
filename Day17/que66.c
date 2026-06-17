//union of array
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
    int union_array[n1 + n2];
    for (i = 0; i < n1; i++)
    {
        union_array[k++] = arr1[i];
    }
    for (j = 0; j < n2; j++)
    {
        int found = 0;
        for (i = 0; i < n1; i++)
        {
            if (arr2[j] == arr1[i])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            union_array[k++] = arr2[j];
        }
    }
    printf("Union of the two arrays: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", union_array[i]);
    }
    printf("\n");
    return 0;
}