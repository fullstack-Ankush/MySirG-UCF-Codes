#include <stdio.h>

int main() {
    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int result[3][3];

    // Initialize result to 0
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int sum = 0;                    // fresh sum for each (i,j)
            for (int k = 0; k < 3; k++) {
                sum += arr1[i][k] * arr2[k][j];
            }
            result[i][j] = sum;
        }
    }

    // Print result
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
