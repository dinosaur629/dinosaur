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
			n++;//如果输入数字的个位数和x相等，x在输入数字中出现次数加一
		}
		x = x / 10;//丢掉当次程序检验过的数字
	}

	printf("%c在自然数中出现%d次", y, n);

	return 0;
}
