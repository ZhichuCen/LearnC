#include <stdio.h>

#include <stdlib.h>

int main()

{

    int a[5];//没有初始化赋值；

    int i;

    for(i=0;i<10;i++)   printf("%d\n",a[i]);//输出10个整数-----【1】

    for(i=0;i<5;i++)   scanf("%d",&a[i]);//输入5个整数--------【2】

    for(i=0;i<10;i++)   printf("%d",a[i]);//输出10个整数-------【3】

    return 0;

}