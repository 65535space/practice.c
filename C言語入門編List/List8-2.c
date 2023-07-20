/*List8-2
Integer squaring and floating point number squaring (function-like macro)*/

#include <stdio.H>

#define sqr(x) ((x) * (x)) // Functional form macro to find the squared value of x.

int main(void) {
    int n;
    double x;

    printf("enter the integer :");
    scanf("%d", &n);
    printf("The square of that number is %d.\n", sqr(n));

    printf("enter the integer :");
    scanf("%lf", &x);
    printf("The square of that number is %d.\n", sqr(x));

    return 0;
}