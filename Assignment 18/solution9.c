#include<stdio.h>



void insert(int b[],int n);
void reverseSort(int a[],int n);


int main(){
    int a[5];
    insert(a,5);
    reverseSort(a,5);
    for (int i = 0;i<5;i++){
        printf("%d ",a[i]);
    }

}

void insert(int b[],int n){
    for (int i = 0;i<n;i++){
        if (scanf("%d",&b[i]) != 1){
            b[i] = 0;
        }
    }
}

void reverseSort(int a[], int n){
    for (int i = 0;i<n;i++){
        for (int j = 0;j<n-i;j++){
            if (a[j+1] > a[j]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
} // problems in it 

