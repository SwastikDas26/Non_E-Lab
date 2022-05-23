#include <stdio.h>
#include <string.h>
int main()
{
    char arr[20];
    int i;
    printf("Enter a word\n");
    gets(arr);
    i = 0;
    while(arr[i] != '\0')
    {
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
        {
            printf("vowel: %c\n", arr[i]);
        }
        else if(arr[i] > 'a' && arr[i] < 'z')
        {
            printf("consonent: %c\n", arr[i]);
        }
        i++;
    }
}