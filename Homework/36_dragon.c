#include <stdio.h>
#include <stdlib.h>

#define END "bit is doomed!\n"

void sort(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = len - 1; j > i; j--)
        {
            if (arr[j - 1] > arr[j])
            {
                int tmp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main(void)
{
    int n, m;
    int sum = 0;
    scanf("%d%d", &n, &m);

    if (n > m)
    {
        printf(END);
        return 0;
    }

    int *heads = calloc(n, sizeof(int));
    int *heros = calloc(m, sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", heads + i);
    for (int i = 0; i < m; i++)
        scanf("%d", heros + i);

    sort(heads, n);
    sort(heros, m);
    int j = 0;
    _Bool safe = 0;
    for (int i = 0; i < n; i++)
    {
        safe = 0;
        for (; j < m; j++)
        {
            if (heros[j] >= heads[i])
            {
                safe = 1;
                sum += heros[j];
                j++;
                break;
            }
        }
        if (!safe)
        {
            printf(END);
            return 0;
        }
    }

    printf("%d\n", sum);
    return 0;
}