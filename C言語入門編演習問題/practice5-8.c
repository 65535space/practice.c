#include <stdio.h>

#define NUMBER 120

int main(void)
{
	int num;
	int tensu[NUMBER];
	int bunpu[11] = { 0 };

	printf("�l������͂���:");

	do
	{
		scanf_s("%d", &num);
		if (num <1 || num>NUMBER)
			printf("\a1~%d�œ��͂��� :", NUMBER);
	} while (num<1 || num>NUMBER);

	printf("%d�̓_������͂���B \n", num);

	for (int i = 0; i < num; i++)
	{
		printf("%2d�� :", i + 1);
		do
		{
			scanf_s("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i]>100)
				printf("\a0~100�œ��͂��� :");
		} while (tensu[i] < 0 || tensu[i]>100);
		bunpu[tensu[i] / 10]++;
	}

	puts("\n---���z�O���t---");

	int max = bunpu[0];
	for (int i = 1; i < 11; i++)
		if (max < bunpu[i])
			max = bunpu[i];

	for (int i = max; i > 0; i--)
	{
		for (int j = 0; j < 11; j++)
		{
			if (i <= bunpu[j])
				printf(" * ");
			else
				printf("   ");
		}
		putchar('\n');
	}

	puts("----------------------------------");
	puts(" 0 10 20 30 40 50 60 70 80 90 100");
	return 0;

}