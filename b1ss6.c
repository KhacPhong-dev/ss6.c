#include <stdio.h>

int main() {
    int number;
    int sumOdd = 0;

    printf("Nhap vao 5 so nguyen:\n");

    for (int i = 0; i < 5; ++i) {
        scanf("%d", &number);
        if (number % 2 != 0) {
            sumOdd += number;
        }
    }

    printf("Tong cac so le la: %d\n", sumOdd);

    return 0;
}
