/*Convert number to ASCII char*/
#include <stdio.h>

int main(void)
{
    int ch, a;
    for(a=1;a<=200;a++) {
        printf("%c",a);

    }
    printf("\n");
    
    while (1)
    {
        printf("Please enter a num and I'll convert it into ASCII char:_____\b\b\b\b");
        scanf("%d", &ch);
        printf("\n The correspondinf char is %c \n", ch);
    }
    return 0;
}