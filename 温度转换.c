#include<stdio.h>

int main() {
	double h = 0;

	printf("请输入华氏度");
	scanf_s("%lf", &h);

	printf("现在的摄氏度为：%lf", (h - 32) * 5 / 9);

	return 0;
}