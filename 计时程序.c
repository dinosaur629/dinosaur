#include<stdio.h>
#include<time.h>

int count_time() {
	int c;
	clock_t start, end;
	double minute;

	printf("输入回车键开始计时，或输入任意一个字符退出。\n");
	c=getchar();

	if (c != '\n') {
		return 0;
	}

	else {

		start = clock();

		printf("按下回车键停止计时\n");
		while (getchar() != '\n');
		
		end = clock();

		minute = (double)(end - start) / CLOCKS_PER_SEC / 60.0;

		printf("结果：%.3f分钟。\n", minute);
	}

		return 1;
}

	int main(){
		while (count_time() == 1) {
		
		}
		
		return 0;
	}
