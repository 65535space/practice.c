/*practice7-5*/
#include<stdio.h>
void print_bits(unsigned x){
	for(int i = sizeof(int)*8-1;i >= 0;i--){
		putchar(((x>>i)&1U?'1':'0'));
		}
		putchar('\n');
}
		
unsigned set_n(unsigned x,int pos,int n){
	unsigned a= ~0U;
	a >>= sizeof(int)*8-n;
	a <<= pos;
	x |= a;
	return x;
	}
	
unsigned reset_n(unsigned x,int pos,int n){
	unsigned a=~0U;
	unsigned b=1U;
	unsigned c=1U;
	
	for(int i=0;i<pos+n-1;i++){
		b*=2;
		}
		b-=1;
		
	for(int i=0;i<pos-1;i++){
		c*=2;
		}
	    c-=1;
	a += -b+c;
	x &= a;
	return x;
	}
	

unsigned inverse_n(unsigned x,int pos,int n){
	unsigned a =1U;
	for(int i =0;i<n;i++){
        a*=2;
    }
    a-=1;
    a<<=pos;
    x ^= a; 
	return x;
}
	
int main (){
	unsigned x;
	int pos ,n;
	printf("enter the integer between 0~4294967295\n:");
	x=715827882;
	scanf("%u",&x);
	printf("\nfrom what bit do you want to change the integer?\n:");
	pos=3;
	scanf("%d",&pos);
	printf("\nhow many bits?\n:");
	n=10;
	scanf("%d",&n);
	putchar('\n');
	
    print_bits(set_n(x,pos,n));
	print_bits(reset_n(x,pos,n));
	print_bits(inverse_n(x,pos,n));
	
	
	return 0;
	}