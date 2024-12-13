#include <stdio.h>
#include <math.h>

int main() {
    int n, count = 1;

    printf("nhap so de kiem tra so nguyen to: ");
    scanf("%d", &n);

    if (n > 1) {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                count = 0;
                break;
            }
        }
        if (count) {
            printf("%d la so nguyen to.\n", n);
        } else {
            printf("%d khong phai la so nguyen to.\n", n);
        }
    } else {
        printf("nhap so lon hon 1.\n");
    }
 return 0;
}

