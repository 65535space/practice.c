//演習4－17　1からnまでの整数値の2乗値を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void) {
    int n;
    printf("nの値：");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    return 0;
}