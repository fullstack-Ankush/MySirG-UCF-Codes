
#include<stdio.h>


float AreaC(float r);
float simpleInterest(int p,int r, int t);
int evenodd(int n);
int naturalsum(int n);

int main(){
    // float result = AreaC(21);
    // float result2 = simpleInterest(1000,5,2);
    // printf("%f",result2);
    // printf("%f ",result);
    int result3 = evenodd(5);
    int result4 = 
    printf("%d",result3);

    return 0;
}

// fnx to calculate the area of circle (TSRS)

float AreaC(float  r){
    float s = (22.0/7)*r*r;
    return s ;

}

//fnx to calculate the simple interest (TSRS)
float simpleInterest(int p,int r,int t){
    int result = (p*r*t)/100;
    return result;
}

// fnx to check whether number is even or odd (TSRS)

int evenodd(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

// funx to print first nth natural number 

int naturalsum(int n){
    int sum = 0;
    for(int i = 1;i<=n;i++){
        sum += i;

    }
    return sum;
}