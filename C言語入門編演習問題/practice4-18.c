// ���K4�|18�@�����l��ǂݍ���ŁA���̌�����'*'��\������v���O�������쐬����B�������A5�\�����邲�Ƃɉ��s���邱��

#include <stdio.h>

int main(void) {
    int n;
    printf("n�̒l�F");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        putchar('*');
        if (i % 5 == 0)
            printf("\n");
    }

    return 0;
}