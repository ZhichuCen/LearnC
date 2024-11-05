#include <stdio.h>
#include <stdlib.h>

int suit2seq(char suit) {
  switch (suit) {
  case 'H':
    return 4;
  case 'S':
    return 3;
  case 'D':
    return 2;
  case 'C':
    return 1;
  default:
    return -1;
  }
}

void swap_cards(char *cards[3], int a, int b) {
  char *temp = cards[a];
  cards[a] = cards[b];
  cards[b] = temp;
}

void compare_and_swap_suit(char *cards[3], int a, int b) {
  if (suit2seq(cards[a][0]) < suit2seq(cards[b][0])) {
    swap_cards(cards, a, b);
  }
}

void sort_suit(char *cards[3]) {
  compare_and_swap_suit(cards, 0, 1);
  compare_and_swap_suit(cards, 0, 2);
  compare_and_swap_suit(cards, 1, 2);
}

int num2seq(char num) {
  if (num >= '2' && num <= '9') {
    return num - 0x30;
  }
  switch (num) {
  case '1':
    return 10;
  case 'J':
    return 11;
  case 'Q':
    return 12;
  case 'K':
    return 13;
  case 'A':
    return 14;
  default:
    return -1;
  }
}

void compare_and_swap_num(char *cards[3], int a, int b) {
  if (num2seq(cards[a][1]) < num2seq(cards[b][1])) {
    swap_cards(cards, a, b);
  }
}

void sort_num(char *cards[3]) {
  for (int i = 0; i < 2; i++) {
    if (cards[i][0] == cards[i + 1][0]) {
      compare_and_swap_num(cards, i, i + 1);
    }
  }
}

_Bool not_bad(char *cards[3]) {
  for (int i = 0; i < 3; i++) {
    if (suit2seq(cards[i][0]) == -1 || num2seq(cards[i][1]) == -1)
      return 0;
  }
  return 1;
}

_Bool no_duplicate(char *cards[3]) {
  for (int i = 0; i < 2; i++) {
    _Bool same = 1;
    for (int j = 0; j < 3; j++) {
      if (cards[i][j] != cards[i + 1][j]) {
        same = 0;
      }
    }
    if (same) {
      return 0;
    }
  }
  return 1;
}

int main(void) {
  char *cards_a[3];
  char *cards_b[3];

  char winner = 'X';

  for (int i = 0; i < 3; i++) {
    cards_a[i] = malloc(4 * sizeof(char));
  }
  for (int i = 0; i < 3; i++) {
    cards_b[i] = malloc(4 * sizeof(char));
  }

  scanf("%s %s %s %s %s %s", cards_a[0], cards_a[1], cards_a[2], cards_b[0],
        cards_b[1], cards_b[2]);

  if (!(not_bad(cards_a) && not_bad(cards_b))) {
    printf("Input Error!\n");
    return 0;
  }

  sort_suit(cards_a);
  sort_suit(cards_b);

  sort_num(cards_a);
  sort_num(cards_b);

  if (!(no_duplicate(cards_a) && no_duplicate(cards_b))) {
    printf("Input Error!\n");
    return 0;
  }

  for (int i = 0; i < 3; i++) {
    if (suit2seq(cards_a[i][0]) > suit2seq(cards_b[i][0])) {
      winner = 'A';
      break;
    } else if (suit2seq(cards_a[i][0]) < suit2seq(cards_b[i][0])) {
      winner = 'B';
      break;
    } else {
      if (num2seq(cards_a[i][1]) > num2seq(cards_b[i][1])) {
        winner = 'A';
        break;
      } else if (num2seq(cards_a[i][1]) < num2seq(cards_b[i][1])) {
        winner = 'B';
        break;
      }
    }
  }

  printf("Winner is %c!\n", winner);
  printf("A: %s %s %s\n", cards_a[0], cards_a[1], cards_a[2]);
  printf("B: %s %s %s\n", cards_b[0], cards_b[1], cards_b[2]);
  return 0;
}