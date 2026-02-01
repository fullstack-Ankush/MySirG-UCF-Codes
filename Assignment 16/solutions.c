#include<stdio.h>
void rprintn(int a );
void print_rn(int a );
void print_oddN(int a);
void print_rev_odd(int a);
void print_evenN(int a);
void print_rev_even(int a);
void print_sqaureN(int a);
void print_dec_to_bin(int a);


// 1. recursive fnx to print first N natural number
void rprintn(int a ){
    if(a>0){
        rprintn(a-1);
        printf("%d\n",a);
    }
    
}
// 2 .fnx to print first N natural number in reverse 

void print_rn(int a ){
    if(a>0){
        printf("%d\n",a);
        print_rn(a-1);

    }

}

// 3. recursive funx to print n natural odd number : 
void print_oddN(int a){
    if(a%2 != 0){
        if(a>0){
            print_oddN(a-2);
            printf("%d\n",a);
        }
    }
}

// 4. fnx to print n natural odd number in reverse
void print_rev_odd(int a ){
    if(a%2 != 0){
        if(a>0){
            printf("%d\n",a);
            print_rev_odd(a-2);
        }
    }

}

// 5. fnx to print even n natural number 
void print_evenN(int a){
        if(a>0){
            print_evenN(a-1);
            printf("%d\n",2*a);
        }
    }
// 6. Same as 5 but in reverse order

void print_rev_even(int a){
    if(a>0){
        printf("%d\n",2*a);
        print_rev_even(a-1);
    }
}

// 7 .print square of first n natural number 

void print_sqaureN(int a){
    if(a>0){
        print_sqaureN(a-1);
        printf("%d\n",a*a);
    }
}

// 8. print decimal to binary 

void print_dec_to_bin(int a){
    if(a>0){
        printf("%d",a%2);
        print_dec_to_bin(a/2);
    }


}

int main(){
    // rprintn(5);
    // print_rn(5);
    // print_oddN(9);
    // print_rev_odd(11);
    // print_evenN(8);
    // print_rev_even(5);
    // print_sqaureN(5);
    print_dec_to_bin(11);

}