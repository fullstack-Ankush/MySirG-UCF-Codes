// calculate the sum of n natural number 

#include<stdio.h>

int main(){
    int n;
    int sum = 0;

    printf("Enter the number : ");
    scanf("%d",&n);

    for (int i = 1;i<=n;i++){
        sum += i;
    }
    printf("sum of %dth natural number is %d ",n,sum);
}