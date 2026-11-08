#include <stdio.h>

// f(x) = x + 7, g(x) = x - 7
// (fog)(x) = f(g(x))
double f(double x) { return x + 7.0; }
double g(double x) { return x - 7.0; }

int main() {
    double x = 7.0;
    double fog = f(g(x));
    printf("(fog)(%.1f) = %.1f\n", x, fog);
    return 0;
}
