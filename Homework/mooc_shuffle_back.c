#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int n;
  scanf("%d",&n);
  int *a = calloc(2 * n, sizeof(int));
  int *b = calloc(2 * n, sizeof(int));

  for (int i = 0; i < 2 * n; i++) {
    a[i] = i;
  }

  int count = 0;
  while (1) {
    for (int m = 0; m < n; m++) {
      b[2 * m + 1] = a[m];
      b[2 * m] = a[m + n];

    }
    int *tmp = a;
    a = b;
    b = tmp;
    count++;
    
    _Bool ok=1;
    for(int i=0;i<2*n;i++){
        if(a[i]!=i){
            ok=0;
        }
    }
    if(ok){
        break;
    }
  }

  printf("%d\n", count);
}