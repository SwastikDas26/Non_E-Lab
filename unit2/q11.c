#include <stdio.h>
int main()
{
    int n, num ,rem ,odd = 0, even = 0, digit, input;
    printf("  Enter an integer number: ");
    scanf("%d", &num);
    printf("Enter 0 or 1\n");
    scanf("%d", &n);
    input = num;
    // num = abs(num);

    if( n == 0 || n == 1)
    {
        if(n == 0)
        {
            while(num > 0)
            {
                digit = num % 10;
                num = num / 10;
                rem = digit % 2;
                if(rem == 0)
                    even = even + digit;
            }
            printf("\n  The sum of even digits present in %d is %d.",input,even);
        }
        else if( n == 1)
        {
            while(num > 0)
            {
                digit = num % 10;
                num = num / 10;
                rem = digit % 2;
                if(rem != 0)
                    odd=odd+digit;
            }
            printf("\n  The sum of Odd digits present in %d is %d.",input,odd);
        }
    }
}   