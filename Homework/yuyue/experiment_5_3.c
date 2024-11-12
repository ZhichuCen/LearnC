#include <stdio.h>

#include <stdlib.h>

int main()

{

  char str[100],
      sub[100]; /* 字符数组str用来存放字符串，sub用来存放m和n之间的子串 */

  int m, n, k, p;

  printf("Enter string:");

  gets(str);

  printf("Enter m n:");

  scanf("%d%d", &m, &n);

  for (k = 0; k < m&&str[k]!='\0'; k++)
    ;

  k++;
  for (p = 0; p < n-m-1; k++, p++) /* 复制子串*/

    sub[p] = str[k];

  sub[p] = '\0'; /* 在串sub的后面加上串结束标记 */

  printf("sub=%s\n", sub);
}