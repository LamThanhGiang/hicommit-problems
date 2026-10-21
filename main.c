#include <stdio.h>

int main() {
    float t;
    
    // Nhập giá trị nhiệt độ
    printf("Nhap vao nhiet do t (do C): ");
    scanf("%f", &t);
    
    // Phân loại nhiệt độ
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