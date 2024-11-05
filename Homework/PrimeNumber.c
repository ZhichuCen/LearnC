#include <stdio.h>
#include <stdbool.h>
#include <math.h>
const int M = 100000;
bool numlist[M + 1];
int num;
int p;
int count = 0;

int main()
{
    for (num = 2; num <= M; num++)
    {
        if (!numlist[num])
        {
            printf("%d ", num);
            count++;
            for (p = num * num; p <= M; p += num)
            {
                numlist[p] = 1;
            }
        }
    }
    printf("\ntotal count %d\n", count);
    return 0;
}
