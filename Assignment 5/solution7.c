// print greater between 2 number 
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);

    printf("Enter second  number : ");
    scanf("%d",&b);

    if (a>b)
        printf("%d is greater than %d",a,b);
    if (b>a)
        printf("%d is greater than %d",a,b);
    if (a==b)
        printf("%d is equal to %d",b,a);
}