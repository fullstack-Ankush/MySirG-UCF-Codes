#include<stdio.h>
int main(){
    int a,b,c,d,e,average;
    printf("Enter marks of subject 1 (out of hundred)");
    scanf("%d",&a);

    printf("Enter marks of subject 2 (out of hundred)");
    scanf("%d",&b);

    printf("Enter marks of subject  3 (out of hundred)");
    scanf("%d",&c);

    printf("Enter marks of subject 4 (out of hundred)");
    scanf("%d",&d);

    printf("Enter marks of subject 5 (out of hundred)");
    scanf("%d",&e);


    average = (a+b+c+d+e)/500;

    if(average < 33){
        printf("Failed ");
    }
    else{
        printf("Passed");
    }
}