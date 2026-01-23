// check the sides whether it formed a triangle or not

#include<stdio.h>
int main(){

    int side1,side2,side3;

    printf("Side 1 : ");
    scanf("%d", &side1);

    printf("Side 2 : ");
    scanf("%d", &side2);

    printf("Side 3  : ");
    scanf("%d", &side3);

    if(side1>side2+side3 || side2>side1 + side3 || side3> side1+side2){
        printf("not possible");
    }
    else{
        printf("Possible");
    }

}