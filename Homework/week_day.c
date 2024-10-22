/*It's so hard to do this without array*/
#include <stdio.h>
const int MAGIC_NUMBER = 0;

int main(void)
{

    int year, month, day, sum;
    int valid_days[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d%d%d", &year, &month, &day);

    if (month > 12 || month < 1)
    {
        printf("month is error.\n");
        return 0;
    }

    if (month == 2)
    {
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
    }
    if (day <= 0 || day > valid_days[month - 1])
    {
        printf("day is error.\n");
        return 0;
    }

    sum = MAGIC_NUMBER;

    // why not switch QAQ
    if (month == 1)
    {
        sum += 0;
        year--;
    }
    else if (month == 2)
    {
        sum += 3;
        year--;
    }
    else if (month == 3)
    {
        sum += 2;
    }
    else if (month == 4)
    {
        sum += 5;
    }
    else if (month == 5)
    {
        sum += 0;
    }
    else if (month == 6)
    {
        sum += 3;
    }
    else if (month == 7)
    {
        sum += 5;
    }
    else if (month == 8)
    {
        sum += 1;
    }
    else if (month == 9)
    {
        sum += 4;
    }
    else if (month == 10)
    {
        sum += 6;
    }
    else if (month == 11)
    {
        sum += 2;
    }
    else if (month == 12)
    {
        sum += 4;
    }
    sum += year + year / 4 - year / 100 + year / 400;
    sum += day;

    sum %= 7;
    printf("%d\n", sum);

    return 0;
}