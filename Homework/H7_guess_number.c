#include <stdio.h>

int main(void)
{
    int tmp;
    int a = 0;
    while (1)
    {
        scanf("%d", &tmp);
        if (!tmp)
            break;
        a |= (1 << (tmp-1));
    }
    printf("%d\n",a);
}