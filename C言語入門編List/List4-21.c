// Right-angled isosceles triangle with right angle at the lower right corner is shown

#include <stdio.h>

int main(void) {
    int len;

    puts("Display a right-angled isosceles triangle with a right angle at the lower right corner.");
    printf("short side of a geometric shape ");
    scanf("%d", &len);

    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= len - i; j++)
            putchar(' ');
        for (int j = 1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}