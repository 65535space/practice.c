/*List10-6
Find the sum and difference of two whole numbers*/

#include <stdio.h>

//---store the sum and difference of n1 and n2 in *sum and *diff---//
void sum_diff(int n1,int n2,int *sum,int *diff)
{
    *sum = n1 + n2;
    *diff = n1 > n2 ? n1 - n2 : n2 - n1;
}

int main(void){
    int a, b;
    int wa = 0, sa = 0;

    puts("enter two integers.");
    printf("integer A:");
    scanf("%d", &a);
    printf("integer B:");
    scanf("%d", &b);

    sum_diff(a, b, &wa, &sa);

    printf("sum is %d , diff is %d.\n", wa, sa);

    return 0;
}