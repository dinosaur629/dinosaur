#include<stdio.h>

struct snake {
    int length;
    int alive;//蛇的存活状态，1时为活，0时为死
};

int main() {
    struct snake s = { 3,1 };//初始长度与存活状态
    int food;

    while (s.alive == 1) {
        printf("请输入食物大小。\n");
        scanf_s("%d,", &food);

        if (food <= s.length) {
            s.length += food;//蛇的长度等于蛇的初始长度加食物长度
        }
        else {
            s.alive = 0;//食物长度大于蛇的长度则蛇死
            printf("蛇在吃比它大的食物时死了。总长度为%d米。\n", s.length);
        }
    }
    return 0;
}
