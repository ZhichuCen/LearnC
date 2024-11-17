#include <stdio.h>
#include <stdlib.h>

#define WORD_COUNT 5
char *words[WORD_COUNT];

_Bool compare_words_smaller(int a, int b)
{
    for (int i = 0; words[a][i] != '\0' && words[b][i] != '\0'; i++)
    {
        if (words[a][i] < words[b][i])
        {

            return 1;
        }
        else if (words[a][i] > words[b][i])
        {
            return 0;
        }
    }
    return 0;
}

void compare_and_swap(int a, int b)
{
    if (compare_words_smaller(a, b))
    {
        char *tmp = words[a];
        words[a] = words[b];
        words[b] = tmp;
    }
}

int main(void)
{

    for (int i = 0; i < WORD_COUNT; i++)
    {
        words[i] = calloc(50, sizeof(char));
    }

    for (int i = 0; i < WORD_COUNT; i++)
    {
        scanf("%s", words[i]);
    }

    for (int i = 0; i < WORD_COUNT; i++)
    {
        for (int j = WORD_COUNT - 1; j > i; j--)
        {
            compare_and_swap(j - 1, j);
        }
    }

    for (int i = 0; i < WORD_COUNT; i++)
    {
        printf("%s\n", words[i]);
    }
}