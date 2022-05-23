#include<stdio.h>
int main()
{
 	int s1, s2, s3, i, j;
 	printf("\n Enter the number of elements for  First Array  :  ");
 	scanf("%d", &s1);     //Array Size Declaration
    int a[s1];      //Array Declaration
 	printf("\nEnter the elements for First Array :  ");
 	for(i = 0; i < s1; i++)
  	{
      	scanf("%d", &a[i]);
  	}
  	printf("\n Enter the number of elements for  Second Array  :  ");
 	scanf("%d", &s2);    //Array Size Declaration
    int b[s2];       //Array Declaration
 	printf("\nEnter the elements for Second Array  :  ");
 	for(i = 0; i < s2; i++)
  	{
      	scanf("%d", &b[i]);
  	}
	s3 = s1 + s2;     //Array Size Declaration
    int c[s3];       //Array Declaration
  	for(i = 0; i < s1; i++)
  	{
      	c[i] = a[i];
  	}
 	for(i = 0, j = s1; j < s3 && i < s2; i++, j++)
  	{
  		c[j] = b[i];
  	}
 	printf("\n a[%d] Array Elements After Merging \n", s3); 
 	for(i = 0; i < s3; i++)
  	{
    	printf(" %d \t ",c[i]);
  	}
	printf("\n");

	printf("Array in reverse order: \n");
	for(i= s3 - 1;i >= 0 ;i--){
    //   printf("array[%d] :",i);
      printf("%d\t",c[i]);
   }
  	return 0;
}