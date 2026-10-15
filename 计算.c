#include<stdio.h>

int main()\
{
	double a = 0;
	double b = 0;
	char z = 0;
	
	printf("您要进行加法（A）、减法（S）、乘法（W）、还是除法（D）？");
	scanf_s("%c",&z);
	printf("请分别输入两个数字");
	scanf_s("%lf %lf",&a, &b);
    
	if (z =='A') {
		printf("结果是%lf\n", a + b);
	}
	else if (z =='S') {
		printf("结果是%lf\n", a - b);
	}
	else if(z=='W') {
		printf("结果是%lf\n", a * b);
	}
	else if (z =='D') {
		printf("结果是%lf\n", a/b);
	}
	
	return 0;
}