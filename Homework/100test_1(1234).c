#include <stdio.h>

int num[3];
int r;
int i, j, k;
int main()
{
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            for (k = 1; k <= 4; k++)
            {
                if (!(i == j || j == k || k == i))
                {   
                    r=i * 100 + j * 10 + k;
                    printf("%d ", r);
                }
            }
        }
    }
    return 0;
}