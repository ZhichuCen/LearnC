#include <stdio.h>
unsigned long Fibonacci(unsigned n);

int main(void)
{
    printf("%lu\n",Fibonacci(40));
    return 0;
}

unsigned long Fibonacci(unsigned n)
{
    if (n > 2)
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
    else
    {
        return 1;
    }
}