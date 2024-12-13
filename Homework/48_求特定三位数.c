#include <stdio.h>

void get_digit(int n, int *list) {
  list[0] = n % 10;
  n /= 10;
  list[1] = n % 10;
  n /= 10;
  list[2] = n % 10;
}

int main(void) {
  int m=2;
  scanf("%d", &m);
//   m = 2;

  _Bool found = 0;
  for (int a = m * 100; a < m * 100 + 100; a++) {
    if (a > m * 100 + 99) {
      break;
    }
    int d[9]={0};
    _Bool ck[10] = {0};
    int b = a * 2;
    int c = a * 3;

    if (c > 999 || b > 999) {
      break;
    }

    get_digit(a, d);
    get_digit(b, d + 3);
    get_digit(c, d + 6);

    if (d[2] != m) {
      break;
    }

    _Bool ok = 1;
    for (int i = 0; i < 9; i++) {
      if (ck[d[i] ] == 1) {
        ok = 0;
      }

    if(d[i]==0){
        ok=0;
    }

      ck[d[i] ] = 1;
    }
    if (ok) {
      found = 1;
      printf("%d,%d,%d\n", a, b, c);
    }
  }
  if (!found) {
    printf("0,0,0\n");
  }
}
