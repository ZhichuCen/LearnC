#include<stdio.h>

int main(void){
    int duty =0;
    int degree;
    while(scanf("%d",&degree)){
        duty = (int)((degree/18.0+2.5)*2000.0/100);
        printf("duty:%d\n",duty);
        
    }
    return 0;
}