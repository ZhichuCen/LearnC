#include <stdio.h>
#include <math.h>
int read_num(char *buffer, int size)
{
    int num = 0;
    for (int i = 0; i < size; i++)
    {
        num += pow(10, size - i - 1) * (buffer[i] - '0');
    }
    // printf("num%d\n",num);
    return num;
}

int main(void)
{
    int max = 0;
    int min = 0;
    char c;
    char buffer[10];
    int current_num = 0;
    int result = 0;
    char operand = 0;
    // _Bool max_minus = 0;
    // _Bool min_minus = 0;
    // _Bool current_minus = 0;
    _Bool finished = 0;
    _Bool first_num = 1;

    while ((!finished) && ((c = getchar()) != '\n'))
    {
        // printf("fff%df\n", finished);
        // current_minus = 0;
        current_num = 0;
        int index = 0;
        buffer[index++] = c;
        while ((c = getchar()) != ',' && (c != '\n'))
        {
            buffer[index++] = c;
        }
        // index--;

        // printf("i%d\n",index);
        // printf("%s\n\n", buffer);

        // if (c == '\n')
        // {
        //     break;
        // }
        // else if (c == ',')
        // {
        //     continue;
        // }

        switch (buffer[0])
        {
        case '=':
            finished = 1;
            // printf("fff\n");
            break;
        case '+':
            operand = '+';
            result = max + min;
            break;
        case '*':
            operand = '*';
            result = max * min;
            break;
        case '/':
            operand = '/';
            result = max / min;
            break;
        case '%':
            operand = '%';
            result = max % min;
            break;
        case '-':
            if (index == 1)
            {
                operand = '-';
                result = max - min;
            }
            else
            {
                // current_minus = 1;
                current_num = -read_num(buffer + 1, index - 1);
            }
            break;
        default:
            current_num = read_num(buffer, index);
            break;
        }

        if ((!operand) && (!finished))
        {
            if (first_num)
            {
                max = current_num;
                min = current_num;
                first_num = 0;
            }
            if (current_num > max)
            {
                max = current_num;
            }
            if (current_num < min)
            {
                min = current_num;
            }
        }
    }

    if(max>=0)
        printf("%d",max);
    else
        printf("(%d)",max);

    printf(" %c ",operand);

    if(min>=0)
        printf("%d",min);
    else
        printf("(%d)",min);    

    printf(" = %d\n",result);

    // char al=(max<0)?'(':'\0';
    // char ar=(max<0)?')':'\0';
    // char bl=(min<0)?'(':'\0';
    // char br=(min<0)?')':'\0';

    // printf("%c%d%c %c %c%d%c = %d\n",al,max,ar,operand,bl,min,br,result);
}