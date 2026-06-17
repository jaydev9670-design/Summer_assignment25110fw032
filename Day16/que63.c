//find pair with sum
#include <stdio.h>
int main()
{
    int n, i, j, sum, target;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &target);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("Pair with sum %d is: (%d, %d)\n", target, arr[i], arr[j]);
            }
        }
    }
    return 0;
}