#include <stdio.h>

int find(int arr[], int n) {
    int max = arr[0];  
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }
    return max;
}
int main() {
    int n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];  
    printf("Nhap %d phan tu cho mang:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = find(arr, n);
    printf("So lon nhat trong mang la: %d\n", max);
    
    return 0;
}
