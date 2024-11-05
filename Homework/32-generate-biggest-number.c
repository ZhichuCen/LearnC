#include <stdio.h>
#include <stdlib.h>

int main() {
//   char *str = NULL;
//   size_t len = 0;
//   ssize_t read = getline(&str, &len, stdin);
 char str[100];
 int read=0;
 char temp;

 while((temp=getchar())!='\n'){
    str[read++]=temp;
 }

//   printf("%ld\n", read);
//   printf("%zd\n", len);

  str[read]='\0';

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