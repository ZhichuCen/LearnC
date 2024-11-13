#include<stdio.h>

int gcd(const int a, const int b) {
    if (b == 0)
        return a;
    if (a > b)
        return gcd(b, a % b);
    if (a==0)
        return 1;
    return gcd(a, b % a);
}

int lcm(const int a, const int b) {
    return a * b / gcd(a, b);
}

int round(const double num) {
    return (num > 0.0) ? (int)(num + 0.5) : (int)(num - 0.5);
}

int abs(const int a) {
    if (a < 0)
        return -a;
    return a;
}

int main(void) {
    int a, b, c, d;
    char r;
    double result=0;
    scanf("%d/%d %c %d/%d", &a, &b, &r, &c, &d);
    double left=(double)a/(double)b;
    double right=(double)c/(double)d;

    switch (r) {
        case '+':
            result=left+right;
            break;
        case '-':
            result=left-right;
            break;
        case '*':
            result=left*right;
            break;
        case '/':
            result=left/right;
        default:
            break;
    };

    int finalcd=abs(gcd(round(result * b * d),b*d));//sishewuru
    int up = round(result * b * d / finalcd);
    int down = b * d / finalcd;

    if(up==0)
        printf("%d/%d %c %d/%d = 0\n",a,b,r,c,d);
    else if(down==1)
        printf("%d/%d %c %d/%d = %d\n",a,b,r,c,d,up);
    else
        printf("%d/%d %c %d/%d = %d/%d\n",a,b,r,c,d,up,down);
    return 0;
}