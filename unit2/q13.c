#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a value\n");
    scanf("%d", &n);
    if(n > 0 && n < 100)
    {
        for(i = 1; i < n; i++)
        {
            printf("%d\t", i);
        }
    }
}