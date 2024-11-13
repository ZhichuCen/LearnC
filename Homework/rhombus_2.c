#include <stdio.h>

void single_line(char chr, int pre, int mid) {

  for (int i = 0; i < pre; i++)
    putchar(' ');
  putchar(chr);
  if (mid > 0) {
    for (int i = 0; i < mid; i++)
      putchar(' ');
    putchar(chr);
  }
  putchar('\n');
}

void print_rhombus(char top, int height, int current_height) {
  if (top > 'Z') {
    top -= 26;
  }
  if (current_height == height) {
    single_line(top, 0, 2 * current_height - 3);
  } else {
    single_line(top, height - current_height, 2 * current_height - 3);
    print_rhombus(top + 1, height, current_height + 1);
    single_line(top, height - current_height, 2 * current_height - 3);
  }
}
int main(void) {
  char top;
  int height;
  int r = scanf("%c,%d", &top, &height);
  print_rhombus(top, height, 1);
  return 0;
}