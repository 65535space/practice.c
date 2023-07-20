// 配列の要素を初期化

#include <stdio.h>

int main(void) {
    int a[4] = {
        1868, //明治最初の西暦年
        1912, //大正最初の西暦年
        1926, //昭和最初の西暦年
        1989, //平成最初の西暦年
    };

    int b[] = {1, 2, 3}; //要素数は3となる

    int c[5] = {1, 2}; // int c[5] = {1,2,0,0,0};と同じ

    int d[5] = {0}; //全要素を0で初期化

    for (int i = 0; i <= 3; i++) {
        printf("%d\n", a[i]);
    }
    for (int i = 0; i <= 2; i++)
        printf("%d\n", b[i]);
    for (int i = 0; i <= 4; i++)
        printf("%d\n", c[i]);
    for (int i = 0; i <= 5; i++)
        printf("%d\n", d[i]);

    return 0;
}