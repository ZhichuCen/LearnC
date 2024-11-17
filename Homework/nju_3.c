#include <stdio.h>
int peach(int n)
{
    if (n == 1)
        return 6;
    else
    {
        // int last = peach(n - 1);
        // while(last%4!=0){
        //     last+=5;
        // }
        return (peach(n - 1)/4 * 5  + 1);
    }
}
int main()
{
    printf("%d\n", peach(5));
    return 0;
}