//演習4-16:整数値を読み込んでその整数以下の奇数を表示するプログラムを作成せよ

#include <stdio.h>

int main(void) {
    int n;
    printf("整数値：");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    return 0;
}