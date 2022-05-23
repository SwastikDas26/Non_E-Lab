#include <stdio.h>
int main()
{
    int n, first, second, i;
    printf("Enter the number of Tests\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the test marks\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    first = second = a[0];

    for(i = 0;i < n; i++)
    {
        if(a[i] > first)
        {
            second = first;
            first = a[i];
        }
        else if(a[i] > second && a[i] < first)
        {
            second = a[i];
        }
    }
    printf("The Best two marks are:\n%d\n%d", first, second);
}