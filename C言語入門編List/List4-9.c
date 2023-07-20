//読み込んだ正の整数値までカウントダウン

#include <stdio.h>

int main(void) {
    int no;

    printf("正の整数を入力せよ：");
    scanf("%d", &no);

    int i = 0;
    while (i <= no) {
        printf("%d ", i++);
    }
    printf("\n");

    return 0;
}