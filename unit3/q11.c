#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in the array\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Positive elements: ");
    for(i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            printf("%d\t", a[i]);
        }
    }

    printf("\n");

    printf("Negative elements: ");
    for(i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            printf("%d\t", a[i]);
        }
    }
}