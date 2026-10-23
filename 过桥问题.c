#include<stdio.h>

int main() {
	int bridge[10];

	int i;//即将踩的板
	
	printf("请输入10个踏板的耐久度（1-5）：\n");
	for (i = 0;i < 10;i++) {
		scanf_s("%d", &bridge[i]);
	}
	
	int people = 0;
	int broken = 0;

	while (1) {
		i = 0;
		int success = 1;

		while (i < 10) {
			if (bridge[i] > 0) {
				bridge[i]--;
				i++;
			}

			else{
				int j = i+1;//落点坐标
				int count = 0;//count重置
				
				while (j < 10 && bridge[j]<= 0) {
					j++;
					count++;//连续损坏了几块板
				}
				
                if (j >= 10) {
					success = 0;
					broken = i+1;//记录第几块板子损坏
					break;
				}

			int jump = count+2;//跳跃距离，i损坏未算+1，初始j未算再+1
			bridge[j] -=jump;

			i = j + 1;
			}
		}

		if (success == 0)//有人过不去立即结束
			break;

		people++;
	}

	printf("%d号踏板损坏，无法过桥\n", broken);
	printf("%d个人可以过桥\n", people);

	return 0;
}