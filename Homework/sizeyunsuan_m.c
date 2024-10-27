#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    if (a > b)
        return gcd(b, a % b);
    if (a == 0)
        return 1;
    return gcd(a, b % a);
}
int round(double num) { return (num > 0.0) ? (int)(num + 0.5) : (int)(num - 0.5); }
int abs(int a)
{
    if (a < 0)
        return -a;
    return a;
}
int main(void)
{
    int a, b, c, d;
    char r;
    double result = 0;
    scanf("%d/%d %c %d/%d", &a, &b, &r, &c, &d);
    double left = (double)a / b;
    double right = (double)c / d;
    switch (r)
    {
    case '+':
        result = left + right;
        break;
    case '-':
        result = left - right;
        break;
    case '*':
        result = left * right;
        break;
    case '/':
        result = left / right;
    default:
        break;
    };

    int x = abs(gcd(round(result * b * d), b * d));
    int u = round(result * b * d / x);
    int w = b * d / x;

    if (u == 0)
        printf("%d/%d %c %d/%d = 0\n", a, b, r, c, d);
    else if (w == 1)
        printf("%d/%d %c %d/%d = %d\n", a, b, r, c, d, u);
    else
        printf("%d/%d %c %d/%d = %d/%d\n", a, b, r, c, d, u, w);
    return 0;
}