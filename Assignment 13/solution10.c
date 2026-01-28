#include <stdio.h>
#include <math.h>

// Function to calculate GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate LCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to calculate sum of digits
int sumOfDigits(int n) {
    int sum = 0;
    n = abs(n);
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Function to calculate volume of cuboid
float volumeOfCuboid(float length, float width, float height) {
    return length * width * height;
}

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int main() {
    int choice;
    
    while (1) {
        printf("\n========== MENU ==========\n");
        printf("1. Calculate LCM of two numbers\n");
        printf("2. Calculate sum of the digits of a number\n");
        printf("3. Volume of a cuboid\n");
        printf("4. Check whether a given number is Prime or not\n");
        printf("5. Exit\n");
        printf("==========================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: {
                int num1, num2;
                printf("Enter first number: ");
                scanf("%d", &num1);
                printf("Enter second number: ");
                scanf("%d", &num2);
                printf("LCM of %d and %d is: %d\n", num1, num2, lcm(num1, num2));
                break;
            }
            
            case 2: {
                int num;
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Sum of digits of %d is: %d\n", num, sumOfDigits(num));
                break;
            }
            
            case 3: {
                float length, width, height;
                printf("Enter length: ");
                scanf("%f", &length);
                printf("Enter width: ");
                scanf("%f", &width);
                printf("Enter height: ");
                scanf("%f", &height);
                printf("Volume of cuboid is: %.2f\n", volumeOfCuboid(length, width, height));
                break;
            }
            
            case 4: {
                int num;
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPrime(num))
                    printf("%d is a Prime number\n", num);
                else
                    printf("%d is not a Prime number\n", num);
                break;
            }
            
            case 5: {
                printf("Exiting the program...\n");
                return 0;
            }
            
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}
