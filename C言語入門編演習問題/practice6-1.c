/*practice 6-1*/

#include <stdio.h>

int min2(int a, int b) {
    int min;
    if (a > b)
        min = b;
    else
        min = a;
    return min;
}

int main() {
    int a, b;
    puts("input two integers");
    printf("integer a:");
    scanf("%d", &a);
    printf("integer b:");
    scanf("%d", &b);
    printf("The minimum is %d.\n", min2(a, b));

    return 0;
}