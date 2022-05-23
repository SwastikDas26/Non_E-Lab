#include <stdio.h>
int main()
{
    int num, opt, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Enter 0 to get sum of digits in even position.\n");
    printf("Enter 1 to get sum of digits in odd position.\n");
    printf("Enter the option required : ");
    scanf("%d", &opt);

    if (opt == 0)
    {
        while (num != 0)
        {
            sum = sum + num % 10;
            num = num / 100;
        }
        printf("The sum of digits in even position is : %d", sum);
    }

    if (opt == 1)
    {
        while (num != 0)
        {
            num = num / 10;
            sum = sum + num % 10;
            num = num / 10;
        }
        printf("The sum of digits in odd position is : %d", sum);
    }
}
