// �z��̗v�f�ɒl��ǂݍ���ŕ\��

#include <stdio.h>

int main(void) {
    int x[5];

    for (int i = 0; i < 5; i++) { //�v�f�ɒl��ǂݍ���
        printf("x[%d] :", i);
        scanf("%d", &x[i]);
    }

    for (int j = 0; j < 5; j++) //�v�f�̒l��\��
        printf("x[%d] = %d\n", j, x[j]);

    return 0;
}