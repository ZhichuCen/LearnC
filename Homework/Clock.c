#include <stdio.h>
#include <math.h>

int main(void)
{
    int h, m;
    float degree;
    scanf("%d%d", &h, &m);
    degree = fabs((h%12 + m / 60.0) / 12.0 * 360.0 - m / 60.0 * 360.0);
    printf("At %d:%02d the angle is %.1f degrees.\n", h, m, degree);
    return 0;
}