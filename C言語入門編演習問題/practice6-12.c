#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int sum = 0;
            for (int n = 0; n < 3; n++) {
                sum += a[i][n] * b[n][j];
            }
            c[i][j] = sum;
        }
    }
}
void mat_print1(const int a[4][3]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("行列aの%d行%d列の整数を入力しろ:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}
void mat_print2(const int b[3][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("行列bの%d行%d列の整数を入力しろ:", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
}

int main(void) {
    int a[4][3], b[3][4], c[4][4];
    mat_print1(a);
    mat_print2(b);
    mat_mul(a, b, c);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d ", c[i][j]);
        }
        puts("");
    }
    return 0;
}