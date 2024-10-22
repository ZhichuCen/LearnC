/*test precedence*/
#include <stdio.h>

int main(void)
{
    /*
    int top, score;
    top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    printf("top=%d\nscore=%d\n", top, score);
    */
    int a = 4, b = 5, c;
    c = a = a > b;
    printf("a=%d\nc=%d\n", a, c);

    return 0;
}