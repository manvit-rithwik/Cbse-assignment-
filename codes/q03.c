#include <stdio.h>

/*
2 * [1 3; 0 x] + [y 0; 1 2] = [5 6; 1 8]
[2+y 6; 1 2x+2] = [5 6; 1 8]
2 + y = 5 => y = 3
2x + 2 = 8 => 2x = 6 => x = 3
*/

int main() {
    int y = 5 - 2;
    int x = (8 - 2) / 2;
    printf("Solved values: x = %d, y = %d\n", x, y);
    return 0;
}
