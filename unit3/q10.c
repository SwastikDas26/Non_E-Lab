#include <stdio.h>
int main()
{
    int l, r, k, count = 0;
    printf("Enter 2 integers\n");
    scanf("%d%d", &l, &r);
    printf("Enter the number for checking\n");
    scanf("%d", &k);
    for(int i = l; i <= r; i++)
    {
        if(i % k == 0)
        {
            count++;
        }
    }
    printf("count: %d", count);
}