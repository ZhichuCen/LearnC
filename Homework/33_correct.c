
#include <stdio.h>

int main()

{

    int a[80];

    int b[80];

    int i = 0;

    int j = 0;

    for (i = 0; i <= 80; i++)
    {

        a[i] = getchar();

        if (a[i] == '\n')
        {

            i--;

            break;
        }

        
    }

    for (j = 0; j <= 80; j++)
    {

        b[j] = getchar();

        if (b[j] == '\n')
        {

            j--;

            break;
        }


    }

    int panduan = 0;

    for (int k = 0; k <= i; k++)
    {

        for (int l = 0; l <= j; l++)
        {

            if (a[k] == b[l])
            {

                panduan = 1;
            }
        }

        if (panduan == 0)
        {

            printf("%c", a[k]);

            panduan = 0;
        }

        if (panduan == 1)
        {

            panduan = 0;
        }
    }

    printf("\n");

    return 0;
}