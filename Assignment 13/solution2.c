// Write a Menu Driven Program
// s

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a ,b, n ;
    printf("Enter a 1st number : ");
    scanf("%d",&a);
    printf("Enter a 2nd number : ");
    scanf("%d",&b);
    while(1){
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiply \n");
    printf("4. Divide \n");
    printf("5. Exit \n");

    printf("Enter a choice : ");
    scanf("%d",&n);

    switch(n){
        case 1:
            printf("Sum is %d",a+b);
            break;
        case 2:
            printf("Subtraction is %d ", a -b);
            break;
        case 3:
            printf("Muliplication is %d", a*b);
            break;
        case 4:
            printf("Division is %d ", a /b);
            break;
        case 5:
            exit(1);
        default:
            printf("Enter a valid number : ");
            
    }


    }

}
    