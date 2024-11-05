#include <stdio.h>

_Bool started = 0;

void magic(char pre) {
  char now = getchar();
  if (now == '\n') {
    putchar(pre);
  } else if (started) {
    if (now > pre) {

      magic(now);
      putchar(pre);

    } else {
      putchar(pre);
      magic(now);
    }
  } else {
    started = 1;
    magic(now);
  }
}

int main(void) {
  magic(0);
  putchar('\n');
}