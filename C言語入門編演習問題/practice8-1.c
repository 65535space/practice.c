/*practice8-1*/
#include <stdio.h>
#define diff(x, y) (x - y)

int main(void) {
    int x, y;
    printf("enter the integer x :");
    scanf("%d", &x);
    printf("enter the integer y:");
    scanf("%d", &y);
    printf("The difference between two numbers is %d.", diff(x, y));

    return 0;
}