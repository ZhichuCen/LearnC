#include <stdio.h>

char cap(char *c) {
  while (*c > 'Z') {
    *c -= 26;
  }
  while (*c < 'A') {
    *c += 26;
  }
  return *c;
}

int main(void) {
  int n;
  char c;
  scanf("%d %c", &n, &c);

  char c_1 = c;
  char c_o = c;

  c += n - 1;
  for (int i = 0; i < n - 1; i++) {
    putchar(' ');
  }
  for (int i = 0; i < n; i++) {
    putchar(cap(&c));
    c++;
  }
  putchar('\n');

  c_1 += n - 2;
  for (int i = n - 2; i >= 1; i--) {
    for (int j = 0; j < i; j++) {
      putchar(' ');
    }

    putchar(cap(&c_1));
    c_1--;

    for (int j = 0; j < 3 * n - 2 - 2 * (i + 1); j++) {
      putchar(' ');
    }
    putchar(cap(&c));
    c++;
    putchar('\n');
  }

  for (int i = 0; i < 3 * n - 2; i++) {
    putchar(cap(&c_o));
    c_o++;
  }
  putchar('\n');
}