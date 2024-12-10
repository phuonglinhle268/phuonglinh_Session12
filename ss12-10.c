#include <stdio.h>
#define MAX_SIZE 100

int arr[MAX_SIZE];
int n = 0;
void arr() {
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    
    if (n > MAX_SIZE) {
        printf("So phan tu khong hop le.Nhap lai.\n");
        return;
    }
    
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void int_arr() {
    if (n == 0) {
        printf("M?ng tr?ng.\n");
        return;
    }
    
    printf("Các ph?n t? trong m?ng hi?n t?i:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void add() {
    int pos, value;
    printf("Nhap vi tri muon them: ", n);
    scanf("%d", &pos);
    if (pos < 0 || pos > n) {
        printf("Vi tri khong hop le\n");
        return;
    }
    printf("Nhap gia tri phan tu muon them: ");
    scanf("%d", &value);
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value; 
    n++;
}
void check() {
    int pos, value;
    printf("Nhap vi tri can sua: ", n - 1);
    scanf("%d", &pos);
    
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop li.\n");
        return;
    }
    
    printf("Nh?p giá tr? m?i: ");
    scanf("%d", &value);
    
    arr[pos] = value; 
}
void delete() {
    int pos;
    printf("Nhap vi tri can xoa: ", n - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop li.\n");
        return;
    }
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; 
}
void giamDan() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep la:\n");
    int_arr();
}

// Hàm s?p x?p m?ng tang d?n
void tangDan() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep la:\n");
    int_arr();
}

int main() {
	int choice;
	do {
		printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2. In ra gia tri cac phan tu dang quan li\n");
		printf("3. Them mot phan tu vao vi tri chi dinh\n");
		printf("4. Sua mot phan tu vao vi tri chi dinh\n");
		printf("5. Xoa mot phan tu vao vi tri chi dinh\n");
		printf("6. Sap xep cac phan tu\n");
		printf("a. Giam dan\n");
		printf("b. Tang dan\n");
		printf("7. Tim kiem phan tu nhap vao\n");
		printf("a. Tim kiem tuyen tinh\n");
		printf("b. Tim kiem nhi phan\n");
		printf("Lua chon cua ban: ")
		printf("8. Thoat");
		scanf("%d", &choice);
		switch (choice) {
			case 1:
                arr();
                break;
            case 2:
                int_arr();
                break;
            case 3:
                add();
                break;
            case 4:
                check();
                break;
            case 5:
                delete();
                break;
            case 6:
               
				
			default:
				printf("Lua chon khong hop li. Hay chon lai.\n")
		}
	} while (choice != 8);
	return 0;
}
