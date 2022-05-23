#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter sides of the triangle");
    scanf("%d%d%d", &a, &b, &c);
    if(a == b && b == c && c == a)
    {
        printf("Equilateral triangle");
    }
    else if(a == b || b == c || c == a)
    {
        printf("Isosceles trianlge");
    }
    else
    {
        printf("Scalene triangle");
    }
}