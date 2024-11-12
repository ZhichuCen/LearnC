#include <stdio.h>

void cap_char(char *this_char) {
  if (*this_char > 'Z') {
    *this_char -= 26;
  } else if (*this_char < 'A') {
    *this_char += 26;
  }
}

void print_line(int spaces, int row, char first_char) {
  for (int i = 0; i < spaces; i++) {
    putchar(' ');
  }

  for (int i = 0; i < row; i++) {
    putchar(first_char++);
    cap_char(&first_char);
  }

  first_char -= 2;
  cap_char(&first_char);

  for (int i = 0; i < row - 1; i++) {
    putchar(first_char--);
    cap_char(&first_char);
  }
  putchar('\n');
  first_char += 2;
  cap_char(&first_char);
  if (spaces > 0)
    print_line(spaces - 1, row + 1, first_char);
}

int main(void) {
  int rows;
  char begin_char;
  scanf("%d %c",&rows,&begin_char);
  print_line(rows - 1, 1, begin_char);
  return 0;
}