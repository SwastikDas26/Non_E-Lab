#include <stdio.h>
int main()
{
    int choice, j, m, x = 0, i, n, p = 1;
    printf("Enter 1 or 2\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("Enter a number to check for prime\n");
            scanf("%d", &m);
            for(j = 1; j <= m; j++)
            {
                if(m%j == 0)
                    x++;
            }
            if(x == 2)
                printf("Its a prime number");
            else
                printf("Its not a prime number"); 
            break;
        case 2:
            printf("Enter number to find factorial\n");
            scanf("%d", &n);
            for(i = 1; i <= n; i++)
            {
                p = p * i;
            }
            printf("Factorial of %d: %d", n, p);
    }
}