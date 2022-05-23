#include <stdio.h>

int calcsum(int n){
    int sum=0,r=0;
    while(n!=0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    return sum;
}

int main()
{
    int n,a;
    scanf("%d",&a);
    int i;
    for(i=a;i>=a;i++){
        if(calcsum(i)%4==0){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
