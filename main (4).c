#include <stdio.h>

int main() {
    float a, b, c, y;

    scanf("%f %f %f", &a, &b, &c);

    y = a - (b / (3 + c) * 2) - 1;

    printf("y = %.0f\n", y);
    return 0;
}
