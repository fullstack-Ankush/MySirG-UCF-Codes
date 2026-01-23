// check whether the input character is Uppercase , lowercase , digit or special symbol

#include<stdio.h>
int main(){

    char x ;
    printf("Enter the value : ");
    scanf("%c", &x);

    if(x>=65 && x<95){
        printf("Uppercase");
    }
    else if((x >= 33 && x<=47)){
        printf("Special Symbol");
    }
    else if(x >= 97 && x <= 122){
        printf("Lowercase");
    }
    else if(x>=48 && x<=58){
        printf("Digits");
    }
    else{
        printf("Currently not defined");
    }

}   