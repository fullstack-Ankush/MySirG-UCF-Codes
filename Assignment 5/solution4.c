// find even or odd without using % OPERATOR

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if (n/2*2 == n){
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }


}