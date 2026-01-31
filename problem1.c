#include<stdio.h>

int main(){
    char arr[10]= {'B','a','n','a','n','a'};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("%d",length);
    return 0;
}