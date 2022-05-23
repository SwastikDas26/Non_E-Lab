#include<stdio.h>
#include<string.h>
int main()
{ 
    char s[1001], i;
    int f,    j;
    printf("Enter a string\n");
    scanf("%s", &s);
    for(i = 48;i < 58; i++)
    {   
        f = 0;
        for(j = 0;j < strlen(s); j++)
        {
            if(s[j] == i)
            {
                f++;
            }
        }
        printf("%d ", f);
    }
    return 0;
}