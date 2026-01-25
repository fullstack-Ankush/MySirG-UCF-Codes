// check whether the given number is prime number or not;


#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    for  (int i = 2;i<= n;i++){
        if(n%i == 0){
            printf("Composite number");
            break;
        }
        else{
            printf("prime number");
            break;
        }
    }

}