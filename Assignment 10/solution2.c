// find the  sum of nth term of the Fibonacci series
#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, nextTerm,sum=0;

    printf("Enter the position of the term in Fibonacci series: ");
    scanf("%d", &n);    

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        sum=t1;
        printf("Sum of Fibonacci terms up to position %d is: %d\n", n, sum);
    } else if (n == 2) {
        sum=t1+t2;
        printf("Sum of Fibonacci terms up to position %d is: %d\n", n, sum);
    } else {
        sum=t1+t2;
        for (int i = 3; i <= n; ++i) {
            nextTerm = t1 + t2;
            sum+=nextTerm;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("Sum of Fibonacci terms up to position %d is: %d\n", n, sum);
    }
    return 0;
}