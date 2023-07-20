/*List10-9
Display the address of an array element (pointer to the element)*/

#include <stdio.h>

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    int *p = &a[2];

    for (int i = -2; i < 3; i++)
        printf("&a[%d] = %p p %c %d = %p\n",
               i, &a[i], i, i < 0 ? '-' : '+',
               i < 0 ? -i : i, p + i);

    return 0;
}