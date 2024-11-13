#include<stdio.h>
int main() {
  int a = 1;
  int b = 2;
  int c = 3;
  while (b < a < c) {
    int t = a;
    a = b;
    b = t;
    c--;
  }
  printf("%d, %d, %d", a, b, c);
}