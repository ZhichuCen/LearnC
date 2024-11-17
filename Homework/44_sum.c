#include <stdio.h>
int n, m;
int sum(int x)
{
    if (x > n)
    {
        return sum(x - 1) + x;
    }
    else
    {
        return x;
    }
}

int main(void)
{
    scanf("%d%d", &n, &m);
    printf("The sum from %d to %d is %d.\n", n, m, sum(m));
}