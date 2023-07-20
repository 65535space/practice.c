/*practice8-3*/

#include <stdio.h>
#define swap(type, a, b) \
    {                    \
        type tmp;        \
        tmp = a;         \
        a = b;           \
        b = tmp;         \
    }

int main(void) {
    int a, b;
    double c, d;
    putchar('\n');
    printf("Assign values to a and b of type int:");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Assign values to c and d of type double:");
    scanf("%lf", &c);
    scanf("%lf", &d);

    swap(int, a, b);
    swap(double, c, d);

    printf("%d\n%d\n", a, b);
    printf("%f\n%f\n", c, d);
    return 0;
}