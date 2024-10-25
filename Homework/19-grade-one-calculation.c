#include<stdio.h>

int main(void) {
    int a,b,ans;
    char operation;
    scanf("%d%c%d",&a,&operation,&b);

    switch(operation) {
        case '+':
            ans=a+b;
            break;
        case '-':
            ans=a-b;
            break;
        case '*':
            ans=a*b;
            break;
        case '/':
            ans=a/b;
            break;
        case '%':
            ans=a%b;
            break;
    }
    printf("%d\n",ans);

    return 0;
}