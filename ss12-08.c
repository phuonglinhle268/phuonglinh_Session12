#include <stdio.h>

int ucln(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int main() {
	int number1, number2;
	printf("Nhap so thu nhat: ");
	scanf("%d", &number1);
	printf("Nhap so thu hai: ");
	scanf("%d", &number2);
	int result = ucln(number1, number2);
	printf("Uoc chung lon nhat cua %d va %d la: %d\n", number1, number2, result);
	return 0;
}
