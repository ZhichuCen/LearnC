#include <stdio.h>

int main(void) {
  int a, n, p = 1;
  _Bool bigger_than_1k = 0;
  scanf("%d%d", &a, &n);

  while (n > 0) {
    p *= a;
    if (!bigger_than_1k) {
      if (p % 1000 != p) {
        bigger_than_1k = 1;
      }
    }
    p %= 1000;
    n--;
  }
  if (!bigger_than_1k) {
    printf("The last 3 numbers is %d.\n", p);
  } else{
    printf("The last 3 numbers is %03d.\n", p);
  }
}