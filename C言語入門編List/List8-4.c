/*List8-4
Macro with alarm and display (incorrect).*/

#include <stdio.h>

#define puts_alert(str) (putchar('\a'), puts(str))

int main(void) {
    int n;

    printf("enter the integer :");
    scanf("%d", &n);

    if (n)
        puts_alert("it is not zero.");
    else
        puts_alert("it is zero.");

    return 0;
}