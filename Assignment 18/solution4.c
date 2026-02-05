// find the greatest among the following data in array

#include<stdio.h>

int main(){

    int arr[10];
    int greatest_value;
    for(int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
        if(i == 0){
            greatest_value = arr[i];
        }
        if(arr[i]>greatest_value){
            greatest_value = arr[i];
        }
        

    }
    printf(" greatest among all the value is : %d ",greatest_value);


}