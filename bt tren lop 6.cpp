#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);
    int count = 0;  
    int num = 2;    
    while (count < n) { 
    int a = 1;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                a = 0; 
                break;       
            }
        }
       if (a) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}
