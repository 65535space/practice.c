/*学生の点数を読み込んで最高値と最低点を表示*/

#include <stdio.h>

#define NUMBER 5 //学生の人数

int main(void) {
    int tensu[NUMBER]; //学生の点数
    int max, min;      //最高点と最低点

    printf("%d人の点数を入力せよ。\n", NUMBER);
    for (int i = 0; i < NUMBER; i++) { //点数入力
        printf("%2d番 :", i + 1);
        scanf("%d", tensu[i]);
    }

    min = max = tensu[0];              //基準設定
    for (int i = 1; i < NUMBER; i++) { //並び替え
        if (tensu[i] > max) max = tensu[i];
        max = tensu[i];
        if (tensu[i] < min)
            min = tensu[i];
    }

    printf("最高点 :%d\n", max);
    printf("最低点 :%d\n", min);

    return 0;
}