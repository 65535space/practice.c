/*practice 6-13*/
#include <stdio.h>

void mat_add(const int a[2][4][3], int c[1][4][3]) {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++)
            c[0][i][j] = a[0][i][j] + a[1][i][j];
}

void mat_print(const int m[2][4][3], int n) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++)
            printf("%4d", m[n][i][j]);
        putchar('\n');
    }
}

int main(void) {
    int tensu[2][4][3] = {{{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}},
                          {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}};
    int sum[1][4][3];

    mat_add(tensu, sum);

    puts("1st score");
    mat_print(tensu, 0);
    puts("2nd score");
    mat_print(tensu, 1);
    puts("sum score");
    mat_print(sum, 0);

    return 0;
}