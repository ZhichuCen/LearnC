#include <stdio.h>

int my_str_len(char *chr) {
  int len = 0;
  for (; chr[len] != '\0'; len++)
    ;
  return len;
}

int have_num(char *chr) {
  for (int i = 0; chr[i] != '\0'; i++) {
    if (chr[i] >= '0' && chr[i] <= '9') {
      return 1;
    }
  }
  return 0;
}

int have_lower(char *chr) {
  for (int i = 0; chr[i] != '\0'; i++) {
    if (chr[i] >= 'a' && chr[i] <= 'z') {
      return 1;
    }
  }
  return 0;
}

int have_upper(char *chr) {
  for (int i = 0; chr[i] != '\0'; i++) {
    if (chr[i] >= 'A' && chr[i] <= 'Z') {
      return 1;
    }
  }
  return 0;
}

int have_other(char *chr) {
  for (int i = 0; chr[i] != '\0'; i++) {
    if (!((chr[i] >= '0' && chr[i] <= '9') ||
          (chr[i] >= 'a' && chr[i] <= 'z') ||
          (chr[i] >= 'A' && chr[i] <= 'Z'))) {
      return 1;
    }
  }
  return 0;
}

int main(void) {
  int n;
  scanf("%d", &n);
  getchar();
  for (int i = 0; i < n; i++) {
    char passwd[20]={0};
    int safe_level = 0;
    // scanf("%s", passwd);

    char tmp=0;
    int len = 0;

    while ((tmp = getchar()) != '\n') {
      passwd[len++] = tmp;
    }
    passwd[len] = '\0';
    // int len = my_str_len(passwd);
    if (len < 6) {
      safe_level = 1;
    } else {
      safe_level += 1 + have_num(passwd) + have_lower(passwd) +
                    have_other(passwd) + have_upper(passwd);
    }
    switch (safe_level) {
    case 1:
    case 2:
      printf("Not Safe\n");
      break;
    case 3:
      printf("Medium Safe\n");
      break;
    case 4:
    case 5:
      printf("Safe\n");
      break;
    }
  }
}
