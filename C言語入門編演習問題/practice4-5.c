#include <stdio.h>

int main(void) {
    int no;

    printf("正の整数を入力せよ：");
    scanf("%d", &no);

    int i = 1;
    while (i <= no) {
        printf("%d ", i++);
        if (i == i++) {
            printf("\n");
        }
    }
    return 0;
}