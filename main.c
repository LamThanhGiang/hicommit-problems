#include <stdio.h>

int main() {
    float t;
    
    printf("Nhap vao nhiet do t (do C): ");
    scanf("%f", &t);
    
    if (t < 15) {
        printf("LANH\n");
    } else if (t < 25) {
        printf("MAT\n");
    } else if (t < 32) {
        printf("NONG\n");
    } else {
        printf("RAT NONG\n");
    }
    
    return 0;
}

