#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

const int M = 100000;
bool* numlist;
int num;
int p;
int count = 0;

int main()
{
    numlist = (bool*)calloc(M + 1, sizeof(bool)); // 动态分配内存并初始化为 false
    if (numlist == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for (num = 2; num <= M; num++)
    {
        if (!numlist[num])
        {
            printf("%d ", num);
            count++;
            for (p = num * num; p <= M; p += num)
            {
                numlist[p] = true;
            }
        }
    }

    printf("\ntotal count: %d\n", count);

    free(numlist); // 释放分配的内存
    return 0;
}