//WAP to check whether an input alphabet is Uppercase or not

#include<stdio.h>
int main(){
    char x ;
    printf("Enter the Character from a to Z: ");
    scanf("%c",&x);

    if (x >= 65 && x<95){
        printf(" %c is Capital",x);
    }
    else{
        printf("%c is not Capital",x);
    }
}