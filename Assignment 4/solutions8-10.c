#include <stdio.h>

void main(){
    int  x = 10>8>0;
    printf("%d\n", x); // return true
    int y = !2 >-2; // return 1;
    printf("%d",y);
    int z = 3<0 && 5>0; // return 0;
    printf("\n%d",z);
}