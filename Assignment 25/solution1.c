#include<stdio.h>
#include<string.h>


void swapVariable(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    

}

//2. find the occurence of a variable
    void searchOccurence(char *str,char ch, int *arr){
        int i,k;
        for(i = 0,k=0;str[i];i++){
            if(str[i] == ch){
                arr[k] = i;
                k++;
            }
        }
        return arr;
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

// 4. a fnx to convert string into LowerCase
void ToLowerCase(char *str){
    for(int i = 0;str[i];i++){
        if(str[i]<90 || str[i]>65){
            str[i] += 32;
        }
        else
            printf("Not possible to change into uppercase");
    }

}

//5. Extract the substring from the given string 
void extractString(char *str,int startIdx,int endIdx, int *arr){
    for(int i = startIdx;i<endIdx;i++){
        arr[i-startIdx]=str[i];
    
    }
    arr[endIdx-startIdx] = '\0';
    
    

}

//6. Swap two char array in fnx
void swap_array(char *s1,char *s2){
    char temp[50];
    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);
}

//7 write a fnx to sort an array
void sort(int *ptr,int size){
    int r,i,t;
    for(r=1;r<size;r++){
        for(i=0;i<size-1;i++){
            if(ptr[i]>ptr[i+1]){
                t = ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=t;
            }
        }
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