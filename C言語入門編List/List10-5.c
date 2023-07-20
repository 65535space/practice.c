/*10-5
Requesting a change of value by pointer.*/

#include <stdio.h>

//--- Assign 999 to the variable pointed to by p ---//
void set999(int *p) {
    *p = 999;
}

int main(void) {
    int x = 123;
    int y = 456;
    int sw;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    printf("change [0---x / 1---y] =");
    scanf("%d", &sw);

    if (sw == 0)
        set999(&x);
    else
        set999(&y);

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}