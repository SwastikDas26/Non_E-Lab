#include <stdio.h>
int main()
{
    int a[3][3], i, j, s = 0, t = 0;
    printf("Enter 3 rows X 3 columns for matrix\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(i == j)
            {
                s = s + a[i][j];
            }

            if((i + j) == 2)
            {
                t = t + a[i][j];
            }
        }
    }

    printf("product of sum of both diagonals: %d", s * t); 
}