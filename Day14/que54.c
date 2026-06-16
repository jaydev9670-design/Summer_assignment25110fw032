//program to frequency of element
#include <stdio.h>
int main() {
    int arr[32], i, n, freq[32], j;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; 
    }
    
    for (i = 0; i < n; i++) {
        if (freq[i] == -1) { 
            int count = 1;
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; 
                }
            }
            freq[i] = count; 
        }
    }
    
    printf("Element\tFrequency\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) { 
            printf("%d\t%d\n", arr[i], freq[i]);
        }
    }
    
    return 0;
}