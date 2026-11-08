#include <stdio.h>
#include <math.h>

int main() {
    // Integral from 0 to 1 of 1 / (1 + x^2) dx = [arctan(x)]_0^1 = pi / 4
    double analytical = M_PI / 4.0;
    printf("Analytical value: pi / 4 = %.6f\n", analytical);
    return 0;
}
