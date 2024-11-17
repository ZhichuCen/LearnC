#include<stdio.h>

int main()
{
  int x[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int i = 0; i < 3; i++) printf("%d,", x[i][2-i]);
}