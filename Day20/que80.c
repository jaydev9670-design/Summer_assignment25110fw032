//program to find column wise sum
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
    printf("The column wise sum of the matrix is:\n");
    for (j = 0; j < c; j++)
    {
        sum = 0;
        for (i = 0; i < r; i++)
            sum += a[i][j];
        printf("Column %d: %d\n", j + 1, sum);
    }
    return 0;
}