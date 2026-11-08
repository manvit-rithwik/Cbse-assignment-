#include <stdio.h>

// Binomial distribution: n = 4, p = 1/6, q = 5/6
double comb(int n, int r) {
    if (r == 0 || r == n) return 1.0;
    if (r == 1 || r == 3) return 4.0;
    return 6.0;
}

int main() {
    double p = 1.0 / 6.0;
    double q = 5.0 / 6.0;
    printf("Probability Distribution of Doublets in 4 throws:\n");
    for (int r = 0; r <= 4; r++) {
        double prob = comb(4, r);
        for (int i = 0; i < r; i++) prob *= p;
        for (int i = 0; i < 4 - r; i++) prob *= q;
        printf("P(X = %d) = %.6f\n", r, prob);
    }
    return 0;
}
