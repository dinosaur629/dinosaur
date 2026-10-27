#include<stdio.h>

int main() {
	int a[3][3];//设置一个3*3的二维数组
	
	int i,j;
	for (i = 0; i < 3; i++) {
		for (j = 0;j < 3;j++ ) {
			scanf_s("%d", &a[i][j]);//输入每个位置中的数字
		}
	}

	int k;
	int result = 1;

	for (i = 0;i < 3;i++) {
		for (j = 0;j < 3;j++) {
			for (k = j + 1;k < 3;k++) {
				if (a[i][j] == a[i][k])//检查第一行数字与其所在的列中的数字有无重复
					result = 0;//有则失败
			}
		}
	}

	for (j = 0;j < 3;j++) {
		for (i = 0;i < 3; i++) {
			for (k = i + 1;k < 3;k++) {
				if (a[i][j] == a[k][j])//检查第一列数字与其所在的行中的数字有无重复
					result = 0;
			}
		}
	}

	if (result == 1)
		printf("正确！你可以走出这里。\n");
	else if (result == 0)
		printf("错误！你无法走出这里。\n");

	return 0;
}
