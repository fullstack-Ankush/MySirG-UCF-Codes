#include<stdio.h>
int LCM(int a, int b);
int HCF(int a, int b);
int prime(int a);
int next_prime(int a);
int Nprime(int a);



int main(){
  // int  result1 = LCM(3,6);
 // printf("%d\n",result1);
//  int result2 = HCF(4,6);
//  printf("%d",result2);

    // int result3 = prime(8);
    // printf("%d",result3);

    // int result4 = next_prime(11);
    // printf("%d",result4);

    int result5 = Nprime(13);
    printf("%d",result5);
    return 0;
}


//fnx to find LCM into it
int LCM(int a, int b){
    
    for(int i = a<b?a:b;i<=a*b;i++){
        if(i%a == 0 && i%b == 0){
            return i;
        }
    }
}

// fnx to find HCF into it 

int HCF(int a, int b){
    for(int L = a<b?a:b; ; L--){
        if(a%L == 0 && b%L == 0 ){
            return L;
            break;
        }
        else if(L == 1){
            return L;
            break;
        }
    }
}

// fnx to check whether number is prime or not

int prime(int a){
    for(int i = 2;i<=a;i++){
        if(a%i == 0){
            return 0;
        }
        else{
            return 1;
        }

    }

}
    
// fnx to find the next prime number after a given number

int next_prime(int a){
    for(int i = a+1; ; i++){
        if(prime(i) == 1){
            return i;    
            break;
        }
    }
}

// 5.  fnx to print first N prime number :  

int Nprime(int a){
    for (int i = 2;i<=a;i++){
        printf("\n");
        printf("%d",next_prime(i));
    }
}