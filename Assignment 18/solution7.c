#include<stdio.h>


void input(int b[],int n);
int  secondLargest(int c[],int n);


int main(){
    // int n ;
    // scanf("Enter the no of element you want to insert %d,",&n);
    int a[5];
    input(a,5);
    for (int i = 0;i<5;i++){
        printf("%d ",a[i]);
    }
    int result = secondLargest(a,5);
    printf("\n Second largest is :  %d",result);
}

void input(int b[],int n){
    for (int i = 0;i<n;i++){
        if (scanf("%d",&b[i]) != 1){
            b[i] = 0;
        }
    }
}
int secondLargest(int c[],int n){
     for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n - i; j++) {
            if (c[j] > c[j + 1]) {
                int temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }
    return c[n-1];
}