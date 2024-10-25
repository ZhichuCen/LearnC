#include<stdio.h>

int print_rhomos(int n, int h);
int print_line(int n,int h);

int print_rhomos(int n, int h){

    if(h==n){
        print_line(n,h);
        return 0;
    }

    print_line(n,h);
    print_rhomos(n,h+1);
    // print_line(n,h);
    return 0;
}

int print_line(int n,int h){
    for(int i=0;i<n-h;i++){
        putchar(' ');
        putchar(' ');
    }
    if(h==1){
        printf("%2d\n",1);
        return 0;
    }
    for(int x=1;x<=h;x++){
        printf("%2d",x);
    }
    for(int x=h-1;x>=1;x--){
        printf("%2d",x);
    }
    putchar('\n');
    return 0;
}

int main(void){
    int n;
    scanf("%d",&n);
    // n=3;

    print_rhomos(n,1);

    return 0;
}