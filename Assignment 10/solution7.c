#include<stdio.h>

int main(){
    int l,u,x,i;
    printf("Enter the lower bound : ");
    scanf("%d",&l);
    printf("Enter the upper bound : ");
    scanf("%d",&u);
    
    for(x = l; x <= u; x++){
        if(x < 2) continue;
        
        for(i = 2; i < x; i++){
            if(x % i == 0){
                break;
            }
        }
        
        if(i == x){
            printf("%d \n", x);
        }
    }
    return 0;
}