#include <stdio.h>
int main (void)
{
    int year,month,date,day;
    scanf("%d,%d,%d",&year,&month,&date);
    if (year%4==0){
        switch(month){
            case '1':
                day=date;
            break;
            case '2':
                day=31+date;
            break;
            case '3':
                day=31+29+date;
            break;
            case '4':
                day=31+29+31+date;
            break;
            case '5':
                day=31+29+31+30+date;
            break;
            case '6':
                day=31+29+30+31+31+date;
            break;
            case '7':
                day=31+29+31+30+31+30+date;
            break;
            case '8':
                day=31+29+31+30+31+30+31+date;
            break;
            case '9':
                day=31+29+31+30+31+30+31+31+date;
            break;
            case '10':
                day=31+29+30+31+31+30+31+31+30+date;
            break;
            case '11':
                day=31+29+30+31+31+30+31+31+30+31+date;
            break;
            case '12':
                day=31+29+30+31+31+30+31+31+30+31+30+date;
            break;
        }
    }
    else{
        switch(month){
            case '1':
                day=date;
            break;
            case '2':
                day=31+date;
            break;
            case '3':
                day=31+28+date;
            break;
            case '4':
                day=31+28+31+date;
            break;
            case '5':
                day=31+28+31+30+date;
            break;
            case '6':
                day=31+28+30+31+31+date;
            break;
            case '7':
                day=31+28+31+30+31+30+date;
            break;
            case '8':
                day=31+28+31+30+31+30+31+date;
            break;
            case '9':
                day=31+28+31+30+31+30+31+31+date;
            break;
            case '10':
                day=31+28+30+31+31+30+31+31+30+date;
            break;
            case '11':
                day=31+28+30+31+31+30+31+31+30+31+date;
            break;
            case '12':
                day=31+28+30+31+31+30+31+31+30+31+30+date;
            break;
        }
    }
    printf("%d\n",day);

    return 0;
}