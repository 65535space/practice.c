// 5人の学生の点数を読み込んで合計点と平均点を表示
#include<stdio.h>

int main(void)
{
	int tensu1;		// 1番の点数
	int tensu2;		// 2番の点数
	int tensu3;		// 3番の点数
	int tensu4;		// 4番の点数
	int tensu5;		// 5番の点数
	int sum = 0;	//合計点

	printf("5人の点数を入力せよ。\n");
	printf(" 1番 :");	scanf_s("%d", &tensu1);	sum += tensu1;
	printf(" 2番 :");	scanf_s("%d", &tensu2);	sum += tensu2;
	printf(" 3番 :");	scanf_s("%d", &tensu3);	sum += tensu3;
	printf(" 4番 :");	scanf_s("%d", &tensu4);	sum += tensu4;
	printf(" 5番 :");	scanf_s("%d", &tensu5);	sum += tensu5;
	
	printf("合計点 : %5d\n", sum);
	printf("平均点 : %5.1f\n", (double)sum / 5);

	return 0;
}