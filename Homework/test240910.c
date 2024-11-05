#include <stdio.h>
#include <string.h>
int main()
{
    int x = 5, y = 5, z = 5;
    x %= y + z;
    printf("%d\n", x);

    float C, F;
    F = 100.4;
    printf("%f,%f,%f", 5 * (F - 32) / 9, 5 / 9 * (F - 32), 5 / 9 * 1.2);

    int i = 5;
    i += ++i;

    printf("\n%d", i);

    int leng = strlen("\\\065a,\n");
    printf("\n%d,%s", leng, "\\\065a,\n");

    int a = 5, b = 5, c;
    c = a = a > b;
    printf("\n,%d", c);

    i = 10;
    printf("\n%d\n", 20 <= i <= 9);

    printf("");
}