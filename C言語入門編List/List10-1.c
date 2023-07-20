/* Find the sum and difference of two whole numbers (incorrect).*/

#include <stdio.h>

// Sum and difference of n1 and n2 stored in sum and diff (incorrect)
void sum_diff(int n1,int n2,int sum,int diff)
{
    sum = n1 + n2;                          //sum
    diff = n1 > n2 ? n1 - n2 : n2 - n1;     //difference
}

int main(void)
{
    int a, b;
    int wa = 0, sa = 0;

    puts("Enter two integers.");
    printf("integerA :");
    scanf("%d", &a);
    printf("integerB :");
    scanf("%d", &b);

    sum_diff(a, b, wa, sa);

    printf("sum is %d and diff is %d.\n", wa, sa);

    return 0;
}