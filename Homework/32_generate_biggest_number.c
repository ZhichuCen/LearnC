#include <stdio.h>
#include <string.h>

int main() {

 char str[1000];
 int read=0;
//  char temp;

 scanf("%s",str);
 read=strlen(str);

  for (int i = 0; i < read - 1; i++) {
    for (int j = 0; j < read - i - 1; j++) {
      if (str[j] < str[j + 1]) {
        char temp = str[j];
        str[j] = str[j + 1];
        str[j + 1] = temp;
      }
    }
  }
  printf("%s\n",str);
}