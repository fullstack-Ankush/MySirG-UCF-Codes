// check whether the character is upper case , lower case or special character using switch case 

#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    switch(ch){
        case 'A' ... 'Z':
            printf("Uppercase letter");
            break;
        case 'a' ... 'z':
            printf("Lowercase letter");
            break;
        default:
            printf("Special Character");
            break;
    }
}