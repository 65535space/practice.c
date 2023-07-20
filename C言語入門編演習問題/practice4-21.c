// Create a program that displays a square with the read integer as the side length, as shown on the right.

#include <stdio.h>

int main(void) {
    int n;
    printf("正方形を作ります。\n");
    printf("何段ですか：");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            printf("*");
        putchar('\n');
    }
    return 0;
}