#include<stdio.h>
void swap(int *x,int *y);
void search_all_occurences(char *str,char ch,int *arr);
void toUpperCase(char *str);
int main(){
    // int x = 45;
    // int y = 30;
    // swap(&x,&y);
    // printf("%d ",x);
    // printf("%d ",y);
    char x[10] = "anamika";
    int  result[] = {0};
    // search_all_occurences(x,"a",result);
    toUpperCase(x);
    print("%d",x);
    printf("%d",result);
}

void swap(int *a,int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

void search_all_occurences(char *str,char ch,int  *arr){
    int j = 0;
    // int occurArr[20] ={0};
    for(int i = 0;*(str+i);i++){
        if (*(str+i) == ch){
            arr[j] = i;
            j++;

        }

        
    }  
    return arr;  
    // printf("array of indices are %d", *arr);
}

void toUpperCase(char *str){
    for (int i = 0; str[i];i++){
        if(str[i] >='a' && str[i] <='z'){

            str[i] -= 32; 
        }

    }
    return str;
}

