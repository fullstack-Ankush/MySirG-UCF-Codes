#include<stdio.h>

int SumN(int a );
int SumOddN(int n);
int SumEvenN(int n);
int SumSqauerN(int n);
int SumDigits(int n);
int factorial(int n);
int HCF(int a, int b);

int Fib(int n);




//1 . create a recursive fnx to print first N sum of natual number 

int SumN(int a ){
    if (a == 1){
        return 1;
    }
    int S = a + SumN(a-1);
    return S;
}

// 2.  create a recursive fnx to print first N sum of odd  natural number 

int SumOddN(int n ){
    if(n == 1){
        return 1;
    }
    int S = 2*n-1 +SumOddN(n-1);
    return S;
}

// 3. create a recursive fnx to print first N sum of even natural number

int SumEvenN(int n ){
    if(n == 1){
        return 2;
    }
    int S = 2*n +SumEvenN(n-1);
    return S;
}

// 4. write a recursive fnd to print the square of Sum of first natural number 

int SumSqauerN(int n){
    if(n == 1){
        return 1;
    }
    int S = n*n + SumSqauerN(n-1);
    return S;

}

// 5.Write a recursive fnx to sum of digits of given number 
int SumDigits(int n){
    if(n/2 == 0){
        return n;
    }
    int S = n%10 + SumDigits(n/10);
    return S;

}


// 6 . Write a Recursive fnx to find factorial of a number 

int factorial(int n){
    if(n == 1){
        return 1;
    }
    int S = n *factorial(n-1);
}

// 7 . Write a Recursive fnx to find hcf of two number : 

int HCF(int a, int b){


}

// 8 . Write a Recursive fnx to print first N term of a fibonacci series

// Recursive helper: returns the nth Fibonacci number (0-based)
int Fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return Fib(n-1) + Fib(n-2);
}




int main (){
    // int result1 = SumN(10);
    // printf("%d",result1);

    // int result2 = SumOddN(5);
    // printf("%d",result2);

    // int result3 = SumEvenN(5);
    // printf("%d",result3);

    // int result4 = SumSqauerN(5);
    // printf("%d",result4);

    // int result5 = SumDigits(1234);
    // printf("%d",result5);

    // int result6 = factorial(5);
    // printf("%d",result6);

    int result8 = Fib(5);
    printf("%d",result8);







    return 0;
}