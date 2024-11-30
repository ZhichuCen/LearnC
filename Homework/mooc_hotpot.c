#include <limits.h>
#include <stdio.h>

int sum_arr(int *arr, int a, int b) {
  int sum=0;
  for (; a <= b; a++) {
    sum += arr[a];
  }
  return sum;
}

int main(void) {
  int T;
  scanf("%d", &T);
  for (int t = 0; t < T; t++) {
    int N;
    scanf("%d", &N);
    int arr[N];
    int max = INT_MIN;
    for (int n = 0; n < N; n++) {
      scanf("%d", arr + n);
    }
    for (int a = 0; a < N; a++) {
      for (int b = a; b < N; b++) {
        int sum = sum_arr(arr, a, b);
        if (sum > max) {
          max = sum;
        }
      }
    }
    printf("%d\n", max);
  }
}