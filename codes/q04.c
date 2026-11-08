#include <stdio.h>
#include <complex.h>

int main() {
    // [ a + ib,   c + id ]
    // [ -c + id,  a - ib ]
    // det = (a + ib)(a - ib) - (c + id)(-c + id) = a^2 + b^2 + c^2 + d^2
    double a = 2.0, b = 3.0, c = 4.0, d = 5.0;
    double complex A11 = a + I*b;
    double complex A12 = c + I*d;
    double complex A21 = -c + I*d;
    double complex A22 = a - I*b;

    double complex det = A11 * A22 - A12 * A21;
    printf("Det numerical verification: real = %.2f, imag = %.2f\n", creal(det), cimag(det));
    printf("Formula a^2 + b^2 + c^2 + d^2 = %.2f\n", a*a + b*b + c*c + d*d);
    return 0;
}
