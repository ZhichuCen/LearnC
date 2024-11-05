#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    double delta;
    double result[2];

    scanf("%d%d%d", &a, &b, &c);

    delta = ((double)b) * ((double)b) - 4.0 * ((double)a) * ((double)c);

    if (a == 0 && b == 0)
    {
        printf("Input error!\n");
    }
    else if (a == 0)
    {
        printf("x=%.6f\n", (-(double)c / (double)b > 0) ? (-(double)c / (double)b) : (double)c / (double)b);
    }
    else if (delta == 0)
    {
        printf("x1=x2=%.6f\n", (-(double)b + sqrt(delta)) / (2 * (double)a));
    }
    else if (delta > 0)
    {
        printf("x1=%.6f\nx2=%.6f\n",
               (-(double)b + sqrt(delta)) / (2 * (double)a),
               (-(double)b - sqrt(delta)) / (2 * (double)a));
    }
    else if (delta < 0)
    {
        if (b == 0)
        {
            printf("x1=%.6fi\nx2=%.6fi\n",
                   (-(double)b + sqrt(-delta)) / (2 * (double)a),
                   (-(double)b - sqrt(-delta)) / (2 * (double)a));
        }
        else
        {
            printf("x1=%.6f%+.6fi\nx2=%.6f%+.6fi\n",
                   (-(double)b) / (2 * (double)a),
                   (sqrt(-delta)) / (2 * (double)a),
                   (-(double)b) / (2 * (double)a),
                   (-sqrt(-delta)) / (2 * (double)a)

            );
        }
    }

    return 0;
}