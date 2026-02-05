#include<stdio.h>

int main(){
    int arr[10];
    int sum = 0;
    for(int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];

    }   
    printf("Sum of given number is : %d ",sum);


}