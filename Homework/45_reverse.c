/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
#include <stdlib.h>
void reverse(char[], int, int);
int main()
{
    char str[100];
    int start, end;
    gets(str);
    scanf("%d%d", &start, &end);
    reverse(str, start, end);
    printf("%s\n", str);
    return 0;
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */

void reverse(char str[], int start, int end)
{
    if (start < end)
    {

        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        reverse(str, start + 1, end - 1);
    }
}