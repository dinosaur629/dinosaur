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
	}

	printf("恭喜！您已获得200个金币，现在可以休息了。");
	return 0;
}