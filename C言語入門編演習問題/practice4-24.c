#include <stdio.h>

int main(void)
{
    int n, i, j;
    puts("�s���~�b�h�����܂��B");
    printf("���i�ł����F");
    scanf("%d", &n);
    for (i = 1; i <= n;i++){
        for (j = 1; j <= n-i;j++)
            putchar(' ');
        for (j = 1; j <= 2 * i - 1;j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}