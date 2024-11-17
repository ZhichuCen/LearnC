#include <stdio.h>

// 定义递归函数，判断当前的桃子数量是否满足分配条件
int isDivisible(int n, int depth) {
    if (depth == 0) {
        // 所有猴子都完成了分桃
        return 1;
    }
    // 检查当前桃子数量是否符合条件
    if ((n - 1) % 5 == 0) {
        // 拿走其中一份并递归检查下一只猴子
        return isDivisible((n - 1) / 5 * 4, depth - 1);
    } else {
        return 0;
    }
}

int main() {
    int n = 1; // 从1个桃子开始
    while (1) {
        // 检查当前桃子数量是否满足5只猴子的条件
        if (isDivisible(n, 5)) {
            printf("至少有 %d 个桃子。\n", n);
            break;
        }
        n++;
    }
    return 0;
}