#include <stdio.h>
#include <math.h>

// Integral from -a to a of sqrt((a-x)/(a+x)) dx = pi * a
int main() {
    double a = 3.0;
    double exact = M_PI * a;
    printf("For a = %.2f, Integral value = pi * a = %.6f\n", a, exact);
    return 0;
}
