// check a number whether it is divisible by 3 and divisible by 2

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);


    if (n%3 == 0 && n%2 == 0){
        printf("%d is divisibly by 2 as well as with 3 ",n);
    }
    else{
        printf("Not divisible ");
    }

}