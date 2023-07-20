/*List8-7
Find the factorial recursively.*/

#include <stdio.h>

//---Return factorial value of integer n---//
int factorial(int n){
    if(n>0)
        return n * factorial(n - 1);
    else
        return 1;
}

int main(void){
    int num;

    printf("enter the integer");
    scanf("%d", &num);

    printf("The factorial of %d is %d\n", num, factorial(num));

    return 0;
}