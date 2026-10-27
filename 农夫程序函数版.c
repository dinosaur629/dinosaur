#include<stdio.h>

int choice(void){
	char l;
	while (1) {
		printf("请输入收入类型,小麦[W]、洋葱[O]、西红柿[T]、胡萝卜[C]：");
		scanf_s(" %c", &l, 1);

		switch (l) {
		case'W':return 5;
			break;

		case'O':return 10;
			break;

		case'T':return 7;
			break;

		case'C':return 8;
			break;

		default:printf("输入错误!请重新输入！\n");
			break;
		}
	}
		
}//定义一个函数来给食物价格赋值

	int main(){
	int money = 0;
	int kg = 0;
	
	while (money < 1000) {
		int price = choice();//调用函数
		printf("请输入您售出的公斤数");
		scanf_s("%d", &kg);

		int x = price * kg;
		money += x;
	}
	
	printf("您已获得%d金币，可以休息一下了。",money);
	return 0;
}
