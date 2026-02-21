#include<stdio.h>
int strlength( char str[]);
void rev_string(char str[],int n);
int compare(char s1[],char s2[]);
int countVowels(char str[]);


int main(){
    char arr[20];
    printf("Enter the string : ");
    gets(arr);
    int  result1= strlength(arr);
    // printf("Lengths of a string is : %d",result1);
    rev_string(arr,result1);

}

// write a fnx to calculate the length of a string
int strlength( char str[]){
    int length = 0;
    for(int i = 0;str[i];i++){
        length++;
    }
    return length;

}

// write a fnx to reverse a string
void rev_string(char str[],int n){
    char ch;
    for(int i = 0;i<n;i++){
        ch=str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = ch;
    }
    printf("Reverse of string is %s ",str);
     
}

// a fnx to compare 2 string
int compare(char s1[],char s2[]){
    for(int i = 0;s1[i]&&s2[i];i++){
        if(s1[i] != s2[i])
            break;
    return s1[i]-s2[i];
    }
}

// write a fnx to count vowels in given string

int countVowels(char str[]){
    int count=0;
    char v[]= "aeiouAEIOU";
    for(int i = 0;str[i];i++){
        for(int j = 0;v[j];j++){
            if(str[i] == v[j])
            {
                count++;
                break;
            }
            
        }

    }
    return count;
}

int find(char str[], char ch){
    for(int i = 0;str[i];i++){
        if(str[i] == ch){
            return i;
        }

    }
    return -1;

}

// write a fnx to find whether the given string is alphanumeric or not

int isAlphaNumeric(char str[]){
    int alpha=0,digit=0;
    for(int i = 0;str[i];i++){
        if(str[i]>='0'&&str[i]<='9')
            digit=1;
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
            alpha=1;
    }
    if(digit&alpha)
        return 1;
    else
        return 0;
}