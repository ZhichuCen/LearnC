#include <stdio.h>
#include <math.h>

// char *converter_1527(char *ch)
// {
// }

int main()
{

    char fifteen[4];
    char seven[5];
    int num = 0;
    int temp;

    scanf("%s", fifteen);

    for (int i = 0; i <= 2; i++)
    {
        switch (fifteen[2 - i])
        {
        case '0':
            num += pow(15, i) * 0;
            break;
        case '1':
            num += pow(15, i) * 1;
            break;
        case '2':
            num += pow(15, i) * 2;
            break;
        case '3':
            num += pow(15, i) * 3;
            break;
        case '4':
            num += pow(15, i) * 4;
            break;
        case '5':
            num += pow(15, i) * 5;
            break;
        case '6':
            num += pow(15, i) * 6;
            break;
        case '7':
            num += pow(15, i) * 7;
            break;
        case '8':
            num += pow(15, i) * 8;
            break;
        case '9':
            num += pow(15, i) * 9;
            break;
        case 'A':
            num += pow(15, i) * 10;
            break;
        case 'B':
            num += pow(15, i) * 11;
            break;
        case 'C':
            num += pow(15, i) * 12;
            break;
        case 'D':
            num += pow(15, i) * 13;
            break;
        case 'E':
            num += pow(15, i) * 14;
            break;
        };
    }

    for (int j = 0; j <= 3; j++)
    {
        temp = (int)num / ((int)pow(7, 3 - j));
        num -= temp * pow(7, 3 - j);
        //printf("j=%d,temp=%d,num=%d\n",j,temp,num);
        switch (temp)
        {
        case 0:
            seven[j] = '0';
            break;
        case 1:
            seven[j] = '1';
            break;
        case 2:
            seven[j] = '2';
            break;
        case 3:
            seven[j] = '3';
            break;
        case 4:
            seven[j] = '4';
            break;
        case 5:
            seven[j] = '5';
            break;
        case 6:
            seven[j] = '6';
            break;
        };
    }
    seven[4]='\0';

    printf("%s\n", seven);

    return 0;
}