/*List 6-2
Find the muximum of three integers*/
#include <stdio.h>

//---Returns the maximum of three integers ---//
int max3(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    return max;
}

int main(void) {
    int a, b, c;

    puts("Input three integers.");
    printf("integer a :");
    scanf("%d", &a);
    printf("integer b :");
    scanf("%d", &b);
    printf("integer c :");
    scanf("%d", &c);

    printf("The maximum is %d.\n", max3(a, b, c));

    return 0;
}