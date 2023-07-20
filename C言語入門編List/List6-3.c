/*List6-3
Find the difference between the squared values of two integers*/

#include <stdio.h>

//--- Return the square value of a ---//
int sqr(int n) {
    return n * n;
}

//---Return the difference between a and b ---//
int diff(int a, int b) {
    return a > b ? a - b : b - a; // subtract the smaller from the lager
}

int main(void) {
    int x, y;

    puts("enter two integers.");
    printf("integer x:");
    scanf("%d", &x);
    printf("integer y:");
    scanf("%d", &y);

    printf("the difference between x squared and y squared is %d.", diff(sqr(x), sqr(y)));

    return 0;
}