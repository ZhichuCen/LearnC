#include <stdio.h>

_Bool leap_year(int y) {
  if (y % 4 == 0) {
    if (y % 100 == 0) {
      if (y % 400 == 0) {
        return 1;
      } else {
        return 0;
      }
    } else {
      return 1;
    }
  } else {
    return 0;
  }
}

int days_in_month(int y, int m) {
  static int days[12] = {31, -1, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (m == 2) {
    if (leap_year(y)) {
      return 29;
    } else {
      return 28;
    }
  } else {
    return days[m - 1];
  }
}

int main(void) {
  int y, m, d;
  scanf("%d.%d.%d", &y, &m, &d);
  int gap = 0;

  if (m >= 6 && d >= 6) {
    for (int i = m; i <= 12; i++) {
      gap += days_in_month(y, i);
    }
    for (int i = 1; i <= 5; i++) {
      gap += days_in_month(y + 1, i);
    }
    gap -= d;
    gap += 6;
  } else {
    for (int i = m; i <= 5; i++) {
      gap += days_in_month(y, i);
    }
    gap -= d;
    gap += 6;
  }
//   printf(gap==1?"%d day.\n":"%d days.\n",gap);
    printf("%d days.\n",gap);
}