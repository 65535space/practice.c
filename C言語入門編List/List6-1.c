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

    puts("��̐�������͂���B");
    printf("�����P : ");
    scanf_s("%d", &n1);
    printf("�����Q : ");
    scanf_s("%d", &n2);

    printf("�������ق��̒l��%d�ł��B\n", min2(n1, n2));

    return 0;
}