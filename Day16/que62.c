//find max frequency element in array
#include <stdio.h>

int main()
{
    int n, i, j, max_freq = 0, max_element;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        int freq = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
        }
        if (freq > max_freq)
        {
            max_freq = freq;
            max_element = arr[i];
        }
    }
    printf("The element with maximum frequency is: %d\n", max_element);
    return 0;
}