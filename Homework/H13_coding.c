#include <stdio.h>
#include <stdlib.h>

void mode1(int *a, int n, int *b)
{
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
                c++;
        }
        b[i] = c;
    }
}

void mode2(int *a, int n, int *b)
{
    _Bool *used = calloc(n, sizeof(_Bool));
    for (int i = n - 1; i >= 0; i--)
    {

        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (!used[j])
            {
                if (a[i] == 0)
                {
                    while (used[++j])
                        ;
                    b[i] = j-1;
                    used[j] = 1;
                    break;
                }
                else
                {
                    a[i]--;
                }
            }
        }
    }
}

void print_list(int n, int *b)
{
    for (int i = 0; i < n - 1; i++)
        printf("%d ", b[i]);

    printf("%d\n", b[n - 1]);
}

int main(void)
{
    int mode, n;
    scanf("%d%d", &mode, &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }

    switch (mode)
    {
    case 1:
        mode1(a, n, b);
        break;
    case 2:
        mode2(a, n, b);
        break;
    default:
        break;
    }

    print_list(n, b);
    return 0;
}
