/*practice7-7*/

#include <stdio.h>

int main() {
    float a;
    double b;
    long double c;
    printf("enter the float :");
    scanf("%f", &a);
    printf("this is...%f?\n", a);
    printf("enter the double :");
    scanf("%lf", &b);
    printf("this is...%f?\n", b);
    printf("enter the long double :");
    scanf("%lf", &c);
    printf("this is...%Lf?\n", c);

    return 0;
}