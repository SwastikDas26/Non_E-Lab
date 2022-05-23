#include <stdio.h>
int main()
{
    char arr[20];
    int i;
    printf("Enter a string\n");
    gets(arr);
    i = 0;
    while(arr[i] != '\0')
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')
            arr[i] = arr[i] - 32;
        else if(arr[i] >= 'A' && arr[i] <= 'Z')
            arr[i] = arr[i] + 32;
        
        i++;
    }
    puts(arr);
}