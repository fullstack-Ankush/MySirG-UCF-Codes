// find odd or even number using bitwise operator

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);

    if(n & 1){
        printf("Odd Number");
    }
    else{
        printf("Even Number");
    }

}