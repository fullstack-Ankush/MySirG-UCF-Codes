// WAP to check whether a number is divisibly by 7 or divisible by 3 

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    if(n%7 == 0 || n%3 == 0){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
}
