#include<stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    Scanf("%d ",&n);

    switch(n){
        case 1 : 
            printf("Good ");
            break;
        case 2:
            printf("Better");
            break;
        case 3:
            printf("Best");
            break;
        default:
            printf("Invalid");
            break;
    }
}