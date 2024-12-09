#include <stdio.h>

void mang(int arr[], int n) {
	printf("Cac phan tu co trong mang la: \n");
	for(int i = 0; i < n; i++){
		printff("%d", arr[i]);
	}
	printf("\n");
} 
int main() {
	int n;
	printf("Nhap so luong phan tu trong mang: ");
	scanf("%d", &n);
	int arr[n];
	printf("Nhap %d phan tu cho mang: \n",n);
	for(int i; i < n; i++) {
		printf("Nhap phan tu %d: \n", i + 1);
		scanf("%d", arr[i]);
	}
	mang(arr,n);

	return 0; 
} 
