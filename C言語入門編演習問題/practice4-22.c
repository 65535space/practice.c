//　practice4-22 Rewrite the program in List 4-19 to create a program that displays a horizontal rectangle.

#include <stdio.h>
// List4-19
int List0419(void) {
    int height, width;

    puts("長方形を表\示します。");
    printf("高さ：");
    scanf("%d", &height);
    printf("横幅：");
    scanf("%d", &width);

    for (int i = 1; i <= height; i++) {  //長方形はheight行
        for (int j = 1; j <= width; j++) //各行にwidth個の'*'を表示
            putchar('*');
        putchar('\n'); //改行
    }

    return 0;
}
// myANS
int myANS(void) {

    int a, b, max, min;

    puts("横長の長方形を表\示します。");
    printf("一辺（その１）：");
    scanf("%d", &a);
    printf("一辺（その２）：");
    scanf("%d", &b);
    if (a < b) {
        max = b;
        min = a;
    } else {
        max = a;
        min = b;
    }
    for (int i = 1; i <= min; i++) {   //行
        for (int j = 1; j <= max; j++) //列
            putchar('*');
        putchar('\n'); //改行
    }

    return 0;
}

// trueANS
int main(void) {
    int n1, n2, i, j, height, wide;

    puts("横長の長方形を作ります。");
    printf("一辺（その１）：");
    scanf("%d", &n1);
    printf("一辺（その２）：");
    scanf("%d", &n2);

    if (n1 < n2) {
        height = n1;
        wide = n2;
    } else {
        height = n2;
        wide = n1;
    }

    for (i = 1; i <= height; i++) {
        for (j = 1; j <= wide; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}