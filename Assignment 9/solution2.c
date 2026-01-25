//// calculate the sum of n natural number  but only even natural number

#include<stdio.h>

int main(){
    int n;
    int sum = 0;

    printf("Enter the number : ");
    scanf("%d",&n);

    for (int i = 2;i<=n;i = i + 2){
        sum += i;
    }
    printf("sum of %dth natural number is %d ",n,sum);
}