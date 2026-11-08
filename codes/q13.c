#include <stdio.h>

// A = (A + A^T)/2 + (A - A^T)/2
int main() {
    double A[3][3] = {
        {3, 4, 5},
        {4, 4, 3},
        {0, 4, 7}
    };
    double P[3][3], Q[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            P[i][j] = 0.5 * (A[i][j] + A[j][i]);
            Q[i][j] = 0.5 * (A[i][j] - A[j][i]);
        }
    }

    printf("Symmetric part P:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) printf("%6.2f ", P[i][j]);
        printf("\n");
    }

    printf("Skew-Symmetric part Q:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) printf("%6.2f ", Q[i][j]);
        printf("\n");
    }
    return 0;
}
