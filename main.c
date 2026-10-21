#include <stdio.h>

int main() {
    int t;
    printf("Nhập vào nhiệt độ t (số nguyên, °C): ");
    scanf("%d", &t);

    // Mẹo chia lấy nguyên để gom nhóm khoảng nhiệt độ
    int nhom = t / 10; 

    // Nếu nhiệt độ âm, gộp chung vào nhóm nhỏ hơn 0
    if (t < 0) {
        nhom = -1;
    }

    switch (nhom) {
        case -1:
        case 0:
            // Nhiệt độ < 10°C
            printf("Thời tiết rất lạnh\n");
            break;
        case 1:
            // Nhiệt độ từ 10°C đến 19°C
            printf("Thời tiết se lạnh\n");
            break;
        case 2:
            // Nhiệt độ từ 20°C đến 29°C
            printf("Thời tiết mát mẻ, ấm áp\n");
            break;
        default:
            // Nhiệt độ từ 30°C trở lên
            printf("Thời tiết nóng\n");
            break;
    }

    return 0;
}