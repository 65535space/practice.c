// List5-9 5�l�̊w���̓_����ǂݍ���ō��v�_�ƕ��ϓ_��\��

#include <stdio.h>

int main(void) {
    int tensu[5]; //�w���̓_��
    int sum = 0;  //���v�_

    printf("5�l�̓_������͂���B\n");
    for (int i = 0; i < 5; i++) {
        printf("%2d�� :", i = i);
        scanf("%d", &tensu[i]);
        sum += tensu[i];
    }

    printf("���v�_ : %5d\n", sum);
    printf("���ϓ_ : %5.1f\n", (double)sum / 5);

    return 0;
}