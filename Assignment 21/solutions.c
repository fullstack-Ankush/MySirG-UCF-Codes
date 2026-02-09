#include<stdio.h>
#include<ctype.h>


int lengthString(char arr[]);
int occurenceString(char str[]);
int vowelInString(char arr[]);
void countSpace(char arr[]);





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
    char vowels[10] = {'a','e','i','o','u','A','E','I','O','U'};
    for(int i = 0;i<lengthString(arr);i++){
        for(int j = 0;j<vowels[j];j++){
        if(arr[i] == vowels[j]){
            length += 1;
            break;
        }
    }
  }
    return length;
}

// count the spaces between the string 

void countSpace(char arr[]){
    int length = 0;
    for(int i = 0;arr[i];i++){
        if(arr[i] == ' '){
            length += 1;
        }
    }
    printf("%d ",length);


}




int main(){
    char str[10] ={'A','M',' ','I','T','I',' '};
    // int  result1=lengthString(str);
    // int  result2=occurenceString(str);
    // printf("%d ",result1);
    // printf("%d ",result2);
    //     int result3 = vowelInString(str);
    //     printf(" No . of vowels present in %d ",result3);
    countSpace(str);
}