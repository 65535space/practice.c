#include <stdio.h>

int min2(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main(void)
{
    int n1, n2;

    puts("二つの整数を入力せよ。");
    printf("整数１ : ");
    scanf_s("%d", &n1);
    printf("整数２ : ");
    scanf_s("%d", &n2);

    printf("小さいほうの値は%dです。\n", min2(n1, n2));

    return 0;
}