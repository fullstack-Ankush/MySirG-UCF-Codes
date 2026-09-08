#include<stdio.h>
void swap(int *x,int *y);
int main(){
    int x = 45;
    int y = 30;
    swap(&x,&y);
    printf("%d ",x);
    printf("%d ",y);
}

void swap(int *a,int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}