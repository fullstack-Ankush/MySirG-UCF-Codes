#include<stdio.h>

int main(){
    int x = 5;
    int y = &x;
    // printf("%d",&x);
    printf("%d",*&x);
    printf("%d",y);
}