// WAP to check whether a number is 3 digit or not

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 100 && n<=999){
        printf("3 digit number ");
    }
    else{
        printf("Not a 3 digit number");
    }
} 