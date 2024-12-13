#include <stdio.h>
#include <string.h>

void cap(char *c) {
    while (*c > 'Z') {
        *c -= 26;
    }
    while (*c < 'A') {
        *c += 26;
    }
}

int main(void) {
    int n;
    char c;
    scanf("%d %c",&n,&c);
    // n = 6;
    // c = 'W';

    char m[n][2 * n - 1];
    memset(m, ' ', sizeof(m));

    // for(int i=0;i<n;i++){
    //     m[i][2*n]='\n';
    //     m[i][2*n+1]='\0';
    // }

    for (int i = 0; i < n; i++) {
        m[i][i] = c;
        m[i][2 * n - 2 - i] = c;
        c++;
        cap(&c);
    }

    for (int i = 1; i < n; i++) {
        m[n - 1][n - 1 - i] = c;
        m[n - 1][n - 1 + i] = c;
        c++;
        cap(&c);
    }

    for (int i = n - 2; i >= 1; i--) {
        m[i][0] = c;
        m[i][2 * n - 2] = c;
        c++;
        cap(&c);
    }

    for (int y = 0; y < n; y++) {
        for (int x = 0; x <= 2 * n - 2; x++) {
            putchar(m[y][x]);
            if (x != 2 * n - 2) {
                putchar(' ');
            } else {
                putchar('\n');
            }
        }
    }
}
