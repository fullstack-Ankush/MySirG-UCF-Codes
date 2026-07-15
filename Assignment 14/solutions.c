
#include<stdio.h>


float AreaC(float r);
float simpleInterest(int p,int r, int t);
int evenodd(int n);
int naturalsum(int n);
int oddnaturalsum(int n);
int factorial(int n);
int combinations(int n,int r);
int permutation(int n,int r);
int isEvenOrOdd(int n);
void printPrimeFactors(int n);



int main(){
    int result5 = oddnaturalsum(9);
    // int result6 = factorial(4);
    // printf("%d",result6);
    // printf("%d",result5);
    // printf("%d",result6);
    // int result7= combinations(4,2);
    // printf("%d",result7);
    // int result8=permutation(4,2);
    // printf("%d",result8);
    // int result9 =isEvenOrOdd(50);
    // printf("%d",result9);
    printPrimeFactors(27);
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


// fnx to add odd natural number : 

int oddnaturalsum(int n ){
    int sum = 0;
    for(int i = 1;i<=n;i=i+2){
        sum += i;
    }
    return sum ;
}

// fnx to find the factorial of a number (TSRS)

int factorial(int n){
    int result = 1;
    if (n == 0){
        return 1;
    }
    for(int i = 1;i<=n;i++){
        result *=i;
    }
    return result;
}

// fnx to combinations of a number 

int combinations(int n , int r){
   
    int a = factorial(n);
    int b = factorial(n-r);
    int c = factorial(r);

    int result = a/(b*c);
    return result;
}
int permutation(int n , int r){
   
    int a = factorial(n);
    int b = factorial(n-r);
    // int c = factorial(r);

    int result = a/b;
    return result;
}

// a fnx to check whether number is even or odd

int isEvenOrOdd(int n){
    if(n%2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

// a fnx to calculate the factors of a number (eg. 12 = 2 * 2 * 3);

void printPrimeFactors(int n) {
    // 1. Handle the smallest prime factor (2)
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    // 2. Handle odd prime factors up to the square root of n
    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // 3. If n is still greater than 2, then n itself is prime
    if (n > 2) {
        printf("%d ", n);
    }
    printf("\n");
}