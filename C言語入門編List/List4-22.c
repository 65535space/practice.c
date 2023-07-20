//　読み込んだ整数の個数だけ*を連続表示（好きなだけ繰り返す）

#include <stdio.h>

int main(void) {
    int retry;

    do {
        int no;
        do {
            printf("正の整数を入力せよ：");
            scanf("%d", &no);
            if (no <= 0)
                puts("\a正でない数を入力しないように。");
        } while (no <= 0);
        // noは0以上となっている
        for (int i = 1; i <= no; i++)
            putchar('*');
        putchar('\n');

        printf("もう一度？[Yes・・・0/No・・・9] :");
        scanf("%d", &retry);
    } while (retry == 0);

    return 0;
}