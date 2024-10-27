#include<stdio.h>

//这是函数声明，防止编译器不知道函数怎么用，新版编译器不需要声明。
int print_rhomos(int n, int h);
int print_line(int n,int h);

int print_rhomos(int n, int h){//这是主体函数

    if(h==n){//这是递归的结束条件
        print_line(n,h);
        return 0;
    }

    print_line(n,h);
    print_rhomos(n,h+1);//这里是递归
    print_line(n,h);//嘻嘻这才是精髓
    return 0;
}

int print_line(int n,int h){//这是打印单行的代码
    for(int i=0;i<n-h;i++){
        putchar(' ');
        putchar(' ');
    }
    if(h==1){
        printf("%-2d\n",n);
        return 0;
    }
    for(int x=n;x>n-h+1;x--){
        printf("%-2d",x);
    }
    for(int x=n-h+1;x<=n;x++){
        printf("%-2d",x);
    }
    putchar('\n');
    return 0;
}

int main(void){
    int n;
    scanf("%d",&n);

    print_rhomos(n,1);

    return 0;
}