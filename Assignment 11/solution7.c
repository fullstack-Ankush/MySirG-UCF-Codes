#include <stdio.h>

int main() {
    int i, j;

    for(i = 5; i >= 1; i--) {
        for(j = 0; j<i; j++) {
            if(j<= 5-i){
                printf(" ");
            }
            else{

                printf("%c", 'A' + j);
            }
        }
        printf("\n");
    }

    return 0;
}