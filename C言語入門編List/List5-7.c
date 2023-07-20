// 配列の要素に値を読み込んで表示

#include <stdio.h>

int main(void) {
    int x[5];

    for (int i = 0; i < 5; i++) { //要素に値を読み込む
        printf("x[%d] :", i);
        scanf("%d", &x[i]);
    }

    for (int j = 0; j < 5; j++) //要素の値を表示
        printf("x[%d] = %d\n", j, x[j]);

    return 0;
}