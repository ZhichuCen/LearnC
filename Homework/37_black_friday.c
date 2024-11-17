#include <stdio.h>

int black_fridays_count = 0;

int get_days(int y, int m, int d)
{
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}

void find_bf(int year, int month)
{
    _Bool is_bf = 0;
    if (get_days(year, month, 13) == 5)
    {
        black_fridays_count++;
        is_bf = 1;
    }
    if (month == 1)
    {

        if (black_fridays_count == 1)
            printf("There is %d Black Friday in year %d.\nIt is:\n", black_fridays_count, year);
        else
            printf("There are %d Black Fridays in year %d.\nThey are:\n", black_fridays_count, year);
        if (is_bf)
            printf("%d/%d/%d\n", year, month, 13);
    }
    else
    {
        find_bf(year, month - 1);
        if (is_bf)
            printf("%d/%d/%d\n", year, month, 13);
    }
}

int main(void)
{
    int year;
    scanf("%d", &year);
    find_bf(year, 12);
}