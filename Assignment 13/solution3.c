// give a greeting about a day in a week

#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of days : ");
    scanf("%d",&n);

    switch(n){
        case 1:
            printf("New Beginning");
            break;
        case 2:
            printf("No Non-Veg");
            break;
        case 3:
            printf("Super Wedenesday");
            break;
        case 4:
            printf("Fall of the week");
            break;
        case 5:
            printf("Good Friday");
            break;
        case 6:
            printf("Weekend Start");
            break;
        case 7:
            printf("Funday");
            break;
        default:
            printf("Enter a Valid Number");
            break;

    }
}