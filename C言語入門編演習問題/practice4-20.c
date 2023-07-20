//演習4-20九九表

#include <stdio.h>
//自分の答え(1っ回目の達成感半端ないって）
int myanswer(void) {

    int i, j;
    printf("   |");
    for (i = 1; i <= 9; i++) {
        printf("%3d", i);
    }
    printf("\n---+");
    for (i = 1; i <= 27; i++) {
        putchar('-');
        if (i == 27)
            putchar('\n');
    }
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            if (j == 1)
                printf(" %d |", i);
            printf("%3d", i * j);
            if (j == 9)
                puts("");
        }
    }

    return 0;
}

// true ANS
int main(void) {

    int i, j;

    printf("   |");
    for (i = 1; i <= 9; i++) {
        printf("%3d", i);
    }

    printf("\n---+");
    for (i = 1; i <= 27; i++) {
        putchar('-');
    }
    putchar('\n'); //一行目完成

    for (i = 1; i <= 9; i++) {

        printf(" %d |", i); //左側完成

        for (j = 1; j <= 9; j++) {
            printf("%3d", i * j);
            if (j == 9)
                puts(""); //中身
        }
    }

    return 0;
}