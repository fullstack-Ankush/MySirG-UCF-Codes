#include<stdio.h>
void swapVariable(int *a,int *b);


void swapVariable(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    

}
//3 . Write a fnx to convert String into UpperCase

void ToUpperCase(char *str){
    for(int i = 0;str[i];i++){
        if(str[i]<127 || str[i]>97){
            str[i] -= 32;
        }
        else
            printf("Not possible to change into uppercase");
    }

}
int main(){
    char string[10];
    int occurindex[10];









    printf("Enter the string : ");
    gets(string);   




    ToUpperCase(string);





    
    for(int i = 0;string[i];i++){
        printf("%c",string[i]);
    }
    // int a = 5;
    // int b = 6;
    
    // swapVariable(&a,&b);
    // printf("After swapping: a = %d, b = %d\n", a, b);



}