#include <stdio.h>

int overall(int a, int b) {
	return a + b; 
} 
int main() {
	int x, y, sum;
	printf("Nhap so thu nhat: ");
	scanf("%d", &x);
	printf("Nhap so thu hai: ");
	scanf("%d", &y);
	sum = overall(x, y);
	printf("Tong cua hai so la: %d\n", sum);
	
	return 0; 
} 
