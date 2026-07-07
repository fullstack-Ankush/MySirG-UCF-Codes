// sort element 

#include<stdio.h>
int input(int a[],int n);
int sort(int b[]);

int main(){

    int a[10];

    input(a,10);
    printf("sorted array ");

    sort(a);


    
}

int input(int a[],int n){
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
}

int sort(int b[]){
    for(int i =0;i<10;i++){
        for(int j = 0;j<10-i;j++){
            if(b[j] > b[j+1]){
                int temp;
                temp = b[j+1];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
        
        printf("  %d\n",b[i]);
    }


}