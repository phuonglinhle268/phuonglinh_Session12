#include <stdio.h>

int number(int n) {
    int fatacial = 1;
    for (int i = 1; i <= n; i++) {
        fatacial *= i;
    }
    return fatacial;
}

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Giai thua khong xac dinh.\n");
    } else {
        int result = number(n);
        printf("Giai thua cua %d la: %d\n", n, result);
    }
    
    return 0;
}
