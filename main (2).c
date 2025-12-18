#include <stdio.h>
#include <math.h>

int main() {
    float a, b, x;

    scanf("%f %f", &a, &b);

    x = (3.31 * pow(a, 2) + 2.01 * pow(b, 3)) / (7.16 * pow(b, 2) + 2.01 * pow(a, 3));

    printf("x = %.4f\n", x);
    return 0;
}
