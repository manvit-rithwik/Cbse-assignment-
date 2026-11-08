#include <stdio.h>

// Det identity:
// | a   b   c   |
// | a^2 b^2 c^2 | = (a-b)(b-c)(c-a)(a+b+c)
// | b+c c+a a+b |
int main() {
    double a = 1.0, b = 2.0, c = 4.0;
    double det = a*(b*b*(a+b) - c*c*(c+a)) - b*(a*a*(a+b) - c*c*(b+c)) + c*(a*a*(c+a) - b*b*(b+c));
    double formula = (b - a)*(c - b)*(a - c)*(a + b + c);
    printf("Numerical Determinant: %.2f\n", det);
    printf("Factorized Formula:    %.2f\n", formula);
    return 0;
}
