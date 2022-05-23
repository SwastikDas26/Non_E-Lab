#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], ch;
    int i, x, y;
    x = 0;
    y = 0;

    printf("Enter any string: ");
    gets(str);
    printf("Please enter the character you want to search for: ");
    ch = getchar();

    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == ch)
        {
            x++;
            break;
        }
    }

    if(x == 0)
  	{
  		printf("\n Sorry!! We haven't found the Search Character '%c' \n", ch);
	}
	else
	{
		printf("\n The First Occurrence of the Search Element '%c' is at Position %d \n", ch, i + 1);
	}

    for(i = strlen(str) - 1; i >= 0; i--)
    {
        if(str[i] == ch)
        {
            y++;
            break;
        }
    }

    if(y == 0)
    {
        printf("character is not in the string \n");
    }
    else
    {
        printf("character  %c  is last occurrence at location: %d \n",ch, i + 1);
    }   
}