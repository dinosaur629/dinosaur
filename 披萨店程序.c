#include<stdio.h>

int main() {
	char c = 0;
	int a = 0;
	int b = 0;
	char d = 0;
	int e = 0;

	while(1) {
		printf("输入N计算新订单，输入Q结束程序");
		scanf_s(" %c", &c,1);

		if (c == 'Q') {
			printf("程序结束\n");
			break;
		}

		else if (c == 'N') {
			printf("请输入披萨的数量");
			scanf_s("%d", &a);

			printf("请输入披萨配料的数量");
			scanf_s("%d", &b);

			printf("是否需要外送？（Y/N）");
			scanf_s(" %c", &d,1);

			if (d == 'Y') {
				e = 2;
			}

			else if (d == 'N') {
				e = 0;
			}

			printf("订单价格为%d\n", 20 * a + 2 * b + e);
		}
	}
	return 0;
}