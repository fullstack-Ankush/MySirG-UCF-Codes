// input a 3 digit number and print the sum of its digits

#include<stdio.h>
int main(){
    int n,sum,temp;
    printf("Enter the 3 digit number :\n");
    scanf("%d",&n);
    temp = n;
    sum = temp%10;
    temp= temp/10;
    sum += temp%10;
    temp= temp/10;
    sum += temp%10;
    printf("Sum of digis of %d is %d",n,sum);
}