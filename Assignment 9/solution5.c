// calculate the sum of n natural number 

#include<stdio.h>

int main(){
    int n;
    int sum = 0;

    printf("Enter the number : ");
    scanf("%d",&n);

    for (int i = 1;i<=n;i++){
        sum += i*i*i;
    }
    printf("sum of cube of %dth natural number is %d ",n,sum);
}