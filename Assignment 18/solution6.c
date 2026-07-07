// sort element 

#include<stdio.h>


void input(int a[], int n);
void sort(int b[], int n);

int main(void) {
    int a[10];

    input(a,10);
    printf("sorted array \n");

    sort(a, 10);

    return 0;
}

void input(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            a[i] = 0;
        }
    }
}

void sort(int b[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (b[j] > b[j + 1]) {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", b[i]);
    }
}