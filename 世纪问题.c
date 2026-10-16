#include<stdio.h>

int main() {
	int y = 0;
	printf("YEAR=");
	scanf_s("%d", &y);

	int c = y / 100;
	if (y % 100 == 0) {
		printf("CENTRY=%d\n", c);
	}
	else {
		printf("CENTRY=%d\n", c+1);
	}

	return 0;
}