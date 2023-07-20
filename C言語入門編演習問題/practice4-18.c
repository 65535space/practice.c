// 演習4－18　整数値を読み込んで、その個数だけ'*'を表示するプログラムを作成せよ。ただし、5個表示するごとに改行すること

#include <stdio.h>

int main(void) {
    int n;
    printf("nの値：");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        putchar('*');
        if (i % 5 == 0)
            printf("\n");
    }

    return 0;
}