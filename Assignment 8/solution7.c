#include<stdio.h>

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    if(n%2 == 0){
        for (int i = n ; i>=1;i= i-2){
            printf("%d \n",i);
        }
    }
    else{
        
    for (int i = n-1;i>= 1 ;i= i - 2){
        printf("%d \n", i);
    }

    }
}