// Wap to find whether the given number is in Fibonacci series or not
#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, nextTerm;
    int isInFibonacci = 0; // Flag to check if n is in Fibonacci series

    printf("Enter a number to check if it is in Fibonacci series: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }

    if (n == t1 || n == t2) {
        isInFibonacci = 1;
    } else {
        while (nextTerm <= n) {
            nextTerm = t1 + t2;
            if (nextTerm == n) {
                isInFibonacci = 1;
                break;
            }
            t1 = t2;
            t2 = nextTerm;
        }
    }

    if (isInFibonacci) {
        printf("%d is in the Fibonacci series.\n", n);
    } else {
        printf("%d is not in the Fibonacci series.\n", n);
    }

    return 0;
}