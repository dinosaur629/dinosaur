#include<stdio.h>

int main()
{
	int a = 0;
	double b = 0;
		
	printf("您想买多少台电脑：\n");
    scanf_s("%d", &a);

	b = a * 95.125f;

	printf("%d台电脑的价格为%f\n,",a,b);
		return 0;
}