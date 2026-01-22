//  1 USD = 84.23 INR and Convert INR to USD

#include<stdio.h>
int main(){
    float inr;
    float usd;

    printf("Enter your Amount in INR: ");
    scanf("%f", &inr);
    usd = inr * 84.23;
    printf("Your Amount in USD : %0.2f",usd);
    return 0;

}