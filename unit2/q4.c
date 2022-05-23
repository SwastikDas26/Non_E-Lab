#include <stdio.h>

int main() {
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    
    int i = 1;
    while(i<=n){
        int j = 1;
        
        while(j<=i){
            printf("%d",j);
            j++;
        }
        printf("\n");
        i++;
        
    }
    
    int x = n;
    while(x>=0){
        int y = 1;
        while(y<=x){
            printf("%d",y);
            y++;
        }
        printf("\n");
        x--;
    }
    return 0;
}
