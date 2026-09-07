#include<stdio.h>

void input(int **q,int n,int size[]);
int main(){
    int a[5],b[6],c[3],d[8];
    int *p[4];
    int size[] = {5,6,3,8};
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;
    p[3] = &d;
    int x= 12;
    input(p,4,size);

}

void input(int **q,int n,int size[]){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<size[i];j++){
            scanf("%d",*(q+i)+j);

        }
    }
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