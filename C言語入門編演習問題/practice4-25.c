#include <stdio.h>

int main(void) {
    int n, i, j;
    puts("下向き数字ピラミッドを作ります。");
    printf("何段ですか：");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i - 1; j++)
            putchar(' ');
        for (j = 1; j <=2 * n - 2 * i + 1; j++)
            printf("%d", i);
        putchar('\n');
    }

    return 0;
}