#include<stdio.h>

int main() {
	int money = 0;
	int kg = 0;
	int price = 0;
	int w_price = 5;
	int o_price = 10;
	int t_price = 7;
	int c_price = 8;//定义初始价格
	char l = 0;
	char choice = 0;

	while (money < 1000) {
		printf("选择菜单：修改价格[M]、出售[S]\n");
		scanf_s(" %c", &choice);

		if (choice == 'M') {
			int n_price;
			printf("请输入收入类型,小麦[W]、洋葱[O]、西红柿[T]、胡萝卜[C]和新的价格（用空格隔开）\n");
			scanf_s(" %c %d", &l, 1, &n_price);

			switch (l) {
			case'W':w_price = n_price;
				break;

			case'O':o_price = n_price;
				break;

			case'T':t_price = n_price;
				break;

			case'C':c_price = n_price;
				break;

			default:printf("输入错误!请重新输入！\n");
				continue;
			}//用Switch保持价格持续更新
		}

		else if (choice == 'S') {
			printf("请输入收入类型,小麦[W]、洋葱[O]、西红柿[T]、胡萝卜[C]\n");
			scanf_s(" %c", &l);

			printf("请输入您售出的公斤数\n");
			scanf_s("%d", &kg);

			switch (l) {
			case'W':price = w_price;
				break;

			case'O':price = o_price;
				break;

			case'T':price = t_price;
				break;

			case'C':price = c_price;
				break;

			default:printf("输入错误!请重新输入！\n");
				continue;
			}

			int x = price * kg;
			money += x;

		}
	}

		printf("您已获得%d金币，可以休息一下了。\n",&money);
		return 0;
	}
