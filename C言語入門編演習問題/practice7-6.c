/*practice7-6*/
#include<stdio.h>
void print_bits(unsigned x){
	for(int i = sizeof(int)*8-1;i >= 0;i--){
		putchar(((x>>i)&1U?'1':'0'));
		}
		putchar('\n');
}

int main(){
	unsigned a = -1U;
	printf("%u\n",a);
	print_bits(a);
	return 0;
	}