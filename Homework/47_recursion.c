#include <stdio.h>
double s(int n)
{
    if (n == 1)
        return 1;
    else
        return s(n - 1) + ((n % 2 == 0) ? 1.0 / n : -1.0 / n);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%6f\n", s(n));
}