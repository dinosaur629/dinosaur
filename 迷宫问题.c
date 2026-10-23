#include<stdio.h>

int main() {
	int a[3][3];
	
	int i,j;
	for (i = 0; i < 3; i++) {
		for (j = 0;j < 3;j++ ) {
			scanf_s("%d", &a[i][j]);
		}
	}

	int k;
	int result = 1;

	for (i = 0;i < 3;i++) {
		for (j = 0;j < 3;j++) {
			for (k = j + 1;k < 3;k++) {
				if (a[i][j] == a[i][k])
					result = 0;
			}
		}
	}

	for (j = 0;j < 3;j++) {
		for (i = 0;i < 3; i++) {
			for (k = i + 1;k < 3;k++) {
				if (a[i][j] == a[k][j])
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