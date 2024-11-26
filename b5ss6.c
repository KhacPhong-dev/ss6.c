#include <stdio.h>

int main() {
    int nam, thang, ngay;

    printf("Nhap vao nam: ");
    scanf("%d", &nam);

    printf("Nhap vao thang (1-12): ");
    scanf("%d", &thang);

    if (thang < 1 || thang > 12) {
        printf("Thang khong hop le!\n");
        return 0;
    }

    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || 
        thang == 8 || thang == 10 || thang == 12) {
        ngay = 31;
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        ngay = 30;
    } else {
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
            ngay = 29;
        } else {
            ngay = 28;
        }
    }

    printf("Thang %d nam %d co %d ngay.\n", thang, nam, ngay);

    return 0;
}