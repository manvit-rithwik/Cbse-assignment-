#include <stdio.h>

// Matrix:
// [ 2, -3,  5 ]
// [ 6,  0,  4 ]
// [ 1,  5, -7 ]
// Minor M_12 = 6*(-7) - 4*1 = -46
// Cofactor C_12 = (-1)^(1+2) * M_12 = -(-46) = 46

int main() {
    int m12 = 6 * (-7) - 4 * 1;
    int c12 = -m12;
    printf("Minor M_12 = %d, Cofactor C_12 = %d\n", m12, c12);
    return 0;
}
