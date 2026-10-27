#include<stdio.h>
#include<time.h>//时间函数库

int count_time() {
	int c;
	clock_t start, end;
	double minute;

	printf("输入回车键开始计时，或输入任意一个字符退出。\n");
	c=getchar();//获取c的赋值

	if (c != '\n') {
		return 0;
	}//c不是回车则退出程序

	else {

		start = clock();//获取第一次按下回车的时间

		printf("按下回车键停止计时\n");
		while (getchar() != '\n');//第二次按下的不是回车键则无反应
		
		end = clock();//获取第二次按下回车键的时间

		minute = (double)(end - start) / CLOCKS_PER_SEC / 60.0;//时间差由秒换算成分钟

		printf("结果：%.3f分钟。\n", minute);//保留三位小数
	}

		return 1;
}

	int main(){
		while (count_time() == 1) {
		
		}//计时函数成功运行则程序结束
		
		return 0;
	}
