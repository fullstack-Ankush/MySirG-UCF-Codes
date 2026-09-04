#include<stdio.h>
#include<ctype.h>
#include<string.h>



int lengthString(char arr[]);
int occurenceString(char str[],char target);
int vowelInString(char arr[]);
void countSpace(char arr[]);
void toUpperCase(char arr[]);
void toLowerCase(char arr[]);
void toReverse(char arr[],int n);



int main(){
    char str[10] ={0};
    gets(str);
    // int n=strlen(str);
    int n = occurenceString(str,'a');

    printf("%d",n);
}





int lengthString(char arr[]){
    
    for(int i = 0;arr[i];i++){
        if (arr[i] == '\0');
            return i;
    }
}

int occurenceString(char arr[],char target){
    int length = 0;
    for(int i = 0;arr[i];i++){
        if(arr[i] == target)
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


void toUpperCase(char arr[]){
    for(int i = 0;arr[i];i++){
        if(arr[i]>='A' && arr[i]<='Z')
            continue;
        else{
            arr[i] -= 32;
        }

    }

    for(int i = 0;arr[i];i++){
        printf("%c",arr[i]);
    }

}


void toLowerCase(char arr[]){
    for(int i = 0;arr[i];i++){
        if(arr[i]>='a' && arr[i]<='z')
            continue;
        else{
            arr[i] += 32;
        }

    }

    for(int i = 0;arr[i];i++){
        printf("%c",arr[i]);
    }

}
void toReverse(char arr[],int n){
    char arr2[10]={0};
    for(int i = 0;arr[i];i++){
        arr2[i] = arr[n-1];
        n--;
    }
    for(int i = 0;arr2[i];i++){
        printf("%c ",arr2[i]);
    }

}

