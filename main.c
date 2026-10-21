#include <stdio.h>

int main() {
    double a, b, c, max;
    printf("Nhap vao 3 so (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("So lon nhat la: %.2lf\n", max);
    return 0;
}