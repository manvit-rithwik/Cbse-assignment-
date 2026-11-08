#include <stdio.h>
#include <math.h>

// Line 1: r1 = (3, 5, 7) + s (1, -2, 1)
// Line 2: r2 = (-1, -1, -1) + t (7, -6, 1)
// n = b1 x b2 = (4, 6, 8)
// ||n|| = sqrt(16 + 36 + 64) = sqrt(116) = 2*sqrt(29)
// a2 - a1 = (-4, -6, -8)
// SD = | (a2 - a1) . n | / ||n|| = 116 / sqrt(116) = 2*sqrt(29)
int main() {
    double n[3] = {4.0, 6.0, 8.0};
    double diff[3] = {-4.0, -6.0, -8.0};
    double dot = 0.0, norm_n_sq = 0.0;
    for (int i = 0; i < 3; i++) {
        dot += diff[i] * n[i];
        norm_n_sq += n[i] * n[i];
    }
    double sd = fabs(dot) / sqrt(norm_n_sq);
    printf("Shortest distance = %.6f (2*sqrt(29) = %.6f)\n", sd, 2.0 * sqrt(29.0));
    return 0;
}
