#include <stdio.h>
#include <math.h>

int main() {
    int so, tong, so1, so2, so3;

    for (so = 100; so <= 999; so++) {
        so1 = so / 100;  
        so2 = (so / 10) % 10; 
        so3 = so % 10;  

        tong = pow(so1, 3) + pow(so2, 3) + pow(so3, 3);

        if (tong == so) {
            printf("%d ", so);
        }
    }

    printf("\n");

    return 0;
}