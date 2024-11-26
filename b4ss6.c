#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, delta, x1, x2;

    printf("Nhap vao cac he so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            x1 = -c / b;
            printf("Phuong trinh co mot nghiem: x = %d\n", x1);
        }
    } else {
        delta = b * b - 4 * a * c;

        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem phan biet:\n");
            printf("x1 = %d\n", x1);
            printf("x2 = %d\n", x2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %d\n", x1);
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    }

    return 0;
}