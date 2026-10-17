#include<stdio.h>

int main() {
	int x;
	int y;
	int n = 0;
	
	printf("输入一个数字：");
	scanf_s("%d", &x);

	printf("请输入一个数字(0-9)：");
	scanf_s("%d", &y);

	while (x > 0) {
		if (x % 10 == y) {
			n++;
		}
		x = x / 10;
	}

	printf("%c在自然数中出现%d次", y, n);

	return 0;
}