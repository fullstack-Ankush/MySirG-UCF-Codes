#include<stdio.h>
#include<stdlib.h>

// 1. Write a functioin to input variable length string it an array without memory wastage. (Use dynamic memory allocation)
char* inputString(){
    char* str = NULL;
    char ch;
    int length = 0;
    printf("Enter a string: ");
    while((ch = getchar()) != '\n'){
        str = (char*)realloc(str,(length +1) * sizeof(char));
        str[length] = ch;
        length++;

    }
}