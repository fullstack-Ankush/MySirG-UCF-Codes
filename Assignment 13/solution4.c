// Code a Menu driven for traingles types

#include<stdio.h>

int main(){
    int a,b,c,n;
    printf("Enter the 1st side : ");
    scanf("%d",&a);
    printf("Enter the 2nd side : ");
    scanf("%d",&b);
    printf("Enter the 3rd side : ");
    scanf("%d",&c);

    printf("\n 1. check isosceles traingle");
    printf("\n 2.check right triangle");
    printf("\n 3. Check equilateral traingle");

    printf("\n Enter your choice : ");
    scanf("%d",&n);

    switch(n){
        case 1:
            if(a==b || b ==c || c ==a){
                printf("Yes  it is isosceles");
            }
            else{
                printf("No it is not isosceles"); 
            }
            break;
        case 2: 
                if(a^2 >b^2 +c^2 || b^2 >a^2 + c^2 || c^2 > a^2 + b^2){
                    printf("Yes it is right traingle");
                }
                else{
                    printf("No it is not right triangle");
                }
                break;
        case 3: 
            if(a == b == c){
                printf("Yes it is equilateral ");
            }
            else{
                printf("No it is not equilateral");
            }
            break;
        default:
            printf("Wrong Number");
    }



}