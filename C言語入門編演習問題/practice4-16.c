//���K4-16:�����l��ǂݍ���ł��̐����ȉ��̊��\������v���O�������쐬����

#include <stdio.h>

int main(void) {
    int n;
    printf("�����l�F");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    return 0;
}