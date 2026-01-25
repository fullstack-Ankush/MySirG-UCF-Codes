// print the no of digits in the number 


#include<stdio.h>
int main(){
    int n;
    int count = 0;
    printf("Enter the number : ");
    scanf("%d",&n);

    while(1){
        if(n != 0 ){
            n = n/10;
            count++;
        }
        else{
            break;
        }

    }
    printf("No of digits : %d",count);
}