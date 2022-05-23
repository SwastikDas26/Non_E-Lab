#include <stdio.h>
int main()
{
    int s, i;
    printf("Enter the size of the array\n");
    scanf(" %d", &s);
    int arr[s];
    printf("Enter the elements of the array\n")
    for(i = 0; i < s; i++)
    {
        scanf(" %d", &arr[i]);
    }
    for(i = 0; i < s; i++)
    {
        if(i % 2 == 0)
        {
            printf(" %d", arr[i]);
        }
    }
}