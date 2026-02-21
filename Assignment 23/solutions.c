#include<stdio.h>
#include<string.h>


int main(){
    printf("\n");
   
   
   
   
   
   
   
   
   
    return 0;
}

// write a fnx to check whether given string is palindrome or not;
int isPalindrome(char str[]){
    int n = strlen(str);
    for(int i = 0;i<n/2;i++){
        if(str[i] != str[n-1-i]){
            return 0;
        }
        else{
            return 1;
        }
    }

}

