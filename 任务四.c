#include<stdio.h>
	

	int password(){
		int password = 0;
		int true_password = 123456;//不能设置成六个0，会被当成八进制0
		int n;

		for (n = 0; n <= 3; n++) {
			printf("please enter your password\n");
			scanf_s("%d", &password);

			if (password == true_password) {
				return 1;
			}//密码正确则程序继续
			else {
				printf("输入错误！请重新输入。\n");
			}
		}

		printf("your are a bad girl\n");//连续输错三次时输出语句
	return 0;
}

void menu() {
	printf("菜单：");
	printf("1.我要好好学习\n");
	printf("2.我要男朋友\n");
	printf("3.我要变有钱\n");
	printf("4.我要变成技术大佬\n");
	printf("请选择：");
}

void menu_1(int from_menu)//后涉及从函数menu_4中的调用，输入参数用于判断来源，其他函数中为0，menu_4中为4
{
	int x;
	int i, j;
	
	printf("请输入一个正整数\n");
	scanf_s("%d",&x);

	if (x<=0)/*小于等于零均归为非正整数*/{
		printf("Care for mentally retarded children, we stay together。\n");
		if (from_menu == 4) {
			printf("You are such a sweet little fool\n");
		}
	}
	else {
		for (i = 1;i <= x; i++) {
			for (j = 1;j <= x;j++) {
				printf("%d*%d=%d\t", i, j, i * j);//"\t"用于对齐
			}
			printf("\n");//若写在for循环内则导致每个等式都换行，输出为一条而非乘法表
		}
	}
}

void menu_2() {
	printf("仙女和凡人恋爱是违反天条的，仙女应该好好学习。\n");

	menu_1(0);//调至menu_1
}

void menu_3() {
	char c = 0;

	printf("有钱后想干什么");
	printf("A.找男朋友 B.买同济版高等数学，好好学习\n");
	
	
	while (1) {
		
		scanf_s(" %c", &c,1);

		switch (c) {
		case 'A':menu_2();//调至menu_2
			return;//不能用break，如果使用break，跳出switch后会继续执行while，无法进行下一步
		case 'B':menu_1(0);//调至menu_1
			return;
		default:printf("输入错误！请重新输入。\n");
			break;
		}
	}
}

void menu_4() {
	char ch = 0;

	printf("你为什么学技术?");
	printf("A.为了变有钱 B.因为我热爱学习\n");
	

	while (1) {
		
		scanf_s(" %c", &ch, 1);

		switch (ch) {
		case 'A':menu_2();
			return;
		case 'B':menu_1(4);
			return;
		default:printf("输入错误！请重新输入。\n");
			break;
		}
	}
}

int main() {
	int chioce = 0;
	
	if (password() == 0) {
		return 0;
	}//密码错误则直接结束程序

	
	while (1) {
		printf("徐欣妍261110127\n");
		menu();
		scanf_s("%d", &chioce);
		
		switch (chioce) {
		case 1:menu_1(0);
			break;
		case 2:menu_2();
			break;
		case 3:menu_3();
			break;
		case 4:menu_4();
			break;
		default:printf("输入错误！请重新输入。\n");
			continue;
		}
	}

	return 0;
}