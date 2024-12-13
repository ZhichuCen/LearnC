#include <stdio.h>

int main(void) {
  char s1[100] = {0};
  char s2[100] = {0};

  scanf("%s\n%s", s1, s2);

  int index = 0;

  for (int i = 0; s1[i] != '\0'; i++) {
    if (s1[i] == '-' && (s1[i - 1] < s1[i + 1])) {
      for (char c = s1[i - 1] + 1; c < s1[i + 1]; c++) {
        s2[index++] = c;
      }
    }else{
        s2[index++]=s1[i];
    }
  }

    printf("%s\n",s2);

}