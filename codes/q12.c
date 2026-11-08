#include <stdio.h>
#include <math.h>

int main() {
    double sum = atan(1.0/3.0) + atan(1.0/5.0) + atan(1.0/7.0) + atan(1.0/8.0);
    printf("LHS = %.8f\n", sum);
    printf("RHS (pi/4) = %.8f\n", M_PI / 4.0);
    return 0;
}
