#include <stdio.h>

// Bayes' Theorem:
// Total = 2000 + 4000 + 6000 = 12000
// P(E1) = 2/12 = 1/6 (scooter)
// P(E2) = 4/12 = 1/3 (car)
// P(E3) = 6/12 = 1/2 (truck)
// P(A|E1) = 0.01, P(A|E2) = 0.03, P(A|E3) = 0.15
int main() {
    double pE1 = 2000.0 / 12000.0;
    double pE2 = 4000.0 / 12000.0;
    double pE3 = 6000.0 / 12000.0;

    double pA_E1 = 0.01;
    double pA_E2 = 0.03;
    double pA_E3 = 0.15;

    double numerator = pE1 * pA_E1;
    double total = numerator + pE2 * pA_E2 + pE3 * pA_E3;

    double result = numerator / total;
    printf("P(Scooter | Accident) = %.6f (Exact = 1/52 = %.6f)\n", result, 1.0 / 52.0);
    return 0;
}
