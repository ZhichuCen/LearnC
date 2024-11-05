#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", n * i + j + 1);
        }
        putchar('\n');
    }
}