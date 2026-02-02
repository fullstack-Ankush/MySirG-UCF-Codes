#include<stdio.h>

int SumN(int a );
int SumOddN(int n);
int SumEvenN(int n);
int SumSqauerN(int n);




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





int main (){
    // int result1 = SumN(10);
    // printf("%d",result1);

    // int result2 = SumOddN(5);
    // printf("%d",result2);

    // int result3 = SumEvenN(5);
    // printf("%d",result3);

    int result4 = SumSqauerN(5);
    printf("%d",result4);




    return 0;
}