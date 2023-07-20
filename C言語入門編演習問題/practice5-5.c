//practice 5-5
#include<stdio.h>

int main(void) {
	int b;
	double a;
	a = b = 1.5;		//bはint型なので1が代入され小数点以下が切り捨てられる。そして、aはdouble型なのでbの1.000000が代入される。
	printf("a = %f\nb = %d", a, b);
}