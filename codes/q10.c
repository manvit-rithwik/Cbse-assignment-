#include <stdio.h>

// a = 2i + lambda*j + k, b = i - 2j + 3k
// a . b = 0 => 2(1) + lambda(-2) + 1(3) = 0 => 5 - 2*lambda = 0 => lambda = 5/2
int main() {
    double lambda = 5.0 / 2.0;
    printf("Value of lambda for orthogonality: %.2f\n", lambda);
    return 0;
}
