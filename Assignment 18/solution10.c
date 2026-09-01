#include<stdio.h>
void insert(int a[], int n);
void copyarray(int a[],int b[], int n);


int main(){
    int a[5];
    int b[5];
    insert(a,5);
    copyarray(a,b,5);
    a[2] = 0;
    for (int i = 0;i<5;i++){
        printf("%d ",b[i]);
    }
}

void insert(int a[],int n){
    for (int i = 0;i<n;i++){
        if (scanf("%d",&a[i]) != 1){
            a[i] = 0;
        }
    }
}

void copyarray(int a[], int b[], int n){
    for (int i = 0;i<n;i++){
        b[i] = a[i];
    }
}