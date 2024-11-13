#include <stdio.h>

int main(void) {
  char a[100], b[100], c[200];
  char temp1, temp2, temp3;
  //   scanf("%s %s", a, b);
  if ((temp1 = getchar()) != '\n') {
    a[0] = temp1;
    scanf("%s", a + 1);
  } else {
    a[0] = '\0';
  }

  if ((temp2 = getchar()) == '\n') {
    if ((temp3 = getchar()) != '\n') {
      b[0] = temp3;
      scanf("%s", b + 1);
    } else {
      b[0] = '\0';
    }
  } else {
    if ((temp3 = getchar()) != '\n') {
      b[0] = temp2;
      b[1] = temp3;
      scanf("%s", b + 2);
    } else {
      b[0] = '\0';
    }
  }

  int a_index = 0, b_index = 0;

  _Bool a_finished = 0, b_finished = 0;

  do {
    if ((!a_finished) && a[a_index] == '\0')
      a_finished = 1;
    if ((!b_finished) && b[b_index] == '\0')
      b_finished = 1;

    if (a_finished && !b_finished) {
      c[a_index + b_index] = b[b_index];
      b_index++;
    } else if (b_finished && !a_finished) {
      c[a_index + b_index] = a[a_index];
      a_index++;
    } else if (!(a_finished && b_finished)) {

      if (a[a_index] <= b[b_index]) {
        c[a_index + b_index] = a[a_index];
        a_index++;

      } else {
        c[a_index + b_index] = b[b_index];
        b_index++;
      }
    } else{
        c[a_index+b_index]='\0';
    }

  } while (!(a_finished && b_finished));

  printf("%s\n", c);
}