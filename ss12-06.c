#include <stdio.h>

int perfectNum(int n) {
	int sum = 0;
	for(int i = 1; i <= n / 2; i++) {
		if(n % i == 0) {
			sum += i;
		}
	}
	if (sum = n) {
		return 1;
	} else {
		return 0;
	}
}
int main() {
	int number1, number2;
	printf("Nhap so nguyen thu nhat: ");
	scanf("%d", &number1);
	printf("Nhap so nguyen thu hai: ");
	scanf("%d", &number2);
	if(perfectNum(number1)) {
		printf("%d la so hoan hao\n", number1);
	} else {
		printf("%d khong phai la so hoan hao\n", number1);
	}
	if(perfectNum(number2)) {
		printf("%d la so hoan hao\n", number2);
	} else {
		printf("%d khong phai la so hoan hao\n", number2);
	}
	return 0;
}

