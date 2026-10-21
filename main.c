#include <stdio.h>

int main() {
    int a, b, c, max;
    printf("Nhap vao so a\n: ");
    scanf("%d",&a);
    printf("Nhap vao so b\n:");
    scanf("%d",&b);
    printf("Nhap vao so c\n:");
    scanf("%d",&b);
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("So lon nhat la: \n", max);
    return 0;
}