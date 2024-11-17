#include <stdio.h>

unsigned long bee(unsigned long target)
{
    switch (target)
    {
    case 1:
        return 1;
    case 2:
        return 1;
    default:
        return bee(target - 1) + bee(target - 2);
    }
}

int main(void)
{
    int start, end;
    scanf("%d%d", &start, &end);
    printf("%d\n", bee(end - start + 1));
}