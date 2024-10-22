#include <stdio.h>
#include <math.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int m = pow(10, n - 1) - 1;
    int sum = 0;
    int m_copy;
    _Bool NA = 1;
    while (m++ < pow(10, n))
    {
        sum = 0;
        m_copy = m;
        for (int i = 1; i <= n; i++)
        {
            sum += pow(m_copy % 10, n);
            m_copy /= 10;
        }
        // printf("%dand%d\n",sum,m);
        if (sum == m)
        {
            NA = 0;
            printf("%d\n", sum);
        }
    }
    if (NA)
    {
        printf("No output.\n");
    }
    return 0;
}