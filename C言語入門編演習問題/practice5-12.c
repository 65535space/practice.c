// practice5-12
#include <stdio.h>
int main(void) {
    int tensu[2][4][3] = {{{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}}, {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}};
    int sum[4][3]; // sum

    // calculate sum of points of 2 times
    for (int i = 0; i < 4; i++) {                        // 4 people
        for (int j = 0; j < 3; j++)                      // 3 subjects
            sum[i][j] = tensu[0][i][j] + tensu[1][i][j]; // add for 2 times
    }

    // display first score
    puts("first score");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++)
            printf("%4d", tensu[0][i][j]);
        putchar('\n');
    }

    // display second score
    puts("second score");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++)
            printf("%4d", tensu[1][i][j]);
        putchar('\n');
    }
    // display sum score
    puts("sum");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++)
            printf("%4d", sum[i][j]);
        putchar('\n');
    }

    return 0;
}