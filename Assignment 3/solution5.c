// print a number without unit digits 

#include <stdio.h>
int main (){
    int n,unit;
    printf("Enter the number \n");
    scanf("%d",&n);
    unit = n/10;
    printf("%d without last digit will look like %d",n,unit);
}