//write function to print sum of two no
#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y;
    printf("Enter the values of a & b:");
    scanf("%d%d",&x,&y);
    printf("Sum of %d and %d is %d",x,y,sum(x,y));
    return 0;
}
