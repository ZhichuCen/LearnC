#include <stdio.h>

_Bool small = 0;

char square(int x, int y, int l, char c) {
  if (x == 0 || y == 0 || x == l - 1 || y == l - 1) {
    // printf("|%d,%c|", l,c);
    return c;

  } else {
    return square(x - 1, y - 1, l - 2, c + 1);
  }
}

// char cap(char c){
//     while(c>'z'){
//         c-=26;
//     }

//     while(c<'A'){
//         c+=26;
//     }

//     if(c-'A'>'z'-c){
//         while(c<'a'){
//             c+=26;
//         }
//     }else{
//         while(c>'Z'){
//             c-=26;
//         }
//     }
//     return c;
// }

char cap(char c) {
  if (small) {
    while (c < 'a') {
      c += 26;
    }
    while (c > 'z') {
      c -= 26;
    }
  } else {
    while (c < 'A') {
      c += 26;
    }
    while (c > 'Z') {
      c -= 26;
    }
  }

  return c;
}

int main(void) {
  int n;
  char c;
  scanf("%d %c", &n, &c);

  if ((n % 2 != 1) || n < 1 || n > 24) {
    return 0;
  }

  if ('a' <= c && c <= 'z') {
    small = 1;
  }

  c -= (n - 1) / 2;
  //   printf("%d\n",c);

  for (int x = 0; x < n; x++) {
    for (int y = 0; y < n; y++) {
      printf(y == n - 1 ? "%c" : "%c ", cap(square(x, y, n, c)));
    }
    printf("\n");
  }
}