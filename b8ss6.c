#include <stdio.h>
#include <math.h>

int main() {
    float soTien, laiSuat, soThang, tienLai, tongTien;

    printf("Tien ban dau: ");
    scanf("%lf", &soTien);

    printf("Lai suat: ");
    scanf("%lf", &laiSuat);

    printf("So thang gui: ");
    scanf("%lf", &soThang);

    tienLai = soTien * (pow(1 + laiSuat / 100, soThang) - 1);
    tongTien = soTien + tienLai;

    printf("Tien lai: %.3lf\n", tienLai);
    printf("Tien nhan duoc: %.3lf\n", tongTien);

    return 0;
}