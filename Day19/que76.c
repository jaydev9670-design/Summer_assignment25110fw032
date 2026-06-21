//program to find diagonal sum of a matrix
#include <stdio.h>
int main()
{
    int a[10][10], r, c, i, j, sum = 0;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d", &r, &c);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (i == j)
                sum += a[i][j];
    printf("The sum of the diagonal elements is: %d\n", sum);
    return 0;
}