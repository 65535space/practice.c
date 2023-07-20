/*List10-4
Determines at runtime where the pointer points.*/

#include <stdio.h>

int main() {
    int x = 123;
    int y = 456;
    int sw;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    printf("Change [0---x / 1---y] =");
    scanf("%d", &sw);

    int *p;
    if (sw == 0)
        p = &x;
    else
        p = &y;

    *p = 999;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}