#include<stdio.h>
int n;

void show_arr(int arr[][n]) {
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            printf("%2d", arr[i][j]);
            if(i!=n-1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    // int n;
    scanf("%d", &n);
    // n = 4;
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = -1;
        }
    }

    int i = 0, j = 0;

    int num;

    enum Direction {
        NE,
        SW
    } direction = NE;


    for (num = 1; num <= n * n; num++) {
        arr[i][j] = num;
        // show_arr(arr);
        // printf("\n");
        if (direction == NE) {
            if (i == n - 1) {
                direction = SW;
                j += 1;
            } else if (j == 0) {
                direction = SW;
                i += 1;
            } else {
                i += 1;
                j -= 1;
            }
        } else if (direction == SW) {
            if (i == 0 && j == n - 1) {
                direction = NE;
                i += 1;
            } else if (i == 0) {
                direction = NE;
                j += 1;
            } else if (j == n - 1) {
                direction = NE;
                i += 1;
            } else {
                j += 1;
                i -= 1;
            }
        }
    }

    show_arr(arr);
}
