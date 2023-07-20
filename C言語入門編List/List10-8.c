/*List10-8
Arrange two integers in ascending order.*/

#include <stdio.h>

//---Exchange the values of the objects pointed to by x and y ---//
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

//---*Sort so that n1<=n2 ---//
void sort2(int *n1,int *n2)
{
    if(*n1>*n2)
        swap(n1, n2);
}

int main(void)
{
    int a, b;

    puts("enter two integers.");
    printf("integer A:");
    scanf("%d", &a);
    printf("integer B:");
    scanf("%d", &b);

    sort2(&a, &b);

    puts("Sorted in ascending order.");
    printf("integer A is %d.\n", a);
    printf("integer B is %d.\n", b);

    return 0;
}