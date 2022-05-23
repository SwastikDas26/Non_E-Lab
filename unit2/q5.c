#include <stdio.h>
int main()
{
    int n, i, j, count = 0, maxCount = 0, MaxElement, occurrence, x = 0;
    printf("Enter the size of the array\n");
    scanf(" %d", &n);
    int a[n];
    printf("Enter 1, 2, 3, 4 ,5 for voting\n");
    for(i = 0; i < n; i++)
    {
        scanf(" %d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] > 0 && a[i] < 6)
        {
            x++;
        }
    }


    if(x == n)
    {
        for(i = 0; i < n; i++)
        {
            count = 1;
            for(j = i + 1; j < n; j++)
            {
                if(a[j] == a[i])
                {
                    count++;
                    if(count > maxCount)
                    {
                        MaxElement = a[j];
                        maxCount = count;
                    }
                }
            }
        }
        printf("Maximum Frequency Element: %d, Ocurrence= %d times", MaxElement,maxCount);
    }
    else
    {
        printf("Enter only 1 to 5");
    }
}