// find the nth term of the Fibonacci series
#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the position of the term in Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        printf("Fibonacci term at position %d is: %d\n", n, t1);
    } else if (n == 2) {
        printf("Fibonacci term at position %d is: %d\n", n, t2);
    } else {
        for (int i = 3; i <= n; ++i) {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("Fibonacci term at position %d is: %d\n", n, t2);
    }

    return 0;
}