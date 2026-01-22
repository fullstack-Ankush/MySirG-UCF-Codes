// print unit number of a digit

#include<stdio.h>

int main(){
    int n ;
    int unit;
    printf("Enter your number \n");
    scanf("%d",&n);
    unit = n%10;
    printf("Unit number of %d is %d",n,unit);


}