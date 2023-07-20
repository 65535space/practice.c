//　演習4-19 読み込んだ整数値の全約数を表示するList4-17を書きかえて、約数の表示が終了した後に、約数の個数を表示するプログラムを作成せよ。
// List4-17読み込んだ整数値の全約数を表示

#include <stdio.h>

int List0417(void) {
    int n;

    printf("整数値：");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }

    return 0;
}

int main(void) {
    int n;
    printf("整数値：");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            printf("%d\n", i);
    printf("約数は%d個です。", n);
    return 0;
}