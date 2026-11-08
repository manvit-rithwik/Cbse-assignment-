#include <stdio.h>
#include <math.h>

// Maximum rectangle in circle x^2 + y^2 = R^2 is a square with side sqrt(2)*R
int main() {
    double R = 5.0;
    double max_area = 2 * R * R;
    printf("For radius R = %.1f, Maximum Area is %.2f at side length = %.4f\n",
           R, max_area, sqrt(2.0)*R);
    return 0;
}
