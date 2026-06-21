//program to find row wise sum
#include <stdio.h>
int main()
{
    int a[10][10], r, c, i, j, sum;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d", &r, &c);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("The row wise sum of the matrix is:\n");
    for (i = 0; i < r; i++)
    {
        sum = 0;
        for (j = 0; j < c; j++)
            sum += a[i][j];
        printf("Row %d: %d\n", i + 1, sum);
    }
    return 0;
}