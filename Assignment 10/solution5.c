//  check Whether two number are co-prime or not

#include<stdio.h>

int main(){

    int a , b;
    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd  number : ");
    scanf("%d",&b);

    for(int F = a<b?a:b; ; F--){
        if(F == 1){
            printf("Co-prime ");
            break;
        }
        else if(a%F == 0 && b%F == 0){
            printf("Not a co - prime");
            break;
        }
        }
    }

