#include <math.h>
#include <stdio.h>

#define thickness_of_01 1.8
#define thickness_of_05 1.5
#define thickness_of_10 2.0
#define eps 1e-3

_Bool is_equal(double a, double b) {
  if (a - b < eps && a - b > -eps) {
    return 1;
  }
  return 0;
}

int main(void) {
  int n;

  scanf("%d", &n);


  for (double h = 1.5; h <= 10 * n * thickness_of_10 + 1; h += 0.1) {

    int n01 = round(h / thickness_of_01);
    int n05 = round(h / thickness_of_05);
    int n10 = round(h / thickness_of_10);

    if (is_equal(n01 * thickness_of_01, h) &&
        is_equal(n05 * thickness_of_05, h) &&
        is_equal(n10 * thickness_of_10, h)) {

      double devi = n01 * 0.1 + n05 * 0.5 + n10 * 1.0 - n * 10.0;
      if (devi < eps && devi > -eps) {
        printf("%d,%d,%d\n", n01, n05, n10);
        return 0;
      }
    }
  }
  printf("No change.\n");
}