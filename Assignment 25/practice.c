#include<stdio.h>
void swap(int *a,int *b);

int main(){
    int x = 5;
    int y = 6;
    // printf("%d",&x);
    swap(&x,&y);
    printf("%d",x);
    printf("%d",y);
}

void swap(int *a,int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
    

}