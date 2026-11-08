#include <stdio.h>
#include <math.h>

// Numerical integration of x*sin(x)/(1 + cos^2(x)) from 0 to pi
// Exact value = pi^2 / 4
int main() {
    int N = 100000;
    double a = 0.0, b = M_PI;
    double h = (b - a) / N;
    double sum = 0.0;
    for (int i = 0; i < N; i++) {
        double x = a + (i + 0.5) * h;
        double f = (x * sin(x)) / (1.0 + cos(x)*cos(x));
        sum += f * h;
    }
    printf("Numerical Midpoint: %.6f\n", sum);
    printf("Exact (pi^2 / 4):   %.6f\n", (M_PI * M_PI) / 4.0);
    return 0;
}
