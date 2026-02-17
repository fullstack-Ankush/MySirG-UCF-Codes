#include<stdio.h>
int strlength( char str[]);

int main(){
    char arr[20];
    printf("Enter the string : ");
    gets(arr);
    int  result1= strlength(arr);
    printf("Lengths of a string is : %d",result1);

}

// write a fnx to calculate the length of a string
int strlength( char str[]){
    int length = 0;
    for(int i = 0;str[i];i++){
        length++;
    }
    return length;

}