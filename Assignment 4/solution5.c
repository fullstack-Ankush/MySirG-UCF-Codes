// Wap to append a digit to a input number entered by user
#include<stdio.h>
int main(){
    int n,x;
    printf("Enter the number : ");
    scanf("\n %d",&n);
    printf("Enter the append digit: ");
    scanf("\n %d",&x);

    n = n*10;
    n += x;
    printf("New Number is : %d",n);
    
}