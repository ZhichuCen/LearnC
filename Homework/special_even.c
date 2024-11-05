#include <stdio.h>

int main(void) {
    int min,max,count=0,a,b,c,d;
    _Bool flag=1;
    while(flag) {
        count=0;
        scanf("%d %d",&min,&max);

        if(min==0||max==0) {
            flag=0;
            break;
        }

        if(min>max) {
            printf("Error\n");
            continue;
        }

        if(!((min>=1000)&&(max<=9999))) {
            printf("Error\n");
            continue;
        }

        if(min%2==1)min+=1;

        for(int num=min;num<=max;num+=2) {
            a=num%10;
            b=(num/10)%10;
            c=(num/100)%10;
            d=(num/1000)%10;
            if(!(a==b||a==c||a==d||b==c||b==d||c==d)) {
                printf("%d  ",num);
                count++;
            }
        }

        printf("\ncounter=%d\n",count);

    }
    return 0;
}