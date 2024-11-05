#include <stdio.h>
#include <complex.h>

int main() {
    double complex z1 = 1.0 + 2.0*I; // 创建复数 1 + 2i
    double complex z2 = 3.0 + 4.0*I; // 创建复数 3 + 4i

    double complex sum = z1 + z2; // 复数相加
    printf("Sum: %.2f + %.2fi\n", creal(sum), cimag(sum));

    return 0;
}