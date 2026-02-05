#include<stdio.h>

int main(){
    int arr[10];
    int svalue;


    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);

        if(i == 0){
            svalue = arr[i];
        }

        if(arr[i]<svalue){
            svalue = arr[i];
        }

    }

    printf("the smallest value among is %d",svalue );
}