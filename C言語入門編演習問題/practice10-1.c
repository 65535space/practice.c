/*practice10-1*/

#include <stdio.h>

void adjust_point(int *n)
{
    if(*n < 0)
        *n = 0;
    else if(*n > 100)
        *n = 100;
}

int main(void){
    int x;

    printf("x < 0 = 0\nx > 100 = 100\n:");
    scanf("%d", &x);

    adjust_point(&x);

    printf("integer x be %d\n", x);

    return 0;
}