#include <stdio.h>

int main(void) {
    int no;

    printf("正の整数を入力せよ：");
    scanf("%d", &no);

    while (no >= 1) {
        printf("%d ", no--);
        if (no < 0) {
            printf("\n");
        }
    }
    return 0;
}