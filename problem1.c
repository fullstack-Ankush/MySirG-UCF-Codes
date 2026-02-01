#include<stdio.h>

int main(){
    int n = 11;
    for (int i = n;n>0;i--){
        printf("%d",n%2);
        n = n/2;
    }
}