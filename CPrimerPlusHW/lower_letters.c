#include <stdio.h>

int main(void)
{
    char ch[26];
    char *i = ch;
    *i++ = 'A';
    for (int p = 0; p <= 23; p++, i++)
    {
        *i = *(i - 1) + 1;
    }
    i = ch;
    for (int p = 0; p <= 25; p++, i++)
    {
        printf("%c,%p\n", *i,i);
    }
    return 0;
}