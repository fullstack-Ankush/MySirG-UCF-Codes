#include<stdio.h>
int main(){
    float cp, sp,profit ,loss;

    printf("Enter the C.P : ");
    scanf("%f",&cp);

    printf("Enter the S.P : ");
    scanf("%f",&sp);

    if(cp>sp){
        loss = cp - sp;
        int loss_percent = loss/cp * 100;
        printf("loss percentage is %d",loss_percent);
    }
    else{
        profit = sp - cp;
        int profit_percent  = profit/cp * 100;
        printf("Profit percentage is %d ",profit_percent);
    }


}
