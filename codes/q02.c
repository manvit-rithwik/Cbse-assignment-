#include <stdio.h>
#include <math.h>

int main() {
    // sin(pi/3 - arcsin(-1/2)) = sin(pi/3 - (-pi/6)) = sin(pi/2) = 1
    double val = sin(M_PI / 3.0 - asin(-0.5));
    printf("Evaluated value: %.4f\n", val);
    return 0;
}
