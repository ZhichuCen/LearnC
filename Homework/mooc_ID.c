#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char CHECK_CODE[] = "10X98765432";
const int WEIGHT[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};

char calculateCheckCode(const char *id17) {
  int sum = 0;
  for (int i = 0; i < 17; i++) {
    sum += (id17[i] - '0') * WEIGHT[i];
  }
  return CHECK_CODE[sum % 11];
}

int validate18ID(const char *id18) {
  if (strlen(id18) != 18)
    return 0;
  for (int i = 0; i < 17; i++) {
    if (!isdigit(id18[i]))
      return 0;
  }
  return id18[17] == calculateCheckCode(id18);
}

void upgrade15to18(const char *id15, char *id18) {
  strncpy(id18, id15, 6);
  id18[6] = '1';
  id18[7] = '9';
  strncpy(id18 + 8, id15 + 6, 9);
  id18[17] = calculateCheckCode(id18);
  id18[18] = '\0';
}

int main() {

  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {

    char id[19];
    scanf("%s", id);

    if (strlen(id) == 15) {
      char id18[19];
      upgrade15to18(id, id18);
      printf("%s\n", id18);
    } else if (strlen(id) == 18) {
      if (validate18ID(id)) {
        printf("Valid\n");
      } else {
        printf("Invalid\n");
      }
    } else {
      printf("Invalid\n");
    }
  }

  return 0;
}