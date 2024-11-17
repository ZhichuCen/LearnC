#include <stdio.h>

int ipow(int a, int b)
{
    int result = 1;
    for (; b > 0; b--)
        result *= a;
    return result;
}

int char_2_num(char chr)
{
    int num = 0;
    if ('0' <= chr && chr <= '9')
    {
        return chr - '0';
    }
    else if ('A' <= chr && chr <= 'Z')
    {
        return chr - 'A' + 10;
    }
    else
    {
        return -1;
    }
}

int at_least_base_n(char *s)
{
    int max = 0;
    int tmp = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((tmp = char_2_num(s[i])) > max)
        {
            max = tmp;
        }
    }
    return max+1;
}

int from_n_to_2(char *s, int n)
{
    int len = 0; // from 0
    int result = 0;
    for (; s[len] != '\0'; len++)
        ;
    for (int i = 0; i < len; i++)
    {
        result += ipow(n, len - 1 - i) * char_2_num(s[i]);
    }
    return result;
}

int main(void)
{
    char M[100];
    char N[100];

    scanf("%s %s", M, N);

    for (int i = at_least_base_n(M); i <= 36; i++)
    {
        for (int j = at_least_base_n(N); j <= 36; j++)
        {
            if (from_n_to_2(M, i) == from_n_to_2(N, j))
            {
                printf("%s (base %d) = %s (base %d)\n", M, i, N, j);
                return 0;
            }
        }
    }
    printf("%s is not equal to %s in any base 2..36\n", M, N);
    return 0;
    // printf("%d\n", from_n_to_2("AB", 16));
}