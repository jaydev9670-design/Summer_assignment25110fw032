//program to linear search
#include <stdio.h>
int main(){
    int arr[32],i,n,temp,flag=0;
    printf("Enter the number of element in array:");
    scanf("%d",&n);
    printf("Enter the element of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search:");
    scanf("%d",&temp);
    for(i=0;i<n;i++){
        if(arr[i]==temp){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Element found at position %d\n",i+1);
    }
    else{
        printf("Element not found\n");
    }
    return 0;
}