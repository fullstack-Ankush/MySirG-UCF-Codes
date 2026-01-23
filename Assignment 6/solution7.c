// Check whether the number is postiive , zero and negative
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    if(n<0){
        printf("Negative Number");
    }
    else if(n == 0){
        printf("Zero value");
    }
    else{
        printf("Positive Number");
    }
}