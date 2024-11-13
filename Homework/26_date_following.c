#include <stdio.h>

int is_leap_year(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
    return 0;
}

int day_in_month(int month, int year)
{
    static int valid_days[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2)
        return 28 + is_leap_year(year);
    return valid_days[month - 1];
}

int main(void)
{
    int year, month, day;
    int n;
    scanf("%d%d%d", &year, &month, &day);
    scanf("%d", &n);

    day += n;

    while (day > day_in_month(month, year))
    {
        day -= day_in_month(month, year);
        month++;

        if (month > 12)
        {
            year++;
            month = 1;
        }
    }

    printf("%d.%d.%d\n", year, month, day);
}