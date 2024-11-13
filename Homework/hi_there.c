#include <stdio.h>

int main(void) {
  char name[100];
  char temp;
  int count = 0;
  while ((temp = getchar()) != '\n') {
    name[count++] = temp;
  }
  name[count]='\0';
  printf("Hi,there,%s!\n", name);
}