/*List8-1
Integer square and floating point number square (function)*/

#include <stdio.h>

//---Find the square value of an int type integer---//
int sqr_int(int x) {
    return x * x;
}

//--- Find the square value of a double type floating point number ---//
double sqr_double(double x) {
    return x * x;
}

int main(void) {
    int n;
    double x;

    printf("Enter an integer. :");
    scanf("%d", &n);
    printf("The square of that number is %d \n", sqr_int(n));

    printf("Enter the real number. :");
    scanf("%lf", &x);
    printf("The square of that unmber is %lf. \n", sqr_double(x));

    return 0;
}