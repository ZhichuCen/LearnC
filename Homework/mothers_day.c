#include <stdio.h>

int get_weekday(int year, int month, int day);
int get_day(int year, int month, int day);

int get_day(int year, int month, int day)
{
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year -= (month < 3);
    return (year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
}

int get_weekday(int year, int month, int day) {
    return get_day(year, month, day)%7;
}

int main() {
    int year,day=0,times=0;
    scanf("%d", &year);

    while(times<2) {
        day++;
        if(get_weekday(year,5,day)==0) {
            times++;
        }
    }

    printf("%d\n",day);
    return 0;
}



