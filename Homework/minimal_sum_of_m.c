#include<stdio.h>

int main(void){
    int n,m=0,sum=0;
    scanf("%d",&n);
    while(sum<n)
        sum+=++m;
    printf("%d\n",m);
    return 0;
}