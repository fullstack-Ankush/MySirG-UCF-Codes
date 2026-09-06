#include<stdio.h>

int length(char *p);

int main(){
    int l;
    char  str[10];
    fgets(str,10,stdin);
    l = length(str);
    printf("%d",l);
}

int length(char *p){
    int x = 0;
    for(int i = 0;*(p+i);i++){
        x++;
    }
    return x-1;
}





































// void input(int x[], int n);
// void display(int *p,int size);
// int main(){
//     int a[10];

//     input(a,10);
//     display(&a,10);

    
//     printf("\n");
//     return 0;
// }

// void input(int x[], int n){
//     for(int i = 0;i<n;i++){
//         scanf("%d",&x[i]);
//     }
// } 

// void display(int *p,int size){
//     for (int i = 0;i<size;i++){
//         printf("%d ",*(p+i));
//     }
// }