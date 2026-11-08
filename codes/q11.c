#include <stdio.h>

// a * b = (a + b) / 2 on Q
double op(double a, double b) {
    return (a + b) / 2.0;
}

int main() {
    double a = 3.0, b = 5.0, c = 7.0;
    printf("Commutativity test: a*b = %.4f, b*a = %.4f\n", op(a, b), op(b, a));
    printf("Associativity test: (a*b)*c = %.4f, a*(b*c) = %.4f\n", op(op(a, b), c), op(a, op(b, c)));
    return 0;
}
