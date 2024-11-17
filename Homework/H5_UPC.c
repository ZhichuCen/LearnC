#include<stdio.h>

char c[12];

int d(int index){
    return c[index]-'0';
}

int main(void){
    scanf("%c",c);
    scanf("%s",c+1);
    scanf("%s",c+6);

    // printf("\n%s\n",c);

    int check_sum=9-((d(0)+d(2)+d(4)+d(6)+d(8)+d(10))*3+(d(1)+d(3)+d(5)+d(7)+d(9))-1)%10;

    printf("%d\n",check_sum);


}