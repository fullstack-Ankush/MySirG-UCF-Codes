#include<stdio.h>
void swap(int *x,int *y);
void search_all_occurences(char *str,char ch,char *arr);
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

void search_all_occurences(char *str,char ch,char *arr){
    
}
