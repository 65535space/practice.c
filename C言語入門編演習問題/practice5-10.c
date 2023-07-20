#include <stdio.h>

int main(void) {
    int score1[4][3];
    int score2[3][4];
    int mul[4][4];

    // score1
    puts("Enter of integers");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("row%d colmn%d:", i + 1, j + 1);
            scanf("%4d", &score1[i][j]);
        }
    }

    // score2
    puts("Enter of integers");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("row%d colmn%d:", i + 1, j + 1);
            scanf("%4d", &score2[i][j]);
        }
    }

    // multiplication
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int a = 0;
            for (int n = 0; n < 3; n++) {
                a += score1[i][n] * score2[n][j];
            }
            mul[i][j] = a;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", mul[i][j]);
        }
        putchar('\n');
    }

    return 0;
}