#include <stdio.h>

int main(void)
{
    char ch;
    scanf("%c", &ch);

    if (65 <= ch && ch <= 90)
        ch += 32;
    else if (97 <= ch && ch <= 122)
        ch -= 32;

    printf("%c\n", ch);

    return 0;
}