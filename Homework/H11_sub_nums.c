#include <stdio.h>

_Bool sub(int num, int K)
{
    int sub[3];
    sub[0]=num%1000;
    num/=10;
    sub[1]=num%1000;
    num/=10;
    sub[2]=num;
    _Bool ok=1;
    for(int i=0;i<3;i++){
        if(sub[i]%K!=0){
            ok=0;
        }
    }
    return ok;
}
int main(void)
{
    int K;
    scanf("%d",&K);
    for(int i=10000;i<=30000;i++){
        if(sub(i,K)){
            printf("%d\n",i);
        }
    }
}