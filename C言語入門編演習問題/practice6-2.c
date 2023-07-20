/*practice 6-2*/

#include <stdio.h>

int min3(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

int main() {
    int a, b, c;
    puts("input three integers");
    printf("integer a:");
    scanf("%d", &a);
    printf("integer b:");
    scanf("%d", &b);
    printf("integer c:");
    scanf("%d", &c);
    printf("The minimum is %d.\n", min3(a, b, c));

    return 0;
}