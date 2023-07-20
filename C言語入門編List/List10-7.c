/* List10-7
swap two integer values*/

#include <stdio.h>

//---Binary exchange (swapping the values of the objects pointed to by x and y)---//
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int a, b;

    puts("enter two integers.");
    printf("integerA :");
    scanf("%d", &a);
    printf("integerA :");
    scanf("%d", &b);

    swap(&a, &b);

    puts("exchanged these values.");
    printf("integerA is %d. \n", a);
    printf("integerB is %d. \n", b);

    return 0;
}