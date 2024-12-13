#include <stdio.h>
#include <string.h>

typedef struct {
    int count;
    int start;
    int stop;
} Equal_t;

int main(void) {
    int n;
    scanf("%d", &n);
    int list[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", list + i);
    }

    Equal_t biggest = {0};
    Equal_t now = {0};

    for (int i = 0; i < n; i++) {
        now.start = i;
        now.count = 1;
        for (now.stop = i + 1; now.stop < n; now.stop++) {
            if (now.stop==n-1||list[now.stop] != list[now.start]) {
                if(list[now.stop] != list[now.start])
                    now.stop--;
                now.count = now.stop - now.start + 1;
                break;
            }
        }
        i = now.stop;

        if (now.count > biggest.count) {
            memcpy(&biggest, &now, sizeof(Equal_t));
        }
    }

    if (biggest.count<=1){
        printf("No equal number list.\n");
    }else{
        printf("The longest equal number list is from %d to %d.\n",biggest.start,biggest.stop);
    }
}