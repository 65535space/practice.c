// �z��̑S�v�f�̕��т𔽓]����
#include <stdio.h>

int main(void) {
    int x[7];

    for (int i = 0; i < 7; i++) { //�v�f�ɒl��ǂݍ���
        printf("x[%d] :", i);
        scanf("%d", &x[i]);
    }

    for (int j = 0; j < 3; j++) { //�v�f�̕��т𔽓]
        int t = x[j];
        x[j] = x[6 - j];
        x[6 - j] = t;
    }

    puts("���]���܂����B");
    for (int i = 0; i < 7; i++) //�v�f�̒l��\��
        printf("x[%d] = %d\n", i, x[i]);

    return 0;
}