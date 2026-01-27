// Wap to find the HCF of two number

#include<stdio.h>

void main(){
    int a ,b;
    printf("Enter the first number : ");
    scanf("%d",&a);

    printf("Enter the second number : ");
    scanf("%d",&b);

    for(int L = a<b?a:b; ; L--){
        if(a%L == 0 && b%L == 0 ){
            printf("HCF is %d",L);
            break;
        }
        else if(L == 1){
            printf("HCF is 1");
            break;
        }
    }
}