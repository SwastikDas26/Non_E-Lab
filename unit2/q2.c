#include <stdio.h>
int main()
{
    int n, r;
    printf("Enter a number");
    scanf("%d", &n);
    while(n != 0)
    {
        r = n % 10;
        if(r == 0)
        {
            printf("Not GOOD number");
            break;
        }
        n = n / 10;
    }
    if(n == 0)
    {
        printf("GOOD Number");
    }
}