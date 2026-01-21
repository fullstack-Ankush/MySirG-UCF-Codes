// swapping the value of integer variables

#include<stdio.h>
int main(){
    int a=5,b=7,c;
    printf("Value before  swapping : %d %d  \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Value after swapping : %d %d ",a,b);
    
}
