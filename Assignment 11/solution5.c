#include<stdio.h>

int main(){
    for(int i = 0;i<5;i++){
        for(int j = 1;j<=i+1;j++){
            int n = 0+j;
            printf("%d ",n);

        }
        printf("\n");
    }
    return 0;
}