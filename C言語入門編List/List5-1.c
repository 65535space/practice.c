// 5�l�̊w���̓_����ǂݍ���ō��v�_�ƕ��ϓ_��\��
#include<stdio.h>

int main(void)
{
	int tensu1;		// 1�Ԃ̓_��
	int tensu2;		// 2�Ԃ̓_��
	int tensu3;		// 3�Ԃ̓_��
	int tensu4;		// 4�Ԃ̓_��
	int tensu5;		// 5�Ԃ̓_��
	int sum = 0;	//���v�_

	printf("5�l�̓_������͂���B\n");
	printf(" 1�� :");	scanf_s("%d", &tensu1);	sum += tensu1;
	printf(" 2�� :");	scanf_s("%d", &tensu2);	sum += tensu2;
	printf(" 3�� :");	scanf_s("%d", &tensu3);	sum += tensu3;
	printf(" 4�� :");	scanf_s("%d", &tensu4);	sum += tensu4;
	printf(" 5�� :");	scanf_s("%d", &tensu5);	sum += tensu5;
	
	printf("���v�_ : %5d\n", sum);
	printf("���ϓ_ : %5.1f\n", (double)sum / 5);

	return 0;
}