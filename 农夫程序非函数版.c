#include<stdio.h>

int main() {
	int money = 0;
	int kg = 0;
	int price = 0;
	char l = 0;
	
	while (money < 1000) {
		printf("请输入收入类型,小麦[W]、洋葱[O]、西红柿[T]、胡萝卜[C]：");
		scanf_s(" %c", &l, 1);

		switch (l) {
		case'W':price = 5;
			break;

		case'O':price = 10;
			break;

		case'T':price = 7;
			break;

		case'C':price = 8;
			break;

		default:printf("输入错误!请重新输入！\n");
			continue;
		}

		printf("请输入您售出的公斤数");
		scanf_s("%d", &kg);

		int x = price * kg;
		money += x;
	}

	printf("您已获得1000金币，可以休息一下了。");
	return 0;
}