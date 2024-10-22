#include <iostream>

int get_yday(int year, int month, int day)
{
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year -= (month < 3);
    return (year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
}

int main()
{
    int year1, month1, day1;
    int year2, month2, day2;

    std::cout << "Enter first date (yyyy mm dd): ";
    std::cin >> year1 >> month1 >> day1;

    std::cout << "Enter second date (yyyy mm dd): ";
    std::cin >> year2 >> month2 >> day2;

    int days = get_yday(year2, month2, day2) - get_yday(year1, month1, day1);
    if (days < 0)
        days += 7;

    std::cout << "The number of days between the two dates is: " << days << std::endl;

    return 0;
}
