#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the number of rows and columns of the matrix\n");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter %d rows X %d columns for matrix\n", n, n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("After transposing\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
}