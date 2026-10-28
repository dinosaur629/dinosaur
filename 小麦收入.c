#include<stdio.h>

int main() {
	int x=0;
	int n = 0;
	int sum = 0;

	while (sum < 200) {
		printf("请输入小麦收入");
		scanf_s("%d", &x);

		sum += x;
		n++;
	}//使用while循环，金额未达到200则程序持续进行

	printf("恭喜！您已获得%d个金币，现在可以休息了。",sum);//金额达到两百则结束程序
	return 0;
}
