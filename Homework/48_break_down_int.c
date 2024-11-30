/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
int main()
{
    int n, count();
    scanf("%d", &n);
    printf("%d\n", count(n, n - 1));
    return 0;
}

/* 请编写递归函数
int count( int n, int m )
{
}
*/

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */

int count(int n, int m)
{
    if (n < 1 || m < 1)
    {
        return 0;
    }
    else if (n == 1 || m == 1)
    {
        return 1;
    }
    else if (n < m)
    {
        return count(n, n);
    }
    else if (n == m)
    {
        return count(n, m - 1) + 1;
    }
    else
    {
        return count(n - m, m) + count(n, m - 1);
    }
}