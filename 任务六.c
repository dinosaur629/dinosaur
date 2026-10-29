#include<stdio.h>

struct student {
	char name[20];//将name和sex定义为字符串以便后续输入输出
	int number;
	char sex[20];
	float height;
};//定义一个结构体存放变量

void exchange(struct student* s1, struct student* s2) {
	struct student x = *s1;
	*s1 = *s2;
	*s2 = x;
}//定义一个函数使用指针交换变量内容

int check() {
	char account[20] = "";//字符串初始化不能用=0，应为=""
	int password = 0;
	char true_account[20] = "dinosaur629";
	int true_password = 123456;
	int n;
	int chance = 5;

	for (n = 0;n <5;n++) {

		printf("请输入用户名\n");
		scanf_s(" %s", account, 20);//account为字符串类型，输入时不用&

		printf("请输入密码\n");
		scanf_s("%d", &password);

		int i = 0;
		int result = 1;
		while (account[i] != '\0' || true_account[i] != '\0') /*意为字符串中变量i不是字符串的结尾*/ {
			if (account[i] != true_account[i]) {
				result = 0;
				break;
			}
			i++;
		}//对比字符串是否相同不能用简单的‘=’，应使用遍历对比

		if (result ==1 && password == true_password)/*用户名和密码同时正确则进行下一步*/ {
			return 1;
		}
		else {
			chance--;//否则机会减一
			if (chance > 0)
				printf("用户名或密码输入错误，还有%d次机会，请重新输入\n", chance);//如果还有机会就输出此句
		}
	}

	printf("哼，渣男，骗子\n");//机会用尽则输出此句

	return 0;//停止程序运行，不再进行接下来的操作
}

void menu(struct student old) {
	printf("菜单\n");
	printf("1.姓名：%s\n", old.name);
	printf("2.学号：%d\n", old.number);
	printf("3.性别：%s\n", old.sex);
	printf("4.身高：%.2f\n",old.height);
	printf("5.退出登录\n");
}//定义一个函数输出菜单

int main() {
	int choice = 0;

	if (check() == 0) {
		return 0;
	}//如果账户密码检查步骤没过则不进行接下来的操作

	struct student old = { "徐欣妍",261110127,"M",163};
	struct student new;

	while (1) /*使用while（1）让程序持续运行*/ {
		menu(old);//把old传给menu
		printf("请输入选项（1-5）:\n");
		scanf_s("%d", &choice);

		new = old;//先把old的值传给menu，防止数据丢失

		switch (choice) {
		case 1:printf("请输入新的姓名\n");
			scanf_s("%s", new.name, 20);
			exchange(&old, &new);//调用函数把原来的值换成新的
			break;
		case 2:printf("请输入新的学号\n");
			scanf_s("%d", &new.number);
			exchange(&old, &new);
			break;
		case 3:printf("请输入新的性别\n");
			scanf_s("%s", new.sex,20);
			exchange(&old, &new);
			break;
		case 4:printf("请输入新的身高\n");
			scanf_s("%f", &new.height);//输入时浮点数不应用%.2f而用%f
			exchange(&old, &new);
			break;
		case 5:
			return 0;
		default:printf("输入错误！请重新输入");
		}
	}

	return 0;
}