#include <stdio.h>
int main(void)
{
    _Bool n[200] = {0};
    int s[5] = {0};
    for (int i = 0; i < 4; i++)
        scanf("%d", s + i);
    for (int a = 0; a < 5; a++)
        for (int b = 0; b < 5; b++)
            for (int c = 0; c < 5; c++)
                for (int d = 0; d < 5; d++)
                    for (int e = 0; e < 5; e++)
                        n[s[a] + s[b] + s[c] + s[d] + s[e]] = 1;
    int r = 0;
    while (n[++r])
        ;
    printf("The max is %d.\n", r - 1);
}