#include<stdio.h>
void swapVariable(int *a,int *b);


void swapVariable(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    

}
int main(){
    int a = 5;
    int b = 6;
    
    swapVariable(&a,&b);
    printf("After swapping: a = %d, b = %d\n", a, b);

}