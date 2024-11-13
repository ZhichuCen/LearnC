#include<stdio.h>

int print_tit(int pre,int mid){

    if(mid<=0){
        for(int i=0;i<pre;i++){
        putchar(' ');
        }
        putchar('*');
        putchar('\n');
        return 0;
    }

    for(int i=0;i<pre;i++){
        putchar(' ');
    }
    putchar('*');
    for(int i=0;i<mid;i++){
        putchar(' ');
    }
    putchar('*');
    putchar('\n');

    print_tit(pre+1,mid-2);
    return 0;
}

int main(void){
    int h;
    scanf("%d",&h);
    if (h==1){
        putchar('*');
        putchar('\n');
        return 0;
    }
    for(int i=0;i<2*h-1;i++){
        putchar('*');
    }
    putchar('\n');

    print_tit(1,2*h-5);
    return 0;
}