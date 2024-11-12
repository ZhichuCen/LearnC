#include <stdio.h>
int main (void)
{
    int apple,watermelon,pear,sum,num;
    for(apple=10;apple<=1000;apple+=10)
    {
        for(watermelon=10;watermelon<=(1000-apple*4)/40;watermelon+=10)
        {
            sum=0;
            num=0;
            sum+=apple*4+watermelon*40;
            num+=apple+watermelon;
            pear=1000-num;
            if (sum+pear*20==1000&&pear%10==0&&pear>=0){
                printf("x=%d,y=%d,z=%d",apple/10,watermelon/10,pear/10);
            }
        }
    }

    return 0;
}