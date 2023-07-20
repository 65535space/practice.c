// Showing a right-angled isosceles triangle with a right angle at the lower left corner

#include <stdio.h>

int main(void) {
    int len;

    puts("Display the lower left right isosceles triangle.");
    printf("short side of a geometric shapeÅF");
    scanf("%d", &len);

    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}