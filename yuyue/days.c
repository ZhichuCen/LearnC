#include <stdio.h>

int main(void)
{
    int year, month, day, sum = 0;
    int valid_days[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d,%d,%d", &year, &month, &day);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                valid_days[2 - 1] = 29;
            }
            else
            {
                valid_days[2 - 1] = 28;
            }
        }
        else
        {
            valid_days[2 - 1] = 29;
        }
    }
    else
    {
        valid_days[2 - 1] = 28;
    }

    for (int m = 1; m < month; m++)
    {
        sum += valid_days[m - 1];
    }

    sum += day;
    printf("%d\n", sum);
}