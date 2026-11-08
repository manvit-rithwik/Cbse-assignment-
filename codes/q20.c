#include <stdio.h>
#include <math.h>

// a = i + 4j + 2k, b = 3i - 2j + 7k
// a x c = b, a . c = 1
// ||a||^2 = 1 + 16 + 4 = 21
// c = (1/21) [ a + b x a ]
// b x a = -32 i + j + 14 k
// c = (-31/21) i + (5/21) j + (16/21) k
int main() {
    double a[3] = {1.0, 4.0, 2.0};
    double b[3] = {3.0, -2.0, 7.0};
    double bxa[3] = {-32.0, 1.0, 14.0};
    double c[3];
    for (int i = 0; i < 3; i++) {
        c[i] = (a[i] + bxa[i]) / 21.0;
    }
    printf("Vector c = (%.4f)i + (%.4f)j + (%.4f)k\n", c[0], c[1], c[2]);
    printf("Exact c: -31/21 i + 5/21 j + 16/21 k\n");
    return 0;
}
