#include <stdio.h>

int main(void) {
  int count;
  scanf("%d", &count);
  int num[count];
  for (int i = 0; i < count; i++) {
    scanf("%d", num + i);
  }

  for (int i = 0; i < count / 2; i++) {
    printf("%d ", num[i] * num[count - 1 - i]);
  }
  if (count % 2 == 1)
    printf("%d ", num[count / 2]);
  putchar('\n');
}