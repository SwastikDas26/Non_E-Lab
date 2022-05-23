#include <stdio.h>
#define PI 3.1415

float area1(int);
float area2(int);

int main()
{
    int n, area_of_circle, area_of_square;
    printf("Enter the radius\n");
    scanf("%d", &n);
    printf("Area of circle: %.2f\n", area1(n));
    printf("Area of square: %.2f", area2(n));
}

float area1(int r)
{
    float area;
    area = PI * r * r;
    return area;
}

float area2(int s)
{
    float area;
    area = s * s;
    return area;
}