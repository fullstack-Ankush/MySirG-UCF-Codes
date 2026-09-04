#include<stdio.h>
int GreaterArray(int arr[],int n );
int SmallerArray(int arr[],int n );
void SortArray(int arr[], int n);
void CheckDuplicate(int arr[], int n);
void SwapelementinArray(int arr[],int n ,int idx);



// 1. write a fnx to find the greatest number in array of any size 
int GreaterArray(int arr[],int n ){
    int Greater = arr[0];
    for (int i = 0;i<n;i++){
        if(arr[i]>Greater){
            Greater = arr[i];
        }

    }
    return Greater;
}

// 2. write a fnx to find the smallest number in array of any size 
int SmallerArray(int arr[],int n ){
    int Smaller = arr[0];
    for (int i = 0;i<n;i++){
        if(arr[i]<Smaller){
            Smaller = arr[i];
        }

    }
    return Smaller;
}

// 3. Write a Fnx to sort the array;

void SortArray(int arr[], int n) {
    int t;
    // Outer loop for number of passes
    for (int i = 0; i < n - 1; i++) {
        // Inner loop for comparisons
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    for(int k = 0;k<n;k++){
        printf("%d ",arr[k]);
    }
}


// 5. Print the value of duplicates that are mentioned in the array
void CheckDuplicate(int arr[], int n){
    for(int i = 0;i<n;i++){
        if(arr[i] == arr[i+1]){
            printf(" Duplicates adjacent values in array are : %d");
        }
    }
    printf("\n");
}

//  6. Swap Element in an array with specific indices

void SwapelementinArray(int arr[],int idx_r,int idx_s){ 
    int t; 
    t = arr[idx_s];
    arr[idx_r] = arr[idx_s];
    arr[idx_s] = t;

 
}
//7. Count the number of duplicates in an array
int count_duplicate(int A[],int size){
    int i,j,count=0;
    SortArray(A,size);
    i=0;
    j=1;
    while(i<=size-2){
        if(A[i]==A[j]){
            count++;
            j++;
        }
        else{
            i=j;
            j++;
        }
    }
    return count;

}


// 8. write a fnx to print all unique element in an array
void printUniqueElement(int A[],int size){
    int UnqA[6] = {0};
    SortArray(A,size);
    int i = 0;
    int j = 1;
    while(i<=size-2){
        if(A[i]==A[j]){
            j++;
            
        }
        else{
            UnqA[i] +=A[i];
            i=j;
            j++;
        }
    }

    printf(" updated array is : %d \n",UnqA);

}

// 9. merge two array with same size and sort it in descending order

int mergewithSort(int a[],int b[], int n){
    if (sizeof(a)/sizeof(int) == sizeof(b)/sizeof(int)){
        int c[2*(sizeof(a)/sizeof(int))];
        for (int i = 0;i<2*n;i++){
            c[i] += a[i];
            c[i] += b[i];
        }
        SortArray(c,2*n);
        return c;

    }
    else{
        printf("Make sure you enter same size of array\n");
    }
}




int main(){
    int arr1[6] = {1,1,3,3,3,6};
    int arr2[6] = {9,8,7,6,5,4};
    int n = sizeof(arr1)/sizeof(int);
    int newarr[] = mergewithSort(arr1,arr2,n);
    // int result1 = GreaterArray(arr1,n);
    // printf("%d",result1);
    // int resutl2 = SmallerArray(arr1,n);
    // printf("%d",resutl2);
    // SortArray(arr1,n);
    // CheckDuplicate(arr1,n);
    // printUniqueElement(arr1,n);
    printf("%d",newarr);
    
        
    
    

}