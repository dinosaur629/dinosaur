#include<stdio.h>

int main()
{
	int a = 0;
	double b = 0;//计算结果应为浮点数所以定义为double
		
	printf("您想买多少台电脑：\n");
    scanf_s("%d", &a);

	b = a * 95.125;

	printf("%d台电脑的价格为%lf\n",a,b);
		return 0;
}
