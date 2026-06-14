//Count even and odd element 
#include <stdio.h>
int main() {
    int arr[10],i,n,even=0,odd=0;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("The number of even elements in the array is: %d\n",even);
    printf("The number of odd elements in the array is: %d\n",odd);
    return 0;
}
