#include<stdio.h>

int main() {
	int y = 0;
	printf("YEAR=");
	scanf_s("%d", &y);

	int c = y / 100;
	if (y % 100 == 0) {
		printf("CENTRY=%d\n", c);
	}//如果输入年份的个位数和十位数为零则世纪为输入年份的前两位数
	else {
		printf("CENTRY=%d\n", c+1);
	}//不为零则为前两位数加一

	return 0;
}
