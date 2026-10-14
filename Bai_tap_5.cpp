#include <stdio.h>
#include <math.h>

int main() {
    int N;
    printf("Nhap N: ");
    scanf("%d", &N);
    if (N < 2) {
        printf("Ko la so nguyen to \n");
    } 
    else {
        int i = 2;
        while (i <= sqrt(N)) {
            if (N % i == 0) {
                printf("Ko la so nguyen to \n");
                return 0;
            }
            i++;
        }
        printf("Co la so nguyen to \n");
    }
    
    return 0;
}
