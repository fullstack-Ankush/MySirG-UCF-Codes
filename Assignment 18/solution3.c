#include<stdio.h>

int main(){

    int arr[10];
    int evensum=0,oddsum=0;

    for (int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2 == 0){
            evensum = evensum + arr[i];
        }
        else{
            oddsum = oddsum + arr[i];
        }

    }
    printf("Sum of even number and odd number are  : Even - %d Odd - %d",evensum,oddsum);
}
