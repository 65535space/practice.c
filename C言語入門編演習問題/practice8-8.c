/*practice8-8*/
#include<stdio.h>

int gcd(int x,int y){
	
	if(x % y != 0){
		x%gcd(x,x%y);
    }
    else{
    	return y;
    }
    }
int main(void){
    	int x=36;
        int y=20;
         printf("%d",gcd(x,y));
         return 0;
}
		
		