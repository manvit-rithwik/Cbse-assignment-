#include <stdio.h>
#include <math.h>

// Magnitude of vector by norm procedure: ||a|| = sqrt(a^T a)
int main() {
    double a[3] = {3.0, 2.0, 6.0};
    double norm_sq = 0.0;
    for (int i = 0; i < 3; i++) norm_sq += a[i] * a[i];
    double norm = sqrt(norm_sq);

    printf("Vector norm ||a|| = %.4f\n", norm);
    printf("Unit vector: (%.4f)i + (%.4f)j + (%.4f)k\n",
           a[0]/norm, a[1]/norm, a[2]/norm);
    return 0;
}
