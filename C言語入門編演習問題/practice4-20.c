//���K4-20���\

#include <stdio.h>
//�����̓���(1����ڂ̒B�������[�Ȃ����āj
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
    putchar('\n'); //��s�ڊ���

    for (i = 1; i <= 9; i++) {

        printf(" %d |", i); //��������

        for (j = 1; j <= 9; j++) {
            printf("%3d", i * j);
            if (j == 9)
                puts(""); //���g
        }
    }

    return 0;
}