#include<stdio.h>

int print_line(int n,int h,char ch){
    for(int i=0;i<n-h;i++){
        putchar(' ');
    }
    if(h==1){
        putchar(ch);
        putchar('\n');
        return 0;
    }

    putchar(ch);
    for(int x=0;x<2*h-3;x++){
        putchar(' ');
    }
    putchar(ch);
    putchar('\n');
    return 0;
}
int print_rhomos(int n, int h,char ch){

    if(h==n){
        print_line(n,h,ch);
        return 0;
    }

    print_line(n,h,ch);
    print_rhomos(n,h+1,ch+1);
    print_line(n,h,ch);
    return 0;
}



int main(void){
    int n;
    char ch;
    scanf("%c%d",&ch,&n);
    print_rhomos(n,1,ch);
    return 0;
}