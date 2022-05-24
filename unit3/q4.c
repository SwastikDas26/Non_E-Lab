#include<stdio.h>
#include<string.h>
int main()
{
    char a[200][200],temp[20];
    int i,j,n;
    printf("Enter no. of strings to be input = ");scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%s",&a[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strlen(a[j])>strlen(a[j+1]))
            {
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
    printf("After Sorting :\n");
    for(i=0;i<n;i++)
    printf("%s\n",a[i]);
    return 0;
}
