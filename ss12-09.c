#include <stdio.h>
#include <math.h>
#define MAX 100

int arr[MAX][MAX];
int a, b;
int isPrime(int num) {
    if (num <= 1) {
    	return 0;
	}
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
        	return 0;
		}
    }
    return 1; 
}
void nhapMang() {
    printf("Nhap so hang: ");
    scanf("%d", &a);
    printf("Nhap so cot: ");
    scanf("%d", &b);
    
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void inMang() {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void inGoc() {
    printf("Cac phan tu o goc cua ma tran la:\n");
    printf("arr[0][0] = %d\n", arr[0][0]);
    printf("arr[0][%d] = %d\n", b-1, arr[0][b-1]);
    printf("arr[%d][0] = %d\n", a-1, arr[a-1][0]);
    printf("arr[%d][%d] = %d\n", a-1, b-1, arr[a-1][b-1]);
}
void inDuongBien() {
    printf("Cac phan tu nam tren duong bien la:\n");
    for (int j = 0; j < b; j++) {
        printf("%d ", arr[0][j]);
    }
    for (int j = 0; j < b; j++) {
        printf("%d ", arr[a-1][j]);
    }
    for (int i = 1; i < a-1; i++) {
        printf("%d ", arr[i][0]);
        printf("%d ", arr[i][b-1]);
    }
    printf("\n");
}
void inDuongCheo() {
    printf("Cac phan tu nam tren duong cheo chinh va duong cheo phu la:\n");
    for (int i = 0; i < a && i < b; i++) {
        printf("%d ", arr[i][i]);
    }
    for (int i = 0; i < a && i < b; i++) {
        printf("%d", arr[i][b-1-i]);
    }
    printf("\n");
}
void prime() {
    printf("Cac phan tu la so nguyen to la:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (isPrime(arr[i][j])) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int choice;
    
    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu trong mang\n");
        printf("2. In gia tri cac phan tu mang trong ma tran\n");
        printf("3. In ra cac phan tu o goc\n");
        printf("4. In ra cac phan tu nam tren duong bien\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va duong cheo phu\n");
        printf("6. In ra cac phan tu la so nguyen to\n");
        printf("7. Thoát\n");
        printf("Lua chon cua ban la: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                nhapMang();
                break;
            case 2:
                inMang();
                break;
            case 3:
                inGoc();
                break;
            case 4:
                inDuongBien();
                break;
            case 5:
                inDuongCheo();
                break;
            case 6:
                prime();
                break;
            case 7:
                printf("Thoat.\n");
                break;
            default:
                printf("Lua chon khong hop li. Hay chon lai\n");
        }
    } while (choice != 7);
    
    return 0;
}
