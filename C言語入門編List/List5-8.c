// 配列の全要素の並びを反転する
#include <stdio.h>

int main(void) {
    int x[7];

    for (int i = 0; i < 7; i++) { //要素に値を読み込む
        printf("x[%d] :", i);
        scanf("%d", &x[i]);
    }

    for (int j = 0; j < 3; j++) { //要素の並びを反転
        int t = x[j];
        x[j] = x[6 - j];
        x[6 - j] = t;
    }

    puts("反転しました。");
    for (int i = 0; i < 7; i++) //要素の値を表示
        printf("x[%d] = %d\n", i, x[i]);

    return 0;
}