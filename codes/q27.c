#include <stdio.h>

// Plane passing through P(-1, -1, 2)
// Perpendicular to 2x + 3y - 3z = 2 and 5x - 4y + z = 6
// Normal n = n1 x n2 = (-9, -17, -23)
// Plane: 9x + 17y + 23z = 20
int main() {
    int nx = 3 * 1 - (-3) * (-4);
    int ny = (-3) * 5 - 2 * 1;
    int nz = 2 * (-4) - 3 * 5;
    int d = nx * (-1) + ny * (-1) + nz * 2;
    printf("Normal vector: (%d, %d, %d)\n", nx, ny, nz);
    printf("Plane equation: %dx + %dy + %dz = %d\n", -nx, -ny, -nz, -d);
    return 0;
}
