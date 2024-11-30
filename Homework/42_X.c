#include <stdio.h>

void cap(char *chr)
{
    while (*chr > 'Z')
    {
        *chr -= 26;
    }

    while(*chr<'A'){
        *chr+=26;
    }
    // return chr;
}

void single_line(int pre, int mid, char chr)
{

    if (mid <= 0)
    {
        for (int i = 0; i < pre; i++)
            putchar(' ');

        putchar(chr);
        putchar('\n');
    }
    else
    {

        for (int i = 0; i < pre; i++)
            putchar(' ');

        putchar(chr);

        for (int i = 0; i < mid; i++)
            putchar(' ');

        putchar(chr);


        putchar('\n');
    }
}

int main(void)
{
    int n;
    char c;
    scanf("%d %c", &n, &c);

    if (c > 'Z' || c < 'A')
    {
        printf("input error.\n");
        return 0;
    }

    c+=n-1;
    cap(&c);

    for (int i = 0; i <= n - 1; i++)
    {
        single_line(i, 2 * n - 2 * i - 3, c--);
        cap(&c);
    }

    for (int i = n-2; i >=0; i--)
    {
        single_line(i, 2 * n - 2 * i - 3, c--);
        cap(&c);
    }

}