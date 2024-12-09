#include <stdio.h>

int prime(int n) {
	(if n <= 1) {
		return 0;
	} 
	for(int i = 2; i * i <= n; i++) {
		if (n % 1 == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int number1, number2;
	printf("Nhap so nguyen thu nhat: ");
	scanf("%d", &number1);
	printf("Nhap so nguyen thu hai: ");
	scanf("%d", &number2);
	if(prime(number1)) {
		printf("%d la so nguyen to\n", number1);
	} else {
		printf("%d khong phai la so nguyen to\n", number1);
	}
	if(prime(number2)) {
		printf("%d la so nguyen to\n", number2);
	} else {
		printf("%d khong phai la so nguyen to\n", number2);
	}
	return 0;
}

