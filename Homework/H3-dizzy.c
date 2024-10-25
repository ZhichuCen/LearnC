#include<stdio.h>

int get_num(int x, int y, int n) {
    if (y == 1)
        return x;
    if (x == n)
        return y + n - 1;
    if (y == n)
        return 3 * n - x - 1;
    if (x == 1)
        return 4 * (n - 1) - (y - 2);
    return 4 * (n - 1) + get_num(x - 1, y - 1, n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int y = 1; y <= n; y++) {
        for (int x = 1; x <= n; x++) {
            printf("%3d", get_num(x, y, n));
        }printf("\n");
    }
}