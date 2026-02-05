
#include<stdio.h>

// take the average number given in array by user 

int main(){
    float arr[10];
    float avg;
    int sum = 0;
    for(int i = 0;i<10;i++){
        scanf("%f",&arr[i]);
        sum = sum + arr[i];
        

    }  
    avg = sum/10.0;
    printf("Average of given array is %f : ",avg);


}