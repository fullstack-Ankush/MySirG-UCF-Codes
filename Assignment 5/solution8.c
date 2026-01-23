// WAP to check whether given root of quadratic eqn are real & distinct , real and equal or imaginary root

#include<stdio.h>
int main(){
    int a ,b ,c;

    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter b : ");
    scanf("%d", &b);

    printf("Enter c : ");
    scanf("%d", &c);
    
    int d = b*b - 4*a*c;
    if (d>0){
        printf("Real and Distinct root");
    }
    else if (d==0){
        printf("Real and Equal root");
    }
    else{
        printf("Imaginary root");
    }   

}