/*List6-16
Find and display the sum of two three-subject tests for four students (function version)*/

#include <stdio.h>

void mat_add(const int a[4][3], const int b[4][3], int c[4][3]) {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];
}

void mat_print(const int m[4][3]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++)
            printf("%4d", m[i][j]);
        putchar('\n');
    }
}

int main(void) {
    int tensu1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int tensu2[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int sum[4][3];

    mat_add(tensu1, tensu2, sum);

    puts("1st score.");
    mat_print(tensu1);
    puts("2nd score.");
    mat_print(tensu2);
    puts("sum score.");
    mat_print(sum);

    return 0;
}