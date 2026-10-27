#include<stdio.h>

struct student{
	char name[20];//姓名为中文字符串，不能用int，应用char
	char sex[20];
	int number;
};

void exchange(struct student *s1, struct student *s2) {
	struct student x = *s1;
	*s1 = *s2;
	*s2 = x;
}//定义一个函数运用指针交换内容

int main() {
	struct student stu1 = { "徐欣妍","女",261110127};
	struct student stu2 = {"恐龙","未知",123456789};
	
	printf("交换前：\n");
	printf("姓名:%s，性别:%s，学号:%d\n",stu1.name,stu1.sex,stu1.number);
	printf("姓名:%s，性别:%s，学号:%d\n", stu2.name, stu2.sex, stu2.number);

	exchange(&stu1, &stu2);//调用函数
	
	printf("交换后：\n");
	printf("姓名:%s，性别:%s，学号:%d\n", stu1.name, stu1.sex, stu1.number);
	printf("姓名:%s，性别:%s，学号:%d\n", stu2.name, stu2.sex, stu2.number);

	return 0;
}