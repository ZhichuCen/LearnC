#include <stdio.h>
#include <limits.h>

int main()
{
    printf("short 类型的最大值: %d\n", SHRT_MAX);
    printf("short 类型的最小值: %d\n", SHRT_MIN);

    printf("int 类型的最大值: %d\n", INT_MAX);
    printf("int 类型的最小值: %d\n", INT_MIN);

    printf("long 类型的最大值: %ld\n", LONG_MAX);
    printf("long 类型的最小值: %ld\n", LONG_MIN);

    printf("long long 类型的最大值: %lld\n", LLONG_MAX);
    printf("long long 类型的最小值: %lld\n", LLONG_MIN);

    return 0;
}