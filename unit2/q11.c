#include <stdio.h>

int reverse(int n)
{
	int rev = 0;
	while (n != 0) {
		rev = (rev * 10) + (n % 10);
		n /= 10;
	}
	return rev;
}

int main()
{
    
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
	n = reverse(n);
	int so = 0, se = 0, c = 1, choice;

	while (n != 0) {

		if (c % 2 == 0)
			se += n % 10;
		else
			so += n % 10;
		n /= 10;
		c++;
	}
    printf("Enter choice\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 0:
            printf("Even Sum:  %d",se);
            break;
        case 1:
            printf("Odd Sum:  %d",so);
            break;
        default:
            printf("Wrong choice\n");
    }   
	return 0;
}
