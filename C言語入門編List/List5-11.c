/*�w���̓_����ǂݍ���ōō��l�ƍŒ�_��\��*/

#include <stdio.h>

#define NUMBER 5 //�w���̐l��

int main(void) {
    int tensu[NUMBER]; //�w���̓_��
    int max, min;      //�ō��_�ƍŒ�_

    printf("%d�l�̓_������͂���B\n", NUMBER);
    for (int i = 0; i < NUMBER; i++) { //�_������
        printf("%2d�� :", i + 1);
        scanf("%d", tensu[i]);
    }

    min = max = tensu[0];              //��ݒ�
    for (int i = 1; i < NUMBER; i++) { //���ёւ�
        if (tensu[i] > max) max = tensu[i];
        max = tensu[i];
        if (tensu[i] < min)
            min = tensu[i];
    }

    printf("�ō��_ :%d\n", max);
    printf("�Œ�_ :%d\n", min);

    return 0;
}