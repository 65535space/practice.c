/*List5-9 5�l�̊w���̓_����ǂݍ���ō��v�_�ƕ��ϓ_��\��(�l�����}�N���Œ�`)
NUMBER���}�W�b�N�i���o�[
�}�N�����g�p���郁���b�g��2��
�E�l�̊Ǘ����ꂩ���ɏW��ł���
�E�萔�ɑ΂��Ė��O���^�����邽�߁A�v���O�������ǂ݂₷���Ȃ�*/
#include <stdio.h>

#define NUMBER 5 //�w���̐l��

int main(void) {
    int tensu[NUMBER]; //�w���̓_��
    int sum = 0;       //���v�_

    printf("%d�l�̓_������͂���B\n", NUMBER);
    for (int i = 0; i < NUMBER; i++) {
        printf("%2d�� :", i + 1);
        scanf("%d", &tensu[i]);
        sum += tensu[i];
    }

    printf("���v�_ : %5d\n", sum);
    printf("���ϓ_ : %5.1f\n", (double)sum / NUMBER);

    return 0;
}