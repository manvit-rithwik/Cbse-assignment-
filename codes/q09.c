#include <stdio.h>
#include <math.h>

// a = i - 2j + 3k, b = 3i - 2j + k
int main() {
    double a[3] = {1.0, -2.0, 3.0};
    double b[3] = {3.0, -2.0, 1.0};

    double dot = 0.0, norm_a_sq = 0.0, norm_b_sq = 0.0;
    for(int i = 0; i < 3; i++) {
        dot += a[i] * b[i];
        norm_a_sq += a[i] * a[i];
        norm_b_sq += b[i] * b[i];
    }
    double cos_theta = dot / (sqrt(norm_a_sq) * sqrt(norm_b_sq));
    double theta = acos(cos_theta);
    printf("dot = %.1f, ||a|| = %.4f, ||b|| = %.4f\n", dot, sqrt(norm_a_sq), sqrt(norm_b_sq));
    printf("cos(theta) = %.4f, theta = %.4f rad (%.2f deg)\n", cos_theta, theta, theta * 180.0 / M_PI);
    return 0;
}
