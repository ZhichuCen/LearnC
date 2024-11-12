#include <stdio.h>

int main(void) {
  int inital_num, r;
  scanf("%d%d", &inital_num, &r);
//   inital_num=3;
//   r=6;
  int current_num = inital_num;

  char triangle[r][r + 2];

  for(int i=0;i<r;i++){
    for(int j=0;j<r+2;j++){
        triangle[i][j]=' ';
    }
  }

  for (int i = 0; i < r; i++) {
    triangle[0][i] = 0x30+current_num++%10;
  }
  triangle[0][r] = '\n';
  triangle[0][r + 1] = '\0';

  for (int i = 1; i < r; i++) {
    triangle[i][r - i - 1] = 0x30+current_num++%10;
    triangle[i][r - i] = '\n';
    triangle[i][r - i + 1] = '\0';
  }

  for (int i = r - 2; i >= 1; i--) {
    triangle[i][0] = 0x30+current_num++%10;
  }

  for(int i=0;i<r;i++){
    printf("%s",triangle[i]);
  }

    // printf("%s",triangle[0]);
}