/*List6-5*/
#include <stdio.h>
//--- return n power of x ---//
double power(double x, int n) {
    double tmp = 1.0;

    while (n-- > 0)
        tmp *= x;
    return tmp;
}

int main(void) {
    double a;
    int b;

    printf("find bth power of a.\n");
    printf("float a:");
    scanf("%lf", &a);
    printf("integer b:");
    scanf("%d", &b);

    printf("%.2f to the power of %d is %.2f\n", a, b, power(a, b));

    return 0;
}