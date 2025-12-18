#include <stdio.h>

int main() {
    float a, b, c, x;

    scanf("%f %f %f", &a, &b, &c);

    x = a - (b / 3) + (c * 2) - 1;

    printf("x = %.0f\n", x);
    return 0;
}
