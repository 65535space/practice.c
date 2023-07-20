/*List 6-4
find the maximum of four integer values*/

#include <stdio.h>

//--- return the lager value ---//
int max2(int a, int b) {
    return a > b ? a : b;
}

//--- return the maximum of four integer values ---//
int max4(int a, int b, int c, int d) {
    return max2(max2(a, b), max2(c, d));
}

int main(void) {
    int n1, n2, n3, n4;

    puts("enter four integer values.");
    printf("integer n1:");
    scanf("%d", &n1);
    printf("integer n2:");
    scanf("%d", &n2);
    printf("integer n3:");
    scanf("%d", &n3);
    printf("integer n4:");
    scanf("%d", &n4);

    printf("the maximum is %d.", max4(n1, n2, n3, n4));

    return 0;
}