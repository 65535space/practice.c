/*List10-3
pointer (address operator '&' and indirection operator '*')*/

#include <stdio.h>

int main(void)
{
    int n = 57;
    printf("n   =%d\n", n);
    printf("&n   =%p\n", &n);

    int *p = &n;
    printf("p   = %p\n", p);
    printf("*p = %d\n", *p);

    return 0;
}