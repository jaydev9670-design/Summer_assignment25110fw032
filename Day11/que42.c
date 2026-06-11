//function to find maximum of two numbers
#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int x,y;
    printf("Enter the values of a & b:");
    scanf("%d%d",&x,&y);
    printf("Maximum of %d and %d is %d",x,y,max(x,y));
    return 0;
}