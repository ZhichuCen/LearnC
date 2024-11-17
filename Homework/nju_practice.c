#include <stdio.h>
int f(int *x)
{
    int i;
    *x = 0;
    for (i = 1; i <= 3; i++)
    {
        static int i = 1;
        int j = 2;
        *x += i + j;
        i++;
        j++;
    }
    return *x;
}

int main(void)
{
    int i;
    for (i = 0; i < 20; i++)
        printf("%d\t", f(&i));
    return 0;
}