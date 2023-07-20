// Calculate and display the sum of 2 tests of 3 subjects for 4 students
#include <stdio.h>

int main(void) {
    int tensu1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int tensu2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};
    int sum[4][3]; // sum

    // calculate sum of points of 2 times
    for (int i = 0; i < 4; i++) {                    // 4 people
        for (int j = 0; j < 3; j++)                  // 3 subjects
            sum[i][j] = tensu1[i][j] + tensu2[i][j]; // add for 2 times
    }

    // display first score
    puts("first score");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++)
            printf("%4d", tensu1[i][j]);
        putchar('\n');
    }

    // display second score
    puts("second score");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++)
            printf("%4d", tensu2[i][j]);
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