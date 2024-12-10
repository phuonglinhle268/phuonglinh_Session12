#include <stdio.h>

void taoMang(int arr[10][10], int rows, int cols) {
	printf("Nhap cac phan tu cho ma tran %d x %d: \n", rows, cols);
	for (int i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			printf("Nhap phan tu tai [%d][%d]: ", i + 1, j + 1);
			scanf("%d", &arr[i][j]);
		}
	}
}
void inMang(int arr[10][10], int cols, int rows) {
	printf("Ma tran da nhap: \n");
	for (int i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int cols, rows;
	int arr[10][10];
	printf("Nhap so hang: ");
	scanf("%d", &rows);
	printf("Nhap so cot: ");
	scanf("%d", &cols);
	if(rows > 10 || cols > 10) {
		printf("Vui long nhap lai. Hang va cot phai nho hon hoac bang 10.\n");
		return 1;
	}
	taoMang(arr, rows, cols);
	inMang(arr, rows, cols);
	
	return 0;
}
