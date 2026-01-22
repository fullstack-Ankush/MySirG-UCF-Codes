// 123 -> 312

#include<stdio.h>
int main(){
    int n, x , y , z;
    printf("Enter the 3-digit number: ");
    scanf("%d",&n);

    x = n%10 * 100;
    n = n/10;
    y = n%10 * 1;
    n = n/10;
    z = n%10 *10;
    printf("New Number will be %d", x+y+z);


}