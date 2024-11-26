#include <stdio.h>

int main() {
    int number;
    int so1 = 0, so2 = 0;

    printf("Nhap vao 5 so nguyen:\n");

    for (int i = 0; i < 5; ++i) {
        scanf("%d", &number);
        if (number % 2 == 0) {
            ++so1;
        } else {
            ++so2;
        }
    }

    printf("So luong so chan: %d\n", so1);
    printf("So luong so le: %d\n", so2);

    return 0;
}