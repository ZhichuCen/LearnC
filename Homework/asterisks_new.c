#include <stdio.h>
int main() {int n;scanf("%d", &n);char stars[n+2];memset(stars,'*',n);stars[n]='\n'; stars[n+1]='\0'; printf("%s",stars);}