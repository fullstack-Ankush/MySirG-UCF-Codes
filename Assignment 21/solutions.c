#include<stdio.h>
#include<ctype.h>


int lengthString(char arr[]);
int occurenceString(char str[]);
int vowelInString(char arr[]);





int lengthString(char arr[]){
    int length = 0;
    for(int i = 0;arr[i];i++){
        length += 1;
    }
    return length;
}

int occurenceString(char arr[]){
    int length = 0;
    for(int i = 0;arr[i];i++){
        if(arr[i] != arr[i+1])
            length += 1;
    }
    return length;

}
int vowelInString(char arr[]){
    int length = 0;
    for(int i = 0;arr[i];i++){
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
            length += 1;
        }
    }
    return length;
}





int main(){
    char str[10] ={'B','H','A','P','P','A','N'};
    // int  result1=lengthString(str);
    int  result2=occurenceString(str);
    // printf("%d ",result1);
    printf("%d ",result2);
    int result3 = vowelInString(str);
    printf(" No . of vowels present in %d ",result3);
}