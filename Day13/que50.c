//find sum and avg of array
#include <stdio.h>
int main() {
    int arr[10], i, n, sum = 0;
    float avg;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    
    avg = (float)sum / n; 
    
    printf("The sum of the array is: %d\n", sum);
    printf("The average of the array is: %.2f\n", avg);
    
    return 0;
}