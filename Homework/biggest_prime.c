#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int range;
    scanf("%d", &range);
    _Bool *array = calloc(range, sizeof(_Bool));
    for (int n = 2; n <= range; n++) {
        if (!*(array + n - 1)) {
            for (int m = n * n; m <= range; m += n) {
                *(array + m - 1) = 1;
            }
        }
    }

    for (int i = 0; i < range; i++) {
        printf("%d,", *(array + i));
    }

    while (*(array + (--range)))
        ;
    //printf("The max prime number is %d.\n", range + 1);
    return 0;
}
