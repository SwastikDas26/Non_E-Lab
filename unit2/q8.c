#include <stdio.h>
int main()
{
    int a, b, pts = 0;
    printf("Enter 2 numbers\n");
    scanf("%d%d", &a, &b);
    if(a < b)
    {
        pts++;
    }
    if(a % b == 0)
    {
        pts = pts + (a/b);
    }
    if(a % b != 0)
    {
        if(a/b != 0)
        {
            pts = pts +((a/b) + 1);
        }
    }
    printf("Total points: %d", pts);
}