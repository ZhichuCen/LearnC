#include <stdio.h>
#include <stdlib.h>

#define LEN 80

char *add(char *a, char *b)
{
    char *result = calloc(LEN, sizeof(char));
    for (int i = LEN - 1; i >= 0; i--)
    {
        result[i] += a[i] + b[i];
        if (result[i] > 9)
        {
            result[i] -= 10;
            result[i - 1]++;
        }
    }
    return result;
}

int main(void)
{
    int start, end;
    scanf("%d%d", &start, &end);

    char *m = calloc(LEN, sizeof(char));
    char *ans = calloc(LEN, sizeof(char));
    char *preans = calloc(LEN, sizeof(char));

    m[LEN - 1] = 1;
    ans[LEN - 1] = 1;
    preans[LEN - 1] = 1;

    for (int i = 0; i < end - start - 1; i++)
    {
        m = add(ans, preans);
        free(preans);
        preans = ans;
        ans = m;
    }

    int index = 0;
    while (m[index++] == 0)
        ;
    index--;
    for (; index < LEN; index++)
    {
        putchar(m[index] + '0');
    }
    putchar('\n');
    return 0;
}