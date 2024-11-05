#include<stdio.h>
// #define SEC_PER_MIN 60
    const int SEC_PER_MIN= 60;

int main(void){

    int min=0;
    printf("minuites:\n");
    scanf("%d",&min);
    while(min>0){
        printf("secs:%d\n",60*min);
        printf("minuites:\n");
        scanf("%d",&min);
    }
    return 0;
}