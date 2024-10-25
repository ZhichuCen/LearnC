#include <stdio.h>

int main(void) {

    _Bool finished_input=0;
    _Bool first_input=1;
    int max=0,min=0,tmp,result;
    char op=0;

    while(!finished_input) {
        if((tmp=getchar())!=EOF) {
            if(tmp==',') {continue;}//如果是逗号就跳过
            else if(0x30<=tmp&&tmp<=0x39) {
                tmp-=0x30;//利用ascii表转化为数字
                //开始比大小
                if(first_input) {max=tmp; min=tmp;first_input=0;}
                if(tmp>max)
                    max=tmp;
                if(tmp<min)
                    min=tmp;
                }
            else{switch (tmp) {//处理计算符号
                case '+':
                    op='+';
                    break;
                case '-':
                    op='-';
                    break;
                case '*':
                    op='*';
                    break;
                case '/':
                    op='/';
                    break;
                case '%':
                    op='%';
                    break;
                case '='://读到=就结束
                    finished_input=1;
                    break;
                case '\n'://读到\n也结束，其实这一个case是多余的。
                    finished_input=1;
                break;
                default:
                    break;
            }}

        }
    }

    if(op=='/') {
        if(min==0) {
            printf("Error!\n");
            return 0;
        }
    }

    switch(op) {
        case '+':
            result=max+min;
            printf("%d+%d=%d\n",max,min,result);
            break;
        case '-':
            result=max-min;
            printf("%d-%d=%d\n",max,min,result);
            break;
        case '*':
            result=max*min;
            printf("%d*%d=%d\n",max,min,result);
            break;
        case '/':
            result=max/min;
            printf("%d/%d=%d\n",max,min,result);
            break;
        case '%':
            result=max%min;
            printf("%d%%%d=%d\n",max,min,result);
            break;
    }

    return 0;
}