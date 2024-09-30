#include <stdio.h>

int main(void)
{
    int c;
    short a, b;
    a = 32767;
    b = 3;
    c = a + b;
    printf("%d\n", c);
    printf("%d", a + b);
    return 0;
}