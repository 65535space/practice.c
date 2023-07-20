/*practice8-2*/

#include <stdio.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void) {
    int a, b, c, d;
    printf("enter 4 integers:");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    printf("max(max(a,b),max(c, d)) = %d\n", max(max(a, b), max(c, d)));
    printf("max(max(max(a,b),c),d) = %d\n", max(max(max(a, b), c), d));

    return 0;
}