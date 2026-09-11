#include<stdio.h>
#include<string.h>



void swap(int *x,int *y);
void search_all_occurences(char *str,char ch,int *arr);
char* toUpperCase(char *str);
char * toLowerCase(char *str);
char * toLowerCase(char *str);
void extractString(char *str,int start_Index,int end_index, char *result);
void swapString(char *str1,char *str2);
void sortArray(int *arr,int size);
void merge2Array(int *arr1,int size1,int *arr2,int size2,int *arr3);
int f9(int arr[],int size);
int highestMarks( int **ptr,int n,int size[]){
    int max = 0;
    max = ptr[0][0]; 
    for(int i =0 ;i<n;i++){
        for(int j = 0;j<size[i];j++){
            if(max<ptr[i][j]){
                max=ptr[i][j];
            }
        }
    }
    return max;
}

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

char* toUpperCase(char *str){
    for (int i = 0; str[i];i++){
        if(str[i] >='a' && str[i] <='z'){

            str[i] -= 32; 
        }

    }
    return str;
}

char * toLowerCase(char *str){
    for (int i = 0; str[i];i++){
        if (str[i] >='A' && str[i] <'Z'){
            str[i] += 32;
        }
    }
    return str;
}

void extractString(char *str,int start_Index,int end_index, char *result){
    for(int i = start_Index;i<end_index;i++){
        result[i-start_Index] = str[i];

    }
    result[end_index-start_Index] = '\0';
}

void swapString(char *str1,char *str2){
    char temp[50];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}

void sortArray(int *arr,int size){
    int temp;
    for(int i = 1;i<size;i++){
        for (int j = 0;j<size;j++){
             if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
             }
        }
    }
}

void merge2Array(int *arr1,int size1,int *arr2,int size2,int *arr3){
    int i,j,k ;
    for(i =0,j=0,k=0;i<size1&&j<size2;k++){
        if (arr1[i]<arr2[i]){
            arr3[k] =arr1[i];
            i++;

        }
        else{
            arr3[k] = arr2[j];
            j++;

        }

    }
    while (i < size1){
        arr3[k] = arr1[i];
        k++;
        i++;

    }
    while(j<size2){
        arr3= arr2[j];
        k++;
        j++;

    }
}

int f9(int arr[],int size){
    int left = 0,t = 0;
    int right = 0;
    int loc = 0;
    right = size -1;

    while(left<right){
        while(left<right && arr[loc]<arr[right]){
            right--;
        if (left == right)
            break;
        t = arr[loc];
        arr[loc] = arr[right];
        arr[right] = t;
        loc = right;
        while(left<right && arr[left]<arr[loc]){
            left++;
        if(left == right)
            break;
        t = arr[left];
        arr[left] = arr[loc];
        arr[loc] = t;
        loc = left;

        }
        }
        
    }
    return loc;

}   
