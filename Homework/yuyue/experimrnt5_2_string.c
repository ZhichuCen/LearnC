#include <stdio.h>

#include <stdlib.h>

int main()

{

  char str[100], c;

  int i, j;

  printf("Enter string:");

  gets(str);

  for (i = 0; str[i]!='\0'; i++)
    ; /* 定位到字符串串尾的'\0'*/

  i--; /* 寻找到'\0'的前一个字符*/

  for (j = 0; j < i; 【2】,【3】) /* 进行逆序排列*/

  {
    【4】;

    str[i] = str[j];

    【5】;
  }

  printf("Output string:%s\n", str);

  return 0;
}