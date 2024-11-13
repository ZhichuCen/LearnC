#include <stdio.h>

void print_single_line(char begin_char, int spaces) {
  if (spaces == 0) {
    putchar(begin_char);
    putchar('\n');
  } else {
    putchar(begin_char);
    for (int i = 0; i < spaces; i++) {
      putchar(' ');
    }
    putchar(begin_char);
    putchar('\n');
  }
}

void cap_char(char *chr) {
  if (*chr > 'z')
    *chr -= 26;
}

void print_K(int rows, char begin_char) {
  for (int i = 1; i <= rows; i++) {
    print_single_line(begin_char++, rows - i);
    cap_char(&begin_char);
  }
  for (int i = 1; i <= rows - 1; i++) {
    print_single_line(begin_char++, i);
    cap_char(&begin_char);
  }
}

int main(void) {
  int rows;
  char begin_char;
  scanf("%c,%d", &begin_char, &rows);

  print_K(rows, begin_char);
}