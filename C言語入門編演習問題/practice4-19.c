//�@���K4-19 �ǂݍ��񂾐����l�̑S�񐔂�\������List4-17�����������āA�񐔂̕\�����I��������ɁA�񐔂̌���\������v���O�������쐬����B
// List4-17�ǂݍ��񂾐����l�̑S�񐔂�\��

#include <stdio.h>

int List0417(void) {
    int n;

    printf("�����l�F");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }

    return 0;
}

int main(void) {
    int n;
    printf("�����l�F");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            printf("%d\n", i);
    printf("�񐔂�%d�ł��B", n);
    return 0;
}