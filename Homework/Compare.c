#include <stdio.h>

int main(void)
{
    int a, b, m;
    scanf("%d%d", &a, &b);
    m = a > b ? b : a;
    printf("min=%d\n", m);
    return 0;
}