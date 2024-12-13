#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  scanf("%d", &n);

  _Bool *prime_list = calloc(n + 1, sizeof(int));

  for (int i = 2; i <= n; i++) {
    if (prime_list[i] == 0) {
      for (int j = i * 2; j <= n; j += i) {
        prime_list[j] = 1;
      }
    }
  }

  for (int i = 2; i <= n; i++) {
    if (prime_list[i] == 0) {
      if (prime_list[n - i] == 0) {
        printf("%d=%d+%d\n", n, i, n - i);
        return 0;
      }
    }
  }
}
