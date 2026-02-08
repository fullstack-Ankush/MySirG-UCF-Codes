#include<stdio.h>

int main(){

    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int result[3][3] ;

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            result[j][i] = arr1[i][j];
        }
    }

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

}