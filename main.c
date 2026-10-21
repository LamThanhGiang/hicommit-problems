#include <stdio.h>

int main() {
    float t;
    
    printf("Nhap vao nhiet do t (do C): ");
    scanf("%f", &t);
    
    if (t < 15) {
        printf("lanh\n");
    } else if (t < 25) {
        printf("mat\n");
    } else if (t < 32) {
        printf("am\n");
    } else {
        printf("nong\n");
    }
    
    return 0;
}

