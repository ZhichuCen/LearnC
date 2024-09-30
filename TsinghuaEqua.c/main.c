#include<stdio.h>
#include<math.h>
#define eps 5e-7

int main() {
    double a, b, c, num1, num2, num;
    scanf("%lf %lf %lf", &a, &b, &c);
    // -1000 <= b <= 1000;
    // -1000 <= c <= 1000;
    // -1000 <= a <= 1000;
    // a != 0;
    if (b * b - 4 * a * c > eps) {
        num1 = (sqrt(b * b - 4 * a * c) - b) / (2 * a);
        num2 = (-sqrt(b * b - 4 * a * c) - b) / (2 * a);


        if (num1 ==0)
            num1=0;
        if (num2 ==0)
            num2=0;


        if (num1 > num2)
            printf("%.6lf\n%.6lf", num1, num2);
        else
            printf("%.6lf\n%.6lf", num2, num1);
    } else if (b * b - 4 * a * c < -eps) {
        printf("Error");
    } else {
        num = (sqrt(b * b - 4 * a * c) - b) / (2 * a);
        if (num != 0)
            printf("%.6lf", num);
        else {
            double num3 = (unsigned) num;
            printf("%.6lf", num3);
        }
    }
}
