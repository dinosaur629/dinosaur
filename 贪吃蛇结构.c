#include<stdio.h>

struct snake {
    int length;
    int alive;
};

int main() {
    struct snake s = { 3,1 };
    int food;

    while (s.alive == 1) {
        printf("请输入食物大小。\n");
        scanf_s("%d,", &food);

        if (food <= s.length) {
            s.length += food;
        }
        else {
            s.alive = 0;
            printf("蛇在吃比它大的食物时死了。总长度为%d米。\n", s.length);
        }
    }
    return 0;
}