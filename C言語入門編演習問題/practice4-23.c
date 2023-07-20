// practice4-23 Rewrite List4-20 and List4-21 to create a program that displays a right-angled isosceles triangle whose upper left and upper right sides are right angles. (Each must be written as a separate program.)

// List4-20
#include <stdio.h>

int List0420(void) {
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

// List4-21
int List0421(void) {
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

// Right-angled isosceles triangle whith right anle on the upper left side
// myANS(left)
int main1(void) {
    int n, i, j;
    printf("length :");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        for (j = i; j >= 1; j--) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
// myANS(right)
int main3(void) {
    int len, i, j;

    puts("Display a right-angled isosceles triangle with a right angle at the upper right corner.");
    printf("length:");
    scanf("%d", &len);

    for (i = 1; i <= len; i++) {
        for (j = 0; j < i; j++)
            putchar(' ');
        for (int j = 0; j <= len - i; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}
// trueANS(left)
int main4(void) {
    int i, j, len;

    puts("ç∂è„íºäpìÒìôï”éOäpå`ÇçÏÇËÇ‹Ç∑ÅB");
    printf("íZï”ÅF");
    scanf("%d", &len);

    for (i = 1; i <= len; i++) {
        for (j = len; j >= i; j--)
            putchar('*');
        putchar('\n');
    }
    return 0;
}