// print  first n  odd natural number from users

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    for (int i = 1;i<= n ;i =  i + 2){
        printf("%d \n", i);
    }
}