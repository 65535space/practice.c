/*List5-9 5人の学生の点数を読み込んで合計点と平均点を表示(人数をマクロで定義)
NUMBER←マジックナンバー
マクロを使用するメリットは2つ
・値の管理を一か所に集約できる
・定数に対して名前が与えられるため、プログラムが読みやすくなる*/
#include <stdio.h>

#define NUMBER 5 //学生の人数

int main(void) {
    int tensu[NUMBER]; //学生の点数
    int sum = 0;       //合計点

    printf("%d人の点数を入力せよ。\n", NUMBER);
    for (int i = 0; i < NUMBER; i++) {
        printf("%2d番 :", i + 1);
        scanf("%d", &tensu[i]);
        sum += tensu[i];
    }

    printf("合計点 : %5d\n", sum);
    printf("平均点 : %5.1f\n", (double)sum / NUMBER);

    return 0;
}