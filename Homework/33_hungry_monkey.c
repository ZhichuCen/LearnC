#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  // n=3;
  int peaches = 1;

  for (int i = n - 1; i > 0; i--) {
    peaches += i;
    peaches *= 2;
  }

  if (peaches == 1) {
    printf("The monkey got %d peach in first day.\n", peaches);
  } else {
    printf("The monkey got %d peaches in first day.\n", peaches);
  }
}